#include <stdio.h>
int add(int n)
{
    if (n == 0 )
    {
        return 0;
    }
    else
    {
        return n + add(n - 1);
    }
}
int factorial(int n){
    if (n==0)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main()
{
    int ans;
    ans = add(100);
    printf("%d\n", ans);
    ans = factorial(10);
    printf("%d", ans);
}