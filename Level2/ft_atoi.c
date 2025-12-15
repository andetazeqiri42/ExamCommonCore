#include <unistd.h>
int ft_atoi( const char *str)
{ 
	int i=0;
	int sign=1;
	int result=0;
	while(str[i]== ' ' || (str[i]>= 9 && str[i]<= 13))
		i++;
	
	if(str[i]== '-' || str[i]== '+')
	{
		if(str[i]== '-')
		{
			sign= -1;
		}
		i++;
	}
	while(str[i]>= '0' && str[i]<= '9')
	{
		result = result * 10 + (str[i]- '0');
		i++;
	}
	return (result *sign);
}

int main (int ac, char *av[])
{
	if(ac==2)
	{
		int num = ft_atoi(av[1]);
		// char c;
		if(num < 0)
		{
			write(1, "-", 1);
			num = -num;
		}
		if(num == 0)
		{
			write(1, "0", 1);
		}
		else
		{
			char buffer[10];
			int i = 0;
			while(num > 0)
			{
				buffer[i++] = (num % 10) + '0';
				num /= 10;
			}
			while(i--)
			{
				write(1, &buffer[i], 1);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}