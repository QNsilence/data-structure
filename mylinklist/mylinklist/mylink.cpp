#include<string>
#include<iostream>
using namespace std;
/*����һ�������¶����������*/
 typedef struct node{
    string address;
	int temp;
	struct node *next;
}Link;

Link* Head;   //����һ������ڵ㡪��ͷ���
int NodeCount;

//��ʼ������
void CreateList(void)
{
	//��ʼ������
	Head =new Link;   //���壬��ʼ��
	Head->next=NULL;   //Head->next=NULL���ڱ�ʾ�������
	NodeCount=0;
}
/*�������*/
void insert_Node(string viraddress,int mtemp)
{
	Link *pn=new Link; 
	pn->address=viraddress;
	pn->temp=mtemp;
	Link *pre;
	Link *curr;
	pre=Head;
	curr=Head->next;

	//��λ����㣬���ڼ�����ͷ��㣬ֻҪ�ҵ�����㣬��������κ�λ�õĲ��������һ��~
	while(curr!=NULL&&curr->temp<pn->temp)
	{
		pre=curr;
		curr=curr->next;
	}
	//�������
	pn->next=pre->next;
	pre->next=pn;
	
	NodeCount++;
	cout<<"����ɹ�"<<endl;
}
/*ɾ������*/
int delete_Node(int mtemp)
{
	//����ɾ���ɹ���ɾ��ʧ���������
	Link *pre=Head;
	Link *curr=Head->next;
	while(curr!=NULL&&curr->temp!=mtemp)
	{
		pre=curr;
		curr=curr->next;
	}
	if(curr==NULL)  //����Ϊ�ջ���mtemp�������
	{
		cout<<"ɾ��Ԫ��ʧ��"<<endl;
		return 0;
	}
	else
	{
		pre->next=curr->next;
		NodeCount--;
		cout<<"ɾ���ɹ�"<<endl;
		return 1;
	}
}
/*����ĳԪ��,���ؽ��*/
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
