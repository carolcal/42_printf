/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:43:49 by cayamash          #+#    #+#             */
/*   Updated: 2024/11/18 16:44:06 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
    int count1 = printf("hex1: %%\n");
    printf("count1: %d\n", count1);
    int count2 = ft_printf("hex2: %%\n");
    ft_printf("count2: %d\n", count2);
    return(0);
}