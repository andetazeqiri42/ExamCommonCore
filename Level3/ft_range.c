#include <unistd.h>
#include <stdlib.h>
int *ft_range(int start, int end)
{
	int step= (start>end ? -1: 1);
	int size=(start>end ? start-end +1 : end-start +1);
	int *rev = malloc(sizeof(*rev)*size);
	if(!rev)
		return (NULL);
	for(int i=0; i<size;i++)
	{
		rev[i]=start;
		start+=step;
	}
	return (rev);
}

int *ft_rrange(int start, int end)
{
	int tmp;
	tmp=start;
	start=end;
	end=start;

	int step=(start >end? -1:1);
	int size=(start>end?start-end+1:end-start+1);
	int *rev= malloc(sizeof(*rev)*size);
	if(!rev)
		return (NULL);
	for(int i; i<size; i++)
	{
		rev[i]=start;
		start+=step;
	}
	return (rev);
}