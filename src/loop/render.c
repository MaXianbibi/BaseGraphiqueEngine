/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:19:53 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/16 22:24:03 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../include/graphic_engine.h"


void render_win( void )
{
    GATA
    
    SDL_SetRenderDrawColor(data->renderer, 255, 100, 0, 255);
    SDL_RenderClear(data->renderer);
    SDL_RenderPresent(data->renderer);
}