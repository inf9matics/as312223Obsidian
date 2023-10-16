#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

// The difference between passing a variable with & is the reference
void absoluteValue(double &x, bool print){
    if(x < 0){
        x = x * -1;
    }
    if(print){
        std::cout << x;
    }
}

int randInt(int a, int b){
    int range = b - a + 1;
    int result;

    result = (rand() % range) + a;

    return result;
}

int main(){
    srand(time(NULL));

    double number {-2.564};

    absoluteValue(number, true);

    std::cout << " " << number << std::endl;

    int shoeSizes[10];
    for(int i = 0; i < sizeof(shoeSizes); i++){
        shoeSizes[i] = randInt(1, 44);
        //i[shoeSzies] = randInt(1, 44);
    }

    enum card {
        spades,
        //0
        hearts,
        //1
        diamonds,
        //2
        clubs,
        //3
        joker = 7
        //7
    };

    card card;

    card = spades;
    //card value is 0

    return 0;
}