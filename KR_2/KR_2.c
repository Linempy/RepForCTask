#include <stdio.h>


#define TOTAL_MARKS		10

int main()
{
	int nums[] = { -3, 0, 5, -8, 1, 10, 1 };
	int minNum, t;
	size_t pos;
	size_t lengthNums = sizeof(nums) / sizeof(*nums);
	
	for (size_t i = 0; i < lengthNums-1; i++) {
		minNum = nums[i + 1];
		pos = i;
		for (size_t j = i+1; j < lengthNums; j++) {
			if (nums[pos] > nums[j]) {
				minNum = nums[j];
				pos = j;
			}
		}
		if (pos != i) {
			int t = nums[i];
			nums[i] = nums[pos];
			nums[pos] = t;
		}
	}

	for (size_t i = 0; i < lengthNums; i++) {
		printf("%d ", nums[i]);
	}


}