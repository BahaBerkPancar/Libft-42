/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpancar <bpancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:13:05 by bpancar           #+#    #+#             */
/*   Updated: 2024/10/17 15:46:37 by bpancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int str)
{
	if ((str <= 'z' && str >= 'a') || (str <= 'Z' && str >= 'A'))
		return (1);
	if ((str <= '9' && str >= '0'))
		return (1);
	return (0);
}
