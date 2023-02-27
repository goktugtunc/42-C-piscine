/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 01:23:29 by marvin            #+#    #+#             */
/*   Updated: 2023/02/24 01:30:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H
# define MIN(a, b) ((a) > (b) ? (b) : (a))

typedef enum e_bool
{
	false = 0,
	true = 1,
}	t_bool;

# define TRUE 1
# define FALSE 0

typedef struct a_info
{
	char	**matrix;
	char	engel;
	char	bosluk;
	char	full;
	int		satir_sayisi;
	int		satir_uzunluk;
	int		max_uzunluk;
	int		max_y;
	int		max_x;
}	t_info;

typedef struct map_clone
{
	int	x;
	int	y;
}	t_clone;

#endif
