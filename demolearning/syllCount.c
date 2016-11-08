#include <stdio.h>
#include "syllCount.h"

void syllCount()
{
    int i=0,j=0;
    char st='\0';
    char M[5000];
    int Mat[27][27];
    printf("enter string :\n");
    while(st!='\n')
    {
        scanf("%c",&st);
        M[i]=st;
        i++;
    }

    int length=i-1;
    printf("length :%d\n",length);
    for(i=0; i<length; i++)
    {
        printf("%c",M[i]);
    }
    printf("\n");
    int x='a',y='z';
    int diff='z'-'Z';
    for(i=0; i<length; i++)
    {
        if(M[i]>=x && M[i]<=y)
        {
            int l=(int)M[i]-diff;
            M[i]=(char)l;
        }
        printf("%c",M[i]);
    }

    /*******************************************
    Create the matrix
    *******************************************/
	int count =0;
    for(i=0; i<26; i++) for (j=0; j<26; j++) Mat[i][j] =0;
    for(i=0; i<length-1; i++)
    {
        if(M[i]>='A' && M[i]<='Z' &&
                M[i+1]>='A' && M[i+1]<='Z') {
            int p = (int)M[i]-'A';
            int q = (int)M[i+1]-'A';
            Mat[p][q]++;
			count++;
            printf("(%d,%d) \t",p,q);
        }
    }
    printf("\n");
    /*******************************************
    Printing the final Matrix
    *******************************************/
    printf("\n\n   ");
    for(i=0+'A'; i<26+'A'; ++i) printf("%3c",i);
    printf("\n");
    for(i=0; i<26; i++) {
        printf("%3c",(i+'A'));
        for (j=0; j<26; j++)
        {
            if (Mat[i][j] !=0) printf("%3d",Mat[i][j]);
            else printf("   ");
        }
        printf("\n");
    }
	printf("Total count :%d",count);
}
