/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriia hnutova                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 21:20:26 by valeriia          #+#    #+#             */
/*   Updated: 2020/01/15 15:39:32 by valeriia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(size_t n, int base, int fd)
{
	size_t	digit;

	digit = n % base;
	n /= base;
	if (n)
		ft_putnbr_base_fd(n, base, fd);
	digit = digit < 0xA ? ('0' + digit) : ('a' + digit - 0xA);
	ft_putchar_fd(digit, fd);
}
