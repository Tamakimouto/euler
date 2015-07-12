#include <stdlib.h>
#include <stdio.h>

int main(){

    int sum = 0;

    int x = 0;
    while (3 * x < 1000){
        sum += 3 * x;
        x++;
    }
	
    x = 0;
    while (5 * x < 1000){
        sum += 5 * x;
        x++;
    }
	
    x = 0;
    while (15 * x < 1000){
        sum -= 15 * x;
        x++;
    }
	
    printf("%d\n", sum);
    return 0;
}
