#include <iostream>
using namespace std;


struct Student{
    int id;
    string name;
    string course;
    int age;
};

int main()
{
    Student students[5];
    
    cout<<"Students input: ";
    
    for(int i=0; i<5; i++){
        
        cout<<"Student "<<i+1<<"\n";
        
        cout<<"ID :";
        while (!(cin>>students[i].id)){
            cout<< "Invalid ID. Please enter numeric values only: ";
            cin.clear();
        }
        
        cout<<"Name: ";
        getline(cin, students[i].name);
        
        cout<<"Course: ";
        getline(cin, students[i].course);
        
        cout<<"Age: ";
        while (!(cin>>students[i].age)){
            cout<<"Invalid Age. Enter numbers only: ";
            cin.clear();
        }
        
        cout<<"\n";
    }
    
    cout<<"All Students Info\n\n";
    
    for (int i =0; i<5; i++){
        cout<<"ID : "<<students[i].id<<"\n";
        cout<<"Name: "<<students[i].name<<"\n";
        cout<<"Course: "<<students[i].course<<"\n";
        cout<<"Age: "<<students[i].age<<"\n\n";
        
    }
    
    int searchID;
    
    cout<<"Enter ID to search: ";
    while (!(cin>>searchID)){
        cout<<"Invalid ID. Please enter numeric values only";
        cin.clear();
    }
    
    bool searchFound = false;
    
    for (int i =0; i <5; i++){
        if (students[i].id==searchID){
            cout<<"Student found. Student name : "<<students[i].name<<"\n";
            searchFound = true;
            break;
        }
    }
    
    if (!searchFound){
        cout<<"Student cannot be found.";
        
    }
    
    //UPDATE FEATURE
    string inputID;

while (true) {

    cout << "\nEnter ID to update (or Q to quit): ";
    cin >> inputID;

    if (inputID == "Q" || inputID == "q") {
        cout << "Exiting update mode.\n";
        break;
    }

    int updateID = stoi(inputID);

    string change;

    cout << "What do you want to change (id/name/course/age): ";
    cin >> change;

    bool found = false;

    for (int i = 0; i < 5; i++) {

        if (students[i].id == updateID) {

            found = true;

            if (change == "id") {

                cout << "Enter new ID: ";
                cin >> students[i].id;

            } 
            else if (change == "name") {

                cout << "Enter new name: ";
                cin.ignore();
                getline(cin, students[i].name);

            } 
            else if (change == "course") {

                cout << "Enter new course: ";
                cin.ignore();
                getline(cin, students[i].course);

            } 
            else if (change == "age") {

                cout << "Enter new age: ";
                cin >> students[i].age;

            } 
            else {

                cout << "Invalid field.\n";
                break;

            }

            cout << "Updated successfully!\n";

            cout << "\nUpdated Record:\n";
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Course: " << students[i].course << endl;
            cout << "Age: " << students[i].age << endl;

            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }
}

return 0;
        
}