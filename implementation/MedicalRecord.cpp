#include "MedicalRecord.h"

// Getters
std::string MedicalRecord::getRecordID() const {
    return recordID;
}

Patient* MedicalRecord::getPatient() const {
    return patient;
}

Doctor* MedicalRecord::getDoctor() const {
    return doctor;
}

std::string MedicalRecord::getDate() const {
    return date;
}

std::string MedicalRecord::getDetails() const {
    return details;
}

// Setters
void MedicalRecord::setRecordID(const std::string& recordID) {
    this->recordID = recordID;
}

void MedicalRecord::setPatient(Patient* patient) {
    this->patient = patient;
}

void MedicalRecord::setDoctor(Doctor* doctor) {
    this->doctor = doctor;
}

void MedicalRecord::setDate(const std::string& date) {
    this->date = date;
}

void MedicalRecord::setDetails(const std::string& details) {
    this->details = details;
}

// Methods
void MedicalRecord::updateDetails(const std::string& newDetails) {
    setDetails(newDetails);
}
