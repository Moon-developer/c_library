/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:15:31 by mafernan          #+#    #+#             */
/*   Updated: 2017/06/10 04:41:36 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define MAX (2147483647)
#define MIN (-2147483648)

void	ft_putnbr(int n)
{
//	if (n > MAX || n < MIN)
//		return ;
	if (n == MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
		return ;
	}
	ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
	return ;
}
