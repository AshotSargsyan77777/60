#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>



class Engine{
private:
    double m_power;
    int m_HP;

public:
    Engine(double power, int HP );
     void printInfo() const;


    virtual ~Engine () {}

};


class Car {
protected:
    std::string m_name;
    std::string m_color;
    Engine m_engine;


public:
    Car(std::string name, std::string color,double power, int HP);
    virtual void printInfo() const;


    virtual ~Car () {}


};



class Mercedes : public Car{
private:
    std::string m_model;
    int m_year;
    std::string m_transmission;
    std::string m_driveType;

public:
    Mercedes(std::string name, std::string color, double power, int HP,std::string model, int year, std::string transmission, std::string driveType);
    void printInfo() const override;
};

class BMW : public Car{
private:
    std::string m_model;
    int m_year;
    std::string m_transmission;
    std::string m_driveType;

public:
    BMW(std::string name, std::string color, double power, int HP,std::string model, int year, std::string transmission, std::string driveType);
    void printInfo() const override;
};

class Audi : public Car {
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