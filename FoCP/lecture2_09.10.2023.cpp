#include <iostream>
#include <cmath>

int main(){
    //auto
    int a; //integer `a`
    int b = 45; //integer `b` = 45

    auto c = 23; //integer `c` = 23

    auto pi{3.1415}; //double `pi` ≈ 3.1415

    // auto d; //error, no initialization

    int number = 123;
    int divisor = 7;

    std::cout << number << "==" << divisor << "*" << number / divisor << "+" << number % divisor << std::endl;

    number += 10; //same as `number = number + 10;`
    number++; //operates on `number` then adds 1 "postincrementation"
    ++number; //adds 1 then operates on `number` "preincrementation"

    //bit operators

    a = 9;
    b = 5;

    std::cout << a << std::endl;

    // std::cout << a && b << std::endl; //error
    std::cout << (a & b) << std::endl; //prioritization, same as `a bitand b`
    
    return 0;
}