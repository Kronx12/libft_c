/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gbaud <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 21:45:03 by gbaud        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 21:47:15 by gbaud       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	char	*res;
	char	*sa;
	char	*sb;

	sa = (char *)s1;
	sb = (char *)s2;
	if (!(r = malloc(sizeof(char) * (ft_strlen(sa) + ft_strlen(sb) + 1))))
		return (NULL);
	res = r;
	while (*sa != '\0')
		*r++ = *sa++;
	while (*sb != '\0')
		*r++ = *sb++;
	*r++ = '\0';
	return (res);
}
