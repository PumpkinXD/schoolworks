 #include <stdio.h>
 #include <math.h> /*for floor()*/

 int main()
 {
    double pretax=0,tax=0,net_income=0;
    do
    {
    printf("Enter your pretax earnings here:\n");
    scanf("%lf",&pretax);
    putc('\n',stdout);
    if (pretax<0)
    {
        printf("You entered an invalid pretax earnings value %f.\nDO NOT ENTER NEGATIVE VALUE!! \nPlease check the value and try again.\n",pretax);
        continue;
    }
    switch ((long)(floor(pretax)/1000))
    {
        case 0:
            tax=0;
            net_income=pretax;
            break;
        case 1:
            tax=(pretax-1000)*0.05;
            break;
        case 2:
        case 3:
        case 4:
            tax=1000*0.05+(pretax-2000)*0.1;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            tax=1000*0.05+2000*0.1+(pretax-5000)*0.15;
            break;
        default:
            tax=1000*0.05+2000*0.1+5000*0.15+(pretax-10000)*0.35;
            break;
    }
    net_income=pretax-tax;
    break;
    } while (1);
    printf("your tax is:%g \n",tax);




 }
