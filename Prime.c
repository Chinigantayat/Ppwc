//Wap a c program where the user inputs a no and check if it is prime or not 
#include <stdio.h>

int main() {
    int no, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &no);

    if (no <= 1) {
        isPrime = 0; // Numbers <= 1 are not prime
    } else {
        for (int i = 2; i * i <= no; i++) {
            if (no % i == 0) {
                isPrime = 0; // If divisible, not prime
                break; // Exit loop early
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", no);
    else
        printf("%d is not a prime number.\n", no);

    return 0;
}

//The logic used for isPrime is : 
//If the number is less than or equal to 1, it's set as not prime. 
//A for loop checks divisibility from 2 up to the square root of the number (for efficiency)
//If any divisor is found, isPrime is set to 0, and the loop exits. 
