#include<stdio.h>
int a[1000006];
int main()
{
    long n,x;
    scanf("%ld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%ld",&x);
        if(x<1||x>n ||a[x]) {printf("NO");return 0;}
        a[x]=1;
    }
    printf("YES");  
}
