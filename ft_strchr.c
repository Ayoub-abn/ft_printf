/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:54:16 by aabdenou          #+#    #+#             */
/*   Updated: 2023/12/04 16:54:18 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *) s;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d",ft_strchr("abn",'l'));
// }
