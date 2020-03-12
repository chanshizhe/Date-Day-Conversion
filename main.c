#include <stdio.h>

int main()
{
    int n,a,b,c,p,q,m,d,i;//a代表年份，b代表月份，c代表天数。d代表总的天数，i代表每月的天数
    d=0;
    printf("1:将日期转换为天数。\n2:将特定年份的天数转换为日期。\n");
        printf("Please choose a number:");
        scanf("%d",&n);
        if(n==1)
        {
            printf("Please enter year:");
            scanf("%d",&a);
            if(a%4!=0||(a%100==0&&a%400!=0))//满足此条件即为平年
            {
                while(b<=0||b>12)//月份不能小于1或者大于12
                {
                    printf("Please enter month:");
                    scanf("%d",&b);
                        continue;
                }
                    if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
                        i=31;
                    else if(b==2)
                        i=28;//平年的二月份有28天

                    else if(b==4||b==6||b==9||b==11)
                        i=30;
                while(c<=0||c>i)//规定每月的天数
                {
                    printf("Please enter day:");
                    scanf("%d",&c);
                        continue;
                }

                        for(p=1;p<b;p++)
                            {if(p==1||p==3||p==5||p==7||p==8||p==10||p==12)
                                i=31;
                            else if(p==2)
                                i=28;
                            else if(p==4||p==6||p==9||p==11)
                                i=30;
                                d=d+i;}
                        d=d+c;//此月前的天数加上本月的天数即为总的天数
                        printf("The number is %d.",d);
            }

            else//否则即为闰年
                {
                    while(b<=0||b>12)
                {
                    printf("Please enter month:");
                    scanf("%d",&b);
                        continue;
                }
                    if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
                        i=31;
                    else if(b==2)
                        i=29;//闰年的二月有29天
                    else if(b==4||b==6||b==9||b==11)
                        i=30;
                while(c<=0||c>i)
                {
                    printf("Please enter day:");
                    scanf("%d",&c);
                        continue;
                }
                        for(p=1;p<b;p++)
                            {if(p==1||p==3||p==5||p==7||p==8||p==10||p==12)
                                i=31;
                            else if(p==2)
                                i=29;
                            else if(p==4||p==6||p==9||p==11)
                                i=30;
                                d=d+i;}
                        d=d+c;
                        printf("The number is %d.",d);
                }
        }
        else if(n==2)
        {
            printf("Please enter a year:");
            scanf("%d",&a);
            if(a%4!=0||(a%100==0&&a%400!=0))
            {
                while(m<=0||m>365)
                {
                    printf("Please enter a number:");
                    scanf("%d",&m);
                    continue;
                }
                    for(p=1;d<m-i-1;p++)
                    {
                        if(p==1||p==3||p==5||p==7||p==8||p==10||p==12)
                            i=31;
                        else if(p==2)
                            i=28;
                        else if(p==4||p==6||p==9||p==11)
                            i=30;
                        d=d+i;
                    }
                    c=m-d;
                    printf("The date is %d.%d.%d",a,p,c);

            }
            else
            {
                while(m<=0||m>366)
                {
                    printf("Please enter a number:");
                    scanf("%d",&m);
                    continue;
                }
                    for(p=1;d<m-i-1;p++)
                    {
                        if(p==1||p==3||p==5||p==7||p==8||p==10||p==12)
                            i=31;
                        else if(p==2)
                            i=29;
                        else if(p==4||p==6||p==9||p==11)
                            i=30;
                        d=d+i;
                    }
                    c=m-d;
                    printf("The date is %d.%d.%d",a,p,c);
            }
        }
        //else
         //   printf("Please enter number 1 or number 2.");
    return 0;
}

/*int Mouth(p)
{
int i;
    if(p==1||p==3||p==5||p==7||p==8||p==10||p==12)
        i=31;
    else if(p==2)
        i=29;
    else if(p==4||p==6||p==9||p==11)
        i=30;
}*/
