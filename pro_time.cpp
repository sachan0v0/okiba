
#include <stdio.h>
#include <intrin.h>

int main()
{
				unsigned __int64 i;
				i = __rdtsc();
				printf_s("%I64d \n", i);
}