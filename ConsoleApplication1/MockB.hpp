#pragma once
#ifndef MockB_h
#define MockB_h

class MockB : public B {
public:
    MOCK_METHOD(void, stepTwo, (), (override));
    MOCK_METHOD(int, stepOne, (int a), (override));
};

#endif /* MockB_h */