/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:49:15 by moseffar          #+#    #+#             */
/*   Updated: 2023/09/25 10:05:48 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	a;

	len = 0;
	a = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[a] != '\0')
	{
		dest[len + a] = src[a];
		a++;
	}
	dest[len + a] = '\0';
	return (dest);
}
