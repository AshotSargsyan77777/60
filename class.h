#ifndef CLASS_H
#define CLASS_H

#include "car.h"
#include <string>

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
