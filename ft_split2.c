#include "libft.h"
//Esta es para practicar
char	**ft_split(char const *s, char c)
{	
    int		i;
    int		j;
	int		start;
    char	**matrix;

    i = 0; // Índice para recorrer string
    j = 0; // Índice de matriz
	start = 0;
    matrix = malloc((ft_countwords(s, c) + 1) * sizeof(char *)); // Asignamos la matriz con nulo
    if (matrix == NULL || s == NULL)
        return NULL;
    while (s[i] != '\0')
    {
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		matrix[j] = ft_substr(s, start, i - start); // i - start da la longitud
		j++;
	}
	matrix[j] = NULL;
    return (matrix);
}

static int	ft_countwords(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}
