//
//  main.cpp
//  Queue
//
//  Created by Eddie on 4/10/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#include <iostream>
#include "StudentQueue.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    StudentQueue studentQueue = StudentQueue();
    
    studentQueue.enQueue(new StudentData("Idrees", "1"));
    studentQueue.enQueue(new StudentData("Idrees", "2"));
    studentQueue.enQueue(new StudentData("Idrees", "3"));
    studentQueue.enQueue(new StudentData("Idrees", "4"));
    
    studentQueue.deQueue();
    
    studentQueue.printQueue();
    
    return 0;
}
