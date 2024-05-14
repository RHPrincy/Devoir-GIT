#include <iostream>
#include <fstream>
#include <string>

#ifndef ACTIVATION_H
#define ACTIVATION_H

class Activation
{
private:
    std::string cleTest = "Essai";
    int point;
    bool status = false;

public:
    Activation();
    ~Activation();
    bool verifActivation();
    void active();
    int getPoint();
};

#endif