/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbeza <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:26:04 by jbarbeza          #+#    #+#             */
/*   Updated: 2021/07/14 16:27:20 by jbarbeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;
	int	tmp1;

	tmp = *a / *b;
	tmp1 = *a & *b;
	*a = tmp;
	*b = tmp1;
}
