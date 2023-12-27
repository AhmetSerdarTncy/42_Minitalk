/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay  <ahtuncay@student.42kocael>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:39:41 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/10/18 09:59:05 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc((total_len * sizeof(char)) + 1);
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = ((unsigned char *)s1)[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		result[i++] = ((unsigned char *)s2)[j++];
	result[i] = '\0';
	return (result);
}
