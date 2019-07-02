/* 
输入元素插入到数组中，实现从高到低排序
把第一个视为最小值，然后从前往后比较大小，把后面最小的与第一个进行交换，然后下一个重复同样的操作、
*/
#include <stdio.h>
int main()
{
    void sort(int arr[], int n);
    int a[10], i;
    printf("请输入十个数字，用空格区分开：\n");
    for (i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    sort(a, 10);
    printf("排序后的数组为：");
    for (i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
void sort(int arr[], int n)
{
    int i, j, k, t;
    for (i = 0; i < n - 1; i++)
    {
        k = i;  //把当前数组第一个值得下标存放在k中
        for (j = i + 1; j < n; j++) //开始比较i后的各个元素
        {
            /* code */
            if (arr[j] < arr[k])
            {
                k = j;  
                /* 比较出比i小的值后就把当前的j存放在k中，并继续循环，碰见比此时k还要小的值后，
                继续将值赋给k*/
            }
        }
        t = arr[k];
        arr[k] = arr[i];
        arr[i] = t;
    }
}