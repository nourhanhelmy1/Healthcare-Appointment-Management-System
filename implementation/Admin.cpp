#include "Admin.h"
#include <iostream>
#include <algorithm>

// Getter
std::string Admin::getAdminID() const {
    return adminID;
}

// Setter
void Admin::setAdminID(const std::string& id) {
    adminID = id;
}

// Methods to manage accounts
void Admin::manageDoctorAccount(Doctor* doctor) {
    if (doctor == nullptr) {
        std::cerr << "Invalid doctor pointer!" << std::endl;
        return;
    }


    std::cout << "Managing doctor account with ID: " << doctor->getDoctorId() << std::endl;

    // Update doctor specialty
    std::string newSpecialty;
    std::cout << "Enter new specialty for doctor (or press Enter to skip): ";
    std::getline(std::cin, newSpecialty);
    if (!newSpecialty.empty()) {
        doctor->setSpecialty(newSpecialty);
        std::cout << "Doctor's specialty updated to: " << newSpecialty << std::endl;
    }

    // Example: Print existing patients of the doctor
    std::cout << "Current patients of the doctor:" << std::endl;
    for (const auto& patient : doctor->getPatients()) {
        std::cout << "Patient ID: " << patient->getPatientId() << std::endl; // Assuming getName() returns a unique ID
    }
}

void Admin::managePatientAccount(Patient* patient) {
    if (patient == nullptr) {
        std::cerr << "Invalid patient pointer!" << std::endl;
        return;
    }

    // Example implementation for managing a patient account
    std::cout << "Managing patient account with ID: " << patient->getPatientId() << std::endl;

    // Example: Update patient medical history
    std::string newRecordDetails;
    std::cout << "Enter new medical record details (or press Enter to skip): ";
    std::getline(std::cin, newRecordDetails);

    if (!newRecordDetails.empty()) {
        MedicalRecord* newRecord = new MedicalRecord();

        newRecord->updateDetails(newRecordDetails);
        newRecord->setRecordID("R" + std::to_string(patient->getMedicalHistory().size() + 1));
        patient->getMedicalHistory().push_back(newRecord);
        std::cout << "New medical record added." << std::endl;
    }

    // Example: Print current appointments
    std::cout << "Current appointments for the patient:" << std::endl;
    for (const auto& appointment : patient->getAppointments()) {
        std::cout << "Appointment ID: " << appointment->getAppointmentID() << std::endl;
        std::cout << "Date: " << appointment->getDate() << std::endl;
        std::cout << "Status: " << appointment->getStatus() << std::endl;
    }
}

// Methods for adding and removing accounts
void Admin::addDoctor(Doctor* doctor) {
    if (doctor != nullptr) {
        doctors.push_back(doctor);
        std::cout << "Doctor added successfully." << std::endl;
    } else {
        std::cerr << "Invalid doctor pointer!" << std::endl;
    }
}

void Admin::removeDoctor(const std::string& doctorID) {
    auto it = std::remove_if(doctors.begin(), doctors.end(), [&](Doctor* doctor) {
        return doctor->getDoctorId() == doctorID; // Assuming getSpecialty() is used for ID here
    });

    if (it != doctors.end()) {
        delete *it;  // Clean up memory if needed
        doctors.erase(it, doctors.end());
        std::cout << "Doctor removed successfully." << std::endl;
    } else {
        std::cerr << "Doctor not found!" << std::endl;
    }
}

void Admin::addPatient(Patient* patient) {
    if (patient != nullptr) {
        patients.push_back(patient);
        std::cout << "Patient added successfully." << std::endl;
    } else {
        std::cerr << "Invalid patient pointer!" << std::endl;
    }
}

void Admin::removePatient(const std::string& patientID) {
    auto it = std::remove_if(patients.begin(), patients.end(), [&](Patient* patient) {
        return patient->getPatientId() == patientID; // Assuming getName() is used for ID here
    });

    if (it != patients.end()) {
        delete *it;  // Clean up memory if needed
        patients.erase(it, patients.end());
        std::cout << "Patient removed successfully." << std::endl;
    } else {
        std::cerr << "Patient not found!" << std::endl;
    }
}

// Methods for listing accounts
void Admin::listDoctors() const {
    if (doctors.empty()) {
        std::cout << "No doctors available." << std::endl;
        return;
    }

    std::cout << "List of doctors:" << std::endl;
    for (const auto& doctor : doctors) {
        std::cout << "Doctor ID: " << doctor->getDoctorId() << std::endl; // Assuming getSpecialty() provides ID
        // Additional details about the doctor can be printed here
    }
}

void Admin::listPatients() const {
    if (patients.empty()) {
        std::cout << "No patients available." << std::endl;
        return;
    }

    std::cout << "List of patients:" << std::endl;
    for (const auto& patient : patients) {
        std::cout << "Patient ID: " << patient->getPatientId() << std::endl; // Assuming getName() provides ID
        // Additional details about the patient can be printed here
    }
}
