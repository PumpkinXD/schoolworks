 #include <stdio.h>

 int sum__01(int n);
 int sum__02(int n);
 
 int main()
 {
     int N,Sum;

     while (1)
     {
        printf("Please enter a positive integer:\n");
        scanf("%d",&N);
        putc('\n',stdout);
        if (N>0)
        {
            Sum=sum__02(N);/* for better performance, call sum__01(int) instead */
            break;
        }
        printf("Invalid value %d !\nPlease try again!\n(You should enter a positive integer!)\n",N);
     }
     printf("sum from 1 to %d is %d \n",N,Sum);
 }

#ifdef __STDC_VERSION__
inline int sum__01(int n)/* a1=1 d=1 an=n */
 {
     return (n+n*n)/2;
}
#else
/* dumb VC6 don't support inline */
int sum__01(int n)/* a1=1 d=1 an=n */
 {
     return (n+n*n)/2;
 }
#endif
 int sum__02(int n)
 {
     int Sn=0;
     for (int i = 1; i <= n; i++)
     {
        Sn+=i;
     }
     return Sn;
 }
