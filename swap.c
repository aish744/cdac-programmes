#include<stdio.h>

int main(){
    int a=1,b=2,temp;
    temp = a;
    a=b;
    b=temp;
    printf("swapped numbers are a=%d,b=%d", a,b);
    return 0;
}