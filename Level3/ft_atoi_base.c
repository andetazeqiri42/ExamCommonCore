#include <unistd.h>

int	ft_value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int value = 0;
    int digit;

	if (str_base < 2 || str_base > 16)
		return (0);
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i]=='-' || str[i]=='+')
	{
		if(str[i]== '-')
			sign=-1;
		i++;
	}
	while ((digit = ft_value(str[i])) != -1 && digit < str_base)
	{
		value = value * str_base + digit;
		i++;
	}
	return (value * sign);
}
int main(int ac, char *av[])
{
	if (ac == 3)
	{
		int base = 0;
		int num = 0;
		// Convert base argument to integer
		base = ft_atoi_base(av[2], 10);
		num = ft_atoi_base(av[1], base);
		// Print the result
		if (num < 0)
		{
			write(1, "-", 1);
			num = -num;
		}
		if (num == 0)
		{
			write(1, "0", 1);
		}
		else
		{
			char buffer[20];
			int i = 0;
			while (num > 0)
			{
				buffer[i++] = (num % 10) + '0';
				num /= 10;
			}
			while (i--)
			{
				write(1, &buffer[i], 1);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}