/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushpullchar.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: espiroux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/05 00:13:45 by espiroux          #+#    #+#             */
/*   Updated: 2013/09/05 00:13:46 by espiroux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHPULL_H
#define PUSHPULL_H

void ft_pull_char_first_line(int countfind, map *mp, char *find_char);
char* cut_first_line_take_char(char *buf,map *mp);
void ft_take_char_first_line(char *buf, char *find_char, int *countfind);

#endif
