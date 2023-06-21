/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:32:36 by sguntepe          #+#    #+#             */
/*   Updated: 2023/06/21 18:52:06 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Include/minishell.h"

/*
	Lexer tarafından ayıklanan parçaları kullanarak geçerli komut satırı oluşturur.
	Parçaları inceler ve bu parçaların anlamlı bir bütün oluşturduğundan emin olur.
	örn - cd komutu için bir parametre alacğı belirlenir.
*/

void	parser(void)
{
	g_core.cmd_table = NULL;
	create_cmdtable(g_core.lex_table);
	fill_cmdtable();
	create_files(g_core.cmd_table);
}
