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
































////1.��������
//void InsertSort(int* array, int size)
//{
//	for (int  i = 1; i < size; i++)
//	{
//		//�ӵڶ�Ԫ�ؿ�ʼ���ź�֮���Ԫ�ز���
//		int key = array[i];
//		int end = i - 1;
//		while (end>=0 && array[end] > key)
//		{
//			array[end + 1] = array[end];
//			end--; 
//			//��end��ǰ��һֱ��,���ܻ����end������,
//			//������������涨һ��
//		}
//		//��key�ߵ�end+1��λ��
//		array[end + 1] = key;
//	}
//
//}

////ϣ������
//void ShellSort(int* array, int size)
//{
//	int gap = size;
//	while (gap){
//		gap = gap / 3 + 1;
//		for (int i = gap; i < size; i++)
//			//i++����Ϊ��ͬ���齻������,��Ҫ��д��i=i+gap
//		{
//			int key = array[i];
//			int end = i - gap;
//			while (end >= 0 && array[end] > key)
//			{
//				array[end + gap] = array[end];
//				end -= gap;
//			}
//			//��ʱ��endΪ��ֵ,Ҫ�嵽�ոձȽϵ�ǰһ��
//			array[end + gap] = key;
//		}
//		gap--;
//
//	}
//}


//ѡ������
//void SelectSort(int* array, int size)
//{
//	//ѡ�������
//	for (int i = 0; i < size - 1; i++)
//	{
//		//ѡ��ķ�ʽ
//		int maxPos = 0;
//		for (int j = 1; j < size - i; j++)
//		{
//			if (array[j] > array[maxPos])
//				maxPos = j;
//		}
//		if (maxPos != size - 1 - i)
//			//�ж�maxPos�ǲ������һ��,����ǾͲ��ý���
//			Swap(&array[maxPos], &array[size - 1 - i]);
//	}
//}
