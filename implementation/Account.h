#include <bits/stdc++.h>

using namespace std;

#ifndef HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_ACCOUNT_H
#define HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_ACCOUNT_H

class Account {
protected:
    string firstName;
    string lastName;
    string dateOfBirth;
    string gender;
    string address;
    string phoneNumber;
    string email;
    string password;

    void createAccount(const string& firstName,const string& lastName, const string& email, const string& pass);
    virtual string getFirstName();
    virtual  string getLastName();
    string getDateOfBirth();
    string getGender();
    string getAddress();
    virtual string getPhoneNumber();
    string getEmail();
    string getPassword();

    void setFirstName(const string& firstName);
    void setLastName(const string& lastname);
    void setDateOfBirth(const string& dateOfBirth);
    void setGender(const string& gender);
    void setAddress(const string& address);
    void setPhoneNumber(const string& phoneNumber);
    void setEmail(const string& email);
    void setPassword(const string& password);
};

#endif //HEALTHCARE_APPOINTMENT_MANAGEMENT_SYSTEM_ACCOUNT_H
