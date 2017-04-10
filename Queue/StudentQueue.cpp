//
//  StudentQueue.cpp
//  Queue
//
//  Created by Eddie on 4/10/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#include "StudentQueue.hpp"
#include <iostream>

StudentQueue::StudentQueue() {
    this->front = nullptr;
    this->rear = nullptr;
    this->size = 0;
}

void StudentQueue::enQueue(StudentData *student) {
    if (this->size == 0) {
        this->front = student;
        this->rear = student;
    }
    else {
        student->setNext(this->rear);
        this->rear = student;
    }
    
    this->size++;
}

void StudentQueue::deQueue() {
    StudentData *traversePointer = this->rear;
    
    while (traversePointer->getNext() != this->front) {
        traversePointer = traversePointer->getNext();
    }
    
    delete this->front;
    this->front = traversePointer;
    this->front->setNext(nullptr);
    
    this->size--;
}

StudentData* StudentQueue::top(){
    return this->front;
}

void StudentQueue::printQueue() {
    
    StudentData *traversePointer = this->rear;
    
    while (traversePointer != nullptr) {
        cout<<"Student Name: "<<traversePointer->getStudentName() <<"\n";
        cout<<"Student Roll No: "<< traversePointer->getStudentRollNo() <<"\n\n\n\n";
        traversePointer = traversePointer->getNext();
    }
}

