#include <stdio.h>
#include <stdlib.h>
#include "MyLibForLab.h"
/*
	Сделать работу с указателями на ТЕКСТ НО НЕ МАССИВ С ЦИФРАМИ!!!
*/
using namespace mylab;
int main() {
	
	printf("input text: ");
	int len = 0;
	char* sex = get_string(&len);
	//printf("%d\n", count_numbers(sex, len));
	printf("%d\n", len_number(sex, 0, len));
	int len_numbers = 0;
	char** numbers = parseForNumbers(sex, len, &len_numbers);
	for (int i = 0; i < len_numbers; i++)
	{
		printf("%s ", numbers[i]);
	}



	return 0;
}