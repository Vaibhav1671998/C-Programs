#include <stdio.h>

int main()
{
    int n;
    int ans = 0;

    printf("Enter the number whose bits is to be reversed : ");
    scanf("%d",&n);
    int num = n;
    for(int i=0; n; i++)
    {
        ans ^= num ^ (1 << i);
        n = n>>1;
    }
    printf("%d\n",ans);
    return 0;
}
