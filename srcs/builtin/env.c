/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriia <valeriia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 19:29:54 by valeriia          #+#    #+#             */
/*   Updated: 2021/03/12 19:29:56 by valeriia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	run_env(void)
{
	size_t	i;

	i = 0;
	g_status = 0;
	while (g_envs[i])
	{
		if (ft_strchr(g_envs[i], '='))
		{
			ft_putstr_fd(g_envs[i], 1);
			ft_putchar_fd('\n', 1);
		}
		i++;
	}
	return (1);
}
