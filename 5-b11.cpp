/*1552239 2°à ÔÀê»çâ */
#include <iostream>
void input(int num);
void search(char find_name[]);
char name[50][10],student_num[50][10];
int num,n,i;
using namespace std;
int main()
{
	
	char find_name[15];
	cout << " please input the number of the students in this class:" << endl;
	cin >> num;
	cout << "please input every students' name and student number." << endl;
	input(num);
	cout << "please input the name and NO. of the student that you want to find\n";
	cin >> find_name;
	search(find_name);
	return 0;
}
void input(int num)
{
	for (n = 0; n < num; n++)
	{
		cout << "please input the name and NO. of student " << (n + 1) << endl;
		cin >> name[n] >> student_num[n];
		for (i = 0; i < n; i++)
		{
			if (strcmp(student_num[i], student_num[n]) == 0)
			{
				cout << "The student_num that you had input is wrong."<<endl;
				n--;
			}
		}
	}
}
void search(char find_name[])
{
	for (n = 0; n < num; n++)
	{
		if (strcmp(name[n], find_name)==0)
			cout <<name[n]<< " has been found,his/her number is " << student_num[n] << endl;;
	}
	if (n == num - 1 && strcmp(name[num] , find_name)!=0)
		cout << "Can't find this name." << endl;

}