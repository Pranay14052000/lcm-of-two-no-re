#include <stdio.h>
#include <stdlib.h>

int lcm(int ,int );
int main()
{int a,b,result;
	printf("enter the two no to find lcm\n");
printf("enter the first no\n");
scanf("%d",&a);
printf("enter the second no\n");
scanf("%d",&b);
result=lcm(a, b);
printf("the lcm of %d and %d is %d",a,b,result);
return 0;

}
int lcm(int a,int b)
{

static int c=1;
	if(c%a==0 && c%b==0)
	{
		return c;
	}
	c++;
	lcm(a,b);


}
