/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:30:59 by sguntepe          #+#    #+#             */
/*   Updated: 2023/06/21 18:52:06 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Include/minishell.h"

/*
	<a.txt cat| ls| wc -l | echo "ahmet $HOME''"selam
	<, a.txt, cat, |, ls, |, wc, -l, |, echo,
	"ahmet $HOME''"selam'$PATH'ec

	This section purpose is seperate the commands to linked list.
	function seperates each command also flags to linked list.
*/
void	lexer(void)
{
	g_core.lex_table = NULL;
	create_lexlist(g_core.cmd, &(g_core.lex_table));
	classify(g_core.lex_table);
	syntax_check();
}
