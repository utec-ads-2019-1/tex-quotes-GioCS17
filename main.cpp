#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

	string line;
	bool faro=true,cont=true;
	while(getline(cin,line)){
			for(char &a:line){
				if(a=='\"'){
					if(faro)
						cout<<"``";
					else
						cout<<"''";
					faro=!faro;
				}
				else
					cout<<a;
			}
		cout<<endl;
	}

    return 0;
}


