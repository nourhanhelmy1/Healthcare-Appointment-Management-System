#include "AvailabilitySlot.h"

// Getters
std::string AvailabilitySlot::getSlotID() const {
    return slotID;
}

Doctor* AvailabilitySlot::getDoctor() const {
    return doctor;
}

string AvailabilitySlot::getDate() const {
    return date;
}

bool AvailabilitySlot::getStatus() const {
    return status;
}

// Setters
void AvailabilitySlot::setSlotID(const string& slotID) {
    this->slotID = slotID;
}

void AvailabilitySlot::setDoctor(Doctor* doctor) {
    this->doctor = doctor;
}

void AvailabilitySlot::setDate(const string& date) {
    this->date = date;
}

void AvailabilitySlot::setStatus(bool status) {
    this->status = status;
}

// Methods
void AvailabilitySlot::updateAvailability(bool status) {
    this->status = status;
}
