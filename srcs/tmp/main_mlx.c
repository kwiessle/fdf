#include "../includes/fdf.h"
#include <mlx.h>

int		main(void)
{
	t_mlx	env;

	env.mlx = mlx_init();
	env.win = mlx_new_window(env.mlx, 200, 200, "zdp");
	mlx_loop(env.mlx);
	return (0);
}
