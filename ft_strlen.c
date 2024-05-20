#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i])
        i++;
    return (i);
}

/*int main()
{
    __builtin_printf("%ld", ft_strlen("hello."));
    return(0);
}*/