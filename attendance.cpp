// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Oct 2022
// This program is a random number guessing game

#include <iostream>

int main() {
    // this function generates a random number
    double classesHeld;
    double classesAttended;
    double classAttendance;

    // input
    std::cout << "This program decides whether student can "
                 "attend the exam based on attendance." << std::endl;
    std::cout << "Enter the number of classes held: ";
    std::cin >> classesHeld;
    std::cout << "Enter the number of classes attended: ";
    std::cin >> classesAttended;

    // process
    classAttendance = classesAttended / classesHeld * 100;


    if (classAttendance > 75) {
        // output
        std::cout << "The student has "<< classAttendance <<
        "% attendance. They may sit in for the exam.";
    } else {
        // output
        std::cout << "The student has " << classAttendance <<
        "% attendance. They may not sit in for the exam.";
    }

    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
