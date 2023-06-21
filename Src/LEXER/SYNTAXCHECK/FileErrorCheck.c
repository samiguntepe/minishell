/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileErrorCheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:31:15 by sguntepe          #+#    #+#             */
/*   Updated: 2023/06/21 19:43:36 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Include/minishell.h"

int	file_error_check(t_lexlist *lex_list)
{
	if (!lex_list->next || (lex_list->next && lex_list->next->type != TEXT))
	{
		if (lex_list->next)
		{
			print_error("-bash: syntax error near unexpected token '",
				lex_list->next->content, "'\n");
			g_core.exec_output = 258 ;
			free_lexer_without_heradoc(lex_list);
			return (0);
		}
		else
		{
			print_error("-bash: syntax error near unexpected token '",
				"newline", "'\n");
			g_core.exec_output = 258 ;
			free_lexer_without_heradoc(lex_list);
			return (0);
		}
	}
	return (1);
}
