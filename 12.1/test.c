#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c = (a > b ? a : b);//�����ֵ����c��
//	while (c % a != 0 || c % b != 0)
//	{
//		c++;//ֻ�е�c%a==0��c%a==0ͬʱ�����������ѭ����
//	}
//	//����ѭ����c������С����������Ϊc+1ÿ�����ϼ�һ��
//	printf("%d", c);
//	return 0;
//}
//�ڶ��ַ���������m%a=����ԭ��/��С������һ���ǽϴ��ߵ�������
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
//�����ַ���
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int x = a;
//	int y = b;
//	//�������a��b�����Լ����
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	//��С������=a*b/��󹫱�����
//	int m = x * y / b;
//	printf("%d", m);
//	return 0;
//} 
// �����ַ���
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
//	int len = strlen(arr);//���������ַ���
//		                 //�����ַ�����
//	reverse_(arr,arr+len-1);//Ȼ���ٵ��¸�����
//	char* cur = arr;//���������������ĵģ�  current��ʼλ������������ʼλ�ã�
//	while (*cur)//���� ���ֵļ�� ����
//	{
//		char* start = cur;
//		while (*cur != ' ' && *cur != '\0')//һ�����ʵļ�顣
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
//    //����
//    gets(arr);
//    int len = strlen(arr);
//    //����������
//    //1. ���������ַ���
//    reverse(arr, arr + len - 1);
//    //����ÿ������
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
//    //��ӡ
//    printf("%s\n", arr);
//
//    return 0;
//}




//�����ַ���������������Ҫ˼·�����Ȱ������ַ������ã��ٰ��ַ�������ĵ����ٵ���һ�ߣ�
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
	char arr[100] = { 0 };//����һ���ַ����飻
	gets(arr);//�����ַ�����
	reverse(arr,arr + strlen(arr) - 1);//�����ַ�������arr��������Ԫ�ص�ַ���ͽ�����ַ����reverse������ַ��strlen��������ַ�������+arr-1���ǽ����±�
	//���������ǵ����ַ�������ĵ����ˣ�
	//arr �����������ǲ�������Ķ��ģ���Ҫ�������¶����������
	char* cur = arr;
	while (*cur)
	{
		char* start= cur;//cur�ڽ������Ĺ����лᷢ���ı䣬���ǻ���Ҫ��һ�����ʵ���Ҫ��ַ���ʼ�ĵ�ַ������start��
			while (*cur!=' ' && *cur != '\0')//' '��'\0'����һ�����ʽ����ı�־������ʹ�ò��ң�&&
			{
				//�ò����������ҵ��ʵĽ�����ַ��
				cur++;
			}
		//һ����������˵���ҵ��ո����ǿո��Ǹ���ַ-1���ǽ������һ����ĸ�ĵ�ַ��
		reverse(start, cur - 1);//�ѵ��ʵ���Ԫ�ص�ַ������ַ�����������е��ã�
		//�����껹Ҫ��������ȥ�ҵڶ������ʣ���ôcur��Ҫ����++��
		if (*cur != '\0')
		{
			cur++;
		}
	}     //������cur++�տ�ʼ��Ϊ�ڶ������ʵ���Ԫ�أ����ظ�����Ĳ��������Խ��������Ƕ����ϲ�����ѭ����//
		//������־����*cur����'\0';����������Ҫע�⵱�������һ�����ʺ��������'\0'��cur�Ͳ����ٽ���++�ˣ�
		//������߻���һ������������
		printf("%s", arr);
		return 0;
}
