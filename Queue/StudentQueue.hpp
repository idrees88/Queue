//
//  StudentQueue.hpp
//  Queue
//
//  Created by Eddie on 4/10/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#ifndef StudentQueue_hpp
#define StudentQueue_hpp

#include <stdio.h>
#include "StudentData.hpp"

class StudentQueue {
    StudentData *front;
    StudentData *rear;
    
    int size;
    
public:
    StudentQueue();
    void enQueue(StudentData *student);
    void deQueue();
    StudentData* top();
    
    void printQueue();
};

#endif /* StudentQueue_hpp */
