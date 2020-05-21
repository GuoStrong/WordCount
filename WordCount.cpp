// WordCount.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)
int main(int argc, char* argv[])
{	
	char s1[] = "-c";//统计文本文件字符数
	char s2[] = "-w";//统计文本文件单词数
	int count = 0;

	char* p;  //用于保存从文件中读入的数据
	FILE* fp;  //用于指向文件地址

	fp = fopen(argv[2], "r");   //打开文件，只读
	if (fp == NULL)  //无法打开文件
	{
		printf("File cannot open! ");
		//exit;  
		return 0;
	}

	p = (char*)malloc(sizeof(char) * 100);  //动态内存分配
	if (!p)  //分配内存失败
	{
		printf("内存分配失败");
		return-1;
	}

	if (strcmp(s1, argv[1]) == 0) {		

		while ((*(p) = fgetc(fp)) != EOF)  //只要未到文件末尾就继续读
		{
			count++;  //统计有多少个字符 
		}
		printf("字符数：%d\n",count);
	}
	
	else if (strcmp(s2, argv[1]) == 0) {

		while ((*(p) = fgetc(fp)) != EOF)  //只要未到文件末尾就继续读
		{
			if (*(p) == ',' || *(p) == ' ')
				count++;
		}

		printf("单词数：%d\n",count+1);
	}
	   	
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
