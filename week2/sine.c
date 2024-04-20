#include <stdio.h>
#include <math.h>

int main(void){
    double x;
    printf("Enter a number between 0 to 1: \n"); // assuming the double x must between 0 and 1
    scanf("%lf", &x);
    double sin_value = sin(x);
    printf("sine of x = %.2lf\n", sin_value);
    return 0;
}
