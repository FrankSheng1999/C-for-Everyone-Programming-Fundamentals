
#include <stdio.h>
#include <math.h>
int main(void)
{
    printf("x, sin(x), cos(x) \n");
    double increase = 0.1;
    for(double angle = 0; angle <= 1; angle += increase){
        double sin_val = sin(angle);
        double cos_val = cos(angle);
        printf("%.2lf,  %.4lf,  %.4lf\n",angle, sin_val, cos_val);
    }

    return 0;
}
