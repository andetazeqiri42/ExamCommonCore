#include <unistd.h>

int is_printed(char *str, char c, int pos)
{
	int i=0;
	while(i<pos)
	{
		if(str[i]==c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int i;
	if(argc ==3)
	{
		i=0;
		while(argv[1][i])
		{
			if(!is_printed(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}

		i=0;
		while(argv[2][i])
		{
			if(!is_printed(argv[2],argv[2][i],i))
				write(1, &argv[2][i],1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}