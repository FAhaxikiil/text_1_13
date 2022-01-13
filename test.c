#define  _CRT_SECURE_NO_WARNINGS  //解决C4996的错误
#pragma warning(disable:6031)
#include<stdio.h>

//数据类型（整型、小数）
  //char  字符
  //short  短整型
  //int  整型
  //long  长整型
  //float 单精度浮点数
  
int main()
{
	////char--字符类型
	//char ch = 'A';//	内存申请
	//printf("%c\n",ch); //%c--打印字符格式的数据

	int agge = 20;
	printf("%d\n", agge);
	return 0;
}

//凡是C语言都有一个下面这样的框架
//int main() //主函数-程序的入口，一个程序只能有且只有一个main函数
//{
//	//这里完成任务
//	//在屏幕上输出hello world
//	//函数-print function -printf -打印函数，它是库函数，是c语言本身提供给我们使用的函数
//	//include<stdio.h>  包含一个stdio.h的文件。std-标准（standard） i-input o-output
//	printf("hello world\n");
//
//	return 0; //表示返回值0
//}
//int是整型的意思，main前面的int表示函数调用返回一个整型值
//int main()
//{
//	return 0; //表示返回值0
//}
//void main()  属于过时的写法
