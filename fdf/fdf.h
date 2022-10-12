/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jincpark <jincpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:12:19 by jincpark          #+#    #+#             */
/*   Updated: 2022/10/12 21:57:48 by jincpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include "mlx.h"
# include "macro.h"
# include "libft.h"

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

typedef struct s_point
{
	int	x;
	int	y;
	int	z;
	int	u;
	int	v;
}	t_point;

typedef struct s_raw_map
{
	char	***map_str;
	size_t	row_len;
	size_t	col_len;
}	t_raw_map;

typedef struct s_map_data
{
	t_point		**point;
	size_t		row_len;
	size_t		col_len;
}	t_map_data;

typedef struct s_line_factors
{
	int	dx;
	int	dy;
	int	increment_x;
	int	increment_y;
}	t_line_factors;

int		is_valid_map(t_raw_map *raw_map);
void	read_and_save(t_raw_map *raw_map, char *argv);
void	put_map_data(t_raw_map *raw_map, t_map_data *map_data);
void	error(size_t n);
int		ft_htoi(char *str);
void	show_image(t_map_data *map_data);
void	my_mlx_pixel_put(t_data *img, int x, int y, int color);
void	put_lines(t_map_data *map_data, t_data *img);
void	rotate_map(t_map_data *map_data, size_t row_len, size_t col_len);
void	iso_projection(t_map_data *map_data);
void	bresenham(t_data *img, int x_start, int y_start, int x_fin, int y_fin);

#endif
