#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if ((char)c == '\0')
	{
		while (*str != '\0')
			str++;
		return (str);
	}
	else
	{
		while (*str != '\0')
		{
			if ((char)c == *str)
				return (str);
			str++;
		}
	}
	return (NULL);
}
