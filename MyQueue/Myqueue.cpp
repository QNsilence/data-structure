#include"Myqueue.h"
#include<string.h>
#include<assert.h>
#include<iostream>
using namespace std;
Myqueue::Myqueue(int n)
{
    my=(int *)new int[n];
    assert(my!=NULL);  //测试表达式，为假则打印错误消息；
    memset(my,0,n);     //将my中的前n个元素置为0，一定导入的是string.h头文件
    first=rear=0;               //first->始终是将出队的元素位置；rear->始终是将入队的位置
    max_size=n;

}
Myqueue::~Myqueue()
{
    delete []my;
}
int Myqueue::inqueue(int element)
{
    //检测队列是否已满
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
int Myqueue::outqueue(int element)  //参数返回出队元素值
{
    //判断队列是否空
    if(first==rear)
        return 0;
    else{
        element=my[first];
        first=(first+1)%max_size;
        return 1;
    }
}
