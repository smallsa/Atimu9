/*写一个函数能够查找给定学号的学生成绩信息，
如果找到打印成绩信息，如果没有则显示“not found!”，测试之*/
#include <stdio.h>
struct student
{
	char name[30];
	int id;
	int math;
	int English;
	int Chinese;
};
void search(struct student stu[]);
int main()
{
	struct student stu[5] = { {"zhangsan",11111,99,99,99},{"lisi",22222,88,88,88},{"wangwu",33333,77,77,77},{"cuici",44444,66,66,66},{"asan",55555,55,55,55} };
	search(stu);
	return 0;
}
void search(struct student stu[])
{
	int i, j, flag = 0;
	printf("输入要查找的学生id:");
	scanf_s("%d", &j);
	printf("查找结果为:\n");
	for (i = 0; i < 6; i++)
	{
		if (j==stu[i].id)
		{
			printf("姓名:%s 学号:%d 数学:%d 英语:%d 语文:%d", stu[i].name, stu[i].id, stu[i].math, stu[i].English, stu[i].Chinese);
			flag = 1;
		}
	}
	if (flag == 0)
		printf("not found!\n");
}