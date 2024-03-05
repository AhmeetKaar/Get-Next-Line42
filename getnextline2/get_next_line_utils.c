/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akar <akar@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:20:30 by erkoc             #+#    #+#             */
/*   Updated: 2024/02/16 21:58:06 by akar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int control(char *dst, char c)
{
	int i;

	i = 0;

	if (!dst)
		return(0);
	while (dst[i])
	{
		if(dst[i] == c)
			return(1);
		i++;
	}
	return(0);
}

char	*ft_strjoin(char *dst, char *src)
{
	char	*allocated;
	int		i;
	int		x;

	allocated = malloc(sizeof(char) * (ft_strlen(dst) + ft_strlen(src) + 1));
	if (!allocated)
		return (NULL);
	i = 0;
	x = 0;
	if (!dst)
	{
		dst = malloc(sizeof(char));
		if (!dst)
			return (NULL);
		dst[0] = '\0';
	}
	while (dst[i])
		allocated[x++] = dst[i++];
	i = 0;
	while (src[i])
		allocated[x++] = src[i++];
	allocated[x] = '\0';
	free (dst);
	return (allocated);
}
