#include <stdio.h>
#include "longestword.h"

void longestword()
{
    char st='\0',A[100];
    int i=1,p=0,k=0;
    A[0]=' '; // adding space in the beginning of the string
    printf("enter the string : \n");
    while(st!='\n')
    {
        scanf("%c",&st);
        A[i]=st;
        i++;
    }

    int length=i-1; // total length with space in beginning
    printf("\nlength =%d\n",length);

    for(i=0; i<length; i++)
    {
        printf("A[%d]=%c ",i,A[i]);
    }
    A[length]=' ';
    A[length+1]='\0';  // IMPORTANT


    /****************************************
    Code to find number of words in the string
    *****************************************/
    i=0;
    while(A[i]!= '\0')
    {
        /* printf("\nNull found at %d  value=%c",i,A[i]);*/
        if(A[i]==' ' && A[i-1]!=' ')
        {
            p++;
        }
        i++;
    }
    printf("\nno of words in a string : %d\n",p);

/// correct
    /****************************************
    Code to find the length of the longest word
    *****************************************/

    int max=0,m=1,j=0,pos=0;
    k=1;

    for(i=0; i<=length+1; i++)
    {
        if(A[i]==' ') //&& m!=0
        {
            m=i-k;

            if(max < m)
            {
                max=m;
                printf("maximum length: %d :\n",max);
                pos=k;
                printf("position :%d :\n",pos);
            }
            k=i+1;
        }
    }
    printf("\n\nMaximum length : %d ", max);

    // Towshif

    /****************************************
    Code to print the longest word
    *****************************************/
    printf("\nLongest word :\n");
    for ( i =pos; i<=pos+max; i++)
        printf("%c", A[i]);
    printf("\n");

    // Towhsif

    /*

    j=pos-1;
    printf("the longest word in the string \n");
    while(A[j]!=' ')
    {

        printf(" %c ",A[j]);
        j++;
    }

    */
}












