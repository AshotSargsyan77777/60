#ifndef CLASS_H
#define CLASS_H
#include "car.h" 

class Mercedes: public Car {
private:
    std::string m_model;
    int m_year;
    std::string m_transmission;
    std::string m_driveType;

public:
    Mercedes( std::string name, int HP, std::string color,std::string model,int year, std::string transmission, std::string driveType):
    Car(name, HP, color),
    m_model(model),
    m_year(year),
    m_transmission(transmission),
    m_driveType(driveType){}


    void printInfo() const override{
        Car::printInfo ();
        std::cout << "model" << "-" << m_model << std::endl;
        std::cout << "year" <<"-" << m_year<< std::endl;
        std::cout << "transmission" <<"-" << m_transmission << std::endl;
        std::cout << "driveType" << "-" << m_driveType << std::endl;

    }

    

};

class BMW: public Car {
private:
    std::string m_model;
    int m_year;
    std::string m_transmission;
    std::string m_driveType;

public:
    BMW( std::string name, int HP, std::string color,std::string model,int year, std::string transmission, std::string driveType):
    Car(name, HP, color),
    m_model(model ),
    m_year(year),
    m_transmission(transmission),
    m_driveType(driveType){}


    void printInfo() const override{
        Car::printInfo ();
        std::cout << "model" << "-" << m_model << std::endl;
        std::cout << "year" << "-" << m_year<< std::endl;
        std::cout << "transmission" << "-" << m_transmission << std::endl;
        std::cout << "driveType" << "-" << m_driveType << std::endl;

    }

    

};


class Audi: public Car {
private:
    std::string m_model;
    int m_year;
    std::string m_transmission;
    std::string m_driveType;

public:
    Audi( std::string name, int HP, std::string color,std::string model,int year, std::string transmission, std::string driveType):
    Car(name, HP, color),
    m_model(model),
    m_year(year),
    m_transmission(transmission),
    m_driveType(driveType){}


    void printInfo() const override{
        Car::printInfo ();
        std::cout << "model" << "-" << m_model << std::endl;
        std::cout << "year" << "-" << m_year<< std::endl;
        std::cout << "transmission" << "-" << m_transmission << std::endl;
        std::cout << "driveType" <<  "-" << m_driveType << std::endl;

    }

    

};




class Engine: public Car {
private:
    double m_power;
    std::string m_type;

public:
    Engine( std::string name, int HP, std::string color,double power, std::string type):
    Car(name, HP, color),
    m_power(power),
    m_type(type){}


    void printInfo() const override{
        Car::printInfo ();
        std::cout <<"power" << "-" << m_power << std::endl;
        std::cout << "type" << "-" << m_type<< std::endl;
        

    }

    

};




#endif