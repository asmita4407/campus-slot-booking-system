#include<iostream>
using namespace std;

struct Booking{
    char name[10];
    int start, finish;
};

int main()
{
    int n;
    cout<<"Enter No. of booking: ";
    cin>>n;

    Booking booking[n];

    for(int i=0; i<n; i++){
        cout<<"Enter booking"<<i+1<<" name: ";
        cin>>booking[i].name;

        cout<<"Enter booking"<<i+1<<" start time: ";
        cin>>booking[i].start;

        cout<<"Enter booking"<<i+1<<" finish time: ";
        cin>>booking[i].finish;
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(booking[i].finish>booking[j].finish){

                Booking temp=booking[i];
                booking[i]=booking[j];
                booking[j]=temp;
            }
        }
    }

    cout<<"Sorted bookings: "<<endl;

    for(int i=0; i<n; i++){
        cout<<"Booking"<<i+1<<" name: "<<booking[i].name
            <<" Start time: "<<booking[i].start
            <<" Finish time: "<<booking[i].finish
            <<endl;
    }

    int last_finish=-1;

    cout<<"Selected bookings: "<<endl;

    for(int i=0; i<n; i++){
        if(booking[i].start>=last_finish){

            cout<<"Booking Selected -> "<<i+1
                <<" Name: "<<booking[i].name
                <<" Start time: "<<booking[i].start
                <<" Finish time: "<<booking[i].finish
                <<endl;

            last_finish=booking[i].finish;
        }
    }

    return 0;
}



