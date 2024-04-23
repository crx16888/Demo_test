#include <iostream>
#include <math.h>
using namespace std;
#include "add.h"
#include <sstream>


/*void print_student(struct student s2);
void print_student2(const struct student *p);*/





struct student
{
    string name;
    int score;
};              //需要在main函数以外定义结构体变量，这样其他函数才能用的到
struct student stu[5];
struct teacher
{
    string name;
    struct student stu[5];
};
struct teacher tea[3];


void allocate_space(struct teacher tea[], int len)//给老师、学生的信息赋值
{
    string name_space="ABCDE";
    for(int i=0;i<3;i++)
    {
        tea[i].name="老师";
        tea[i].name+=name_space[i];
        for(int j=0;j<5;j++)
        {
            tea[i].stu[j].name="学生";
            tea[i].stu[j].name+=name_space[j];
            int random = rand()%60 + 40;
            tea[i].stu[j].score=random;
        }
    }
}
void print_info(struct teacher tea[],int len)//打印所有信息
{
    for(int i=0;i<len;i++)
    {
        cout<<"老师姓名: "<<tea[i].name<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<"学生姓名: "<<tea[i].stu[j].name<<"考试分数 "<<tea[i].stu[j].score<<endl;
        }
    }
}


int main()
{
    /*char str1[]= "hello world";
    cout<< str1 <<endl;
    string str2= "hello world2";
    cout<< str2 <<endl;  //输出字符串
    char ch = 'a';
    cout<< ch<< endl;
    cout<< sizeof(char) <<endl;//输出字符
    cout<<  "aaa\tthe hello world"<<endl;
    cout<<  "aaaa\tthe hello world"<<endl;
    cout<<  "aaaaa\tthe hello world"<<endl;
    cout<<"hello world\n"<< endl;//输出转义字符
    float a = 0.0;
    cout<< "请给浮点数a赋值:" <<endl;
    cin>> a;
    cout<< "浮点数a="<<a <<endl;  //屏幕输入
    int b = 10;
    int c = 0;
    cout<< (b!=c) <<endl;
    cout<< (b&&c) <<endl;
    cout<< (b||c) <<endl;//运算符
    int score = 0;
    cout<< "请输入你的分数:" <<endl;
    cin>> score;
    cout<< "你的分数为"<<score <<endl;
    if(score>60)
    {
        if(score<70){cout<< "你及格了" <<endl;}
        if(score>70){cout<< "你很优秀" <<endl;}
    }
    else if(score>50)
    {
        cout<< "你捞及格" <<endl;
    }
    else
    {
        cout<< "你不及格" <<endl;
    }//判断语句
    int a = 0;
    int b = 0;
    cout<< "请输入a的值:" <<endl;
    cin>> a;
    cout<< "请输入b的值:" <<endl;
    cin>> b;
    cout<< (a>b?a:b) <<endl;//三目运算符
    int score = 0;
    cout<< "请输入你的分数:" <<endl;
    cin>> score;
    cout<< "你的分数为"<<score <<endl;
    switch(score)
    {
        case 10:
        cout<< "优秀"<<score <<endl;
        break;
        case 9:
        cout<< "良好"<<score <<endl;
        default:
        cout<< "垃圾"<<score <<endl;
    }//switch
    int num = rand()%100+1;
    int num2 = 0;
    int count = 0;
    while(num2!=num)
    {
        cout<< "请输入你的猜测:" <<endl;
        cin >>num2;
        while(num2>num)
        {
            cout<<"你猜测的数字大了" <<endl;
            count++;
            break;
        }
        while(num2<num)
        {
            cout<<"你猜测的数字小了" <<endl;
            count++;
            break;
        }
    }
    while(num2==num)
    {
        cout<<"你猜对了，数字是"<<num2<<"猜的次数是"<<count <<endl;
        break;
    }//猜字谜游戏

    int i=0;
    while(i<1000)
    {
        int a=i%10;//个位
        int b=(i/10)%10;//十位
        int c=(i/10)/10;//百位
        if((pow(a,3) + pow(b,3) + pow(c,3))==i)
        {
            cout<<"这是水仙花数"<<i<<endl;
        }
        i++;
    }//水仙花数

    for(int i=0;i<100;i++)
    {
        if((i%10==7)||(((i/10)%10)==7)||((i%7)==0))
        {
            cout<<"敲桌子"<<i<<endl;
        }
    }
//数字个位/十位含7或者7的倍数打印敲桌子
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<"x"<<i<<"="<<i*j<<"\t";
        }
        cout<<endl;
    }
//乘法口诀表
    int array[]={300,400,250,150,350};
    int max=array[0];
    int min=array[0];
    for(int i=0;i<5;i++)
    {
        if(max<array[i])
        {
            max=array[i];
            min=min;
        }
        if(min>array[i])
        {
            max=max;
            min=array[i];
        }
    }
    cout<<"最大的数是"<<max<<endl;
    cout<<"最小的数是"<<min<<endl;
//最大最小数
    int array[]={300,400,250,150,350};
    int temp=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
            else
            {
                array[i]=array[i];
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<endl; 
    }
//冒泡排序算法,从小到大排列
    int a=10;
    int b=20;
    int c = add(a,b);
    cout<<c<<endl;

    int a=10;
    int *p;
    p=&a;//取地址符
    cout<<"a的地址为 "<<p<<endl;
    *p=1000;//解引用，找到p指向内存中的数据
    cout<<"a的值为"<<a<<endl;  

    int a =10;
    int a2 = 10;
    int b= 20;
    int b2 = 20;
    const int * p1 = &a;//常量指针，指向的值不可变
    p1=&a2;//修改指针地址
    int * const p2 = &b;//指针常量，地址不可变
    *p2=10;//修改指针的值
    cout<<p1<<" "<<*p1<<endl;
    cout<<p2<<" "<<*p2<<endl;

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=arr;
    cout<<*p<<endl;
    p++;//指针向后偏移四个字节
    cout<<*p<<endl;*/

 /*   struct student//自定义的一种数据类型,一些类型的集合
    {
        //成员列表
        string name;
        int age;
        int score;
    }s1;
    s1.name = "张三";//通过.访问结构体变量中的属性
    s1.age = 18;
    s1.score = 100;
    cout<<"姓名: "<<s1.name<<" 年龄 :"<<s1.age<<" 分数: "<<s1.score<<endl;
    //结构体

    struct student *p = &s1;//&取地址符
    cout<<p->name<<" "<<p->age<<" "<<p->score<<endl;//->通过指针访问结构体中的属性*/


/*    struct student
    {
        string name;
        int age;
        int score;
    };
    struct student stu_array[3] = 
    {
        {"张三",18,100},
        {"李四",28,99},
        {"王五",38,66}
    };
    stu_array[1].age = 29;
    for (int i = 0;i<3;i++)
    {
        cout<<stu_array[i].name<<" "<<stu_array[i].age<<" "<<stu_array[i].score<<endl;
    }   //结构体数组 */

 /*   struct student//创建结构体就相当于一个变量，这个变量里有很多属性（具体的）
    {
        string name;
        int age;
        int score;
    };

    struct teacher
    {
        int id;
        string name;
        int age;
        struct student stu;
    };

    teacher t;
    t.id = 10000;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 18;
    t.stu.score = 50; */
//结构体嵌套结构体

 /*   struct student s1;
    s1.name = "张三";
    s1.age = 20;
    s1.score = 85;
    // cout<<"姓名: "<<s1.name<<" 年龄 :"<<s1.age<<" 分数: "<<s1.score<<endl;    
    // print_student(s1);
    print_student2(&s1);*/
    allocate_space(tea, 3);
    print_info(tea,3);
    return 0;
}

/*void print_student(struct student s2)
{
    cout<<s2.name<<" "<<s2.age<<" "<<s2.score<<endl;
}
void print_student2(const struct student *p)//const防止对于传入结构体内部数据的修改
{
    cout<<p->name<<" "<<p->age<<" "<<p->score<<endl;
}*/


