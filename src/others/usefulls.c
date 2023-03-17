/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singleton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:35:18 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/17 13:40:40 by justinmorne      ###   ########.fr       */
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

void ft_error ( void )
{
    fprintf(stderr, "ERROR : ");
    SDL_GetError();
    ft_exit ( 1 );
}

void ft_exit(uint32_t n)
{
    freeData();
    exit (n);    
}