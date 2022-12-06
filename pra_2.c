#include<stdio.h>
#include<stdlib.h>
int main() {
    int *pointer1;
    float *pointer2;
    int a;
    float b;
    printf("Enter Integer Number:");
    scanf("%d",&a);
    
    pointer1 = (int*)malloc(a * sizeof(int)); // Allocate Momory anywhere using malloc
    
    if(pointer1 == NULL) {
        printf("\nMemory is Not Allocated");
    } else {
        printf("\nMemory is allocated to a using malloc.");
    }
    
    printf("\nEnter double Number:");
    scanf("%f",&b);
    
    pointer2 = (float*)calloc(b,sizeof(float));
    
    if(pointer2 == NULL) {
        printf("\nMemory is Not Allocated");
    } else {
        printf("\nMemory is allocated to b using calloc.");
    }
    
    free(pointer1);
    printf("\nMemory is freed.");
    
    pointer1 = realloc(pointer1, a * sizeof(int));
    printf("\nMemory is re-allocated using realloc to a");
    
    return 0;
}