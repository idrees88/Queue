//
//  StudentData.hpp
//  Queue
//
//  Created by Eddie on 4/10/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#ifndef StudentData_hpp
#define StudentData_hpp

#include <stdio.h>
#include <string>

using namespace std;


class StudentData {
    string studentName;
    string studentRollNo;
    StudentData *next;
    
public:
    StudentData();
    StudentData(string name, string rollNo);
    string getStudentName();
    string getStudentRollNo();
    void setNext(StudentData *next);
    StudentData* getNext();
};

#endif /* StudentData_hpp */
