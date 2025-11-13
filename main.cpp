
#include "class.h"
#include <iostream>
int main(){
    Mercedes mercedes("Mercedes","Black",4.4, 193,"C 300",2010,"automatic","AWD");
    BMW bmw("BMW","White",2.8, 146,"X5",2002,"RWD","automatic");
    Audi audi("Audi","Black",3.2, 156, "Q7",2020,"RWD","automatic");
  


    mercedes.printInfo();
    std::cout << "----------------------\n";
    bmw.printInfo();
    std::cout << "----------------------\n";
    audi.printInfo();
    std::cout << "----------------------\n";
  
    





    return 0;

}