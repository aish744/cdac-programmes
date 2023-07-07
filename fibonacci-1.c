#include<stdio.h>
int main(){             
int t1=0,t2=1,t3,n;
printf("enter the number of terms");
scanf("%d",&n);
// printf("fibonacci: %d,%d",t1,t2);
for (int i=1;i<=n;i++)
{
    printf("%d",t1);
    t3 = t1 + t2;
    t1=t2;
    t2=t3;
    // t3 = t1 + t2;
}
// printf("fibonacci: %d,%d",t1,t2);
// printf("%d",t3);

return 0;
}