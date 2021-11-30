#include <iostream>
#include "lib.h"

int main() {
    int num=0;
    std::cin>>num;
    if(verifica(num)== true) {
    std::cout << "numero primo" << std::endl;
    }
    if(verifica(num)== false){
    std::cout << "numero non primo" << std::endl;
    }
        return 0;
}
