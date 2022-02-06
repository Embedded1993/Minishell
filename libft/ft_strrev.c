/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriia hnutova                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 11:56:08 by valeriia          #+#    #+#             */
/*   Updated: 2020/01/28 19:58:25 by valeriia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*rev;
	int		len;

	len = ft_strlen(str);
	rev = (char *)malloc(sizeof(char *) * (len + 1));
	while (len--)
		rev[len] = *(str++);
	return (rev);
}
