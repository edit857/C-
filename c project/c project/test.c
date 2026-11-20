#define _CRT_SECURE_NO_WARNINGS

//冒泡排序  升序  典型代码
//#include <stdio.h>
//int main(void) {
//	int n;
//	scanf("%d", &n);
//	int arr[105] = { 0 };
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n - 1; i++) {//冒泡排序核心
//		for (int j = 0; j < n - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {     
//				int t = arr[j];      //规律：t都是先等于较大值
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (i > 0) printf(" ");
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}




//冒泡排序  降序版本  变式
//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[1005] = { 0 };
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < n - i - 1; j++) {
//			if (arr[j] < arr[j + 1]) {    
//				int t = arr[j + 1];  //规律：t都是先等于较大值
//				arr[j + 1] = arr[j]; //首尾相连arr
//				arr[j] = t;          //开头结尾都是t
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}





//终极版本变式  降序+计数
//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[1005] = { 0 };
//	int count = 0;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < n - i - 1; j++) {
//			if(arr[j] < arr[j+1]){
//				int t = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = t;
//				count++;
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}



