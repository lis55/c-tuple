#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
	string str1,str2;
	int i,call,id;
	ofstream myfile ("entry.txt");
	
	if (myfile.is_open()){
		for(i=0;i<10;i++) {
		id=rand() % 30; ;
		
		if(id%2==1){
			str1="lis";
			str2="C:\path1";
			call=1;
		}
		
		else{
			str1="kevin";
			str2="C:\path2";
			call=0;
		} 
		
				
		myfile << id <<" "<< str1<<" " << str2<<" " << call<<" " << '\n';
	
		}
		myfile.close();	
	}

	else cout << "Unable to open file";
	
	return 0;	
}

