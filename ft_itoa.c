#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char	*str;
	long	n;
	int		len;
	int		i;

	n = nbr;
	len = (n <= 0) ? 1 : 0; // reserve space for '-' or '0'
	long tmp = n;
	while (tmp != 0)
	{
		tmp /= 10;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);

	str[len] = '\0'; // null terminator
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}

	i = len - 1;
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (str);
}

int main(void)
{
	char *s;

	s = ft_itoa(-12345);
	printf("%s\n", s); // prints: -12345
	free(s);
	return 0;
}