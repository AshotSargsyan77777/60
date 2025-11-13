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


class Mercedes : public Car, public Engine {
private:
    std::string m_model;
    int m_year;
    std::string m_transmission;
    std::string m_driveType;

public:
    Mercedes(std::string name, std::string color, double power, int HP,std::string model, int year, std::string transmission, std::string driveType);
    void printInfo() const override;
};

class BMW : public Car, public Engine {
private:
    std::string m_model;
    int m_year;
    std::string m_transmission;
    std::string m_driveType;

public:
    BMW(std::string name, std::string color, double power, int HP,std::string model, int year, std::string transmission, std::string driveType);
    void printInfo() const override;
};

class Audi : public Car, public Engine {
private:
    std::string m_model;
    int m_year;
    std::string m_transmission;
    std::string m_driveType;

public:
    Audi(std::string name, std::string color, double power, int HP,std::string model, int year, std::string transmission, std::string driveType);
    void printInfo() const override;
};


#endif