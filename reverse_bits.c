/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 15:43:36 by anonymous         #+#    #+#             */
/*   Updated: 2017/01/24 16:43:42 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse(unsigned char octet)
{
	unsigned char tmp;
	unsigned char tmp2;

	tmp = ((octet & 8) >> 3 | ((octet & 4) >> 1));
	tmp2 = ((octet & 2) << 1) | ((octet & 1) << 3);

	return (tmp | tmp2);
}

unsigned char reverse_bits(unsigned char octet)
{
	return(reverse(octet >> 4) | (reverse((octet << 4) >> 4) << 4));
}
