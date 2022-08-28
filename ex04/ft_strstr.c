/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:05:35 by hwong             #+#    #+#             */
/*   Updated: 2022/08/28 11:24:18 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
start both str at index 0, compare the str1 to str2.
if equal, move on to next index
compare again until while breaks
after the while, if str2 is been fully iterated
we have found our needle in the haystack
return the index at which str1 and str2 first matched
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && (str[i + j] != '\0'))
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char str1[] = "testing 42kl 123 aaaa";
	char str2[] = "42";

	printf("%s", ft_strstr(str1, str2));
}
*/