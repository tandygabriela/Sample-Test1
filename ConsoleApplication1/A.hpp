#ifndef A_hpp
#define A_hpp

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

#endif /* A_hpp */