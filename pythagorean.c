#include<stdio.h>
#include<cs50.h>
int main(void)
{
	float s1=get_float("side 1 ");
	float s2=get_float("side 2 ");
	float s3=get_float("side 3 ");
	if(s1>s2 && s1>s3)
		{
			if(s2*s2+s3*s3==s1*s1)
			printf("Yes");
			else
			printf("No");
		}
	if(s2>s3 && s2>s1)
		{
			if(s1*s1+s3*s3==s2*s2)
			printf("Yes");
			else
			printf("No");
		}
	else
		{	if(s1*s1+s2*s2==s3*s3)
			printf("Yes");
			else
			printf("No");
		}
};
