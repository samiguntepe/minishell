/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:34:48 by sguntepe          #+#    #+#             */
/*   Updated: 2023/06/21 18:52:06 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Include/minishell.h"

char	*ft_strpcpy(char *dst, char *src, int count)
{
	char	*ptr;
	char	*return_ptr;
	int		index;

	if (!src || !count)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(dst) + count + 1));
	return_ptr = ptr;
	index = -1;
	while (dst && *dst)
		*(ptr++) = *(dst++);
	while (++index < count && src && *src)
		*(ptr++) = *(src++);
	*ptr = 0;
	return (return_ptr);
}
