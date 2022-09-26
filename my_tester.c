/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_tester.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:14:16 by tsekiguc          #+#    #+#             */
/*   Updated: 2022/06/14 17:48:34 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_tester.h"

int	main(void)
{
	char	*result;

	printf("\n********** MY_LIBFT_TESTER **********\n\n");
	result = toupper_test();
	printf("%-15s  ", "ft_toupper");
	put_result(result);

	result = tolower_test();
	printf("%-15s  ", "ft_lower");
	put_result(result);

	result = strchr_test();
	printf("%-15s  ", "ft_strchr");
	put_result(result);

	result = strrchr_test();
	printf("%-15s  ", "ft_strrchr");
	put_result(result);

	result = strncmp_test();
	printf("%-15s  ", "ft_strncmp");
	put_result(result);

	result = memchr_test();
	printf("%-15s  ", "ft_memchr");
	put_result(result);

	result = memcmp_test();
	printf("%-15s  ", "ft_memcmp");
	put_result(result);

	result = strnstr_test();
	printf("%-15s  ", "ft_strnstr");
	put_result(result);

	result = atoi_test();
	printf("%-15s  ", "ft_atoi");
	put_result(result);

	printf("\n********** LEAK CHECK PART **********\n\n");

	system("leaks libft_01_tester");

	return (0);
}
