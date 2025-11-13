//to find the given character is vowel or consonant
#include<stdio.h>
int main()
{
	char ch;
	printf("enter a charcter:");
	scanf("%d",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	switch(ch)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':printf("given character is vowel\n");
	         break;
	default:printf("given charcter is consonant\n");
	}
	else
	{
		printf("given character is not an alphabet");
	}
	return 0;
}
