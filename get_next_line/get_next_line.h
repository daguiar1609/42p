/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:54:15 by daguiar-          #+#    #+#             */
/*   Updated: 2023/02/10 17:11:19 by daguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 5

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	*ft_strjoin(const char *s1, const char *s2);
char	*get_next_line(int fd);

#endif