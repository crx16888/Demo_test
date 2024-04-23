#include <iostream>
#include <math.h>
using namespace std;
#include <sstream>
#define max 1000
struct person
{
    string name;
    int sex;
    int age;
    string number;
    string address;
}person_array[max];

struct address_book
{
    struct person person_array[max];
    int size;
};

void show_menu()
{
    cout<<"1 添加联系人"<<endl;
    cout<<"2 显示联系人"<<endl;
    cout<<"3 删除联系人"<<endl;
    cout<<"4 查找联系人"<<endl;
    cout<<"5 修改联系人"<<endl;
    cout<<"6 清空联系人"<<endl;
    cout<<"0 退出通讯录"<<endl;    
}

void add_person(address_book *abs)
{
    if(abs->size==max)
    {
        cout<<"通讯录已满"<<endl;
        return;
    }
    else
    {
        string name;
        cout<<"请输入姓名:"<<endl;
        cin>>name;
        abs->person_array[abs->size].name=name;
        int sex =0;
        cout<<"请输入性别:"<<"1男2女"<<endl;
        cin>>sex;
        abs->person_array[abs->size].sex=sex;
        int age = 0;
        cout<<"请输入年龄"<<endl;
        cin>>age;
        abs->person_array[abs->size].age=age;
        string number;
        cout<<"请输入联系电话"<<endl;
        cin>>number;
        abs->person_array[abs->size].number=number;    
        string address;
        cout<<"请输入家庭住址"<<endl;
        cin>>address;
        abs->person_array[abs->size].address=address; 

        abs->size++;
        cout<<"添加成功"<<endl;   

    }
}

int main()
{

    address_book abs;
    abs.size=0;

    int select = 1;
    while(select)
    {
        show_menu();
        cin>>select;
        switch(select)
        {
            case 1:
            add_person(&abs);
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;   
            case 5:
            break;
            case 6:
            break;  
            case 0:
            cout<<"欢迎下次使用"<<endl;
            break;   
            default:
            break;
        }
    }



    return 0;
}