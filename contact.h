#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//声明函数
//#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT,//6
	SAVE//7
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo *data;//存放1000个信息
	int size; //记录当前已有的元素个数
	int capacity;//当前通讯录的最大容量
};

//声明函数
//初始化通讯录
void InitContact(struct Contact* ps);
//增加联系人
void AddContact(struct Contact* ps);
//查看通讯录
void ShowContact(const struct Contact* ps);
//删除一个联系人
void DelContact(struct Contact* ps);
//查找联系人
void SearchContact(const struct Contact* ps);
//修改联系人
void ModifyContact(const struct Contact* ps);
//排序通讯录内容
void SortContact(const struct Contact* ps);
//销毁通讯录
void DestroyContact(struct Contact* ps);
//保存文件
void SaveContact(struct Contact* ps);
//加载文件中的信息到通讯录
void LoadContact(struct Contact* ps);
