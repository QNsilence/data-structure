#ifndef MYFILE_H_INCLUDED
#define MYFILE_H_INCLUDED
#include<vector>
using namespace std;
//����ָ��ṹ���ָ��ȥ�洢�ļ���¼�����ǲ�֪���ж��ټ�¼��
struct record
{
    char name[20];
    char tel[11];
    char addre[20];
};
class Myfile{
 private:
     const char * file_name;
     vector<record> myrecord;
     int number;
 public:
    Myfile(const char * filename);
    void write();
    void read();
    void show();


};


#endif // MYFILE_H_INCLUDED
