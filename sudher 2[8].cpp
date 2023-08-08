/*#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hello, World!" <<endl;
}


syntax:
	class Class_name{
		// member vars
		//member functions or called as methods
		//  in cpp 3 access specifiers 1.public
     	// 	                           2.private
		 //                            3. protected
	};
	
	class Student{
		public:
			string rollno,name,phno,branch,college;
			int bc=10;
			double per;
			
			
	};
	int main()
	{
	 Student s1;
	 cout<<s1.bc;
	}
	
	
	class student{
		public:
			string rollno,name,phno,branch,college;
			int bc;
			double per;
			student ;
			cout<<"hai"
			// CONSTRUCTOR //=CLASS NAME  		
	};
	int main(){
		student =s1;s2
	}
		
		3TYPES :
	     1.default    
	     2.para con
	     3.copy con
		
		class_name(args list)
		{
			
		}
		class_name obj(argslist);// obj creation
		
	
		student(string r,string n, string p,string b,string c,string b,string d)
		rollno=r;
		name=n;
		phone=p;
		branch=b;
		college=c;
		bc=b;
		per=per;
		*/
#include <bits/stdc++.h>
using namespace std;
class Student {
private:
    string name;
    int age;
    char grade;

public:
    // Constructor
    Student(string n, int a, char g) : name(n), age(a), grade(g) {
	}

    // Method to display student information KMPD
    void displayInfo() {
         cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Grade: " << grade << "\n";
    }
};
int main() {
    Student student1("Kohli", 18, 'A');
    cout << "Student Information:\n";
    student1.displayInfo();
    return 0;
}
 
	
