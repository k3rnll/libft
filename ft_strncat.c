#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	size_t	t;

	t = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[t] != '\0' && t < n)
	{
		s1[i] = s2[t];
		i++;
		t++;
	}
	s1[i] = '\0';
	return (s1);
}
