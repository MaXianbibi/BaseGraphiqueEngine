/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefulls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:35:18 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/17 21:03:12 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../include/graphic_engine.h"

t_data * getData( void )
{
    static t_data * B3D = NULL;
    if (!B3D)
    {
        B3D = calloc(sizeof(t_data), 1);
        if (!B3D)
        {   
            perror("ERROR CALLOC ");
            return (NULL);
        }
    }
    return (B3D);
}

void freeData( void )
{
    t_data * data = getData();

    if (data)
    {
        if (data->color_buffer_texture)
        {
            SDL_DestroyTexture(data->color_buffer_texture);
            data->color_buffer_texture = NULL;
        }
        if (data->color_buffer)
        {
            free(data->color_buffer);
            data->color_buffer = NULL;
        }
        if (data->win)
        {
            SDL_DestroyWindow(data->win);
            data->win = NULL;
        }
        if (data->renderer)
        {
            SDL_DestroyRenderer(data->renderer);
            data->renderer = NULL;
        }
        free (data);
        data = NULL;
    }
    SDL_Quit();
}

void ft_error ( char * error_msg )
{
    fprintf(stderr, "ERROR : %s\n", error_msg);
    SDL_GetError();
    ft_exit ( 1 );
}

void ft_exit(uint32_t n)
{
    freeData();
    exit (n);    
}

mesh_t *    creat_new_mesh( void )
{
    mesh_t * tmp;

    tmp = calloc(sizeof(mesh_t), 1);
    if (!tmp)
    {
        perror("ERROR MALLOC ");
        ft_exit (1);
    }
    return (tmp);
}

void insert_at_head(mesh_t **head, mesh_t *node_to_insert)
{
	mesh_t *tmp;

	tmp = *head;
	if (!*head)
		*head = node_to_insert;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node_to_insert;
	}
}
