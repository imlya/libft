#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle)
		return (haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j])
		{
			if (haystack [i + j] == needle [j])
				return (haystack);
		}
	}
	return ("yo");
}

/*int	main()
{
	char    str[] = "hello ca va bien";
	char    to_find[] = "";

	__builtin_printf("%s\n", ft_strnstr(str, to_find, 99));
	return (0);
}*/