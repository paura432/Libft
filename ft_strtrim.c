/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:58:40 by pramos            #+#    #+#             */
/*   Updated: 2023/01/23 19:58:42 by pramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

char *ft_strtrim(const char *s1, const char *set)
{
	size_t i;
	size_t j;
	char *aux;

	i = 0;
	if (!s1 || !set)
		return((char *)s1);
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, (int)s1[i]) && j >= i)
		i++;
	while (ft_strchr(set, (int)s1[j]) && j >= i)
		j--;
	aux = (char *)malloc((j - i + 2) * sizeof(char));
	if (!aux)
		return (0);
	ft_strlcpy(aux, &s1[i], j - i + 2);
	return(aux);
}

/*
int main (void)
{
	printf("%s", ft_strtrim("hoalho", "ho"));
	return(0);
}
*/