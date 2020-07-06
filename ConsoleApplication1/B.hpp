#pragma once

//
//  B.h
//  usaf-mocking-demo
//
//  Created by Ash Coca on 6/9/20.
//  Copyright © 2020 Galvanize. All rights reserved.
//

#ifndef B_h
#define B_h

class B {
public:
    virtual ~B() {};
    virtual int stepOne(int a) = 0;
    virtual void stepTwo() = 0;
};

#endif /* B_h */