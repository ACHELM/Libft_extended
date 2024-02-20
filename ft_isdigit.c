/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:48:04 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 19:54:43 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief checks if the character c is a digit.
 * 
 * @param c character to be evaluated.
 * @return int returns 1 if character is a digit, 0
 * otherwise.
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
