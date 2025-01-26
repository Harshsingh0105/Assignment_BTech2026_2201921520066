#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;

    public:
        
        void set_age(int a) {
            age = a;
        }
        void set_first_name(string fname) {
            first_name = fname;
        }
        void set_last_name(string lname) {
            last_name = lname;
        }
        void set_standard(int std) {
            standard = std;
        }

        
        int get_age() {
            return age;
        }
        string get_first_name() {
            return first_name;
        }
        string get_last_name() {
            return last_name;
        }
        int get_standard() {
            return standard;
        }

        
        string to_string() {
            stringstream ss;
            ss << age << "," << first_name << "," << last_name << "," << standard;
            return ss.str();
        }
};

int main() {
   
    Student student;
    
  
    int age;
    string first_name, last_name;
    int standard;
    
    cin >> age;
    cin >> first_name;
    cin >> last_name;
    cin >> standard;
    
    
    student.set_age(age);
    student.set_first_name(first_name);
    student.set_last_name(last_name);
    student.set_standard(standard);
    
    cout<<age<<endl;
    cout<<last_name<<","<<" "<<first_name<<endl;
    cout<<standard<<endl;
    cout<<endl;
    cout << student.to_string() << endl;

    return 0;
}