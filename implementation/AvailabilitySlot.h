#include <bits/stdc++.h>

using namespace std;
#ifndef HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_AVAILABILITYSLOT_H
#define HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_AVAILABILITYSLOT_H


class Doctor; // Forward declaration

class AvailabilitySlot {
private:
    string slotID;
    Doctor* doctor;
    string date;
    bool status;

public:
    // Getters
    string getSlotID() const;
    Doctor* getDoctor() const;
    string getDate() const;
    bool getStatus() const;

    // Setters
    void setSlotID(const std::string& slotID);
    void setDoctor(Doctor* doctor);
    void setDate(const std::string& date);
    void setStatus(bool status);

    // Methods
    void updateAvailability(bool status);
};



#endif //HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_AVAILABILITYSLOT_H
