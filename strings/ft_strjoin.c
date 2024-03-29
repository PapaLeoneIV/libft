/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:34:01 by rileone           #+#    #+#             */
/*   Updated: 2024/02/01 15:51:53 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		len;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	out = (char *)malloc(sizeof(char) * (len + 1));
	if (!(out))
		return (0);
	while (*s1)
		out[i++] = *(s1++);
	while (*s2)
		out[i++] = *(s2++);
	out[i] = 0;
	return (out);
}

/*
int	main(void)
{
	const char	*str;
	const char	*str1;
    char *str2;

	str = "lorem ipsum";
    str1 = "dolor sit amet";
    str2 = ft_strjoin(str, str1);
    printf("questa e' la sottostringa : %s\n", str2);
}
*/
