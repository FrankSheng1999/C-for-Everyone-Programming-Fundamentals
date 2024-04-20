/*
elephant weight
*/
#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>



int main(void){
    int count = 0;
    double data;
    double sum = 0;
    FILE *file;
    // open the file
    file = fopen("elephant_seal_data.txt", "r");
    if (file == NULL) {
        printf("The file is not exsist, pls check you fold.\n");
        return 1;
    }
    
    while (fscanf(file, "%lf", &data) == 1) {
        sum += data;
        count++;
    }

    
    fclose(file);
    if(count == 0){
        printf("The file is empty.\n");
        return 1;
    }
    double average = sum/count;
    printf("The average weight is %.2f\n", average);
    return 0;
}
