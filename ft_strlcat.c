#include "libft.h"

size_t  ft_strlcat(char *dst, char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (j > size)
        return (0);
    while (dst[j])
        j++;
    while (src[i] && i + j < (size - 1))
    {
        dst[j] = src[i];
        j++;
        i++;
    }
    dst[j] = '\0';
    return(j);
}

/*int main(void)
{
    char src[] = "Coucouuuu";
    char dst[] = "Helloo";
        // j doit etre < a i 
    size_t size = 97;

    __builtin_printf("%ld\n", ft_strlcat(dst, src, size));

    return (0);
}*/