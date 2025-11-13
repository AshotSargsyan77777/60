#include "class.h"
int main(){
    Mercedes mercedes("Mercedes",193,"Black","C 300",2010,"automatic","AWD");
    BMW bmw("BMW",156,"White","X5",2002,"RWD","automatic");
    Audi audi("Audi",149,"Black","Q7",2020,"RWD","automatic");
    Engine engine("Petrol",132,"black",4.4,"Petrol" );


    mercedes.printInfo();
    std::cout << "----------------------\n";
    bmw.printInfo();
    std::cout << "----------------------\n";
    audi.printInfo();
    std::cout << "----------------------\n";
    engine.printInfo();
    std::cout << "----------------------\n";
    





    return 0;

}