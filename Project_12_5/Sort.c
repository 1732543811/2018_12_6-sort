#include "Sort.h"
#include <stdio.h>
#include <stdlib.h>

void Swap(int* left, int* right)
{
	int temp = *left;
	*left = *right;
	*right = temp;

}
void PrintArray(int* array, int size)
{
	for (int  i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
void SelectSortOP(int* array, int size){
	int begin = 0;
	int end = size - 1;
	while (begin < end)
	{
		int min = begin;
		int max = begin;
		int index = begin + 1;
		while (index <= end)
		{
			if (array[index] < array[min])
				min = index;

			if (array[index]>array[max])
				max = index;
			index++;
		}
		if (min != 0)
			Swap(&array[min], &array[begin]);
		if (max!=end)
			Swap(&array[max], &array[end]);
		begin++;
		end--;
	}
}
































////1.插入排序
//void InsertSort(int* array, int size)
//{
//	for (int  i = 1; i < size; i++)
//	{
//		//从第二元素开始往排好之后的元素插入
//		int key = array[i];
//		int end = i - 1;
//		while (end>=0 && array[end] > key)
//		{
//			array[end + 1] = array[end];
//			end--; 
//			//让end向前走一直比,可能会出现end不存在,
//			//所以在条件里规定一下
//		}
//		//让key走到end+1的位置
//		array[end + 1] = key;
//	}
//
//}

////希尔排序
//void ShellSort(int* array, int size)
//{
//	int gap = size;
//	while (gap){
//		gap = gap / 3 + 1;
//		for (int i = gap; i < size; i++)
//			//i++是因为不同的组交替排列,不要误写成i=i+gap
//		{
//			int key = array[i];
//			int end = i - gap;
//			while (end >= 0 && array[end] > key)
//			{
//				array[end + gap] = array[end];
//				end -= gap;
//			}
//			//此时的end为负值,要插到刚刚比较的前一个
//			array[end + gap] = key;
//		}
//		gap--;
//
//	}
//}


//选择排序
//void SelectSort(int* array, int size)
//{
//	//选择的趟数
//	for (int i = 0; i < size - 1; i++)
//	{
//		//选择的方式
//		int maxPos = 0;
//		for (int j = 1; j < size - i; j++)
//		{
//			if (array[j] > array[maxPos])
//				maxPos = j;
//		}
//		if (maxPos != size - 1 - i)
//			//判断maxPos是不是最后一个,如果是就不用交换
//			Swap(&array[maxPos], &array[size - 1 - i]);
//	}
//}
