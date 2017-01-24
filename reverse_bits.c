/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 15:43:36 by anonymous         #+#    #+#             */
/*   Updated: 2017/01/24 16:02:16 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse(unsigned char octet)
{
	unsigned char tmp;
	unsigned char tmp2;
	unsigned char tmp3;
	unsigned char tmp4;

	tmp = (octet & 8) >> 3;
	tmp2 = (octet & 4) >> 1;
	tmp3 = (octet & 2) << 1;
	tmp4 = (octet & 1) << 3;
	tmp |= tmp2;
	tmp |= tmp3;
	tmp |= tmp4;
	return (tmp);
}

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char tmp;
	unsigned char tmp2;
	tmp = octet >> 4;
	tmp2 = octet << 4;
	tmp2 >>= 4;
	return(reverse(tmp) | (reverse(tmp2) << 4));
}
