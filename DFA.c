#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s); 
    if(s[0] == 'a' && s[1] == 'b')printf("Accepted");
    else
        printf("Not Accepeted");
    return 0;
}
