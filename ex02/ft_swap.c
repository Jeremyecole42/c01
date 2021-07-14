/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbeza <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:35:58 by jbarbeza          #+#    #+#             */
/*   Updated: 2021/07/14 16:36:09 by jbarbeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *pointeur, int	*pointeur2)
{
	int		magie;

	magie = *pointeur;
	*pointeur = *pointeur2;
	*pointeur2 = magie;
}
