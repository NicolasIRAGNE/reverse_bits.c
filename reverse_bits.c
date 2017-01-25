/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 15:43:36 by anonymous         #+#    #+#             */
/*   Updated: 2017/01/25 23:57:27 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse(unsigned char half)
{
	unsigned char tmp;
	unsigned char tmp2;

	tmp = ((half & 8) >> 3 | ((half & 4) >> 1));
	tmp2 = ((half & 2) << 1) | ((half & 1) << 3);
	return (tmp | tmp2);
}

unsigned char reverse_bits(unsigned char octet)
{
	return(reverse(octet >> 4) | (reverse((octet << 4) >> 4) << 4));
}
