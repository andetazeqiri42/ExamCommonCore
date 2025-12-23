#include <unistd.h>

char *ft_strrev(char *str)
{
	int len;
	int i;

	len = 0;
	while(str[len])
		len++;
	i=0;
	while(i<len/2)
	{
		str[i]= str[i]^str[len-1-i];
		str[len-1-i]=str[i]^ str[len-1-i];
		str[i]=str[i]^str[len-1-i];
		i++;
		}
		return (str);
}

char *ft_strrev(char *str)
{
	int i;
	int j;
	char tmp;

	i=0,j=0;
	while(str[j])
		j++;
	j--;

	while(i<j)
	{
		tmp=str[i];
		str[i]=str[j];
		str[j]=tmp;
		i++;
		j--;
	}
	return (str);
}