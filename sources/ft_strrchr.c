/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:15:55 by axcastil          #+#    #+#             */
/*   Updated: 2024/06/16 13:25:00 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*string;

	string = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			string = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (string);
}
//se va iterando y si encuentra un caracter igual,
//almacena la posicion a "string",
//y lo hace hasta llegar al final
/*int main(int argc, char **argv)
{
	
	char	ultimo = ft_strrchr(string, ptr);
	printf ("%d", ultimo - string);
	return 0;
}*/
