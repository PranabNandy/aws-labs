/* 
..... g++ -std=c++11 Test.c++ -lpthread   ....
*/


#include<bits/stdc++.h>
using namespace std;


long int c=1;
mutex m;
condition_variable cond;
void even(){
	 std::thread::id this_id = std::this_thread::get_id();
	unique_lock<mutex> l1(m,defer_lock);
	 while(1)
   {
   		int *p=new int(100);
        cout<<this_id<<"  I am Even "<<c<<endl;
        c++;
   }
}
void odd(){
	std::thread::id this_id = std::this_thread::get_id();
	unique_lock<mutex> l2(m,defer_lock);
	while(1)
    {
    	int *p=new int(100);
       cout<<this_id<<"   I am odd "<<c<<endl;
       c--;
    }

}
int main(){
	
	for(;;){
		thread *t1=new thread(even);
		thread *t2=new thread(odd);

		t1->join();
		t2->join();
	}
	
	
	//this_thread::sleep_for(chrono::seconds(2));
	return 0;
}