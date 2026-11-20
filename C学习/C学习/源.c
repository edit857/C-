#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//int findmax(int arr[], int n) {
//	int max = arr[0];
//	arr[0] = 999;
//	for (int i = 0; i < n; i++) {
//		if (arr[i] > max) max = arr[i];
//	}
//	return max;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[105];
//	for (int i = 1; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("%d\n", findmax(arr, n));
//	printf("%d\n", arr[0]);
//	return 0;
//}



#include <stdio.h>

int main(void) {
	/* 在此编写 Day 9：冒泡排序 */
	int n;
	scanf("%d", &n);
	int arr[105] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n - 1; i++) {//冒泡排序核心
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (i > 0) printf(" ");
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}
