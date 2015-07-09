#include <iostream>
#include"Mystack.h"

int main()
{
    Mystack me(10);
    double s=1.1;
    me.push(s);
    me.pop(s);
    return 0;
}
