/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:38:55 by moseffar          #+#    #+#             */
/*   Updated: 2023/09/27 11:40:22 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	a;
	int	sign;
	int	result;

	a = 0;
	sign = 1;
	result = 0;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sign *= -1;
		a++;
	}
	while (str[a] != '\0' && str[a] >= '0' && str[a] <= '9')
	{
		result *= 10;
		result += str[a] - '0';
		a++;
	}
	return (result * sign);
}
