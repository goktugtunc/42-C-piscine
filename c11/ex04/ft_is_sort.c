/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:28:58 by marvin            #+#    #+#             */
/*   Updated: 2023/02/27 09:29:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sirala;

	i = 0;
	sirala = 1;
	while (i < length - 1 && sirala)
	{
		if ((*f)(tab[i], tab [i + 1]) < 0)
			sirala = 0;
		i++;
	}
	if (sirala != 1)
	{
		sirala = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
