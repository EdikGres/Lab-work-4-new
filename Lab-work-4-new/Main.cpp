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
	char* text = get_string(&len);
	
	int len_numbers = 0;
	char** numbers = parse_numbers_char(text, len, &len_numbers);

	printf("\nNumbers from text:\n\t");
	for (int i = 0; i < len_numbers; i++)
	{
		printf("%s ", numbers[i]);
	}
	int len_set = 0;
	char** set = set_numbers_char(numbers, len_numbers, &len_set);

	printf("\n\nSET:\n\t");

	for (int i = 0; i < len_set; i++)
	{
		printf("%s ", set[i]);
	}

	return 0;
}