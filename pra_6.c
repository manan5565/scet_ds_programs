#include<stdlib.h>  
#include<stdio.h>      

#define max 5        

int f=-1,r=-1;       // global variable
int CQueue[max];          

void insert();
int delete();
void display();

int main()
{
    int w,no;         
    while(1)
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. EXIT");
        printf("\nEnter your choice :");
        scanf("%d",&w);

        switch(w)
        {
        case 1:
            insert();
            break;
        case 2:
            no=delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("\nInvalid Choice !!\n");
        }
    }
}

void insert()
{
    int no;
    if((f ==0 && r == max-1) || f == r+1)
    {
        printf("\nCircular Queue is Overflow!!!\n");
        return;
    }
    printf("\nEnter a number to Insert :");
    scanf("%d",&no);
    if(f==-1)
        f=f+1;
    if(r==max-1)
        r=0;
    else r=r+1;
        CQueue[r]=no;
}

int delete()
{
    int e;
    if(f==-1)
    {
        printf("\nCircular Queue is Underflow!!!\n");
        
    }
    e=CQueue[f];
    if(f==max-1)
        f=0;
    else if(f==r)
    {
        f=-1;
        r=-1;
    }
    else f=f+1;
    printf("\n%d was deleted !\n",e);
    return e;
}

void display()
{
    int i;
    if(f==-1)
    {
        printf("\nCircular Queue Underflow!!!\n");
        return;
    }
    i=f;
    if(f<=r)
    {
        printf("\n\n");
        while(i<=r)
            printf("%d ",CQueue[i++]);
        printf("\n");
    }
    else
    {
        printf("\n\n");
        while(i<=max-1)
           printf("%d ",CQueue[i++]) ;
        i=0;
        while(i<=r)
            printf("%d ",CQueue[i++]);
        printf("\n");
}
}