/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_wallo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:49:27 by zwalad            #+#    #+#             */
/*   Updated: 2022/02/10 01:27:30 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "so_test.h"

void	real_check(t_jinx *p)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = ft_strlen(p->dmap[0]);
	while (p->dmap[i])
	{
		k = ft_strlen(p->dmap[i]);
		if (k > j)
		{
			ez_exit(i);
		}
		i++;
	}
}
