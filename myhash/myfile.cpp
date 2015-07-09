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
    cout<<"请输入添加记录条数:"<<endl;
    cin>>num;
    //向文件中写数据
    ofstream out(file_name,ios::app);
    //判定文件打开是否成功
    if(!out)
    {
         cout<<"文件打开失败"<<endl;
         exit(1);    //stdlib.h
    }
    char name[20];
    char tel[11];
    char addre[20];
    for(int i=0;i<num;i++)
    {
        cout<<"请输入第"<<i+1<<"位的姓名/电话/地址,以空格分割"<<endl;
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
        cout<<"文件打开失败"<<endl;
        exit(1);
    }
    record my;
    while(!in.eof())
    {
        in>>my.name>>my.tel>>my.addre;
        myrecord.push_back(my);
        number++;

    }
    cout<<"总共读了"<<number<<"条记录"<<endl;
    in.close();

}

void Myfile::show()
{
    cout<<"文件记录如下："<<endl;
    cout<<"name      telephone      address"<<endl;
    for(int i=0;i<number;i++)
    {
        cout<<myrecord[i].name<<"       "<<myrecord[i].tel<<"       "<<myrecord[i].addre<<endl;
    }
}
