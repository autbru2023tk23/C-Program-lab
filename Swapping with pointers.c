#include <stdio.h>


void swapValue(int a,int b){
int temp;
temp=a;
a=b;
b=temp;
printf("Inside swapValue - a: %d, b: %d\n",a,b);
}
void swapRef(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b= temp;
}
int main() {
    int x,y;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    
    printf ("\n--- Before Swap---\n");
    printf ("x: %d, y:%d\n",x,y);
    
    printf("After swapValue : x: %d,y: %d\n",x,y);
    
    swapRef(&x,&y);
    printf("After swapref : x: %d,Y: %d\n",x,y);
    
    return 0;          
}