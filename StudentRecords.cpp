#include <iostream>
using namespace std;

int id = 0;
int studentCount = 0;
class StudentRecord 
{
    int student_id ;
    string student_name;
    float* grades;
    int subjectCount ;

    public:
    StudentRecord(string name , int subjectCount)
    {
        studentCount++;
        this->student_id = ++id;
        this->student_name = name;
        this->subjectCount = subjectCount;
        grades = new float[subjectCount + 1];

        for(int i =0 ; i< subjectCount ; i++)
        {
            grades[i] = 0;
        }
        grades[subjectCount] = -1;
    }

    StudentRecord(StudentRecord & old) 
    {   
        this->student_id = old.student_id;
        this->student_name = old.student_name;
        this->subjectCount = old.subjectCount;
        this->grades = new float[subjectCount+1];

        for(int i = 0 ; i<subjectCount ; i++)
        {
            this->grades[i] = old.grades[i];
        }
        this->grades[subjectCount] = -1;
    
    }

    void addGrades()
    {
        float* temp = grades;
        for(; *temp != -1 ; )
        {
            cin>>*temp;
            temp++;
        }
    }


    void print()
    {
        cout<<"Name : "<<student_name<<endl;
        cout<<"Student ID :"<<student_id<<endl;
        cout<<"Grades: "<<endl;
        float* temp = grades;
        for(int i =0 ; i< subjectCount ; i++)
        {
            cout<<temp[i]<<" ";
        }
        cout<<"\n\n\n";
    }

    StudentRecord operator+(StudentRecord &other) 
    {
        StudentRecord temp(this->student_name + " And " + other.student_name ,  this->subjectCount + other.subjectCount);
        temp.grades = new float[temp.subjectCount];
        for (int i = 0 ; i< this->subjectCount ; i++)
        {
            temp.grades[i] = this->grades[i];
        }
        for (int i = 0; i< other.subjectCount ; i++)
        {
            temp.grades[i + this->subjectCount ] = other.grades[i];
        }

        return temp;
    }
    ~StudentRecord()
    {
        studentCount--;
        delete[] grades;
    }
};

int main()
{
    // StudentRecord utsav("Utsav" , 3); // stack memory ;
    StudentRecord *abhijeet = new StudentRecord("Abhijeet" , 3); // allocate to heap
    StudentRecord *vineel = new StudentRecord("vineel" , 3);

    abhijeet->addGrades();
    vineel->addGrades();
    abhijeet->print();
    vineel->print();

    StudentRecord sharedRecord = *abhijeet + *vineel;
    sharedRecord.print();
    return 0;
}
