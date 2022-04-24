#include <stdio.h>
int main()
{
    int b,i,n,pal=0;
    printf("ENTER A THREE DIGIT NUMBER:\n");
    scanf("%d",&n);
    for (i=n;i>=1;i=i/10)
    {
        b=i%10;
        pal=pal*10+b;
        
    }
    if (pal==n)
    printf("IT IS A PALINDROME");
    else
    printf("IT IS NOT A PALINDROME");
    
    return 0;
}
