/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_distance.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jincpark <jincpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:48:35 by jincpark          #+#    #+#             */
/*   Updated: 2022/11/13 04:59:04 by jincpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "push_swap.h"
#include "limits.h"

int	is_closer_from_top(t_stack *stack, int idx)
{
	int	dis_top;
	int	dis_bot;
	int	idx_cp;

	dis_top = 0;
	dis_bot = 0;
	idx_cp = idx;
	while (idx != stack->top)
	{
		idx = get_new_idx(idx, '-', stack->size);
		dis_top++;
	}
	while (idx_cp != stack->bnx)
	{
		idx_cp = get_new_idx(idx_cp, '+', stack->size);
		dis_bot++;
	}
	if (dis_top <= dis_bot + 1)
		return (1);
	return (0);
}

int	get_distance_top(t_stack *stack, int idx)
{
	int	dis_top;

	dis_top = 0;
	while (idx != stack->tnx)
	{
		idx = get_new_idx(idx, '-', stack->size);
		dis_top++;
	}
	return (dis_top);
}

int	get_distance_bot(t_stack *stack, int idx)
{
	int	dis_bot;

	dis_bot = 0;
	while (idx != stack->bot)
	{
		idx = get_new_idx(idx, '+', stack->size);
		dis_bot++;
	}
	return (dis_bot);
}

int	get_dis_b(t_stack *b, t_info *temp)
{
	int	dis;

	if (is_closer_from_top(b, temp->from))
	{
		dis = get_distance_top(b, temp->from);
		temp->dir_b = 'u';
	}
	else
	{
		dis = get_distance_bot(b, temp->from);
		temp->dir_b = 'd';
	}
	return (dis);
}

int	get_dis_a(t_stack *a, t_info *temp)
{
	int	dis;

	if (is_closer_from_top(a, temp->to))
	{
		dis = get_distance_top(a, temp->to);
		temp->dir_a = 'u';
	}
	else
	{
		dis = get_distance_bot(a, temp->to);
		temp->dir_a = 'd';
	}
	return (dis);
}
