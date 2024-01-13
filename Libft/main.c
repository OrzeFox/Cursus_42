#include <stdio.h>


int ft_isalnum(int c);
int ft_strlen(const char *s);

int main()
{
    char *s = "Hola";
    printf("%d\n" , ft_strlen(s));
    if(ft_isalnum(67))
        printf("esta bien\n");
    else
        printf("esta mal\n");
}