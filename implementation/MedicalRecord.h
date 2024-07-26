
#include <bits/stdc++.h>

using namespace std;
#ifndef HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_MEDICALRECORD_H
#define HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_MEDICALRECORD_H


class Patient; // Forward declaration
class Doctor;  // Forward declaration

class MedicalRecord {
private:
    std::string recordID;
    Patient* patient;
    Doctor* doctor;
    std::string date;
    std::string details;

public:
    // Getters
    std::string getRecordID() const;
    Patient* getPatient() const;
    Doctor* getDoctor() const;
    std::string getDate() const;
    std::string getDetails() const;

    // Setters
    void setRecordID(const std::string& recordID);
    void setPatient(Patient* patient);
    void setDoctor(Doctor* doctor);
    void setDate(const std::string& date);
    void setDetails(const std::string& details);

    // Methods
    void updateDetails(const std::string& newDetails);
};

#endif //HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_MEDICALRECORD_H
