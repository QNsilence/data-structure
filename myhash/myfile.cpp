#include<fstream>
#include<iostream>
#include<string>
#include<stdlib.h>
#include"myfile.h"
Myfile::Myfile(const char* filename)
{
    file_name=filename;
    number=0;
}
void Myfile::write()
{
    int num;
    cout<<"��������Ӽ�¼����:"<<endl;
    cin>>num;
    //���ļ���д����
    ofstream out(file_name,ios::app);
    //�ж��ļ����Ƿ�ɹ�
    if(!out)
    {
         cout<<"�ļ���ʧ��"<<endl;
         exit(1);    //stdlib.h
    }
    char name[20];
    char tel[11];
    char addre[20];
    for(int i=0;i<num;i++)
    {
        cout<<"�������"<<i+1<<"λ������/�绰/��ַ,�Կո�ָ�"<<endl;
        cin>>name>>tel>>addre;
        out<<name<<"  "<<tel<<"  "<<addre<<endl;

    }
    out.close();



}
void Myfile::read()
{
    ifstream in(file_name,ios::in);
    if(!in.is_open())
    {
        cout<<"�ļ���ʧ��"<<endl;
        exit(1);
    }
    record my;
    while(!in.eof())
    {
        in>>my.name>>my.tel>>my.addre;
        myrecord.push_back(my);
        number++;

    }
    cout<<"�ܹ�����"<<number<<"����¼"<<endl;
    in.close();

}

void Myfile::show()
{
    cout<<"�ļ���¼���£�"<<endl;
    cout<<"name      telephone      address"<<endl;
    for(int i=0;i<number;i++)
    {
        cout<<myrecord[i].name<<"       "<<myrecord[i].tel<<"       "<<myrecord[i].addre<<endl;
    }
}
