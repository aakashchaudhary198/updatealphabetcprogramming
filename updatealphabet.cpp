#include<stdio.h>
#include<ctype.h>
int main()
{char ch;
printf("enter a characters ");
scanf("%c",&ch);
if (isalpha(ch))
{
	printf(" %c is alphabet",ch);
	
	}
	else
	{
	
	printf(" %c is not a alphabet",ch);
}

return 0;

}
