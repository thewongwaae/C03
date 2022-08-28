/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:21:01 by hwong             #+#    #+#             */
/*   Updated: 2022/08/28 10:58:41 by hwong            ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;

	dest_len = get_len(dest);
	while (*src != '\0')
	{
		dest[dest_len] = *src;
		dest_len++;
		src++;
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
	
	ft_strcat(str1, str2);
	printf("\nappended str1 = '%s'", str1);
}
*/