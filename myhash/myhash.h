#ifndef MYHASH_H_INCLUDED
#define MYHASH_H_INCLUDED
typedef struct Node{
    int key;
    struct Node *next;
} my_node;
class Myhash{
private:
    my_node *my;
    int hash_size;
public:
    Myhash(int n)
    {

    }

};


#endif // MYHASH_H_INCLUDED
