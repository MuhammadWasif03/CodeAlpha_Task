#include<iostream>
using namespace std;

void Display(string Task[], int task_count){
    cout<<"Task To Do "<<endl;
    cout<<"--------------------------- "<<endl;
    for(int i=0; i<task_count; i++){
        cout<<"Task "<<i<<" : "<<Task[i]<<endl;
    }
    cout<<"---------------------"<<endl;
}

int main(){
    string Task[15]={""};
    // counter var ----> how many task we have 
    int task_count = 0;
    int option = -1;
    while (option != 0)
    {
        cout<<"------TO DO LIST -----"<<endl;
        cout<<"1 To Add New Task"<<endl;
        cout<<"2 To View Task"<<endl;
        cout<<"3 To Delete Task"<<endl;
        cout<<"0 Terminate The Program"<<endl;
        cin>>option;
        switch (option)
        {
        case 1:
            if(task_count > 14){
                cout<<"--The Task List Is Full--"<<endl;
            }
            else{
                cout<<"Enter A New Task"<<endl;
                cin.ignore();
                string new_task;
                getline(cin, new_task);
                // Trim leading and trailing spaces
                new_task.erase(0, new_task.find_first_not_of(" \t\n\r\f\v"));
                new_task.erase(new_task.find_last_not_of(" \t\n\r\f\v") + 1);
                if (new_task.empty()) {
                    cout<<"Please Write Something  Not Be Empty--"<<endl;
                } else {
                    Task[task_count] = new_task;
                    task_count++; // Increment task_count after adding a new task
                }
            }
            break;
        case 2:
            Display(Task, task_count);
            break;
        case 3:
            if (task_count > 0) {
                cout << "Enter Task Number to Delete (0 to " << task_count-1 << "): ";
                int delete_task;
                cin >> delete_task;
                if (delete_task >= 0 && delete_task < task_count) {
                    for (int i = delete_task; i < task_count - 1; i++) {
                        Task[i] = Task[i+1];
                    }
                    task_count--;
                    cout << "Task Deleted." << endl;
                } 
                else {
                    cout << "Invalid Task Number." << endl;
                }
            } else {
                cout << "No Tasks to Delete." << endl;
            }
            break;
        }
    }
    return 0;
}