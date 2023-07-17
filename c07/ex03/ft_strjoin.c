/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:16:03 by gotunc            #+#    #+#             */
/*   Updated: 2023/02/16 15:56:50 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dizi;
	int		i;
	int		j;
	int		diziindex;

	dizi = malloc(sizeof(strs));
	i = 0;
	diziindex = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			dizi[diziindex++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			dizi[diziindex++] = sep[j++];
		}
		i++;
	}
	dizi[diziindex] = '\0';
	return (dizi);
}
