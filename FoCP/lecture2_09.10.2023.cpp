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
    std::cout << (a | b) << std::endl; //bitor
    std::cout << (a ^ b) << std::endl; //bitxor
    std::cout << ~a << std::endl; //compl (inverts bits)

    std::cout << (a >> 2) << std::endl; //bitshifting

    double val{-34};
    double abs;

    abs = val > 0 ? val : -val; //if val > 0 then val = val else val = -val
    std::cout << abs << std::endl;

    //lazy evaluation
    int var = 0;
    if (var == 1 && ++var){
        std::cout << "True " << var << std::endl;
    }
    else{
        std::cout << "False " << var << std::endl;
    }

    int var2 = 1;
    if (var2 == 1 && ++var2){
        std::cout << "True " << var2 << std::endl;
    }
    else{
        std::cout << "False " << var2 << std::endl;
    }
    
    return 0;
}