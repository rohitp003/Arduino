#include<stdio.h>
int main()
{
int x,y,z,n;
printf("enter x");
scanf("%d",&x);
printf("enter y");
scanf("%d",&y);
printf("enter the case\n");


scanf("%d",&n);
switch(n)
{
    case 1:z=x<y;
           printf("%d\n",z);
           break;
    case 2:z=x>y;
           printf("%d\n",z);
           break;
    case 3:z=x<=y;
           printf("%d\n",z);
           break;
    case 4:z=(x*x-y)>(y*y-x);
           printf("%d\n",z);
           break;
    case 5:z=(x*x*x)<(y*x*x);
           printf("%d\n",z);
           break;
    case 6:z=((x*y)!=(y*x));
           printf("%d\n",z);
           break;
    case 7:z=((x*y)==(y*x));
           printf("%d\n",z);
           break;

}
return 0;
}


