#include <iostream>
using  namespace std;

class Book
{
private:
	char* bookName;
	int bookId;

public:
	Book()
	{

	}
	Book(char* bn, int b_Id)
	{
		int length = strlen(bn);

		bookName = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			bookName[i] = bn[i];
		}
		bookName[length] = '\0';


		bookId = b_Id;
	}
	void setBookName(char* bn)
	{

		int length = strlen(bn);

		bookName = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			bookName[i] = bn[i];
		}
		bookName[length] = '\0';
	}
	void setBookId(int b_Id)
	{
		bookId = b_Id;
	}
	int getId()
	{ 
		return bookId;
	}
	char* getBookName()
	{
		return bookName;
	}
	void showBookInfo()
	{
		cout << "Book name: " << bookName << endl;
		cout << "Book ID: " << bookId << endl;
	}
};

class Course
{
private:
	char* stdname;
	int course_Id;

public:
	Course()
	{
	}
	Course(char* sn, int c_Id)
	{
 
		int length = strlen(sn);

		stdname = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			stdname[i] = sn[i];
		}
		stdname[length] = '\0';



		course_Id = c_Id;
	}
	void setCourseName(char* sn)
	{
		int length = strlen(sn);

		stdname = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			stdname[i] = sn[i];
		}
		stdname[length] = '\0';

	}
	void setCourseId(int c_Id)
	{ 
		course_Id = c_Id; 
	}
	int getCourseId()
	{ 
		return course_Id;
	}
	char* getCourseName()
	{
		return stdname;
	}
	void showCourseInfo()
	{
		cout << "Course name: " << stdname << endl;
		cout << "Course ID: " << course_Id << endl;
	}
};

class Student
{
private:
	char* stdname;
	int regId;
	Book b_obj;
	Course c_obj;

public:
	Student()
	{
	}
	Student(char* sn, int r_Id, Book b, Course c)
	{
		int length = strlen(sn);

		stdname = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			stdname[i] = sn[i];
		}
		stdname[length] = '\0';

		regId = r_Id;
		b_obj = b;
		c_obj = c;
	}
	void setName(char* sn)
	{

		int length = strlen(sn);

		stdname = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			stdname[i] = sn[i];
		}
		stdname[length] = '\0';


	}
	void setRegId(int r_Id)
	{
		regId = r_Id;
	}
	void setBookInfo(char* bn, int b_Id)
	{
		b_obj.setBookName(bn);
		b_obj.setBookId(b_Id);
	}
	void setCourseInfo(char* sn, int c_Id)
	{
		c_obj.setCourseName(sn);
		c_obj.setCourseId(c_Id);
	}
	void showStudentData()
	{
		cout << "Name: " << stdname << endl;
		cout << "Registration ID: " << regId << endl;
		b_obj.showBookInfo();
		c_obj.showCourseInfo();
	}
};

int main()
{
	Book b_obj("Zubair", 783);
	Course c_obj("PHYCO", 46);
	Student s("DEATH", 7878, b_obj, c_obj);
	s.showStudentData();

	system("pause");

	return 0;
}