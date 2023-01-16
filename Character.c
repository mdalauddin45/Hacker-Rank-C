#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,*s,*sen;
    s=(char*)malloc(sizeof(char)*1024);
    sen=(char*)malloc(sizeof(char)*1024);
    
    scanf("%c%s\n%[^\n]s",&ch,s,sen);
    s=realloc(s, strlen(s));
    sen=realloc(sen, strlen(sen));
   printf("%c\n%s\n%s",ch,s,sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
