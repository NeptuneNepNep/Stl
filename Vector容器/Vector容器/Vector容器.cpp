// Vector容器.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// vector是单口容器 但是可以随机访问 但是建议尾部插入删除
// vector会动态申请新空间 原空间数据拷贝到新空间 释放旧空间 在把新元素插入新空间

#include <iostream>
#include <vector>
#include<iterator>
#include<algorithm>
using namespace std;
void test01() {
	vector<int> v1;
	int arr[] = { 1,2,3,4 };
	vector<int> v2(arr, arr + sizeof(arr) / 4);
	vector<int> v3(v2.begin(), v2.end());
	for (vector<int>::iterator p = v2.begin(); p != v2.end(); p++) {
		cout << *p << endl;
	
	}


}
//常用赋值操作 assign swap
void test02() {
	vector<int> v1 = {2,3,4,5};
	int arr[] = { 1,2,3,4 };
	vector<int> v2(arr, arr + sizeof(arr) / 4);
	vector<int> v3(v2.begin(), v2.end());
	v3.assign(v1.begin(), v1.end());
	v2.swap(v3);
	for (vector<int>::iterator p = v2.begin(); p != v2.end(); p++) {
		cout << *p << endl;

	}


}
//大小操作
void test03() {
	vector<int> v1 = { 7,2,3,4,5 };
	int arr[] = { 1,2,3,4 };
	vector<int> v2(arr, arr + sizeof(arr) / 4);
	vector<int> v3(v2.begin(), v2.end());
	v3.assign(v1.begin(), v1.end());
	v2.swap(v3);
	v2.resize(3);
	for (vector<int>::iterator p = v2.begin(); p != v2.end(); p++) {
		cout << *p << endl;

	}
	//前后 大小
	cout << v2.front() << " " << v2.back() << endl;
	cout << v2.size() << " " << v2.max_size() << endl;


}
int main()
{
	test01();
	test02();
	test03();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
