/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:14:38 by zwalad            #+#    #+#             */
/*   Updated: 2022/02/09 15:37:28 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_test.h"

int	i_counter(char **argv)
{
	char	*str;
	int		fd;
	int		i;

	i = 0;
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		exit(1);
		return (0);
	}
	str = get_next_line(fd);
	i = ft_strlen(str);
	free(str);
	close(fd);
	return (i);
}

int	count_x(char **argv)
{
	char	*le_free;
	int		fd;
	int		i;

	i = 0;
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror(argv[1]);
		exit(1);
	}
	le_free = get_next_line(fd);
	while (le_free)
	{
		i++;
		free(le_free);
		le_free = get_next_line(fd);
	}
	free(le_free);
	close(fd);
	return (i);
}

char	**mapi(char **argv)
{
	int		i;
	int		j;
	int		fd;
	char	**map;

	j = 0;
	i = count_x(argv);
	map = malloc(sizeof(char *) * (i + 2));
	if (!map)
		return (NULL);
	fd = open(argv[1], O_RDONLY);
	while (j <= i)
	{
		map[j] = get_next_line(fd);
		map[j + 1] = NULL;
		j++;
	}
	close(fd);
	return (map);
}

int	mouse(int keycode, t_jinx *p)
{
	int		i;
	void	*s;

	i = keycode;
	s = p->mlx_ptr;
	exit(1);
	return (0);
}

int	main(int argc, char *argv[])
{
	t_jinx	p;

	p = sub_main(&p, argc, argv);
	draw_map(&p);
	mlx_key_hook(p.win_ptr, ft_mouve, &p);
	mlx_hook(p.win_ptr, 17, (1L << 17), mouse, &p);
	mlx_loop(p.mlx_ptr);
	return (0);
}
