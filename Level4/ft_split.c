#include <unistd.h>
#include <stdlib.h>

int	is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

char *copy_word(char *str, int start, int end)
{
    char *word = malloc(end - start + 1);
    int i = 0;

    while (start < end)
        word[i++] = str[start++];
    word[i] = '\0';
    return (word);
}

char **ft_split(char *str)
{
    char **arr;
    int i = 0, j = 0, start = 0;

    // Allocate worst case: every char = word → (length/2 + 1)
    arr = malloc(sizeof(char *) * 256);
    if (!arr)
        return (NULL);

    while (str[i])
    {
        while (str[i] && is_space(str[i]))
            i++;

        if (str[i])
        {
            start = i;
            while (str[i] && !is_space(str[i]))
                i++;

            arr[j++] = copy_word(str, start, i);
        }
    }
    arr[j] = NULL;
    return (arr);
}


int main(int ac, char **av)
{
	if (ac == 2)
	{
		char **words = ft_split(av[1]);
		int i = 0;

		while (words[i])
		{
			int j = 0;
			while (words[i][j])
			{
				write(1, &words[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			free(words[i]);
			i++;
		}
		free(words);
	}
	return (0);
}