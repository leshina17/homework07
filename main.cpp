#include <iostream>
#include "fraction.h"

int main(){
    fraction fract1=fraction(1,2);
    std::cout << fract1;

    fraction fract2=fraction(1,4);
    std::cout << fract2;

    std::cout << ".  .  .  .  ." << std::endl;
    
    // //Операция меньше
    if (fract1<fract2){
        std::cout << "true, fract1 < fract2" << std::endl;
    }
    else 
        std::cout << "false" << std::endl;

    //Операция меньше или равно
    if (fract1<=fract2){
        std::cout << "true, fract1 <= fract2" << std::endl;
    }
    else 
        std::cout << "false" << std::endl;

    //Операция больше
    if (fract1>fract2){
        std::cout << "true, fract1 > fract2" << std::endl;
    }
    else 
        std::cout << "false" << std::endl;

    //Операция больше или равно
    if (fract1>=fract2){
        std::cout << "true, fract1 >= fract2" << std::endl;
    }
    else 
        std::cout << "false" << std::endl;

    //Равенство
    if (fract1==fract2){
        std::cout << "true, fract1  == fract2" << std::endl;
    }
    else 
        std::cout << "false" << std::endl;

    //Неравенство
    if (fract1!=fract2){
        std::cout << "true, fract1  != fract2" << std::endl;
    }
    else 
        std::cout << "false" << std::endl;

    //Смена знака
    fraction result1=~fract1;
    std::cout << result1;

    fraction result2=~fract2;
    std::cout << result2;

    // fraction result3=++fract1;
    // std::cout << result3;


    return 0;
}