#include <iostream>
#include <cstring>
#include <fstream>
#include <ctime>
#include <sstream>

using namespace std;


int compare () {
    ifstream f("text"); //taking file as inputstream
    string str;
    if(f) {
	ostringstream ss;
	ss << f.rdbuf(); // reading data
	str = ss.str();
      }
	   
     //output with cout
     cout<<"Output with cout"<<"\n";
      int start_one = clock();
       cout<<str;
      int stop_one = clock();
      cout<<"\n";
	    
  //output with printf
  
      //convert string str to char array c to be able to output via printf
      char c[str.size() + 1];
      strcpy(c, str.c_str());
      
     cout<<"output with printf:\n";
      int start_two = clock();
     
      printf("%s", c);
      int stop_two = clock();

	    
    
        std::cout <<"elapsed time for output with cout in mls " << (stop_one - start_one)/double(CLOCKS_PER_SEC)*1000<<"\n";    
        std::cout << "elapsed time for output with printf in mls " << (stop_two - start_two) / double(CLOCKS_PER_SEC) * 1000 <<"\n";

    

  return 0;
}

