#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int semester;

public:
    Student(const std::string& studentName, int currentSemester)
        : name(studentName), semester(currentSemester) {}

    void display() const {
        std::cout << "Student: " << name << '\n';
        std::cout << "Semester: " << semester << '\n';
    }
};

int main() {
    Student student("Ali", 3);
    student.display();
    return 0;
}
