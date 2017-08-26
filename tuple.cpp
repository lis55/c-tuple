#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () 
{	
	
	int id,e;
	string str1, str2, line,name, path;
	char option;
	bool b;
	
	cout << "What do you want to display?" << '\n';
	cout << "a)patterns by number" << '\n';
	cout << "b)patterns by name" << '\n';
	cout << "c)patterns by path" << '\n';
	cout << "d)called patterns" << '\n';
	cout << "e)non called patterns" << '\n';
	
	cin >> option;
	
	ifstream myfile ("entry.txt");
	
	if (myfile.is_open())
	{
	while( !myfile.eof() ){
	
		while (myfile >> id >> str1 >> str2 >> b )
		{
			
			if(option=='a')
			{
			
				cout << "insert number:" << '\n';
				cin >> e;
				
				if(e==id)
				{
				
					cout << id << ' ';
				    cout << str1 << ' ';
				    cout << str2 << ' ';
				    cout << b << '\n';
				
				}

				
			}
		
			if(option=='b')
			{
			
				cout << "insert name:" << '\n';
				cin >> name;
				
				if(str1==name)
				{
				
					cout << id << ' ';
				    cout << str1 << ' ';
				    cout << str2 << ' ';
				    cout << b << '\n';
				
				}
			
			}
			
			if(option=='c')
			{
			
				cout << "insert path:" << '\n';
				cin >> path;
				if(str2==path)
				{
					
					cout << id << ' ';
				    cout << str1 << ' ';
				    cout << str2 << ' ';
				    cout << b << '\n';
				}
			}
			
			if(option=='d')
			{
			
				if(b==true)
				{
				
					cout << id << ' ';
				    cout << str1 << ' ';
				    cout << str2 << ' ';
				    cout << b << '\n';
					
				}
			
			}
			
			
			if(option=='e')
			{
			
				if(b==false)
				{
				
					cout << id << ' ';
				    cout << str1 << ' ';
				    cout << str2 << ' ';
				    cout << b << '\n';
					
				}
			
			}
		}
	}
			myfile.close();	
			
		
	
		
	}
		
		else cout << "Unable to open file"; 
		
	return 0;
		
}
