#now planning to convert this to python, and add some new functionalities
#also planning to enable playing with computer, so 2 users won't be compulsory

#include <stdio.h>

char a[9]={'1','2','3','4','5','6','7','8','9'};
char ch='x';

void disp(int n)
{
	int i,j;
	a[n-1]=ch;
	for(i=0;i<9;i++)
	{
			
		printf("%c  ",a[i++]);
		printf("%c  ",a[i++]);	
		printf("%c  ",a[i]);
		printf("\n\n");
	}
}

int check()
{
	if(a[0]==a[1])
	{
		if(a[2]==a[1])
			return 0;
	}
	
	if(a[0]==a[3])
	{
		if(a[6]==a[3])
			return 0;
	}
	
	if(a[6]==a[7])
	{
		if(a[7]==a[8])
			return 0;
	}
	
	if(a[5]==a[2])
	{
		if(a[5]==a[8])
			return 0;
	}
	
	if(a[0]==a[4])
	{
		if(a[4]==a[8])
			return 0;
	}
	
	if(a[4]==a[2])
	{
		if(a[4]==a[6])
			return 0;
	}
	return 1;
}

int main ()
{
	int i,j,n;
	for(i=0;i<9;i++)
	{
			
		printf("%c  ",a[i++]);
		printf("%c  ",a[i++]);	
		printf("%c  ",a[i]);
		printf("\n\n");
	}
	for(i=0;check()==1&&i<9;i++)
	{
		
	if(ch=='x')
	{	
		printf("0's chance:");
		ch='0';
	}
	else
	{
		printf("x's chance:");
		ch='x';
	}
	
	scanf("%d",&n);
	disp(n);
	}
	
	if(check()==0)
	{
	if(ch=='x')
		printf("X wins");
	else
		printf("0 wins");
	}
	else
		printf("match draw");
    
}
