#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Create Class Template
template <typename T>
class MemoryCalculate {
public:
    T id;            // Attribute: Id
    string name;     // Attribute: Name

    // Constructor to initialize id and name
    MemoryCalculate(T studentId, string studentName) {
        id = studentId;
        name = studentName;
    }

    // Method to display student's details
    void display() {
        cout << "ID: " << id << " | Name: " << name << endl;
    }
};

int main() {
    // Creating a vector of our template class (using 'int' for the ID)
    vector <MemoryCalculate <int>> studentList;

    // --- TASK: Add Students ---
    studentList.push_back(MemoryCalculate<int>(1, "John"));
    studentList.push_back(MemoryCalculate<int>(2, "Sarah"));
    studentList.push_back(MemoryCalculate<int>(3, "Mike"));

    // --- TASK: Display All Students ---
    cout << "Full Student List:" << endl;
    for (int i = 0; i < studentList.size(); i++) {
        studentList[i].display();
    }

    // --- TASK: Search for a Student by ID ---
    int searchId = 2;
    cout << "\nSearching for ID " << searchId << "..." << endl;
    for (int i = 0; i < studentList.size(); i++) {
        if (studentList[i].id == searchId) {
            cout << "Result: ";
            studentList[i].display();
        }
    }

    // --- TASK: Remove a Student by ID ---
    int removeId = 1;
    cout << "\nRemoving ID " << removeId << "..." << endl;
    for (int i = 0; i < studentList.size(); i++) {
        if (studentList[i].id == removeId) {
            studentList.erase(studentList.begin() + i); 
            cout << "Student removed successfully." << endl;
        }
    }

    // Final Display to verify
    cout << "\nUpdated List:" << endl;
    for (int i = 0; i < studentList.size(); i++) {
        studentList[i].display();
    }

    return 0;
}
