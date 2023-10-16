#include <iostream>
#include <cmath>

// The difference between passing a variable with & is the reference
void absoluteValue(double &x, bool print){
    if(x < 0){
        x = x * -1;
    }
    if(print){
        std::cout << x;
    }
}

int main(){
    double number {-2.564};

    absoluteValue(number, true);

    std::cout << " " << number << std::endl;

    return 0;
}