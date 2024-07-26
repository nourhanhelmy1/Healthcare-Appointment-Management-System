#include "Doctor.h"

// Getters
string Doctor::getSpecialty() const {
    return specialty;
}

list<Patient*> Doctor::getPatients() const {
    return patients;
}

list<AvailabilitySlot*> Doctor::getSchedule() const {
    return schedule;
}

list<MedicalRecord*> Doctor::getMedicalRecords() const {
    return medicalRecords;
}
string Doctor::getFisrtName() {
    Account::getFirstName();
}

string Doctor::getLastName() {
    Account::getLastName();
}

// Setters
void Doctor::setSpecialty(const string& specialty) {
    this->specialty = specialty;
}

void Doctor::setPatients(const list<Patient*>& patients) {
    this->patients = patients;
}

void Doctor::setSchedule(const list<AvailabilitySlot*>& schedule) {
    this->schedule = schedule;
}

void Doctor::setMedicalRecords(const list<MedicalRecord*>& medicalRecords) {
    this->medicalRecords = medicalRecords;
}

// Methods
void Doctor::updateMedicalRecord(Patient* patient, MedicalRecord* record) {
    // Check if the patient is in the doctor's patient list
    auto it = std::find(patients.begin(), patients.end(), patient);
    if (it != patients.end()) {
        // If the patient is found, add/update the medical record

        patient->getMedicalHistory().push_back(record);

        // Also add the record to the doctor's list of medical records
        medicalRecords.push_back(record);

        std::cout << "Medical record updated for patient: " << patient->getFisrtName()<< " " << patient->getLastName() << std::endl;
    } else {
        std::cerr << "Error: Patient not found in doctor's list." << std::endl;
    }
}

void Doctor::viewPatientDetails(Patient* patient) {
    // Check if the patient is in the doctor's patient list
    auto it = std::find(patients.begin(), patients.end(), patient);
    if (it != patients.end()) {
        // Print patient details
        std::cout << "Patient Details:\n";
        std::cout << "Name: " << patient->getFisrtName() << " " << patient->getLastName() << std::endl;
        std::cout << "ID: " << patient->getPatientId() << std::endl;
        std::cout << "Appointments:\n";
        for (const auto& appointment : patient->getAppointments()) {
            std::cout << " - Appointment ID: " << appointment->getAppointmentID() << ", Date: " << appointment->getDate() << std::endl;
        }
        std::cout << "Medical History:\n";
        for (const auto& record : patient->getMedicalHistory()) {
            std::cout << " - Record ID: " << record->getRecordID() << ", Details: " << record->getDetails() << std::endl;
        }
    } else {
        std::cerr << "Error: Patient not found in doctor's list." << std::endl;
    }
}


void Doctor::manageSchedule(AvailabilitySlot* slot) {
    // Add the new slot to the doctor's schedule
    schedule.push_back(slot);

    std::cout << "Availability slot added to the schedule: " << slot->getDate() << std::endl;
}
