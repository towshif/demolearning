#include <stdio.h>
#include "palindromeAdvanced.h"


void palindromeAdvanced(){
int i=0,j=0,p=0;
int length = 0;
char A[100],B[100],C[100];
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
 /* Strip Special chars []!@#$%^&*(),.<>?/:;"'{}=-|\  TO Null
    Change all to UPPERCASE (for simplicity) 
    We get a single contiguous block of chars with CAPS 
    Eg: MYNAMEISHELLOWORLDHISNAMEISJOHNHELLOJOHN
    */
    int x='a',y='z';
    int diff='z'-'Z';
    int final_length=0;
    printf("\nUPPERCASE string with STRIPPED special chars\n");
    for(i=0; i<length; i++)
    {
        if(A[i]>='a' && A[i]<='z')
        {
            int l=(int)A[i]-diff;
            B[final_length]=(char)l;
            printf("%c",B[final_length]);
            ++final_length;
        }
        else if(A[i]>='A' && A[i]<='Z') {
            B[final_length]=A[i];   
            printf("%c",B[final_length]);
            ++final_length;
        }
    }
    printf("\n");

 /*  
 Reversing the String and saving String in B[]
 A[0] ..... A[l-1] 
 */
    j=0;
    for(i=final_length-1; i>=0; i--)
    {
      C[j]=B[i];
      printf("B[%d]=%c | C[%d]=%c\n", i, B[i], j, C[j]);
      j++;	  
    }
	
/* Checking mirror image / palindrome propoerty*/	
    j=0;p=0;
   for(i=0;i<final_length;i++)
	{
	   if(B[i]==C[i])
	   {
	      p++;
		  j++;
	   }
	   
	}
/* Final decision on mirror image*/	
if(p==final_length)
  printf("\nthe string is PALINDROME\n");
else
  printf("\nthe string is NOT a palindrome\n");
}  