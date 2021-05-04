#include <stdio.h> 
/*
*
*
*   Arithmetic progression:
*   a1=2, an=100, d=2, n=(an-a1+d)/d=50
*   Arithmetic series:
*   sn=n(a1+an)/2
*
*   https://baike.baidu.com/item/%E7%AD%89%E5%B7%AE%E6%95%B0%E5%88%97
*   https://en.wikipedia.org/wiki/Arithmetic_progression    
*
*
*/

int AS__00(int a1,int n,int d);/* AS stands for Arithmetic Series    */
int AS__01(int a1,int an, int d);
int AS__baka(int a1,int an, int d);/* baka means dumb */

int main()
{
int a1=2,an=100,d=2;
int Sum=0;
printf("Arithmetic progression:\na1=2, an=100, d=2, n=50\n");
Sum=AS__baka(a1,an,d);
printf("Arithmetic series:\nS50=%d\n",Sum);
return 0;
}
#ifdef __STDC_VERSION__
inline int AS__00(int a1, int n, int d)
{
    return n*(a1+n)*(n-1)*d/2;
}
inline int AS__01(int a1, int an, int d)
{
    int n=(an-a1+d)/d;
    return n*(a1+an)/2;
}
#else /* dumb vc6 don't support inline function */
int AS__00(int a1, int n, int d)
{
    return n*(a1+n)*(n-1)*d/2;
}
int AS__01(int a1, int an, int d)
{
    int n=(an-a1+d)/d;
    return n*(a1+an)/2;
}
#endif
int AS__baka(int a1, int an, int d)
{
    int sum=0;
    for (int i = a1; i <= an; i+=d)
    {
        sum=sum+i;
    }
    return sum;
}




