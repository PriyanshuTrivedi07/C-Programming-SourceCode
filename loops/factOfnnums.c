#include<stdio.h>
 
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
        printf("%d! = %d\n", i, fact);
    }
    return 0 ;
}
