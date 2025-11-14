#include "car.h"
#include <iostream>

Engine::Engine(double power, int HP) :
m_power(power),
m_HP(HP) {}
void Engine::printInfo() const {
    std::cout << "power" << "-" << m_power << std::endl;
    std::cout << "HP" << "-" << m_HP << std::endl;
}


Car::Car(std::string name, std::string color,double power,int HP) :
m_name(name),
m_color(color),
m_engine (power,HP){}
void Car::printInfo() const {
    std::cout << "name" << "-" << m_name << std::endl;
    std::cout << "color" << "-" << m_color << std::endl;
    m_engine.printInfo();
}






Mercedes::Mercedes(std::string name, std::string color, double power, int HP,std::string model, int year, std::string transmission, std::string driveType):
    Car(name, color,power, HP),
    
    m_model(model),
    m_year(year),
    m_transmission(transmission),
    m_driveType(driveType) {}

void Mercedes::printInfo() const {
    Car::printInfo();
    std::cout << "model" << "-" << m_model << std::endl;
    std::cout << "year" << "-" << m_year << std::endl;
    std::cout << "transmission" << "-" << m_transmission << std::endl;
    std::cout << "driveType" << "-" << m_driveType << std::endl;
}


BMW::BMW(std::string name, std::string color, double power, int HP,std::string model, int year, std::string transmission, std::string driveType):
    Car(name, color,power, HP),
    m_model(model), 
    m_year(year),
    m_transmission(transmission),
    m_driveType(driveType) {}

void BMW::printInfo() const {
    Car::printInfo();
    std::cout << "model" << "-" << m_model << std::endl;
    std::cout << "year" << "-" << m_year << std::endl;
    std::cout << "transmission" << "-" << m_transmission << std::endl;
    std::cout << "driveType" << "-" << m_driveType << std::endl;
}


Audi::Audi(std::string name, std::string color, double power, int HP,std::string model, int year, std::string transmission, std::string driveType):
    Car(name, color,power, HP),
    
    m_model(model),
    m_year(year),
    m_transmission(transmission),
    m_driveType(driveType) {}

void Audi::printInfo() const {
    Car::printInfo();

    std::cout << "model" << "-" << m_model << std::endl;
    std::cout << "year" << "-" << m_year << std::endl;
    std::cout << "transmission" << "-" << m_transmission << std::endl;
    std::cout << "driveType" << "-" << m_driveType << std::endl;
}
