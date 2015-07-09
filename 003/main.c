/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <stdlib.h>
#include <stdio.h>

#define NUM 600851475143

long largestFactor(long num, long x){
  
  if !(num % x) 
    return (num/x == 1) ? x : largestFactor(num/x, x);
  else if (x == 2)
    return largestFactor(num, x++);
  else
    return largestFactor(num, x+2);

}

int main(){
  
  printf("%ld", largestFactor(NUM, 2));
  
  return 0;
}
