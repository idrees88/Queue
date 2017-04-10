//
//  StudentData.cpp
//  Queue
//
//  Created by Eddie on 4/10/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#include "StudentData.hpp"

StudentData::StudentData() {
    this->studentName = "";
    this->studentRollNo = "";
    this->next = nullptr;
}

StudentData::StudentData(string name, string rollNo) {
    this->studentName = name;
    this->studentRollNo = rollNo;
    this->next = nullptr;
}

string StudentData::getStudentName() {
    return this->studentName;
}

string StudentData::getStudentRollNo() {
    return this->studentRollNo;
}

void StudentData::setNext(StudentData *next) {
    this->next = next;
}

StudentData* StudentData::getNext() {
    return this->next;
}
