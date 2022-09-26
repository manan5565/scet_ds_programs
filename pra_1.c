#include<stdio.h>
int swap(int,int);
int main() {
    
    int a,b;
    printf("Enter Value for a :");
    scanf("%d",&a);
    printf("Enter Value for b :");
    scanf("%d",&b);
    printf("Swapping using Call by Value\n");
    swap(a,b);
    
    return 0;
}

int swap(int i, int j) {
    int a,b,temp;
    a = i;
    b = j;
    printf("Before Swapping a = %d and b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping a = %d and b = %d\n",a,b);
}
// call by value