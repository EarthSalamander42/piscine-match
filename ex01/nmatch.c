/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 15:36:26 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/15 16:29:07 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);
	else if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1 + 1, s2 + 1));
	else
		return (0);
}

int		main(void)
{
	char *s1;
	char *s2;

	s1 = "bonjour";
	s2 = "bo*jour";
	printf("Result: %d", nmatch(s1, s2));
	return (0);
}
