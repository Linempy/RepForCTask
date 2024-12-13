#include <stdio.h>


int main()
{
	double arr[20] = { 0 };
	size_t count = 0;
	double summaNum = 0;
	char c;

	while (count < 20 && scanf_s("%lf", &arr[count]) == 1 && getchar() != '') {
		summaNum += arr[count];
		printf("%lf", arr[count]);
		count++;
	}

	size_t lengthArr = sizeof(arr) / sizeof(arr[0]);
	for (size_t i = 0; i < lengthArr; i++) {
		if (arr[i]) count += 1;
	}
	printf("%.2lf", (double)summaNum / count);


}