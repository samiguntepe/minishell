/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:31:55 by sguntepe          #+#    #+#             */
/*   Updated: 2023/06/21 19:40:24 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/minishell.h"

void	exit_signal_check(void)
{
	if (!g_core.cmd)
	{
		free_core();
		g_core.exit_status = 131;
		exit(131);
	}
}

void	signals(int sig)
{
	if (sig == 2)
	{
		g_core.exit_status = 130;
		write(1, "\n", 1);
		rl_on_new_line();
		rl_replace_line("", 0);
		rl_redisplay();
	}
}
