/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:15:48 by gotunc            #+#    #+#             */
/*   Updated: 2023/02/16 14:23:44 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	sayidegeri;
	int	*dizi;
	int	i;

	i = 0;
	sayidegeri = max - min;
	if (max <= min)
		return (0);
	dizi = (int *)malloc(sayidegeri * sizeof(int));
	while (min < max)
	{
		dizi[i] = min;
		i++;
		min++;
	}
	dizi[i] = '\0';
	return (dizi);
}
