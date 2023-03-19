/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_win.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:06:55 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/18 18:31:57 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graphic_engine.h"

void update()
{
    GATA
    mesh_t * tmp = data->head;

    while (tmp)
    {
        tmp->rotation.y += 0.025;
        tmp->rotation.z += 0.025;
        tmp->rotation.x += 0.025;
        
        for (u_int32_t j = 0; j < N_POINTS; j++)
        {
            vec3_t test = tmp->mesh[j];
            test = meshRotationX(test, tmp->rotation.x);   
            test = meshRotationY(test, tmp->rotation.y);   
            test = meshRotationZ(test, tmp->rotation.z);  
            

            tmp->projection[j] = project(test);
        }
        tmp = tmp->next;
    }
}

bool loop_win(void)
{
    GATA
    render_cube();
    while (data->is_running)
    {
        process_input();
        update();
        render_win();
        SDL_Delay(1000 / 60);
    }
    return (SUCCESS);
}