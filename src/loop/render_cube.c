/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_cube.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:40:49 by justinmorne       #+#    #+#             */
/*   Updated: 2023/03/17 21:27:30 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../include/graphic_engine.h"

vec2_t project(vec3_t point)
{
    GATA
    vec2_t projected = { 0 };


    point.z -= data->camera.pos.z;
    projected.x = point.x * fov_factore / point.z; 
    projected.y = point.y * fov_factore / point.z;


    return (projected);
}

void render_cube( void )
{
    GATA
    vec3_t * cube = calloc(sizeof(vec3_t), N_POINTS);
    vec2_t * c_p = calloc(sizeof(vec2_t), N_POINTS);
    mesh_t * tmp = creat_new_mesh();
    u_int32_t i = 0;
    
    for (float x = -1; x <= 1; x += 0.25)
        for (float y = -1; y <= 1; y += 0.25)
            for (float z = -1; z <= 1; z += 0.25)
            {
                vec3_t tmp = {.x = x, .y = y, .z = z};
                cube[i] = tmp;
                i++;
            }

    tmp->mesh = cube;
    tmp->projection = c_p;
    insert_at_head(&data->head, tmp);
}