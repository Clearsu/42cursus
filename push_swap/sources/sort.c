/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jincpark <jincpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 04:51:44 by jincpark          #+#    #+#             */
/*   Updated: 2022/11/10 16:07:48 by jincpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "circle_queue.h"

/*
필요한 함수
1. 최대, 최솟값 구하는 함수
2. 정렬된 위치에 가기까지 가장 적은 명령을 수행하는 값의 인덱스를 구하는 함수
3. 그 위치까지 보내는 함수
   */

void	pb_by_size(t_circle_queue *a, t_circle_queue *b)
{
	int	diff;

	diff = get_max(a) - get_min(a);
	while (!is_queue_empty(a))
}

void	sort(t_circle_queue *a, t_circle_queue *b)
{
	pb_by_size(a, b);
}
