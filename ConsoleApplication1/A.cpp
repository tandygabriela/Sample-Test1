//
//  A.cpp
//  usaf-mocking-demo
//
//  Created by Ash Coca on 6/9/20.
//  Copyright © 2020 Galvanize. All rights reserved.
//

#include "A.hpp"

A::A(B& b) : b(b) {
    //nothing else
}

int A::doSomething(int input) {
    int stepZero = input + 1;
    int stepOne = b.stepOne(stepZero);
    b.stepTwo();
    int stepThree = stepOne - 1;
    return stepThree;
}