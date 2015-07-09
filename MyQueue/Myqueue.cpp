#include"Myqueue.h"
#include<string.h>
#include<assert.h>
#include<iostream>
using namespace std;
Myqueue::Myqueue(int n)
{
    my=(int *)new int[n];
    assert(my!=NULL);  //���Ա��ʽ��Ϊ�����ӡ������Ϣ��
    memset(my,0,n);     //��my�е�ǰn��Ԫ����Ϊ0��һ���������string.hͷ�ļ�
    first=rear=0;               //first->ʼ���ǽ����ӵ�Ԫ��λ�ã�rear->ʼ���ǽ���ӵ�λ��
    max_size=n;

}
Myqueue::~Myqueue()
{
    delete []my;
}
int Myqueue::inqueue(int element)
{
    //�������Ƿ�����
    if((rear+1)%max_size==first)
        return 0;
    else
    {
        my[rear]=element;
        rear=(rear+1)%max_size;
        return 1;
    }

}
int Myqueue::queue_size()
{

    return (rear-first+max_size)%max_size;

}
int Myqueue::outqueue(int element)  //�������س���Ԫ��ֵ
{
    //�ж϶����Ƿ��
    if(first==rear)
        return 0;
    else{
        element=my[first];
        first=(first+1)%max_size;
        return 1;
    }
}
