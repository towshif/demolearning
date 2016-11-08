#include <stdio.h>
#include "syllable.h"

void syllable()
{
    int i=0,j=0;
    char st='\0';
    char M[5000];
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
    int dif='z'-'Z';
    for(i=0; i<length; i++)
    {
        if(M[i]>=x && M[i]<=y)
        {
            int l=(int)M[i]-dif;
            M[i]=(char)l;
        }
        printf("%c",M[i]);
    }


// sharif 
    char p,q;
    i=0,j=0;
    int l=0,k=0,matrix[26][26];
    for(k=0; k<26; k++)
    {
        for(j=0; j<26; j++)
            matrix[j][k]=0;
    }
    printf("\n");
    x='A',y='Z';
    for(k=0; k<length-1; k++)
    {
        p=M[k];
        q=M[k+1];

        if(p>=x && p<=y && q>=x && q<=y)
        {
            printf("(%c,%c ) ",p,q);

            i=(int)p-'A';
            j=(int)q-'A';

            printf("(%d,%d)\n",i,j);
            matrix[i][j]++;
        }
    }
    x='A';
    printf("  ");
    for(i=0+x; i<26+x; i++)
        printf("%c ",(char)i);
    printf("\n");


    for(i=0; i<26; i++)
    {
        int p=i+x;
        printf("%c ",(char)p);
        for(j=0; j<26; j++)
        {
            if(matrix[i][j]!=0)
                printf("%d ",matrix[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
}

























