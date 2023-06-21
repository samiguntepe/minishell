/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RunPwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:27:47 by sguntepe          #+#    #+#             */
/*   Updated: 2023/06/21 19:41:41 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Include/minishell.h"

void	run_pwd(t_cmdlist *cmd_node)
{
	char	cwd[256];
	char	*pwd;

	pwd = getcwd(cwd, 256);
	write(cmd_node->outfile, pwd, ft_strlen(pwd));
	write(cmd_node->outfile, "\n", 1);
}
