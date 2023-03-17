/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:16:52 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/16 22:06:06 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/graphic_engine.h"

static void init_data( void )
{
	t_data * data = getData();
	if (!data)
		exit (1);
	data->is_running = init_win();
	if (!data->is_running)
	{
		freeData();
		exit (1);	
	}
}

int main ( void )
{	
	init_data();
	loop_win();
	freeData();
}