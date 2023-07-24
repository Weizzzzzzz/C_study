#include <stdio.h>

// 逆序字符串
//  int main()
//  {
//      char arr[] = "abcdefg";
//      int sz = sizeof(arr) / sizeof(arr[0]);
//      int left = 0;
//      int right = sz - 2;
//      while(left<right)
//      {
//          char tmp = arr[left];
//          arr[left] = arr[right];
//          arr[right] = tmp;

//         left++;
//         right--;
//     }
//     printf("%s\n", arr);

//     return 0;
// }

// 函数写法
// //1
// int my_strlen(char *str)
// {
//     int count = 0;
//     while (*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }

// void reverse(char *str)
// {
//     char tmp = *str;
//     int len = my_strlen(str);
//     *str = *(str + len - 1);
//     *(str + len - 1) = '\0';
//     if (my_strlen(str + 1) >= 2)
//         reverse(str + 1);
//     *(str + len - 1) = tmp;
// }

// int main()
// {
//     char arr[] = "abcdefg";
//     reverse(arr);
//     printf("%s\n", arr);
//     return 0;
// }

// //2
// int my_strlen(char *str)
// {
//     int count = 0;
//     while (*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }

// void reverse(char arr[], int left, int right)
// {
//     if (left < right)
//     {
//         char tmp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = tmp;
//         reverse(arr, left + 1, right - 1);
//     }
// }

// int main()
// {
//     char arr[] = "abcdefg";
//     int left = 0;
//     int right = my_strlen(arr) - 1;
//     reverse(arr, left, right);
//     printf("%s\n", arr);

//     return 0;
// }

// //计算一个数的每位之和
// int Digitsum(unsigned int n)
// {
//     if (n > 9)
//         return Digitsum(n / 10) + n % 10;
//     else
//         return n;
// }
// int main()
// {
//     unsigned int n = 0;
//     scanf("%d", &n);
//     int sum = Digitsum(n);
//     printf("%d\n", sum);

//     return 0;
// }

// // 递归实现n的k次方
// double Pow(int n, int k)
// {
//     if (k > 0)
//         return n * Pow(n, k - 1);
//     else if (k == 0)
//         return 1;
//     else
//         return 1.0 / Pow(n, -k);
// }

// int main()
// {
//     int n = 0;
//     int k = 0;
//     scanf("%d %d", &n, &k);
//     double ret = Pow(n, k);
//     printf("%lf\n", ret);

//     return 0;
// }

// // 交换两个数组的元素（两个数组一样大）
// int main()
// {
//     // 创建数组
//     int arr1[] = {1, 3, 5, 7, 9};
//     int arr2[] = {2, 4, 6, 8, 0};
//     // 交换数组
//     int i = 0;
//     int sz = sizeof(arr1) / sizeof(arr1[0]);
//     for (i = 0; i < sz; i++)
//     {
//         int tmp = arr1[i];
//         arr1[i] = arr2[i];
//         arr2[i] = tmp;
//     }
//     // 打印
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d", arr1[i]);
//     }
//     printf("\n");
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d", arr2[i]);
//     }
//     printf("\n");

//     return 0;
// }

//
// void print(int arr[], int sz)
// {
//     int i = 0;
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// void reverse(int arr[], int sz)
// {
//     int i = 0;
//     int left = 0;
//     int right = sz - 1;
//     while (left < right)
//     {
//         int tmp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = tmp;

//         left++;
//         right--;
//     }
// }

// void init(int arr[], int sz)
// {
//     int i = 0;
//     for (i = 0; i < sz; i++)
//     {
//         arr[i] = 0;
//     }
// }
// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     print(arr, sz); // 1 2 3 4 5 6 7 8 9
//     reverse(arr, sz);
//     print(arr, sz); // 0 9 8 7 6 5 4 3 2 1
//     init(arr, sz);
//     print(arr, sz); // 0 0 0 0 0 0 0 0 0 0
//     return 0;
// }

// 变长数组
// int main()
// {
//     // 创建数组
//     int n = 0;
//     scanf("%d", &n);
//     int arr[n];
//     // 输入
//     int i = 0;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     // 输出
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }