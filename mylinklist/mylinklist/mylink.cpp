#include<string>
#include<iostream>
using namespace std;
/*构建一个按照温度排序的链表*/
 typedef struct node{
    string address;
	int temp;
	struct node *next;
}Link;

Link* Head;   //声明一个虚拟节点——头结点
int NodeCount;

//初始化链表
void CreateList(void)
{
	//初始化链表
	Head =new Link;   //定义，初始化
	Head->next=NULL;   //Head->next=NULL用于表示链表结束
	NodeCount=0;
}
/*有序插入*/
void insert_Node(string viraddress,int mtemp)
{
	Link *pn=new Link; 
	pn->address=viraddress;
	pn->temp=mtemp;
	Link *pre;
	Link *curr;
	pre=Head;
	curr=Head->next;

	//定位插入点，由于加入了头结点，只要找到插入点，在链表的任何位置的插入操作都一致~
	while(curr!=NULL&&curr->temp<pn->temp)
	{
		pre=curr;
		curr=curr->next;
	}
	//插入操作
	pn->next=pre->next;
	pre->next=pn;
	
	NodeCount++;
	cout<<"插入成功"<<endl;
}
/*删除操作*/
int delete_Node(int mtemp)
{
	//考虑删除成功和删除失败两种情况
	Link *pre=Head;
	Link *curr=Head->next;
	while(curr!=NULL&&curr->temp!=mtemp)
	{
		pre=curr;
		curr=curr->next;
	}
	if(curr==NULL)  //链表为空或无mtemp两种情况
	{
		cout<<"删除元素失败"<<endl;
		return 0;
	}
	else
	{
		pre->next=curr->next;
		NodeCount--;
		cout<<"删除成功"<<endl;
		return 1;
	}
}
/*搜索某元素,返回结点*/
Link* find_Node(int mtemp)
{
	Link *curr=Head;
	while(curr!=NULL&&curr->temp!=mtemp)
		curr=curr->next;
	return curr;

}
int main()
{
	
	CreateList();
	string add="shandong";
	insert_Node(add,30);
	add="harbin";
	insert_Node(add,35);
	delete_Node(30);
	delete_Node(31);
	Link *t=find_Node(35);
	cout<<t->address<<endl;
	return 0;
}
