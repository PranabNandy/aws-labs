/* 
..... g++ -std=c++11 Test.c++ -lpthread   ....
*/


#include<bits/stdc++.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <unistd.h>
using namespace std;



mutex m;
condition_variable cond;
void even(int c){
	//int c=1;
	
	vector<int> v(1e5);
	for(int i=0;i<1e5;i++) v[i]=i;
	std::thread::id this_id = std::this_thread::get_id();
	unique_lock<mutex> l1(m,defer_lock);	
   cout<<this_id<<"  I am Even "<<c<<endl;
   while(c++<=1000) even(c);
   //if(c<=2)
   //	fork();
}
void odd(){
	int *p=new int(1000);
	even(1);

	static long int c=1;
	std::thread::id this_id = std::this_thread::get_id();
	unique_lock<mutex> l2(m,defer_lock);
   cout<<this_id<<"   I am odd "<<c<<endl;
   c++;
   //fork();
   //if(c<=2) odd();
}
int main(){
	
	for(;;){
		thread *t1=new thread(odd);
		thread *t2=new thread(odd);

		t1->join();
		t2->join();
	}
	
	
	//this_thread::sleep_for(chrono::seconds(2));
	return 0;
}