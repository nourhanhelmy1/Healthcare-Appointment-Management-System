#include "Account.h"

void Account::createAccount(const string& firstName,const string& lastName, const string& email, const string& pass) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->password = pass;
}

std::string Account::getFirstName() {
    return firstName;
}
std::string Account::getLastName() {
    return lastName;
}

std::string Account::getDateOfBirth() {
    return dateOfBirth;
}

std::string Account::getGender() {
    return gender;
}

std::string Account::getAddress() {
    return address;
}

std::string Account::getPhoneNumber() {
    return phoneNumber;
}

std::string Account::getEmail() {
    return email;
}

std::string Account::getPassword() {
    return password;
}

void Account::setFirstName(const std::string& firstName) {
    this->firstName = firstName;
}
void Account::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}

void Account::setDateOfBirth(const std::string& dateOfBirth) {
    this->dateOfBirth = dateOfBirth;
}

void Account::setGender(const std::string& gender) {
    this->gender = gender;
}

void Account::setAddress(const std::string& address) {
    this->address = address;
}

void Account::setPhoneNumber(const std::string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Account::setEmail(const std::string& email) {
    this->email = email;
}

void Account::setPassword(const std::string& password) {
    this->password = password;
}
