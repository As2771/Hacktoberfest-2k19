#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number for which you want to add digits");
    scanf("%d",&n);
    int i;
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n=(n/10); 
    }
    printf("%d",sum);
    return 0;
}
