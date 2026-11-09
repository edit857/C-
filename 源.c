#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
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
//		printf("&arr[%d] = %p\n", i,&arr[i]);//%p-是用来打印地址的
//		//打印的是16进制   都相差4,因为所有元素都是整型变量int，占4个字节
//		//*数组的元素在内存中是连续存放的
//		//*随着数组下标的增长，地址是由低到高变化的
//
//	}
//	return 0;
//}





//课程引导：如何计算数组元素的个数
//#include <stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
//	int i;
//	for (i = 0; i < 10; i++)//***  i < ?  ?用sizeof计算
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




////sizeof计算数组元素个数
//#include <stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
//	//元素个数的求法
//	//printf("%zu\n",sizeof(arr));//注意格式 4 * 10 = 40,计算的是整个数组的大小总长度,单位是字节
//	////求数组元素个数:总字节数除一个字节数大小
//	//printf("%zu\n", sizeof(arr[0]));//4  一个字节大小长度
//	////数组元素个数:
//	//printf("%zu\n", sizeof(arr) / sizeof(arr[0]));
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算的是数组的元素个数
//
//
//	//解决了个数限制问题:
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}







//#include <stdio.h>
//int main(){
	//二维数组的形式  int arr[3][5]={填元素整数}
	//二维数组也可以完全初始化还可以按行初始化
	//按行初始化  1 2
	//            3 4
	//            5 6
	//int arr[3][5] = { {1,2},{3,4},{5,6} };
	//初始化可以省略行数，但是列不能省略
	//int arr[][5] = {1,2};
	//1 2 0 0 0
	

	//二维数组的使用以及数组下标
	//int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	//arr[2][4]
	//printf("%d\n", arr[2][4]);
	
	
	
	
	//重点：二维数组的输入和输出
	//输入值
//#include <stdio.h>
//int main() {
//	int arr[3][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)//行下标
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)//列下标
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}




	//输出值  输出arr[3][5]  利用循环的嵌套

//	for (i = 0; i < 3; i++)//行下标
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)//列下标
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}








//二维数组在内存中的存储
//#include <stdio.h>
//int main() {
//	int arr[3][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j, &arr[i][j]);//%p用来打印地址
//		}
//	}
//	return 0;
//}








//数组练习：实现字符数组的替换   
//welcome to bit!!!!!!替换为
//####################   思路：定义字符数组进行数组的操作
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main() {
	char arr1[] = "welcome to bit!!!!!!";//偶数位或奇数位都可行
	char arr2[] = "####################";

	int left = 0;
	int right = (int)strlen(arr1)-1;//strlen的反回值为无符号整形，最好转为int整型  或在left和right = 0前面将int改为size_t
	
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);//%s打印字符串
		//休眠1秒
		Sleep(1000);//是一个函数，单位为毫秒
		//清理屏幕，在同一行输出  在电脑系统中输入为cls
		system("cls");
		left++;
		right--;
	}
	
	return 0;
}














































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





//绕距  两点距离公式运用
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//int main() {
//	int x1, y1, x2, y2;
//	double d1, d2, d3;
//	scanf("%d %d\n%d %d", &x1, &y1, &x2, &y2);
//	d1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//	d2 = abs(x1 - x2) + abs(y1 - y2);
//	d3 = fabs(d1 - d2);
//	printf("%lf", d3);
//	return 0;
//}








////时间转换  input:3661  output:1 1 1
//#include <stdio.h>
//int main() {
//	int t, h, m, s;
//	scanf("%d", &t);
//	h = t / 60 / 60;
//	m = t / 60 % 60;
//	s = t % 60 % 60;
//	printf("%d %d %d", h, m, s);
//	return 0;
//}







//蓝桥杯暴力枚举法  例题

//#include <stdio.h>
//// 工具函数：求两个数的最大公约数（辗转相除法）
//int gcd(int a, int b) {
//	while (b != 0) {
//		int temp = a % b;
//		a = b;
//		b = temp;
//	}
//	return a;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	int a[1005]; // 数组大小按题目数据范围开设，省赛场景足够
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	// 核心：双层循环枚举所有 i < j 的数对
//	for (int i = 0; i < n; i++) {
//		// j 永远从 i+1 开始，天然保证 i < j
//		for (int j = i + 1; j < n; j++) {
//			// 判断条件：两数存在大于1的公因数
//			if (gcd(a[i], a[j]) > 1) {
//				// 题目下标从1开始计数，输出时+1
//				printf("%d %d\n", i + 1, j + 1);
//				// 找到直接退出，第一个命中的就是最优解
//				return 0;
//			}
//		}
//	}
//
//	return 0;
//}










////求和长长整形  long long   有点阴
//#include <stdio.h>
//int main() {
//	long long n, s;
//	scanf("%lld", &n);
//	s = (n + 1) * n / 2;
//	printf("%lld", s);
//	return 0;
//}






//








////考考计算机
//#include <stdio.h>
//int main() {
//	int a, b, c;
//	char n;
//	scanf("%d%c%d", &a, &n, &b);
//	if (n == '+')
//		c = a + b;
//	if (n == '-')
//		c = a - b;
//	if (n == '*')
//		c = a * b;
//	if (n == '/')
//		c = a / b;
//	printf("%d", c);
//	return 0;
//}








////小白计算   一行带有?的算式，形如a=@,b=@,axb=?。其中@代表整数，x可能是 + 、 - 、 * 、 / 之一
//#include <stdio.h>
//int main() {
//	int x, y, z;
//	char n;
//	scanf("a=%d,b=%d,a%cb=?", &x, &y, &n);
//	if (n == '+')
//		z = x + y;
//	if (n == '-')
//		z = x - y;
//	if (n == '*')
//		z = x * y;
//	if (n == '/')
//		z = x / y;
//	printf("%d%c%d=%d", x, n, y, z);
//	return 0;
//}







////日期格式化
//#include <stdio.h>
//
//int main() {
//	int a, b, c;
//	int y, m, d;
//
//	// 直接读取三个整数，scanf 会自动跳过中间的 '-'
//	// 题目保证输入合法，所以不需要检查 scanf 的返回值，也不需要 return 1
//	scanf("%d-%d-%d", &a, &b, &c);
//
//	// 核心判断逻辑：利用年份 >= 1900 的特征
//	if (a >= 1900) {
//		// 情况1: 输入是 yyyy-mm-dd
//		// a 已经被确认为年份
//		y = a;
//		m = b;
//		d = c;
//	}
//	else {
//		// 情况2 & 3: 输入是 mm-dd-yyyy 或 mm-yyyy-dd
//		// 此时 a 肯定是月份 (m = a)
//		m = a;
//
//		// 只需要判断 b 是不是年份即可区分剩下两种情况
//		if (b >= 1900) {
//			// 情况2: mm-yyyy-dd -> b是年，c是日
//			y = b;
//			d = c;
//		}
//		else {
//			// 情况3: mm-dd-yyyy -> b是日，c是年
//			d = b;
//			y = c;
//		}
//	}
//
//	// 按照中国习惯输出：年-月(补0)-日(补0)
//	printf("%4d-%02d-%02d\n", y, m, d);
//
//	return 0;
//}








//现有1个形如A + B或A - B的算式，要求你编程读入这个算式并输出它的结果。
//X同学在2050级新生中C语言学的最好，他表示用if语句可以轻松地解决这道题，可是Y老师不允许他使用if语句和switch语句。X同学犯愁了，不知道该怎么办。
//不使用if语句和switch语句，你能解决这个问题吗？
//
//输入格式 :
//一行中给出一个算式，形如A + B或A - B，A、B为整数。运算符前后可能包含若干空格。
//
//输出格式 :
//在一行中输出算式结果，如果算式不是加法和减法，输出:error!。


//方法一
//#include <stdio.h>
//
//int main() {
//	int a, b;
//	char op;
//
//	// scanf 的 "%c" 会读取空格，但这里我们利用 %d 自动跳过前导空格
//	// 读取第一个整数
//	if (scanf("%d", &a) != 1) {
//		// 如果连第一个数都读不到，直接报错（虽然题目没细说，但这是好习惯）
//		printf("error!\n");
//		return 0;
//	}
//
//	// 读取运算符。注意：因为数字后面可能有空格，所以用 " %c" (加个空格)
//	// 或者利用 scanf 的特性，%d读完数字后，指针停在非数字字符上
//	// 这里为了稳健，我们手动处理一下空格，或者依赖scanf对%c的处理
//	// 更简单的写法是直接读字符，然后检查是否是空格，如果是就继续读
//	// 但最简便的方法是利用 scanf 的格式串跳过空白符：
//	scanf(" %c", &op); // 注意 %c 前面的空格，它会跳过所有的空白符（空格、换行等）
//
//	scanf("%d", &b);
//
//	// --- 核心逻辑开始 (无 if/switch) ---
//
//	// 定义一个标志位，初始假设为错误
//	int is_error = 1;
//
//	// 逻辑：
//	// 1. 如果 op 是 '+'，执行加法打印，并将 is_error 设为 0 (假)。
//	//    由于 && 的短路特性，如果 op!='+'，后面的打印不会执行。
//	// 2. 如果 op 是 '-'，执行减法打印，并将 is_error 设为 0。
//	// 3. 最后检查 is_error，如果仍为 1，说明上面都没匹配上，打印 error。
//
//	// 使用逗号表达式 (printf(...), 0) 是为了让这一项的值为0，从而不干扰逻辑判断
//	// 但我们需要修改 is_error 的值。
//
//	// 更优雅的纯逻辑写法：
//	// (op == '+') && (printf("%d\n", a + b), 0) ||
//	// (op == '-') && (printf("%d\n", a - b), 0) ||
//	// printf("error!\n");
//
//	// 解释：
//	// 第一行：如果 op是'+'，执行括号里的打印（返回打印的字符数，非0），逗号表达式返回0。
//	//         此时整体变成 1 && 0 -> 0。因为是 || 连接，继续往后看？不对。
//	//         让我们修正一下逻辑，确保只执行一个分支。
//
//	// 修正后的逻辑链：
//	// 我们利用变量赋值来阻断后续执行。
//	int flag = 0; // 0表示还没处理
//
//	// 尝试加法
//	(op == '+') && (printf("%d\n", a + b), flag = 1);
//
//	// 尝试减法 (只有当 flag 仍为 0 时才尝试)
//	(!flag) && (op == '-') && (printf("%d\n", a - b), flag = 1);
//
//	// 处理错误 (只有当 flag 仍为 0 时才执行)
//	(!flag) && printf("error!\n");
//
//	return 0;
//}







////方法二
//#include <stdio.h>
//
//// 定义两个函数
//int add(int a, int b) { printf("%d\n", a + b); return 1; }
//int sub(int a, int b) { printf("%d\n", a - b); return 1; }
//int err(int a, int b) { printf("error!\n"); return 1; }
//
//int main() {
//	int a, b;
//	char op;
//	scanf("%d %c %d", &a, &op, &b); // 这里的空格会自动处理输入中的空白
//
//	// 定义函数指针数组
//	// 这是一个极其简化的映射，实际工程中不推荐，但做题很酷
//	// '+' ASCII 43, '-' ASCII 45
//	// 我们可以做一个简单的映射函数 f(x)
//	// 比如 x=43 -> index 0, x=45 -> index 1, other -> index 2
//
//	int index = 2; // 默认 error
//	(op == '+') && (index = 0);
//	(op == '-') && (index = 1);
//
//	// 定义函数指针数组
//	void (*funcs[3])(int, int) = { add, sub, err };
//
//	// 调用
//	funcs[index](a, b);
//
//	return 0;
//}








//素数判断基础解       输入描述：第一行输入一个整数 T（1≦T≦10），表示需要判断的整数个数。接下来 T 行，每行输入一个正整数nn（1≦n≦10^5）。输出描述：输出T 行，每行对应一个测试用例：若n是素数，输出Yes；否则输出No
//新手版本
//#include <stdio.h>
//int main() {
//	int i, j, t, n;
//	scanf("%d", &t);
//	for (i = 0; i < t; i++)
//	{
//		scanf("%d", &n);
//		int isPrime = 1;        // 先假设 n 是素数（1=是，0=不是）
//		if (n <= 1) isPrime = 0; // 1 肯定不是素数
//
//		for (j = 2; j < n; j++)  // 注意这里改成 j < n，不用除自己
//		{
//			if (n % j == 0)       // 一旦找到因数
//			{
//				isPrime = 0;     // 把标记改成"不是素数"
//				break;           // 不用再找了
//			}
//		}
//
//		if (isPrime)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//	return 0;
//}



//巧思
//#include <stdio.h>
//int main() {
//	int i, j, t, n;
//	scanf("%d", &t);//输入t值，决定行数
//	for (i = 0; i < t; i++)//生成行数,不超过t
//	{
//		scanf("%d", &n);//每行输入一个正整数n
//		for (j = 2; j <= n; j++)//生成2-n之间的所有数字，进一步判断素数
//		{
//			if (n % j == 0)//判断素数:不是素数，打破循环
//				break;
//		}
//		if (n == j)//退出循环时，j是否刚好数到n？若是就说明没找到因数，n为素数；若不是就说明早就找到了因数跳出了循环，故n不是素数
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//	return 0;
//}



//素数判断巧思2.0
//#include <stdio.h>
//int main() {
//	int t, n, j;
//	scanf("%d", &t);
//	for (int i = 1; i <= t; i++) {
//		scanf("%d\n", &n);
//		for (j = 2; j * j <= n; j++) {
//			if (n % j == 0)
//				break;
//		}
//		if (j * j > n && n > 1)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//	return 0;
//}









//最大公约数
//#include <stdio.h>
//int main() {
//	int n, m,r;
//	scanf("%d %d", &n, &m);
//	if (m < n)//让代码更健壮，使程序完全符合 m>n 的假设，删掉对程序无影响，好处为：更严谨对其他题可能适用
//	{
//		int temp = m;
//		m = n;
//		n = temp;
//	}//temp的作用为:充当中转站储存变量的值
//	r = m % n;
//	while (r != 0)
//	{
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	printf("%d", n);
//	return 0;
//}






//#include <stdio.h>
//int main() {
//	int n = 4;
//	int sum = 0;
//	int a[5];
//	for (int i = 0; i < 5; i++) {
//		sum += a[5];
//	}
//
//		printf("%d",)
//	return 0;
//}






//原始代码
//#include <stdio.h>
//int main(void)
//{
//	int a[5] = { 68, 92, 75, 81, 60 };
//	int i, j, t;
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 4 - i; j++) {
//			if (a[j] > a[j + 1]) {
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//优化代码
//#include <stdio.h>
//int main(void)
//{
//	int a[5] = { 68, 92, 75, 81, 60 };
//	int i, j, t;
//	int swapped;                       // 【新增】本轮是否发生过交换的标志
//
//	for (i = 0; i < 4; i++) {
//		swapped = 0;                   // 每轮开始前，先假设"这一轮没交换"
//		for (j = 0; j < 4 - i; j++) {
//			if (a[j] > a[j + 1]) {
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//				swapped = 1;           // 一旦发生交换，立刻把标志置为真
//			}
//		}
//		if (swapped == 0) break;       // 整轮没交换过 → 已经有序，提前退出外层循环
//	}
//
//	for (i = 0; i < 5; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}





//#include <stdio.h>
//int main() {
//	int i,s=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0 && i % 2 == 0) 
//			s++;
//	}
//	printf("%d", s);
//	return 0;
//}








//暴力枚举：1-2026 之间包含 7 且能被 7 整除的数字
//#include <stdio.h>
//int main() {
//	int i, s = 0;
//	for (i = 1; i <= 2026; i++) {
//		int temp = i;
//		int has7 = 0;      // 标记是否包含数字 7
//
//		// 逐位检查是否包含 7
//		while (temp > 0) {
//			if (temp % 10 == 7) {
//				has7 = 1;
//				break;
//			}
//			temp /= 10;
//		}
//
//		// 两个条件同时满足：包含 7 且能被 7 整除
//		if (has7 && i % 7 == 0) {
//			s++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n总数：%d\n", s);
//	return 0;
//}





//switch语句解决某月天数问题
//#include <stdio.h>
//int main() {
//	int y, m;
//	scanf("%d %d", &y, &m);
//	switch (m) {
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		printf("31\n");
//		break;
//
//	case 4: case 6: case 9: case 11:
//		printf("30\n");
//		break;
//
//	case 2:
//		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//			printf("29");
//		else
//			printf("28");
//		break;
//	}
//	return 0;
//}







//进阶：利用数组求一年中的第几天
//#include <stdio.h>
//int main() {
//	int a[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int y, m, d;
//	int s = 0;
//	scanf("%d %d %d", &y, &m, &d);
//	if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
//		a[1] = 29;
//	for (int i = 0; i < m - 1; i++) {
//		s += a[i];
//	}
//	s = s + d;
//	printf("%d", s);
//	return 0;
//}



//普通;选择结构解决
//#include <stdio.h>
//int main() {
//	int y, m, d, s = 0;
//	scanf("%d %d %d", &y, &m, &d);
//	switch (m) {
//	case 12: s += 30;
//	case 11: s += 31;
//	case 10: s += 30;
//	case 9: s += 31;
//	case 8: s += 31;
//	case 7: s += 30;
//	case 6: s += 31;
//	case 5: s += 30;
//	case 4: s += 31;
//	case 3: s += 28;
//	case 2:
//		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
//			s += 1;
//		}
//		s += 31;
//	case 1: s += 0; break;
//	}
//	s += d;
//	printf("%d\n", s);
//	return 0;
//}





//分段函数
//#include <stdio.h>
//#include <math.h>
//int main() {
//	double x, y;
//	scanf("%lf", &x);
//	if (x < 1 || x >= 5) {
//		printf("No define!");
//		return 0;//必须提前结束程序，否则输出格式会多
//	}
//	if (x >= 1 && x < 2)
//		y = 3 * x + 5;
//	if (x >= 2 && x < 3)
//		y = 2 * sin(x) - 1;
//	if (x >= 3 && x < 4)
//		y = sqrt(1 + x * x);
//	if (x >= 4 && x < 5)
//		y = x * x - 2 * x + 5;
//	printf("%lf", y);
//	return 0;
//}






//判断三角形类型
//#include<stdio.h>
//int main() {
//	int a, b, c, t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (c < a) { t = c; c = a; a = t; }  //让c最大
//	if (c < b) { t = c; c = b; b = t; }  //让c最大
//	if (a + b <= c) {
//		printf("不能构成三角形");
//	}
//	else if (a == b && b == c) {
//		printf("等边三角形");
//	}
//	else if (a == b || a == c || b == c) {
//		printf("等腰三角形");
//	}
//	else if (a * a + b * b == c * c) {
//		printf("直角三角形");
//	}
//	else {
//		printf("一般三角形");
//	}
//	return 0;
//}






//判断正负数数位之和
//#include <stdio.h>
//int main() {
//	int n, s = 0;
//	scanf("%d", &n);
//	if (n < 0) n = -n;
//	while (n) {
//		s += n % 10;
//		n = n / 10;
//	}
//	printf("%d", s);
//	return 0;
//}