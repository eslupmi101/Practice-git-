#include "lib.hpp"

int practice_1_3_menu()
{
	int a;

	while (true)
	{
		std::cout << std::endl;
		ft_print_cout("Нажмите 1 - ПОВТОРИТЬ");
		ft_print_cout("Нажмите 2 - СПИСОК НОМЕРОВ ПРАКТИКУМА 1");
		a = ft_input();
		if (a == 1)
		{
			if (practice_1_3() != 0)
			{
				ft_print_cout("error practice_1_3_menu -> practice_1_3");
				std::exit(1);
			}
		}
		if (a == 2)
		{
			if (practice_1() != 0)
			{
				ft_print_cout("error practice_1_2_menu -> practice_1");
				std::exit(1);
			}
		}
		else if ((a < 1) || (a > 2))
		{
			ft_print_cout("Ошибка!Введите требуемое число");
		}
		else
		{
			ft_print_cout("error ft_practice_1_2menu");
			exit(1);
		}
	}
	return (1);
}

int practice_1_3()
{
	ft_print_cout("Практикум 1_3");
	if (practice_1_3_rlz() != 0)
	{
		ft_print_cout("error practice_1_3_rlz");
		std::exit(1);
	}
	print_rlz();
	if (practice_1_3_menu() != 0)
	{
		ft_print_cout("error practice_1_3_rlz");
		exit(1);
	}
	return (1);
}