#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//数组
//#include <stdio.h>
//int main() {
//	//数组的形式语法形式:  type arr_name[常量值]
//		//int math[20];//创建数组
//		//char ch[10];
//		//double weight[30];//类型各不相同  元素类型也不同
//
//	int age = 18;//变量的创建  初始化
//	//那么数组如何进行初始化？
//	//int data[10] = {1,2,3,4,5,6,7,8,9,10};//数组的初始化
//	//double d[5] = {1.2,2.3,3.4,4.5,5.6};//以上两个为完全初始化：大括号内无省略
//
//	//不完全初始化:大括号内有省略--剩余元素默认为0
//	//int data[10] = { 1,2,3,4,5 };
//	//double d[5] = { 1.2 };
//
//	//int arr1[5] = { 1,2,3,4,5 };
//	//int arr2[] = { 1,2,3,4,5 };//两种写法完全相同  编译器会自动计算
//	
//	//易错警示
//	//int arr3[10] = { 0 };//数组初始化值为10个元素  10个0
//	//int arr4[] = { 0 };//1个元素  这时就不能省略不写  1个0
//	
//
//	//数组的类型
//	int arr[10];//arr是数组，这个数组有类型吗？
//	//int 表示的是数组元素的类型
//	//int [10]是数组的类型
//
//	printf("%zu\n", sizeof(arr));
//	printf("%zu\n", sizeof(int [10]));//数组的类型形象举例 两者等价
//	
//	int arr2[5];//类型：int [5]
//	printf("%zu\n", sizeof(int [5]));
//	return 0;
//
//}





////一维数组的使用
//#include <stdio.h>
//int main(){
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9 
//	//arr[6]就可以输出7
//	//printf("%d\n", arr[6]);//7  []是一个操作符，下标引用操作符
//	//arr[6] = 70;//赋值
//	//printf("%d\n", arr[6]);//70
//
//	//数组元素的打印  打印所有元素--使用*循环*重要基础
//
//	int i = 0;
//	//输出
//	for (i = 0; i < 10; i++)//数组下标0-9循环
//	{
//		//只需输出arr[i]
//		printf("%d ", arr[i]);
//	}
//	//*变式*修改数组的内容为-1~-10
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = -(i+1);
//		printf("%d ", arr[i]);
//	}
//
//
//
//
//	return 0;
//}







//数组元素的输入
//*向数组中输入内容*
//#include <stdio.h>
//int main() {
//	int arr[10] = { 0 };//初始化 10个0
//
//	int i = 0;
//	//输入1-10  10个数
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);//arr[i]是数组元素，不是数组。*数组不取地址，数组元素必取地址*
//	}
//	//输出
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}







//一维数组在内存中的存储
//#include <stdio.h>
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p\n", &arr[i]);//%p-是用来打印地址的
//	}
//		return 0;
//	}
//






//
//#include <stdio.h>
//
//int main(void) {
//	int n;
//	int flag = 1;
//	scanf("%d", &n);
//	if (n < 2) flag = 0;
//	for (int i = 2; i< n; i++) {
//		if (n % i == 0) {
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}




//#include <stdio.h>
//
//int main(void) {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//
//int main(void) {
//	int n;
//	scanf("%d", &n);
//	for (int i = 2; i < n; i++) {
//		if (n % i == 0) {
//			printf("NO\n");
//			return 0;
//		}
//	}
//	if (n < 2) printf("NO\n");
//	else printf("YES\n");
//	return 0;
//}



//#include <stdio.h>
//int main() {
//	int n, flag = 1;
//	scanf("%d", &n);
//	if (n < 2) flag = 0;
//	for (int i = 2; i * i <= n; i++) {
//		if (n % i == 0) { flag = 0; break; }
//	}
//	printf(flag ? "YES\n" : "NO\n");
//}




//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n - i + 1; j++) {
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//上三角九九乘法表
//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (j < i)//代码核心所在
//				printf("       ");
//			else
//				printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//函数最小完整代码示例  结构示例   函数头 函数体 以及返回值 形参实参的定义      int max(int x)
//#include <stdio.h>
//
///* 函数定义：写在 main 外面 */
//int square(int x) {          /* 返回类型 int，一个 int 参数 */
//	return x * x;            /* 把结果交还给调用者 */
//}
//
//int main(void) {
//	int result = square(5);  /* 函数调用：用变量接住返回值 */
//	printf("%d\n", result);  /* 输出 25 */
//	return 0;
//}


//形参与实参
//#include <stdio.h>
//int add(int a, int b) {        /* a、b 是【形参】：函数内部的占位变量 */
//	return a + b;
//}
//
//int main(void) {
//	int x = 3, y = 4;
//	int s = add(x, y);         /* x、y 是【实参】：真正传进去的值 */
//	printf("%d\n", s);         /* 7 */
//	return 0;
//}



//值传递参数机制
//#include <stdio.h>
//
//void addTen(int x) {
//	x = x + 10;                /* 改的是副本，原件不受影响 */
//	printf("函数内 x = %d\n", x);   /* 15 */
//}
//
//int main(void) {
//	int a = 5;
//	addTen(a);
//	printf("main 里 a = %d\n", a);  /* 仍然是 5！*/
//	return 0;
//}



//那想让函数"改"main 里的变量怎么办？
//int addTen(int x) {
//	return x + 10;             /* 把新值交回去 */
//}
//
//int main(void) {
//	int a = 5;
//	a = addTen(a);             /* main 里自己接住并覆盖 */
//	printf("%d\n", a);         /* 15 */
//	return 0;
//}



//无参数函数
//void sayHello(void) {          /* 参数列表写 void 或留空，表示不需要参数 */
//	printf("Hello!\n");
//}
//
//int main(void) {
//	sayHello();                /* 调用时括号里什么也不写，但括号不能省 */
//	return 0;
//}



//数组作为函数参数（重要，且与值传递相反！）

/* 数组参数写成 int arr[]，长度必须单独传一个参数 n */
//int findMax(int arr[], int n) {
//	int max = arr[0];
//	for (int i = 1; i < n; i++) {
//		if (arr[i] > max) max = arr[i];
//	}
//	return max;
//}
//
//int main(void) {
//	int scores[6] = { 3, 15, 7, 22, 9, 4 };
//	printf("%d\n", findMax(scores, 6));   /* 调用时只写数组名，不带 [] */
//	return 0;
//}




//可变参数（进阶，stdarg.h）
//#include <stdarg.h>            /* 可变参数必备头文件 */
//
///* count 后面可以跟任意多个 int，count 表示"后面有几个" */
//int sum(int count, ...) {
//	va_list args;              /* ① 声明一个参数游标 */
//	va_start(args, count);     /* ② 游标定位到 count 之后 */
//
//	int total = 0;
//	for (int i = 0; i < count; i++) {
//		total += va_arg(args, int);   /* ③ 每次取出一个 int */
//	}
//
//	va_end(args);              /* ④ 清理（必须写） */
//	return total;
//}
//
//int main(void) {
//	printf("%d\n", sum(3, 10, 20, 30));      /* 60 */
//	printf("%d\n", sum(5, 1, 2, 3, 4, 5));   /* 15 */
//	return 0;
//}




//#include <stdio.h>
//
///* 求第 n 项（1-based：f(1)=f(2)=1） */
//long long fib(int n) {
//	if (n <= 2) return 1;                 /* ① 边界：前两项都是 1 */
//	return fib(n - 1) + fib(n - 2);       /* ② 递推：直接照抄公式 */
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%lld\n", fib(n));
//	return 0;
//}



//自定义函数求：列出 1 到n 之间所有既不包含数字4 又不是4 的倍数的整数，按升序输出
//#include <stdio.h>
//int panduan(int n) {
//	while (n) {
//		if (n % 10 == 4)
//			return 0;
//		n /= 10;
//	}
//	return 1;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		if (i % 4 != 0) {
//			if (panduan(i))
//				printf("%d ", i);
//		}
//	}
//	return 0;
//}



//裴波纳切数列小题
//#include <stdio.h>
//
//int main(void) {
//	/* 在此编写 Day 5：斐波那契数列 */
//	int n;
//	long long a = 1, b = 1, c;
//	scanf("%d", &n);
//	if (n <= 2) {printf("1\n"); return 0;}
//	for (int i = 3; i <= n; i++) {
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	printf("%lld\n", b);
//	return 0;
//}




//朴素递归求爬楼梯问题
//int fib(int n) {
//	if (n == 1) return 1;
//	if (n == 2) return 2;
//	return fib(n - 1) + fib(n - 2);
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}



//更优的方法：记忆化递归
//int memo[31];
//
//int fib(int n) {
//	if (n == 1) return 1;
//	if (n == 2) return 2;
//	if (memo[n] != 0) return memo[n];//核心步骤：算过就直接取缓存  优解之一
//	return fib(n - 1) + fib(n - 2);
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}


//最优解时空复杂度最低   竞赛常用手段：递推滚动变量
//int main() {
//	int a = 1, b = 2,n;
//	scanf("%d", &n);
//	if (n == 1) { printf("%d\n", a); return 0; }
//	for (int i = 3; i <= n; i++) {
//		int c = a + b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}




//变式：裴波纳切数列的求和 核心为条件判断 + sum += b
//int main(void) {
//	int n;
//	long long a = 1, b = 1, c,sum = 2;
//	if (scanf("%d", &n) != 1) return 0;
//	if (n == 1) { printf("1\n"); return 0; }
//	if (n == 2) { printf("%lld\n", sum); return 0; }
//	for (int i = 3; i <= n; i++) {
//		c = a + b;
//		a = b;
//		b = c;
//		sum += b;
//	}
//	printf("%lld\n", sum);
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int count = 0;
//	for (int i = 1; i <= 202504; i++) {
//		if ((i % 10 + i % 100 / 10 + i % 1000 / 100 + i % 10000 / 1000 + i % 100000 / 10000 + i % 1000000 / 100000) % 5 == 0)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



//#include <stdio.h>
//
//int main(void) {
//	/* 在此编写 Day 6：数组求和与平均值 */
//	int n;
//	scanf("%d", &n);
//	int arr[105];
//	int sum = 0;
//	double avg;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	avg = (double)sum / n;
//	printf("%d %.2lf\n", sum, avg);
//	return 0;
//}



//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[10005];
//	double sum = 0.0;
//
//	/* 第一阶段：读数据 + 累加总分（此阶段不做任何判断） */
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//
//	/* 此时 sum 才是完整总分，平均分才能定下来 */
//	double avg = sum / n;
//
//	/* 第二阶段：拿完整平均分逐个比较 */
//	int count = 0;
//	for (int i = 0; i < n; i++) {
//		if (arr[i] > avg) count++;
//	}
//	printf("%.2lf\n%d\n", avg, count);
//	return 0;
//}




//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[10005];
//	int zcount = 0, fcount = 0, count = 0;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		if (arr[i] < 0) fcount++;
//		if (arr[i] == 0) count++;
//		if (arr[i] > 0) zcount++;
//	}
//	printf("%d %d %d\n", zcount, fcount, count);
//	return 0;
//}






//处理型函数（操作数组，借"数组传参非复制"的特性）
//void reverse(int arr[], int n) {       /* 原地逆序，直接改 main 的数组 */
//	for (int i = 0, j = n - 1; i < j; i++, j--) {
//		int t = arr[i];
//		arr[i] = arr[j];
//		arr[j] = t;
//	}
//}
//
//int main(void) {
//	int a[5] = { 1, 2, 3, 4, 5 };
//	reverse(a, 5);
//	for (int i = 0; i < 5; i++) printf("%d ", a[i]);/* 5 4 3 2 1 */
//	printf("\n");
//	for (int j = 0; j < 5; j++) printf("%d ", a[j]);
//	printf("\n");
//	return 0;
//}












//



//新知识;goto语句
//#include <stdio.h>
//int main() {
//	printf("hehe\n");
//	goto next;
//	printf("haha\n");
//next:
//	printf("heihei\n");
//	return 0;
//}

//死循环
//#include <stdio.h>
//int main() {
//again://名字随便取
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//
//	return 0;
//}






//电脑关机嘲讽
//**拓展**小知识：关机命令:shutdown -s -t 60              取消关机：shutdown -a
//system函数是用来执行系统命令的  <stdlib.h>
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
//	//字符数组
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//		printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	//两个字符串比较相等使用库函数strcmp 需要头文件库函数<string.h>
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("你很乖18马\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

















//编程输入两个整数a和b(1 < a < b)，对于整数区间[a, b]内的所有整数x，依次输出x的所有真约数
//#include <stdio.h>
//int main() {
//	int a, b,x,i;
//	scanf("%d %d", &a, &b);
//	for (x = a; x <= b; x++)
//	{
//		printf("%d:", x);
//		for(i = 1;i<x;i++)
//			if (x % i == 0)
//			{
//				if (i > 1)printf(" ");
//				printf("%d", i);
//			}
//		printf("\n");
//	}
//	return 0;
//}











//难点  双循环:九九乘法表
//#include <stdio.h>
//int main() {
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d", j, i, i * j);
//			if (j < i)
//				if (i * j < 10)
//					printf("  ");
//				else
//					printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}











//难点  循环的嵌套：找素数
//#include <stdio.h>
//int main() {
//	int i = 0;
//	for (i = 9; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//			printf("%d ", i);
//	}
//	
//	return 0;
//}















//编程输入一个正整数，输出它所有的约数
//#include <stdio.h>
//int main() {
//	int n, i;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		if (n % i == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}







////1234---4321  for
//#include <stdio.h>
//int main() {
//	int n;
//	int i = 0;
//	scanf("%d",&n);
//	for (; n != 0; n /= 10)
//	{
//		i = i * 10 + n % 10;
// 	}
//	printf("%d", i);
//	return 0;
//}











//1234---4321   while
//#include <stdio.h>
//int main() {
//	int n, i = 0;
//	scanf("%d", &n);
//	while (n != 0) {
//		i = i * 10 + n % 10;
//			n /= 10;
//	}
//	printf("%d", i);
//	return 0;
//}







//输入一个整数 n。如果 n 是偶数，请输出从 1 到 n 之间所有偶数的和；如果 n 是奇数，请输出从 1 到 n 之间所有奇数的和。
//#include <stdio.h>
//int main() {
//	int n,sum = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		for (int i = 2; i <= n; i += 2)
//		{
//			sum += i;
//		}
//	}
//	else
//	{
//		for (int i = 1; i <= n; i += 2)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}











//int main() {
//	int i = 0;
//	int sum = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}











//int main() {
//	int i = 0;
//	int sum = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			sum = sum + i;//sum += 1
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}






//单目运算符++，--，+，-（正号负号）（++是自增，--是自减）
//#include <stdio.h>
//int main() {
	//int a = 10;
	//a = a + 1;
	//a += 1;
	//a++;
	//++a;
	//以上四种写法作用都是a自增一
	//
	//int b = a++;//++写到前还是后只对变量b有影响与a无关 。后置++：先使用，再+1
	//拆解：b = a, a = a+1;
	//
	//int b = ++a;
	 //前置++：先+1，再使用
	//a = a+1, b = a; 
	//
	//int b = a--;
	//后置--：先使用，再-1
	//b=a, a=a-1;
	//
	//int b = --a;
	//前置--：先-1，再使用
	//a=a-1， b=a;
	//printf("a = %d\n", a);//11  //11  //9  //9
	//printf("b = %d\n", b);//10  //11  //10  //9
	 //
	//return 0;
//}











//小知识点：复合赋值
//#include <stdio.h>
//int main() {
//	int a = 3;
//	int b = 5;
//	int c = 0;
//
	//c = b = a + 3;连续赋值，从左向右依次赋值的
	//不推荐使用连续赋值，最好分开写
//	b = a + 3;
//	c = b;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}






//难点：四个数排序
//#include <stdio.h>
//int main(){
//    int a, b, c, d, temp;
//    // 输入四个整数
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    // 第一步：把最小的数换到 a
//    if (a > b) { temp = a; a = b; b = temp; }
//    if (a > c) { temp = a; a = c; c = temp; }
//    if (a > d) { temp = a; a = d; d = temp; }
//    // 第二步：把第二小的数换到 b
//    if (b > c) { temp = b; b = c; c = temp; }
//    if (b > d) { temp = b; b = d; d = temp; }
//    // 第三步：把第三小的数换到 c，剩下的 d 自然最大
//    if (c > d) { temp = c; c = d; d = temp; }
//    // 按从小到大输出
//    printf("%d %d %d %d\n", a, b, c, d);
//    return 0;
//}








//三个数排序 运用temp变量
//#include<stdio.h>
//int main() {
//    int a, b, c, temp;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a > b) {
//        temp = a;
//        a = b;
//        b = temp;
//    }
//    if (a > c) {
//        temp = a;
//        a = c;
//        c = temp;
//    }
//    if (b > c) {
//        temp = b;
//        b = c;
//        c = temp;
//    }
//    printf("%d %d %d", a, b, c);
//	return 0;
//}





//两个数排序
//#include<stdio.h>
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    if (a > b)
//        printf("%d %d", b, a);
//    else
//        printf("%d %d", a, b);
//    return 0;
//}






//奇数偶数
//#include <stdio.h>
//int main() {
//    int a;
//    scanf("%d", &a);
//    if (a % 2 != 0)
//        printf("Odd");
//    else
//        printf("Even");
//    return 0;
//}



//英文字母判别
//#include <stdio.h>
//int main() {
//	char c;
//	scanf("%c", &c);
//	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//		printf("'%c' is a Letter.", c);
//	else
//		printf("'%c' is not a Letter.", c);
//	return 0;
//}






//数字判别
// 代码中用表达式 c>='0'&&c<='9'判别字符 c是不是数字字符
//#include<stdio.h>
//int main(){
//	char c;
//	scanf("%c", &c);
//	if (c >= '0' && c <= '9')
//		printf("'%c' is a Digit.", c);
//	else
//		printf("'%c' is not a Digit.", c);
//	return 0;
//}







//小数绝对值
//#include <stdio.h>
//int main() {
//    double a;
//    scanf("%lf", &a);
//    if (a >= 0)
//        printf("%lf", a);
//    else
//        printf("%lf", 0 - a);
//    return 0;
//}





//整数绝对值
//#include <stdio.h>
//int main() {
//    int a;
//    scanf("%d", &a);
//    if (a >= 0)
//        printf("%d", a);
//    else
//        printf("%d", 0 - a);
//    return 0;
//}





//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if(a>b)
//		printf("win");
//	else 
//		printf("lose");
//}




//并联电阻总阻值计算方法
//#include <stdio.h>
//int main(){
//    double r1, r2, R;
//    scanf("%lf %lf", &r1, &r2);
//    R = (r1*r2)/ (r1 + r2);
//    printf("R=%.4lf\n",R);
//    return 0;
//}


//#include <stdio.h>
//int main() {
//	printf("hello world!\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(void) {
//	int n;
//	int flag = 1;
//	scanf("%d", &n);
//	if (n < 2) flag = 0;
//	for (int i = 2; i < n; i++) {
//		if (n % i == 0)
//			flag = 0;
//		break;
//	}
//	if (flag = 1)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}







//用循环与数组实现简单扫雷小游戏项目   ***综合运用***
//#include <stdlib.h>
//#include <stdio.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	char* a = (char*)calloc((m + 2) * (n + 2), sizeof(char));//我觉calloc更好用 因为自带初始化
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < m + 1; i++)
//	{
//		for (j = 1; j < n + 1; j++)
//		{
//			scanf("%c", a + i * (n + 2) + j);//注意这里的读取一定要加上前后两个空格 来忽略对换行的读取 
//			//我就是在这里调了半天
//		}
//	}
//	int si = 0;
//	int sj = 0;
//	int num = 0;
//	for (i = 1; i < m + 1; i++)
//	{
//		for (j = 1; j < n + 1; j++)
//		{
//			if (*(a + i * (n + 2) + j) == '*')//如果为 * 则直接输出 *
//				printf("*");
//			else//如果不为 * 说明需要进行九宫格判断
//			{
//				num = 0;
//				sj = j - 1;
//				for (si = i - 1; si <= i + 1; si++)
//				{
//					for (sj = j - 1; sj <= j + 1; sj++)
//					{
//						if (*(a + si * (n + 2) + sj) == '*')
//							num++;
//					}
//				}
//				printf("%c", '0' + num);//其实这里是多余的 可以直接将 num 作整数输出
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}






//#include <stdio.h>
//int isprime(int n) {
//	if (n < 2) return 0;
//	for (int i = 2; i < n; i++) {
//		if (n % i == 0) return 0;
//		return 1;
//	}
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





//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[1005] = { 0 };
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = n - 1; i >= 0; i--) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}





//#include <stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[1005] = { 0 };
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = n - 1; i >= 0; i--) {
//		if (arr[i] % 2 != 0) printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//int isprime(int n) {
//	if (n < 2) return 0;
//	for (int i = 2; i < n; i++) {
//		if (n % i == 0) return 0;
//	}
//	return 1;
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("%d\n", isprime(a));
//	return 0;
//}




//#include <stdio.h>
//int findmax(int arr[], int n) {
//	int max = arr[0];
//	for (int i = 0; i < n; i++) {
//		if (arr[i] > max) max = arr[i];
//	}
//	return max;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[105];
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("%d\n", findmax(arr, n));
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
