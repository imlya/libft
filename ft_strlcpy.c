#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (i > size)
		return (0);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*int main(void)
{
	char src[] = "Couc";
	char dst[] = "Hello";
	size_t size = 7980757;

	__builtin_printf("%ld\n", ft_strlcpy(dst, src, size));

	return (0);
}*/