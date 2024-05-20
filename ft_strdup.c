#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*dup_s;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s) + 1;
	dup_s = malloc(len * sizeof(char));
	if (!dup_s)
		return (NULL);
	while (s[i])
	{
		dup_s[i] = s[i];
		i++;
	}
	dup_s[i] = '\0';
	return (dup_s);
}

/*int main(void)
{
	char src[] = "Couc";

	__builtin_printf("%s\n", ft_strdup(src));

	return (0);
}*/