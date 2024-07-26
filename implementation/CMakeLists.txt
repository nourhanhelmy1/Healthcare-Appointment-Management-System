cmake_minimum_required(VERSION 3.24)
project(HealthCare_Appointment_Management_System)

set(CMAKE_CXX_STANDARD 17)

add_executable(HealthCare_Appointment_Management_System main.cpp Account.cpp Admin.cpp Doctor.cpp Appointment.cpp AvailabilitySlot.cpp MedicalRecord.cpp Patient.cpp)
