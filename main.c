#include <stdio.h>

int main()
{
    int n,a,b,c,p,q,m,d,i;//a������ݣ�b�����·ݣ�c����������d�����ܵ�������i����ÿ�µ�����
    d=0;
    printf("1:������ת��Ϊ������\n2:���ض���ݵ�����ת��Ϊ���ڡ�\n");
        printf("Please choose a number:");
        scanf("%d",&n);
        if(n==1)
        {
            printf("Please enter year:");
            scanf("%d",&a);
            if(a%4!=0||(a%100==0&&a%400!=0))//�����������Ϊƽ��
            {
                while(b<=0||b>12)//�·ݲ���С��1���ߴ���12
                {
                    printf("Please enter month:");
                    scanf("%d",&b);
                        continue;
                }
                    if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
                        i=31;
                    else if(b==2)
                        i=28;//ƽ��Ķ��·���28��

                    else if(b==4||b==6||b==9||b==11)
                        i=30;
                while(c<=0||c>i)//�涨ÿ�µ�����
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
                        d=d+c;//����ǰ���������ϱ��µ�������Ϊ�ܵ�����
                        printf("The number is %d.",d);
            }

            else//����Ϊ����
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
                        i=29;//����Ķ�����29��
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
