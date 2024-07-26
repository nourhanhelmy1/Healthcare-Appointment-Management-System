
#include <bits/stdc++.h>

using namespace std;
#ifndef HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_APPOINTMENT_H
#define HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_APPOINTMENT_H


class Patient; // Forward declaration
class Doctor;  // Forward declaration

class Appointment {
private:
    std::string appointmentID;
    Patient* patient;
    Doctor* doctor;
    std::string date;
    std::string status;

public:
    // Getters
    std::string getAppointmentID() const;
    Patient* getPatient() const;
    Doctor* getDoctor() const;
    std::string getDate() const;
    std::string getStatus() const;

    // Setters
    void setAppointmentID(const std::string& id);
    void setPatient(Patient* p);
    void setDoctor(Doctor* d);
    void setDate(const std::string& date);
    void setStatus(const std::string& status);

    // Methods
    void createAppointment();
    void cancelAppointment();
    void rescheduleAppointment(const std::string& newDateTime);
};


#endif //HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_APPOINTMENT_H
