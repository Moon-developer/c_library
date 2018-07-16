/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 11:29:59 by mafernan          #+#    #+#             */
/*   Updated: 2017/08/29 11:39:36 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cmd_unknown(char *cmd)
{
	ft_putstr(GREEN"shell🐚 : "YELLOW);
	ft_putstr("command not found: "RESET);
	ft_putendl(cmd);
}
