#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

/* Structure that will hold the pattern call*/
struct tupl {
int id;
string str1, str2;
bool call;

} tup;


int main(){
	
	int i,number,size;
	string name, path;
	char option;	
	vector<tupl> set;
	bool call, terminator;
	
	i=0;
	
	/*First the data for the file is optained, each line is distrbuted 
	in the structure tupl and all the lines storaged in a vector "set" */
		
	ifstream myfile ("entry.txt");
		
	if(myfile.is_open()){	
			while (myfile >> tup.id >> tup.str1 >> tup.str2 >> tup.call ){
					
					cout << tup.id << ' ';
				    cout << tup.str1 << ' ';
				    cout << tup.str2 << ' ';
				    cout << tup.call << '\n';

					set.push_back(tup);
					i++;		
			}	

		myfile.close();
	}
	
	else {
		cout << "Unable to open file";
	}
	size=set.size(); /* number of lines in the text file*/
	
	terminator=false; /* Boolean for exiting the program*/
	
	while(terminator==false){ /* While loop to assure that the program will take an input unless the user wants to exit*/
		cout << "What do you want to display?" << '\n';
		cout << "a)patterns by number" << '\n';
		cout << "b)patterns by name" << '\n';
		cout << "c)patterns by path" << '\n';
		cout << "d)called patterns" << '\n';
		cout << "e)non called patterns" << '\n';
		cout << "f) Exit" << '\n';
	
		cin >> option;
		
		if(option=='a'){
			
			cout << "insert number:" << '\n';
			cin >> number;
			
			for (i=0;i<size;i++){
				
				if(number==set[i].id){
					
					cout << set[i].id << ' '; 
					cout << set[i].str1 << ' '; 
					cout << set[i].str2 << ' ';
					cout << set[i].call << '\n';
				}	
			}
		}
		
		/* Each if corresponds to the input the user gives*/
		
		if(option=='b'){
			
			cout << "insert name:" << '\n';
			cin >> name;
			
			for (i=0;i<size;i++){
				
				if(!name.compare(set[i].str1)){
					
					cout << set[i].id << ' '; 
					cout << set[i].str1 << ' '; 
					cout << set[i].str2 << ' ';
					cout << set[i].call << '\n';
				}	
			}
		}
		
		if(option=='c'){
			
			cout << "insert number:" << '\n';
			cin >> path;
			
			for (i=0;i<size;i++){
				
				if(!path.compare(set[i].str2)){
					
					cout << set[i].id << ' '; 
					cout << set[i].str1 << ' '; 
					cout << set[i].str2 << ' ';
					cout << set[i].call << '\n';
				}	
			}
		}
		
		if(option=='d'){
			
			for (i=0;i<size;i++){
				
				if(set[i].call){
					
					cout << set[i].id << ' '; 
					cout << set[i].str1 << ' '; 
					cout << set[i].str2 << ' ';
					cout << set[i].call << '\n';
				}	
			}
		}	
		if(option=='e'){
			
			for (i=0;i<size;i++){
				
				if(!set[i].call){
					
					cout << set[i].id << ' '; 
					cout << set[i].str1 << ' '; 
					cout << set[i].str2 << ' ';
					cout << set[i].call << '\n';
				}	
			}
		}
		
		if(option=='f'){  /*  Exit the program  */
			terminator= true;
		}
		
		else 	cout << "option not valid" << '\n';	/* Delivers an error message if the input is not valid*/
	}
	
	return 0;
}
