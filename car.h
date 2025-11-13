#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
class Car {
protected:
    std::string m_name;
    std::string m_color;


public:
    Car(std::string name, std::string color);
    virtual void printInfo() const;


    virtual ~Car () {}


};
class Engine{
protected:
    double m_power;
    int m_HP;

public:
    Engine(double power, int HP );
    virtual void printInfo() const;


    virtual ~Engine () {}

};


#endif