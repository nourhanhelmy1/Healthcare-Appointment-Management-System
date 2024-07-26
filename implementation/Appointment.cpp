#include "Appointment.h"
#include <iostream>

// Getters
std::string Appointment::getAppointmentID() const {
    return appointmentID;
}

Patient* Appointment::getPatient() const {
    return patient;
}

Doctor* Appointment::getDoctor() const {
    return doctor;
}

std::string Appointment::getDate() const {
    return date;
}

std::string Appointment::getStatus() const {
    return status;
}

// Setters
void Appointment::setAppointmentID(const std::string& id) {
    appointmentID = id;
}

void Appointment::setPatient(Patient* p) {
    patient = p;
}

void Appointment::setDoctor(Doctor* d) {
    doctor = d;
}

void Appointment::setDate(const std::string& date) {
    this->date = date;
}

void Appointment::setStatus(const std::string& status) {
    this->status = status;
}

// Methods
void Appointment::createAppointment() {
    std::cout << "Creating appointment with ID: " << appointmentID << std::endl;
    status = "Scheduled";
}

void Appointment::cancelAppointment() {

    std::cout << "Cancelling appointment with ID: " << appointmentID << std::endl;

    status = "Canceled";
}

void Appointment::rescheduleAppointment(const std::string& newDateTime) {

    std::cout << "Rescheduling appointment with ID: " << appointmentID << " to " << newDateTime << std::endl;
    date = newDateTime;
}
