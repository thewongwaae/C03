/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:42:13 by hwong             #+#    #+#             */
/*   Updated: 2022/08/28 12:05:52 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_len(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = get_len(dest);
	i = 0;
	while ((src[i] != '\0') && (i < nb))
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main()
{
	char str1[] = "abcd";
	char str2[] = "efghijklmnopqrstuvwxyz";
	printf("str1 = '%s'", str1);
	printf("\nstr2 = '%s'", str2);
	
	ft_strncat(str1, str2, 5);
	printf("\nappended str1 = '%s'", str1);
}
*/