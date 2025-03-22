#include <stdio.h>
#include "common.h"

int main(){

    long primeFactorsList[100];
    long num = 600851475143;

    primeFactors(num, primeFactorsList);
    for(int i = 0; i < 100; i++){
        if(primeFactorsList[i] == 0){
            break;
        }
       printf("%ld\n", primeFactorsList[i]);
    }

    return 0;
}