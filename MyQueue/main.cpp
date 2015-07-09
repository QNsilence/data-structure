#include <iostream>
#include"Myqueue.h"
using namespace std;

int main()
{
     Myqueue my(2);
     int element=10;
     my.inqueue(element);
     int size;
     size=my.queue_size();
     cout<<"my queue.size()"<<size<<endl;
     my.outqueue(element);
     size=my.queue_size();
     cout<<"my queue.size()"<<size<<endl;

    return 0;
}
