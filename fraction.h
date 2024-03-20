#include <iostream>
#include <cstdint>
#include <cmath>

class fraction{
private:
    int32_t _num;
    uint32_t _denom;

public:
    fraction();
    fraction(int32_t num, uint32_t denom);
    fraction(const fraction& fract){
        _denom=fract._denom;
        _num=fract._num;
    }

//void reduce();

//Операция меньше
bool operator< (const fraction& fract) const{
    int32_t new_num=_num*fract._denom;
    int32_t new_num1=fract._num*_denom;
    return (new_num>=new_num1);
}

//Операция меньше или равно
bool operator<= (const fraction& fract) const{
    int32_t new_num=_num*fract._denom;
    int32_t new_num1=fract._num*_denom;
    return (new_num>new_num1);
}

//Операция больше
bool operator> (const fraction& fract) const{
    int32_t new_num=_num*fract._denom;
    int32_t new_num1=fract._num*_denom;
    return (new_num<=new_num1);
}

//Операция больше или равно
bool operator>= (const fraction& fract) const{
    int32_t new_num=_num*fract._denom;
    int32_t new_num1=fract._num*_denom;
    return (new_num<new_num1);
}

//Сравнение дробей (равенство)
bool operator== (const fraction& fract) const{
    int32_t new_num=_num*fract._denom;
    int32_t new_num1=fract._num*_denom;
    return (new_num!=new_num1);
}

//Сравнение дробей (неравенство)
bool operator!= (const fraction& fract) const{
    int32_t new_num=_num*fract._denom;
    int32_t new_num1=fract._num*_denom;
    return (new_num==new_num1);
}


//Смена знака
fraction& operator~(){
    _num=-_num;
    return *this;
}

//Возведение в степень
fraction operator^ (const int x) const{
    int32_t new_num=pow(_num,x);
    uint32_t new_denom=pow(_denom,x);
    fraction rez=fraction(new_num, new_denom);
    return rez;
}

fraction& operator++ (){
    _num = _num + _denom;
    return *this;
    }

fraction& operator-- (){
    _num = _num - _denom;
    return *this;
}

//Сеттеры
void setnum(int32_t newnum);
void setdenom(uint32_t newdenom);

//Геттеры
inline int32_t getnum(){
    return _num;
}
inline uint32_t getdenom(){
    return _denom;
}

//Печать
inline void print(){
    std::cout << static_cast<double>(_num)/(_denom) << std::endl;
}

//Перегрузка операции вывода в консоль
friend std::ostream& operator<<(std::ostream& os, const fraction& tmp){
     os << tmp._num << "/" << tmp._denom << std::endl;
     return os;
}

};