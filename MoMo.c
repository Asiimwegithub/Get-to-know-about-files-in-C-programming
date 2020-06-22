#include<stdio.h>
int Addition()
{
int x;
int y;
int Answer;
printf("ENTER the first Number\n");
scanf("%d",&x);
printf("ENTER the second Number y\n");
scanf("%d",&y);	
Answer = x + y;
return(Answer);
/*if(Answer<10)
	{
		printf(" Answer = %d\nBut too low!!",Addition());
	}
	else
	{
		printf("Answer = %d\nThanks & keep it up",Addition());
	}*/

}

int main()
{
	int x;
	int Addition();
	printf("Answer = %d \nthanks so much\n",Addition());
	printf("Enter your sells for today\n");
	scanf("%d",&x);
	if(x<=10)
	{
		printf("Please you will have to improve!!");
	}
	else
	{
		printf("This is atleast owesome!!");
	}
	return 0;
}

