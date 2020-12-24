#ifndef LIBLAB_H
#define LIBLAB_H
namespace mylab {
	char* get_string(int* len);
	void* get_memory(void* p1, int* len, size_t sizeInBytes);
	int isNumber(char ch);
	int isSign(char ch);
	char** parseForNumbers(char* text, int len_text, int* len_mass);
	int count_numbers(char* text, int len_text);
	int len_number(char* text, int iterator, int len_text);

}
#endif