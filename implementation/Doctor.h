//
// Created by zeina on 7/24/2024.
//

#ifndef HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_DOCTOR_H
#define HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_DOCTOR_H

#include <bits/stdc++.h>
#include "AvailabilitySlot.h"
#include "MedicalRecord.h"
#include "Account.h"
#include "Patient.h"



using namespace std;

class Doctor : public Account {
protected:
    string doctorId;
    string specialty;
    list<Patient*> patients;

    list<AvailabilitySlot*> schedule;
    list<MedicalRecord*> medicalRecords;

public:
    // Getters
    string getSpecialty() const;
    list<Patient*> getPatients() const;
    list<AvailabilitySlot*> getSchedule() const;
    list<MedicalRecord*> getMedicalRecords() const;
    string getDoctorId();
    string getFisrtName();
    string getLastName();

    // Setters
    void setSpecialty(const string& specialty);
    void setPatients(const list<Patient*>& patients);
    void setSchedule(const list<AvailabilitySlot*>& schedule);
    void setMedicalRecords(const list<MedicalRecord*>& medicalRecords);
    void setDoctorId(const string& doctorId );



    // Methods
    void updateMedicalRecord(Patient* patient, MedicalRecord* record);
    void viewPatientDetails(Patient* patient);
    void manageSchedule(AvailabilitySlot* slot);
};



#endif //HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_DOCTOR_H
