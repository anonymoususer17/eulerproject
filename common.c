#include <stdio.h>
#include "common.h"

// Return 1 if n is even, 0 otherwise
int isEven(long n){
    return n % 2 == 0;
}

// Return 1 if n is prime, 0 otherwise
int isPrime(long n){
    if(n < 2){
        return 0;
    }
    for(long i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

// Return a list of prime factors of n
void  primeFactors(long n, long factors[]){
    int count = 0;
    for(long i = 2; i < n; i++){
        if(n % i == 0 && isPrime(i)){
            printf("i is prime: %ld\n", i);
            factors[count] = i;
            count++;
        }
    }
}