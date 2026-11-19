#define _CRT_SECURE_NO_WARNINGS


//第 5 题 ★★：判断素数（函数版）
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
//	if (isprime(n))
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}





//第 6 题 ★★：求两个数的最大公约数
//#include <stdio.h>
//int gcd(int a, int b) {//辗转相除法求最大公约数
//	while (b != 0) {
//		int t = a % b;
//		a = b;
//		b = t;
//	}
//	return a;//返回值一定要写在循环之外
//}
//int main(void) {
//	int x, y;
//	scanf("%d %d", &x, &y);
//	printf("%d\n", gcd(x, y));
//	return 0;
//}



//#include <stdio.h>
//int gcd(int a, int b){
//	while (b != 0) {
//		int t = a % b;
//		a = b;
//		b = t;
//	}
//	return a;
//}
//int main(void) {
//	int x, y;
//	scanf("%d %d", &x, &y);
//	printf("%d\n", gcd(x, y));
//	return 0;
//}



//第 7 题 ★★：函数组合 —— 水仙花数批量判断
















#include <stdio.h>
int isprime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
int main() {
	int n;
	scanf("%d", &n);
	if (isprime(n)) printf("YES\n");
	else printf("NO\n");
	return 0;
}