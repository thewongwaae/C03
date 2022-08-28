/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:14:20 by hwong             #+#    #+#             */
/*   Updated: 2022/08/28 12:15:41 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_len(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = get_len(dest);
	i = 0;
	if (size <= dest_len)
		return (size + get_len(src));
	while ((src[i] != '\0') && (dest_len + 1 < size))
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (get_len(dest) + get_len(&src[i]));
}

/*
#include <stdio.h>
int main (void)
{
	char str1[] = "testing 1 2";
    char str2 [] = "asdniousiu";
    printf("%i \n", ft_strlcat(str1, str2, 16));
    printf("%s \n", str1);
}
*/