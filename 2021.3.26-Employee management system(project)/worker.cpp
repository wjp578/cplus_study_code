#include "worker.h"


//employee
employee::employee(string m_id,string m_name,int m_p_id)
{
    this->id=m_id;
    this->name=m_name;
    this->p_id=m_p_id;
}
void employee::showInfo()
{
    cout<<"职工编号: "<<id<<"\t"
        <<"职工姓名: "<<name<<"\t"
        <<"职工职位: "<<get_post()<<endl;
}

string employee::get_post()
{
    return "员工";
}


//manage
manage::manage(string m_id,string m_name,int m_p_id)
{
    this->id=m_id;
    this->name=m_name;
    this->p_id=m_p_id;
}
void manage::showInfo()
{
    cout<<"职工编号: "<<id<<"\t"
        <<"职工姓名: "<<name<<"\t"
        <<"职工职位: "<<get_post()<<endl;
}

string manage::get_post()
{
    return "经理";
}


//boss
boss::boss(string m_id,string m_name,int m_p_id)
{
    this->id=m_id;
    this->name=m_name;
    this->p_id=m_p_id;
}
void boss::showInfo()
{
    cout<<"职工编号: "<<id<<"\t"
        <<"职工姓名: "<<name<<"\t"
        <<"职工职位: "<<get_post()<<endl;
}

string boss::get_post()
{
    return "老板";
}
