// write a program to find Gcd of 2 nos 
#include <stdio.h>
void gcd(int *x,int *y){
    int temp;
    if(*x<*y){
        temp=*x;
        *x=*y;
        *y=temp;
    }
    while(*y!= 0){
        temp=*y;
        *y=*x%*y;
        *x=temp;
    }
}
int main(){
    int x,y;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&x,&y);
    gcd(&x,&y);
    printf("GCD is: %d\n",x);
    return 0;
}
Output : 
Enter 2 numbers: 48 18
GCD is: 6
