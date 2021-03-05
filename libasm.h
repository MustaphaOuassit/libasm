/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:07:27 by mouassit          #+#    #+#             */
/*   Updated: 2021/02/19 11:07:31 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBASM_H
# define LIBASM_H
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <errno.h>
# include <fcntl.h>

size_t      ft_strlen(const char *str);
char        *ft_strcpy(char *dest, const char *str);
int         ft_strcmp(const char *s1, const char *s2);
ssize_t     ft_write(int fildes, void *buf, size_t nbyte);
ssize_t     ft_read(int fildes, void *buf, size_t nbyte);
#endif