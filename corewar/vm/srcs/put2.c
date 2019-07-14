/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadogam <skadogam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 17:30:34 by skadogam          #+#    #+#             */
/*   Updated: 2019/02/21 17:33:10 by skadogam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	put_cyan(int n)
{
	ft_printf("\x1B[36m%.2x\x1b[0m ", n);
}

void	put_mauve(int n)
{
	ft_printf("\x1B[35m%.2x\x1b[0m ", n);
}