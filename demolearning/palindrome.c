#include <stdio.h>
#include "palindrome.h"

void palindrome(){
int i=0,j=0,p=0;
int length = 0;
char A[100],B[100];
char s ='\0';
printf("enter string:\n");
/* Text Input for String */
while(s!='\n')
  { 
    scanf("%c",&s);
	A[i]=s ;
	i++;
  }
  i=i-1;
  length = i;
  printf("\ni = %d\n",i);
  
 /* Array Allocation */
  i=0;
  while(A[i]!='\n')
    {
    printf("A[%d] -> %c\n",i,A[i]);
	i++;
	}
	
 i  = length;
 
 /*  
 Reversing the String and saving String in B[]
 A[0] ..... A[l-1] 
 */
 
   for(i=length; i>=0; i--)
   {
      B[j]=A[i-1];
	  printf("B[%d]=%c | A[%d]=%c\n",j,B[j],i, A[i]);
	  j++;	  
	}
	j=0;
	
/* Checking mirror image / palindrome propoerty*/	
   for(i=0;i<length;i++)
	{
	   if(A[i]==B[j])
	   {
	      p++;
		  j++;
	   }
	   
	}
/* Final decision on mirror image*/	
if(p==length)
  printf("\nthe string is PALINDROME\n");
else
  printf("\nthe string is NOT a palindrome\n");
}  