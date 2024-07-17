#include<stdio.h>
int main()
{
int x,y,z,n,k;
printf("enter x");
scanf("%d",&x);
printf("enter y");
scanf("%d",&y);
printf("enter z");
scanf("%d",&z);
printf("enter the case\n");


scanf("%d",&n);
switch(n)
{
    case 1:k=x+y*z/4%2-1;
           printf("%d\n",k);
           break;
    case 2:k=x%y+z*z;
           printf("%d\n",k);
           break;
   case 3:k=x*x-y/z;
           printf("%d\n",k);
           break;
    case 4:k=x+y/z-y;
           printf("%d\n",k);
           break;
    case 5:k=x+y-(x=y);
           printf("%d\n",k);
           break;


}
return 0;
}


