#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
class Car {
protected:
    std::string m_name;
    
    int m_HP;
    std::string m_color;


public:
    Car(std::string name, int HP, std::string color):


    m_name (name),
    m_HP(HP),
    m_color(color){}


    virtual void printInfo() const{
        std::cout << "name" << "-" << m_name << std::endl;
        std::cout << "HP" << "-" << m_HP << std::endl;
        std::cout << "color" << "-"<< m_color << std::endl;
    }



    virtual ~Car () {}


};


#endif