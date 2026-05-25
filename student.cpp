#include <iostream>
#include <string>
#include "student.h"

using namespace std;

// Global array to store up to 100 students
Student students[100];
int countStudent = 0;

// Function to add a new student
void addStudent()
{
    cout << "Enter ID: ";
    cin >> students[countStudent].id;

    cout << "Enter Name: ";
    cin >> students[countStudent].name;

    cout << "Enter Age: ";
    cin >> students[countStudent].age;

    cout << "Enter Course: ";
    cin >> students[countStudent].course;

    countStudent++; // Increase the student count
    cout << "Student Added Successfully!\n\n";
}

// Function to print all students
void displayStudents()
{
    if (countStudent == 0) {
        cout << "No students found.\n\n";
        return;
    }

    for (int i = 0; i < countStudent; i++)
    {
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Course: " << students[i].course << endl;
        cout << "------------------" << endl;
    }
}

// Function to look for a student using ID
void searchStudent()
{
    int id;
    cout << "Enter Student ID to search: ";
    cin >> id;

    for (int i = 0; i < countStudent; i++)
    {
        if (students[i].id == id)
        {
            cout << "Student Found!\n";
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Course: " << students[i].course << endl;
            return; // Exit the function since we found the student
        }
    }
    cout << "Student Not Found.\n\n";
}

// Function to change student details
void updateStudent()
{
    int id;
    cout << "Enter Student ID to update: ";
    cin >> id;

    for (int i = 0; i < countStudent; i++)
    {
        if (students[i].id == id)
        {
            cout << "Enter New Name: ";
            cin >> students[i].name;

            cout << "Enter New Age: ";
            cin >> students[i].age;

            cout << "Enter New Course: ";
            cin >> students[i].course;

            cout << "Updated Successfully!\n\n";
            return;
        }
    }
    cout << "Student Not Found.\n\n";
}

// Function to remove a student from the array
void deleteStudent()
{
    int id;
    cout << "Enter Student ID to delete: ";
    cin >> id;

    for (int i = 0; i < countStudent; i++)
    {
        if (students[i].id == id)
        {
            // Shift all next elements to the left to fill the gap
            for (int j = i; j < countStudent - 1; j++)
            {
                students[j] = students[j + 1];
            }
            countStudent--; // Decrease total count
            cout << "Deleted Successfully!\n\n";
            return;
        }
    }
    cout << "Student Not Found.\n\n";
}
