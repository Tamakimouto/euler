/**
 * A palindromic number reads the same both ways. 
 * The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <stdio.h>
#include <stdlib.h>

#define LARGEST_THREE_DIGIT 999

int isPal(long x){
    
    long temp = x;
    long rev = 0;
    while (temp){
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return (rev == x) ? 1 : 0;
}

long pal(){
    
    int i, j, max = 0;
    for (i = LARGEST_THREE_DIGIT; i > 99; i--){
        for (j = i; j > 99; j--){
            if (isPal(i*j)){
                if (i*j > max){
                    max = i*j;
                }
                continue;
            }
        }
    }
    return max;
}

int main(){
    
    printf("%ld\n", pal());
    
    return 0;
}//main
