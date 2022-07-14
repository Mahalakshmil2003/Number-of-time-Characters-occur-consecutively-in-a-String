#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],ch[20];
    int j,c=0,i=0,n=-2;
    printf("Enter the string:");
    gets(s);
    for(j=0;j<strlen(s);j++)
    {
        c=0;
        if(s[j]==s[j+1])
        {
        if(j!=n)
        {
        ch[i]=s[j];
        i++;

        }n=j+1;
        }
        ch[j]='\0';
    }
    printf("\n%s\n",ch);
    for(i=0;i<strlen(ch);i++)
    {
        c=1;
        for(j=i+1;j<strlen(ch);j++)
            {

                    if(ch[i]==ch[j])
                    {
                        c++;
                        ch[j]='0';
                    }
            }


        if(ch[i]!='0')
        printf("\n%c=%d",ch[i],c);
    }
    return 0;
}
