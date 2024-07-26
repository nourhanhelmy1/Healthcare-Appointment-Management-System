//
// Created by zeina on 7/24/2024.
//
#include <bits/stdc++.h>
using namespace std;

#include "Appointment.h"
#include "MedicalRecord.h"
#include "Account.h"
//#include "Doctor.h"


#ifndef HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_PATIENT_H
#define HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_PATIENT_H

// Forward declaration
//class Doctor;

class Patient : public Account {
private:
    std::string patientId;  // Private member to store patient ID
    std::list<Appointment*> appointments;
    std::list<MedicalRecord*> medicalHistory;

public:
    // Constructor
    Patient(const std::string& id) : patientId(id) {}

    // Methods
    void bookAppointment(Doctor* doctor);
    void viewMedicalHistory();
    void viewDoctorInfo(Doctor* doctor);

    // Getters
    std::string getPatientId() const;  // Getter for patientId
    std::list<Appointment*> getAppointments() const;
    std::list<MedicalRecord*> getMedicalHistory() const;
    string getFisrtName();
    string getLastName();


    // Setters
    void setPatientId(const std::string& id);  // Setter for patientId
    void setAppointments(const std::list<Appointment*>& appointments);
    void setMedicalHistory(const std::list<MedicalRecord*>& medicalHistory);
};


#endif //HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_PATIENT_H
