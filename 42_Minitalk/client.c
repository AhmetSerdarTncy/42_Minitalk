/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:35:08 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/10/18 10:17:33 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include <signal.h>

void	signalcheck(int pid, char *data)
{
	int				i;
	int				j;
	unsigned char	bit;

	j = 0;
	while (data[j])
	{
		i = 7;
		bit = data[j];
		while (i >= 0)
		{
			if ((bit >> i) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
			i--;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*data;

	if (argc == 3)
	{
		data = argv[2];
		pid = ft_atoi(argv[1]);
		signalcheck(pid, data);
	}
}
