/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juho <juho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 15:25:22 by zheng             #+#    #+#             */
/*   Updated: 2026/07/26 18:46:26 by juho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>

int		check_left_right(char *str_row, int size, char *argv, int row);
int		check_top_bot(char *array, int size, char *argv);
int		check_element(char *array, int size, int row);
void	ft_next_permutation(char *out, int size);
int		is_last_comb(char *str_row, int size);
int		ft_strlen(char *str);
char	*ft_str_row(int row, char *arr, int size);
void	init_first_permutation(char *arr, int row, int size);
void	reset_row(char *arr, int row, int size);
void	set_row(char *str_row, char *arr, int row, int size);
int		check_element(char *array, int size, int row);
void	ft_error(void);
void	ft_print(char *array, int size);
int		solve(char *arr, char *argv, int size, int row);

#endif
