#include "class.h"
#include <iostream>


Mercedes::Mercedes(std::string name, std::string color, double power, int HP,std::string model, int year, std::string transmission, std::string driveType):
    Car(name, color),
    Engine(power, HP),
    m_model(model),
    m_year(year),
    m_transmission(transmission),
    m_driveType(driveType) {}

void Mercedes::printInfo() const {
    Car::printInfo();
    Engine::printInfo();
    std::cout << "model" << "-" << m_model << std::endl;
    std::cout << "year" << "-" << m_year << std::endl;
    std::cout << "transmission" << "-" << m_transmission << std::endl;
    std::cout << "driveType" << "-" << m_driveType << std::endl;
}


BMW::BMW(std::string name, std::string color, double power, int HP,std::string model, int year, std::string transmission, std::string driveType):
    Car(name, color),
    Engine(power, HP),
    m_model(model), 
    m_year(year),
    m_transmission(transmission),
    m_driveType(driveType) {}

void BMW::printInfo() const {
    Car::printInfo();
    Engine::printInfo();
    std::cout << "model" << "-" << m_model << std::endl;
    std::cout << "year" << "-" << m_year << std::endl;
    std::cout << "transmission" << "-" << m_transmission << std::endl;
    std::cout << "driveType" << "-" << m_driveType << std::endl;
}


Audi::Audi(std::string name, std::string color, double power, int HP,std::string model, int year, std::string transmission, std::string driveType):
    Car(name, color),
    Engine(power, HP),
    m_model(model),
    m_year(year),
    m_transmission(transmission),
    m_driveType(driveType) {}

void Audi::printInfo() const {
    Car::printInfo();
    Engine::printInfo();
    std::cout << "model" << "-" << m_model << std::endl;
    std::cout << "year" << "-" << m_year << std::endl;
    std::cout << "transmission" << "-" << m_transmission << std::endl;
    std::cout << "driveType" << "-" << m_driveType << std::endl;
}
