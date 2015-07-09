#include<assert.h>
#include<string.h>
#include"Mystack.h"
Mystack::Mystack(int n)
{
    my=(double *)new double[n];
    memset(my,0,n);
    assert(my!=NULL);
    top=-1;
    max_size=n;
}
Mystack::~Mystack()
{
    delete []my;
}
int Mystack::push(double s)
{
    if(top==(max_size-1))
        return 0;
    else{
        top++;
        my[top]=s;
        return 1;
    }
}
int Mystack::pop(double s)
{
    if(top==-1)
        return 0;
    else{
        s=my[top];
        top--;
    }
}
