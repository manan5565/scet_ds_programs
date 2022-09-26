#include<stdio.h>
int swap(int*,int*);
int main() {
    
    int a,b;
    printf("Enter Value for a :");
    scanf("%d",&a);
    printf("Enter Value for b :");
    scanf("%d",&b);
    printf("Swapping using Call by Refrance\n");
    swap(&a,&b);
    
    return 0;
}

int swap(int *a, int *b) {
    int temp;
    printf("Before Swapping a = %d and b = %d\n",*a,*b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After Swapping a = %d and b = %d\n",*a,*b);
}
// call by refenace