/*дһ�������ܹ����Ҹ���ѧ�ŵ�ѧ���ɼ���Ϣ��
����ҵ���ӡ�ɼ���Ϣ�����û������ʾ��not found!��������֮*/
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
	printf("����Ҫ���ҵ�ѧ��id:");
	scanf_s("%d", &j);
	printf("���ҽ��Ϊ:\n");
	for (i = 0; i < 6; i++)
	{
		if (j==stu[i].id)
		{
			printf("����:%s ѧ��:%d ��ѧ:%d Ӣ��:%d ����:%d", stu[i].name, stu[i].id, stu[i].math, stu[i].English, stu[i].Chinese);
			flag = 1;
		}
	}
	if (flag == 0)
		printf("not found!\n");
}