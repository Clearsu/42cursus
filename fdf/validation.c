/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jincpark <jincpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:41:09 by jincpark          #+#    #+#             */
/*   Updated: 2022/10/10 18:29:19 by jincpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "stdio.h"
static void	map_col_len_check(t_raw_map *raw_map)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (raw_map->map_str[0][i])
		i++;
	raw_map->col_len = i;
	j = 1;
	while (raw_map->map_str[j])
	{
		k = 0;
		while (raw_map->map_str[j][k])
			k++;
		if (k < i)
			error(3);
		j++;
	}
}

int	is_valid_map(t_raw_map *raw_map)
{
	map_col_len_check(raw_map);
	return (1);
}
