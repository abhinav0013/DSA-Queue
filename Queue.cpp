#include<iostream>
using namespace std;
int queue[100],n=10,front=-1,rear=-1;
void insert(){
    int val;
    if(rear==n-1){
        cout<<"Queue overflow"<<endl;
    }
    else{
        if(front==-1){
           front=0;
        }
        cout<<"Insert the element in queue"<<endl;
        cin>>val;
        rear++;
        queue[rear]=val;
    }
}
void Delete(){
    if(front==-1  || front>rear){
        cout<<"Queue underflow "<<endl;
        return;
    }
    else {
       cout<<"Deleted element is : "<<queue[front]<<endl;
       front++;
    }
}

void display(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"\nQueue elements are:"<<endl;
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<" ";

        }
        cout<<endl;
    }
}
int main(){
    int n;
do{
    cout<<"1.Enter for insertion"<<endl;
    cout<<"2.Enter for Display Queue"<<endl;
    cout<<"3.Enter for Deletion Queue"<<endl;
    cout<<"Enter which operation you want to perform"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
    if(n==1){
        cout<<"Enter the element  you want to enter in queue"<<endl;
        int va;
        cin>>va;
        for(int i=0;i<va;i++){
            insert();
        }
       break;
    }

    case 2:
        display();
        break;
    case 3:
        Delete();
        display();
        break;

    default:
    cout<<"Invalid choice"<<endl;
        break;
    }

}while(n<=3);


}
