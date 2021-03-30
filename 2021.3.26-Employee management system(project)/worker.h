#pragma once

#include <iostream>

using namespace std;

#include <cstdlib>
#include <string>

class worker
{
public:
    virtual void showInfo()=0;
    virtual string get_post()=0;

    string id;//ְ�����
    string name;//ְ������
    int p_id;//ְ��ְλ���
    //1��Ա��
    //2������
    //3���ϰ�

};

class employee:public worker
{
public:
    employee(string m_id,string m_name,int m_p_id);

    void showInfo();

    string get_post();
};

class manage:public worker
{
public:
    manage(string m_id,string m_name,int m_p_id);

    void showInfo();

    string get_post();
};

class boss:public worker
{
public:
    boss(string m_id,string m_name,int m_p_id);

    void showInfo();

    string get_post();
};