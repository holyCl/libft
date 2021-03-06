/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countnumb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivoloshi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:39:35 by ivoloshi          #+#    #+#             */
/*   Updated: 2017/11/17 15:47:50 by ivoloshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_countnumb(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
			count++;
		str++;
	}
	return (count);
}
