//wacp to identify alphbet consonet or vowel
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a charcter:");
	scanf("%c",&ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
  {
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
	case 'U':printf("given charcter is vowel");
	          break;
	default: printf("given charter is constant");
   }
 }
 else
 {
 	printf("given charter is not an alphabet\n");
 }
 return 0;
}
   
   
   
   
   
										

    

