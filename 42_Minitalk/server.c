/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:41:43 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/10/18 10:12:52 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "Libft/libft.h"

void	bitstorage(int poolsignal)
{
	static unsigned char	x;
	static int				i;

	if (poolsignal == SIGUSR1)
		x |= 1;
	i++;
	if (i == 8)
	{
		ft_printf("%c", x);
		i = 0;
		x = 0;
	}
	x = x << 1;
}

int	main(void)
{
	ft_printf("Server started with PID: %d\n ", getpid());
	signal(SIGUSR1, bitstorage);
	signal(SIGUSR2, bitstorage);
	while (1)
		pause();
}
