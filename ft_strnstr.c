#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	l;
	size_t	i;

	if (*needle == '\0')
		return ((char *)hay);
	i = 0;
	l = ft_strlen(needle);
	while (*hay && i < len )
	{
		if (*hay == *needle)
		{
			if (ft_strncmp(hay, needle, l) == 0)
				return ((char *)hay);
		}
		hay++;
		len--;
		i++;
	}
	return (NULL);
}
