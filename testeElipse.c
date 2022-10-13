#include <stdio.h>
#include <stdarg.h>

void	testeElipse(const int numParam, ...)
{
	va_list	list;
	int count;

	va_start(list, numParam);
	count = 0;
	while (count < numParam)
	{
		count++;
		printf("%d ", va_arg(list, int));
	}
	va_end(list);
}

int main()
{
	testeElipse(4, 1, 2, 3, 4);
	return 0;
}
