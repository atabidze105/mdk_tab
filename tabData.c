#include <stdio.h>
#include <stdint.h>

int main(int args, char** argv)
{
	printf("size of int8_t: %lu\n", sizeof(int8_t)); //char
	printf("size of int16_t: %lu\n", sizeof(int16_t)); //short
	printf("size of int32_t: %lu\n", sizeof(int32_t)); //int
	printf("size of int64_t: %lu\n", sizeof(int64_t)); //long

	printf("size of int_least8_t: %lu\n",sizeof(int_least8_t));//char
	printf("size of int_least16_t: %lu\n",sizeof(int_least16_t));//short
	printf("size of int_least32_t: %lu\n",sizeof(int_least32_t));//int
	printf("size of int_least64_t: %lu\n",sizeof(int_least64_t));//long

	printf("size of int_fast8_t: %lu\n",sizeof(int_fast8_t));//char
	printf("size of int_fast16_t: %lu\n",sizeof(int_fast16_t));//short
	printf("size of int_fast32_t: %lu\n",sizeof(int_fast32_t));//int
	printf("size of int_fast64_t: %lu\n",sizeof(int_fast64_t));//long

	printf("size of intmax_t: %lu\n",sizeof(intmax_t));//long
							       
	printf("size of float: %lu\n",sizeof(float));//float
	printf("size of double: %lu\n",sizeof(double));//double
	printf("size of long double: %lu\n",sizeof(long double));//long double
	return 0;
}
