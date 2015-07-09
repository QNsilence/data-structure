#ifndef MYSTACK_H_INCLUDED
#define MYSTACK_H_INCLUDED
class Mystack
{
public:
    Mystack(int n);
    ~Mystack();
    int push(double s);
    int pop(double s);

private:
    double *my;
    int top;
    int max_size;

};


#endif // MYSTACK_H_INCLUDED
