#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//��ӡ1000��2000������
// 1. �ܱ�4���������Ҳ��ܱ�100����������
// 2. �ܱ�400����������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (0 == year % 4)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//				count++;
//			}
//		}
//		if (0 == year % 400)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			printf("%d ", year);
//	}
//
//	return 0;
//}
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//			printf("%d ", year);
//	}
//
//	return 0;
//}

// дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, i, sz);
//		if (ret == -1)
//		{
//			printf("�Ҳ���\n");
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", ret);
//		}
//
//	return 0;
//}

// дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	Add(&num);
//	printf("%d\n", num);//4
//
//	return 0;
//}

//int Add(int p)
//{
//	return ++p;
//}
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);//1
//	num = Add(num);
//	printf("%d\n", num);//2
//	num = Add(num);
//	printf("%d\n", num);//3
//	num = Add(num);
//	printf("%d\n", num);//4
//
//	return 0;
//}

//д���뽫�������������Ӵ�С���
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	����
//	scanf("%d %d %d", &a,&b,&c);
//	����
//	if (a < b)
//		Swap(&a, &b);
//	if (a < c)
//		Swap(&a, &c);
//	if (b < c)
//		Swap(&b, &c);
//	���
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

//дһ�������ӡ1-100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//���������������������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//
//	return 0;
//}

//շת�����
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)//c=0ʱbΪ���Լ����ͬʱ����ѭ��
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//}

//��д������һ�� 1 �� 100 �����������г��ֶ��ٸ�����9

//int main()
//{
//	int i = 0;
//	int count = 0;//����
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}

//��10 �����������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	//��ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		//��ӡ1��
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//void print_table(int n)
//{
//	int i = n;
//	//��ӡn��
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		//��ӡ1��
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%-2d=%-2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}