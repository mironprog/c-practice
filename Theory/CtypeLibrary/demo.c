#include <stdio.h>
#include <ctype.h>

int main(void)
{
    if (isalnum('a')) printf("true\n");
    else printf("false\n");
    
    if (isalnum('Z')) printf("true\n");
    else printf("false\n");
    
    if (isalnum('$')) printf("true\n");
    else printf("false\n");
    
    if (isalpha('8')) printf("true\n");
    else printf("false\n");
    
    if (iscntrl('\n')) printf("true\n");
    else printf("false\n");
    
    if (isdigit('T')) printf("true\n");
    else printf("false\n");
    
    if (isdigit('8')) printf("true\n");
    else printf("false\n");
    
    if (isgraph(' ')) printf("true\n");
    else printf("false\n");
    
    if (islower('g')) printf("true\n");
    else printf("false\n");
    
    if (isupper('T')) printf("true\n");
    else printf("false\n");
    
    if (isprint(' ')) printf("true\n");
    else printf("false\n");
    
    if (isprint('\n')) printf("true\n");
    else printf("false\n");
    
    if (ispunct(';')) printf("true\n");
    else printf("false\n");
    
    if (ispunct('x')) printf("true\n");
    else printf("false\n");
   
    if (isspace(' ')) printf("true\n");
    else printf("false\n");
    
    if (isspace('\t')) printf("true\n");
    else printf("false\n");
    
    if (isspace('\n')) printf("true\n");
    else printf("false\n");
   
    if (isxdigit('A')) printf("true\n");
    else printf("false\n");

    if (isxdigit('G')) printf("true\n");
    else printf("false\n");

    char c = tolower('A');
    printf("c: %c\n", c);

    char d = toupper('a');
    printf("d: %c\n", d);
    
    
    return 0;
}
