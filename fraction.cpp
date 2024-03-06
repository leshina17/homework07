#include "fraction.h"

void fraction::setdenom(uint32_t newDenom){
    if (newDenom==0)
        throw "error";
    _denom=newDenom;
}

void fraction::setnum(int32_t newNum){
    _num=newNum;
}

fraction::fraction(int32_t num, uint32_t denom){
    _num=num;
    setdenom(denom);
}