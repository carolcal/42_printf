/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:43:49 by cayamash          #+#    #+#             */
/*   Updated: 2024/11/18 18:55:23 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

// Prototipo do seu ft_printf
int ft_printf(const char *format, ...);

int main()
{
	int count;

	// Teste 0: Hexadecimal com número negativo
	printf("Teste 0:\n");
	count = printf("Org: %x ", -42);
	printf("count: %d\n", count);
	count = ft_printf("Lib: %x ", -42);
	ft_printf("count: %d\n\n", count);

	// Teste 1: String simples
	printf("Teste 1:\n");
	count = printf("Org: %s ", "Hello, world!");
	printf("count: %d\n", count);
	count = ft_printf("Lib: %s ", "Hello, world!");
	ft_printf("count: %d\n\n", count);

	// Teste 2: Inteiro positivo
	printf("Teste 2:\n");
	count = printf("Org: %d ", 42);
	printf("count: %d\n", count);
	count = ft_printf("Lib: %d ", 42);
	ft_printf("count: %d\n\n", count);

	// Teste 3: Inteiro negativo
	printf("Teste 3:\n");
	count = printf("Org: %d ", -42);
	printf("count: %d\n", count);
	count = ft_printf("Lib: %d ", -42);
	ft_printf("count: %d\n\n", count);

	// Teste 4: Caractere
	printf("Teste 4:\n");
	count = printf("Org: %c ", 'A');
	printf("count: %d\n", count);
	count = ft_printf("Lib: %c ", 'A');
	ft_printf("count: %d\n\n", count);

	// Teste 5: Percentual literal
	printf("Teste 5:\n");
	count = printf("Org: %% ");
	printf("count: %d\n", count);
	count = ft_printf("Lib: %% ");
	ft_printf("count: %d\n\n", count);

	// Teste 6: Hexadecimal com número positivo
	printf("Teste 6:\n");
	count = printf("Org: %x ", 255);
	printf("count: %d\n", count);
	count = ft_printf("Lib: %x ", 255);
	ft_printf("count: %d\n\n", count);

	return 0;
}
