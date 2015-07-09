#ifndef MYQUEUE_H_INCLUDED
#define MYQUEUE_H_INCLUDED
class Myqueue
{
public:
    Myqueue(int n);
    ~Myqueue();
    int inqueue(int element);
    int queue_size();
    int outqueue(int element);
private:
    int *my;
    int first;
    int rear;
    int max_size;
};


#endif // MYQUEUE_H_INCLUDED
