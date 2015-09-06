//
//2015/9/5
//shiyanlouadmin.cpp---课程类的具体实现
//

#include <iostream>
#include <string>
#include "shiyanlouadmin.h"
using namespace std;

/*默认构造函数*/
Course::Course()
{
	course_name = "shiyanlou";
	course_id = 0;
}
/*构造函数*/
Course::Course(int n, string name)
{
	course_id = n;
	course_name = name;
}
/*Course::~Course()
{
	cout << "实验楼管理程序运行完毕，bye~~~~" << endl;
	cin.get();
}*/

/*打印课程名称与课程id*/
void Course::print()
{
	cout << "课程名称:" << course_name << ",";
	cout << "课程id:" << course_id << endl;
}

/*返回课程名称的长度*/
int Course::get_namesize()
{
	return course_name.size();
}

/*重新设置课程名称与课程id*/
void Course::reset(int n,string name)
{
	course_id=n;
	course_name=name;
}