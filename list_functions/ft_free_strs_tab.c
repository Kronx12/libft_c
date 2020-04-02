/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_strs_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:31:10 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/02 10:32:50 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_free_strs_tab(char **tab)
{
	int len;

	len = 0;
	while (tab[len])
		free(tab[len++]);
	free(tab);
	return (1);
}