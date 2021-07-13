/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbeza <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:17:21 by jbarbeza          #+#    #+#             */
/*   Updated: 2021/07/13 19:12:45 by jbarbeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *pointeur, int	*pointeur2)
{
	int		magie;

    magie = *pointeur;
	*pointeur = *pointeur2;
	*pointeur2 = magie;
}
int main ()
{
    int a;    int b;
    a = 5;
    b = 10;
    int *pointeur;
    int *pointeur2;
    pointeur = &a;
    pointeur2 = &b;
    ft_swap(pointeur, pointeur2);
    printf("%d %d", *pointeur, *pointeur2);
}
