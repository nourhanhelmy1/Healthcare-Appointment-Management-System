#include "Patient.h"
#include "Doctor.h"
//#include "Appointment.h"
//#include "MedicalRecord.h"
#include <iostream>

// Getters
std::list<Appointment*> Patient::getAppointments() const {
    return appointments;
}

std::list<MedicalRecord*> Patient::getMedicalHistory() const {
    return medicalHistory;
}
string Patient::getFisrtName() {
    Account::getFirstName();
}

string Patient::getLastName() {
    Account::getLastName();
}

// Setters
void Patient::setAppointments(const std::list<Appointment*>& appointments) {
    this->appointments = appointments;
}

void Patient::setMedicalHistory(const std::list<MedicalRecord*>& medicalHistory) {
    this->medicalHistory = medicalHistory;
}

// Methods
void Patient::bookAppointment(Doctor* doctor) {
    // Get the doctor's schedule
    std::list<AvailabilitySlot*> availableSlots = doctor->getSchedule();

    // Display available slots to the patient
    std::cout << "Available slots for Dr. " ;
    int index = 1;
    for (auto i : availableSlots)
    {
        cout<<i<<" "<<endl;
        index++;
    }

    // Ask the patient to choose a slot
    int choice;
    std::cout << "Enter the number of the slot you want to book: ";
    std::cin >> choice;

    // Find the chosen slot
    auto it = availableSlots.begin();
    std::advance(it, choice - 1);
    AvailabilitySlot* chosenSlot = *it;


    // Create a new appointment
    Appointment* newAppointment = new Appointment();
    newAppointment->setAppointmentID("A" + std::to_string(appointments.size() + 1));
    newAppointment->setDoctor(doctor);
    newAppointment->setPatient(this);
    newAppointment->setDate(chosenSlot->getDate());
    newAppointment->setStatus("Scheduled");

    // Add the appointment to the patient's list of appointments
    appointments.push_back(newAppointment);

    // Remove the chosen slot from the doctor's schedule
    availableSlots.erase(it);
    doctor->setSchedule(availableSlots);

    std::cout << "Appointment booked with Dr. " << doctor->getFisrtName() << " on "<< chosenSlot->getDate() << std::endl;
}

void Patient::viewMedicalHistory() {
    std::cout << "Medical History for " << this->getFirstName() << ":\n";
    for (const auto& record : medicalHistory) {
        std::cout << "Record ID: " << record->getRecordID() << "\n";
        std::cout << "Doctor: " << record->getDoctor()->getFisrtName()<<" "<<record->getDoctor()->getLastName() << "\n";
        std::cout << "Date: " << record->getDate() << "\n";
        std::cout << "Details: " << record->getDetails() << "\n\n";
    }
}

void Patient::viewDoctorInfo(Doctor* doctor) {
    std::cout << "Doctor Information:\n";
    std::cout << "Name: " << doctor->getFisrtName() << "\n";
    std::cout << "Specialty: " << doctor->getSpecialty() << "\n";
    std::cout << "Patients: \n";
    for (const auto& patient : doctor->getPatients()) {
        std::cout << "- " << patient->getFirstName()<<" "<<patient->getLastName() << "\n";
    }
}
