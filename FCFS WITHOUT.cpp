#include<iostream> #fcfs without arrival time
using namespace std;

int main(){
	int n,*arr;
	arr=new int [n];
	cout<<"enter the number of processes: ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{cout<<"\nenter burst time of the "<<i+1<<" processes: ";
		cin>>arr[i];
		
	}cout<<endl<<"\n";
	cout<<"                GANTT CHART \n";
	cout<<" |";
	for(int i=0;i<n;i++){
		
		cout<<"  process   "<<i+1<<"   | ";
	}
	cout<<endl;
	int e=0;
	for(int i=0;i<=n;i++){
		cout<<" "<<e<<"                ";
		e+=arr[i];
	}
	
	
	cout<<"\n\n";
	
	cout<<"\nprocess            burst time               waiting time                   turnaround time\n";
	float avg=0,t=0,tr=0,ta=0; //t=gantt chart except last waala : avg=sum of waiting time 
	for(int i=0;i<n;i++){      //tr=gantt chart for turnaround  : ta = sum of turnaround time 
			tr+=arr[i];
		ta+=tr;
		cout<<"  "<<i+1<<"                     "<<arr[i]<<"                         "<<t<<"                                 "<<tr<<endl;
		t+=arr[i]; 
		if(i!=n-1)
		avg+=t;
	
	
		
	}
	cout<<"\naverage waiting time is "<<avg/n<<endl;
	cout<<"\naverage turnaround time "<<ta/n;
	
}

