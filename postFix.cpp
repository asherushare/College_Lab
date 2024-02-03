#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
  int regNo;
  string name;
  int marks[5];

public:
  // Parameterized constructor to initialize data members
  Student(int regNo, const string &name, int marks[]) : regNo(regNo), name(name)
  {
    // Copy marks for each subject
    for (int i = 0; i < 5; ++i)
    {
      this->marks[i] = marks[i];
    }
  }

  // Function to compute total marks
  int computeTotalMarks() const
  {
    int total = 0;
    for (int i = 0; i < 5; ++i)
    {
      total += marks[i];
    }
    return total;
  }

  // Function to declare result
  void declareResult() const
  {
    int totalMarks = computeTotalMarks();
    cout << "Registration Number: " << regNo << endl;
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << totalMarks << endl;

    // Assuming passing criteria is total marks greater than or equal to 200
    if (totalMarks >= 200)
    {
      cout << "Result: Pass" << endl;
    }
    else
    {
      cout << "Result: Fail" << endl;
    }
    cout << "-------------------------" << endl;
  }
};

int main()
{
  int n;

  // Get the number of students
  cout << "Enter the number of students: ";
  cin >> n;

  // Create a dynamic array of Student objects
  Student *students = new Student[n];

  // Input details for each student
  for (int i = 0; i < n; ++i)
  {
    int regNo;
    string name;
    int marks[5];

    cout << "Enter details for Student " << i + 1 << ":" << endl;
    cout << "Registration Number: ";
    cin >> regNo;
    cout << "Name: ";
    cin.ignore(); // Ignore newline left in the buffer
    getline(cin, name);

    cout << "Enter marks in 5 subjects:" << endl;
    for (int j = 0; j < 5; ++j)
    {
      cout << "Subject " << j + 1 << ": ";
      cin >> marks[j];
    }

    students[i] = Student(regNo, name, marks);
    cout << endl;
  }

  // Display results for each student
  cout << "Results:" << endl;
  for (int i = 0; i < n; ++i)
  {
    students[i].declareResult();
  }

  // Release the dynamic memory
  delete[] students;

  return 0;
}

