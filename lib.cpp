#include "lib.h"
bool verifica(int &num) {
    int conta = 0, div = 1;

    while (conta < 3 and div <= num / 2) {
        if (num % div == 0){
            conta = conta + 1;
        }
        div = div + 1;
    }
    if (conta == 1) {
        return true;
    }
    else {
        return false;
    }
}

