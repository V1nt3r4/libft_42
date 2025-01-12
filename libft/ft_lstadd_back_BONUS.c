/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_BONUS.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:35:39 by ari               #+#    #+#             */
/*   Updated: 2024/11/05 22:30:08 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;
    if (*lst != NULL)
    {
        last = ft_lstlast(*lst);
        last->next = new;
        return;
    }
    *lst = new;
}