#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person {
public:
  int age;
  static int cur_id;
  string Name;
  virtual void getdata() {}
  virtual void putdata() {}
};
int Person::cur_id = 0;
class Professor : public Person {
private:
  int publications, pid;
  static int id;

public:
  Professor() {
    id++;
    pid = id;
    // cur_id = id;
  }
  virtual void getdata() { cin >> Name >> age >> publications; }
  virtual void putdata() {
    cout << Name <<" "
         << age  << " " << publications  << " " << pid << endl;
  }
};

class Student : public Person {
private:
  int Marks[6], sid;
  static int id;

public:
  Student() {
    id++;
    sid = id;
    // cur_id = id;
  }
  virtual void getdata() {
    cin >> Name >> age;
    for (int i = 0; i < 6; ++i)
      cin >> Marks[i];
  }
  virtual void putdata() {
    int sum = 0;
    for (int i = 0; i < 6; ++i)
      sum += Marks[i];
    cout << Name <<" "<< age <<" "
         << sum <<" "<< sid << endl;
  }
};
int Professor::id = 0;
int Student::id = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
/*
class Person {
public:
	virtual ~Person() {}

	string name;
	int age;

	virtual void getdata() {
		cin >> name >> age;
	}

	virtual void putdata() {
		cout << name << " " << age << " ";
	}
};

class Professor : public Person {
public:
	~Professor() override {}

	void getdata() override {
		Person::getdata();
		cin >> publications;
	}

	void putdata() override {
		Person::putdata();
		cout << publications << " " << id << endl;
	}

	static int cur_id;
	int publications, id;

	Professor() {
		id = ++cur_id;
	}
};

int Professor::cur_id = 0;

class Student : public Person {
public:
	static int cur_id;
	int marks, id;

	Student() {
		id = ++cur_id;
	}


	~Student() override{}
	void getdata() override {
		Person::getdata();
		marks = 0;
		for (int i = 0; i < 6; ++i) {
			int x;
			cin >> x;
			marks += x;
		}
	}
	void putdata() override {
		Person::putdata();
		cout << marks << " " << id << endl;
	}
};

int Student::cur_id = 0;
*/
