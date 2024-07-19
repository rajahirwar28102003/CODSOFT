//   todo list
#include<iostream>
#include<string>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int ch,more_task,delete_task,edit_key;
    string val,error;
    map<int,string>myTask;
    map<int,int>mymap;
    leble1:
    cout<<"\n--       TO-DO LIST      --"<<endl;
    cout<<"1.Add Task"<<endl;
    cout<<"2.View Task"<<endl;
    cout<<"3.Mark Task as Completed"<<endl;
    cout<<"4.Remove Task"<<endl;
    cout<<"5.Terminate"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>ch;
    int key=1;
    switch(ch)
    {
        case 1:
            cout<<endl;
            do{
                cin.ignore();
                cout<<"Enter Your Task : ";
                getline(cin, val);
               
                myTask.insert({key, val});
                mymap.insert({key, 0});
                key++;
                cout<<"Do you want to add more task? (1=Yes / 0=No) : ";
                cin>>more_task;
            }while(more_task);
            goto leble1;
            break;
            
        case 2:
            for(auto x:myTask) 
            {
                if(mymap.at(x.first)==1)
                {
                    cout<<"Task-"<<x.first<< x.second<<endl; 
                }
                else if(mymap.at(x.first)==0)
                {
                    cout<<"Task-"<<x.first<<x.second<<"[Pending]"<<endl;
                }
            }
            goto leble1;
            break;
        case 3:
            cout<<"\nEnter the task number mark as completed:";
            cin>>edit_key;
            try
            {
                myTask[edit_key] = myTask.at(edit_key) + "[Completed]";
                mymap[edit_key] = 1;
                cout<<"\nTask-"<<edit_key<<"marked as completed"<<endl;
            }
            catch(const out_of_range &e) 
            {  
                cout<<endl<<"Invalid Task Number"<<endl;  
            } 
            goto leble1;
            break;
        case 4:
            cout<<"\nEnter the task number to remove: ";
            cin>>delete_task;
            myTask.erase(delete_task);
            mymap.erase(delete_task);
            cout<<"\nTask-"<<delete_task<<"removed"<<endl;
            goto leble1;
            break;
        default:
            cout<<"Invalid choice try again"<<endl;
            goto leble1;
            break;
    }
    return 0;
}
