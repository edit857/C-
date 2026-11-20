#define _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//int isprime(int n) {
//	if (n < 2) return 0;
//	for (int i = 2; i < n; i++) {
//		if (n % i == 0) return 0;
//	}
//	return 1;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	if (isprime(n)) printf("YES\n");
//	else printf("NO\n");
//	return 0;
//}



//#include <stdio.h>
//int gcd(int a, int b) {
//	while (b != 0) {
//		int t = a % b;
//		a = b;
//		b = t;
//	}
//	return a;//必须加返回值
//}
//int main() {
//	int x, y;
//	scanf("%d %d", &x, &y);
//	printf("%d\n", gcd(x, y));
//	return 0;
//}



//#include <stdio.h>
//int isshuixianhua(int n) {
//	int x, y, z;
//	x = n % 10;
//	y = n % 100 / 10;
//	z = n % 1000 / 100;
//	if (n == x * x * x + y * y * y + z * z * z) return 1;
//	else return 0;
//}
//int main() {
//	for (int i = 100; i <= 999; i++) {
//		if (isshuixianhua(i)) printf("%d\n", i);
//	}
//	return 0;
//}




//#include <stdio.h>
//int maxofthree(int a, int b, int c) {//第一个函数实现最大值
//	int max = a;
//	if (b > max) max = b;
//	if (c > max) max = c;
//	return max;
//}
//double avgofthree(int a, int b, int c) {
//	return (a + b + c) / 3.0;
//}
//int main(void) {
//	int x, y, z;
//	scanf("%d %d %d", &x, &y, &z);
//	printf("%d\n%.2lf", maxofthree(x, y, z), avgofthree(x, y, z));
//	return 0;
//}




#include <stdio.h>
int findmax(int arr[], int n) {
	int max = arr[0];
	for (int i = 0; i < n; i ++ ) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int main() {
	int n;
	scanf("%d", &n);
	int arr[105];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d\n", findmax(arr, n));
	return 0;
}