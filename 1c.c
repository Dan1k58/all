/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1c.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrunt <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 12:18:35 by ngrunt            #+#    #+#             */
/*   Updated: 2018/09/30 13:00:29 by ngrunt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		ft_putchar(str[l]);
		l++;
	}
}

int main(void)
{
	ft_putstr("HELLO");
	ft_putchar('\n');
	return (0);
}


