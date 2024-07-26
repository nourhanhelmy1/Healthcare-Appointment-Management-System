

#ifndef HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_ADMIN_H
#define HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_ADMIN_H
#include <bits/stdc++.h>
using namespace std;

#include "Doctor.h"
#include "Patient.h"

class Admin {
private:
    std::string adminID;  // Private member to store admin ID

public:
    // Getter
    std::string getAdminID() const;

    // Setter
    void setAdminID(const std::string& id);

    // Methods to manage accounts
    void manageDoctorAccount(Doctor* doctor);
    void managePatientAccount(Patient* patient);

    // Additional methods for managing lists of accounts
    void addDoctor(Doctor* doctor);
    void removeDoctor(const std::string& doctorID);
    void addPatient(Patient* patient);
    void removePatient(const std::string& patientID);

    // Methods for listing accounts
    void listDoctors() const;
    void listPatients() const;

private:
    std::list<Doctor*> doctors;
    std::list<Patient*> patients;
};


#endif //HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_ADMIN_H
