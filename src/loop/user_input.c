/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:07:39 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/16 18:18:41 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graphic_engine.h"

void process_input(void)
{
    GATA
    SDL_Event event;

    SDL_PollEvent(&event);
    switch (event.type)
    {
        case SDL_QUIT:
            data->is_running = 0;
            break;
        case SDL_KEYDOWN:
        {
            switch (event.key.keysym.sym)
            {
                case SDLK_ESCAPE:
                    data->is_running = 0;
                break;
            }
        }
        break;
    }
}