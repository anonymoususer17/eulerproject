#include <stdio.h>

static long factors[100];
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

// List the prime factors
int primeFactors(long n){
    int count = 0;
    for(long i = 2; i < n; i++){
        if(n % i == 0 && isPrime(i)){
            printf("i is prime: %ld\n", i);
            factors[count] = i;
            count++;
        }
    }
    return 0;
}

int main(){
    long num = 600851475143;

    primeFactors(num);
    for(int i = 0; i < 100; i++){
        if(factors[i] == 0){
            break;
        }
       //printf("%ld\n", primeFactorsList[i]);
    }

    return 0;
}