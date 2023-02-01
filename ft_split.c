/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:41:02 by pramos            #+#    #+#             */
/*   Updated: 2023/01/25 19:41:04 by pramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

int ft_filas(char *s, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[j] != 0)
    {
		while (s[j] == c)
			j++;
		if (s[j] != c && s[j] != 0)
		{
			i++;
			while (s[j] != c && s[j] != 0)
				j++;
		}
    }
    return(i);
}

static char ft_free(char **matriz)
{
    int i;
    i = 0;
    while(matriz[i])
    {
        free(matriz[i]);
        i++;
    }
    free(matriz);
    return(0);
}

char **ft_split(char const *s, char c)
{
    int i;
    int j;
    int k;
    char **matriz;

    i = 0;
    k = 0;
    matriz = (char **)malloc((ft_filas((char *)s, c) + 1) * sizeof(char *));
    if (!matriz)
        return(0);
    while(s[i] != 0)
    {
        while (s[i] == c)
            i++;
		j = i;
        while (s[i] != 0 && *(char *)&s[i] != c)
            i++;
        if (i > j)
        {
            matriz[k] = ft_substr(s, j, (i - j));
            if (!matriz[k])
                ft_free(matriz);
            k++;
        }
    }
    matriz[k] = 0; 
    return(matriz);
}

int main()
{
    int i;
    char **matriz;

    i = 0;
    matriz = ft_split("hello!", ' ');
    while (matriz[i][0] != 0)
    {
        printf("%s", matriz[i]);
        printf("%s", "\n");
        i++;
    }
    printf("%s", matriz[i]);
    return (0);
}
