/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbeza <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:44:11 by jbarbeza          #+#    #+#             */
/*   Updated: 2021/07/13 14:59:34 by jbarbeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int main ()
{
	int a;
	int *nbr;

	a = 55;
	nbr = &a ;
	printf("%d", a);
	ft_ft(nbr);
	printf("%d", a);
}


