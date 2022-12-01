#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c = (a > b ? a : b);//把最大值赋给c；
//	while (c % a != 0 || c % b != 0)
//	{
//		c++;//只有当c%a==0和c%a==0同时满足才能跳出循环；
//	}
//	//跳出循环的c就是最小公倍数，因为c+1每次往上加一；
//	printf("%d", c);
//	return 0;
//}
//第二种方法；利用m%a=整数原理/最小公倍数一定是较大者的整数倍
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c = (a > b ? a : b);
//	int i = 1;
//	while (a * i % b != 0)
//	{
//		i++;
//	}
//	printf("%d", a * i);
//	return 0;
//}
//第三种方法
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int x = a;
//	int y = b;
//	//首先求出a和b的最大公约数；
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	//最小公倍数=a*b/最大公倍数；
//	int m = x * y / b;
//	printf("%d", m);
//	return 0;
//} 
// 倒置字符串
//#include <string.h>
//#include <assert.h>
//void reverse_(char* left,char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100]={0};
//	gets(arr); //  l like world.       .dlrow ekil l     world. like l
//	int len = strlen(arr);//用来接收字符串
//		                 //倒置字符串；
//	reverse_(arr,arr+len-1);//然后再导致各个字
//	char* cur = arr;//数组名不，能随便改的；  current起始位置用来重置起始位置；
//	while (*cur)//整个 数字的检查 倒置
//	{
//		char* start = cur;
//		while (*cur != ' ' && *cur != '\0')//一个单词的检查。
//		{
//			cur++;
//		}
//		reverse_(start, cur - 1);
//		if (*cur != '\0')
//		{
//			cur++;
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
// }
//void reverse(char* left, char* right)
//{
//    assert(left && right);
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main() {
//    char arr[100] = { 0 };
//    //输入
//    gets(arr);
//    int len = strlen(arr);
//    //完成这个逆序
//    //1. 逆序整个字符串
//    reverse(arr, arr + len - 1);
//    //逆序每个单词
//    char* cur = arr;
//
//    while (*cur)
//    {
//        char* start = cur;
//        while (*cur != ' ' && *cur != '\0')
//        {
//            cur++;
//        }
//        reverse(start, cur - 1);
//        if (*cur != '\0')
//            cur++;
//    }
//
//    //打印
//    printf("%s\n", arr);
//
//    return 0;
//}




//倒置字符串—————主要思路就是先把整个字符串倒置，再把字符串里面的单词再倒置一边；
#include <stdio.h>
#include <string.h>
#include <assert.h>
void reverse(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };//设置一个字符数组；
	gets(arr);//接收字符串；
	reverse(arr,arr + strlen(arr) - 1);//倒置字符串；将arr（就是首元素地址）和结束地址传给reverse结束地址用strlen函数求出字符串长度+arr-1就是结束下标
	//接下来就是倒置字符串里面的单词了；
	//arr 是数组名，是不能随意改动的，需要给他重新定义个变量；
	char* cur = arr;
	while (*cur)
	{
		char* start= cur;//cur在接下来的过程中会发生改变，我们还需要第一个单词的首要地址即最开始的地址；存在start中
			while (*cur!=' ' && *cur != '\0')//' '和'\0'都是一个单词结束的标志；所以使用并且；&&
			{
				//该部分是用来找单词的结束地址的
				cur++;
			}
		//一旦到达这里说明找到空格了那空格那个地址-1就是结束最后一个字母的地址；
		reverse(start, cur - 1);//把单词的首元素地址和最后地址传给函数进行倒置；
		//倒置完还要继续往下去找第二个单词；那么cur就要继续++；
		if (*cur != '\0')
		{
			cur++;
		}
	}     //把这里cur++刚开始作为第二个单词的首元素，再重复上面的操作，所以接下来就是对以上操作的循环了//
		//结束标志结束*cur到达'\0';但…………要注意当到达最后一个单词后，最后面是'\0'；cur就不能再进行++了；
		//所以这边还有一个限制条件；
		printf("%s", arr);
		return 0;
}
