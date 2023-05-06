#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

class s_calculator{
	private:
		vector<int> num;
		int s;
		char op;
	public:
		void set_calculator(void);
};
void s_calculator :: set_calculator(void){
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int n;
	//cout << "enter the figur you want to calculate :";
	//cin >> s;
	cout << "enter the operation : ";
	cin >> op;
	if(op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
		exit(0);
	int x;
	cout << "enter the elements(without frectional point and when you want to stop press -1 ) ::"<<endl;
	while (cin >> x) {
        if (x == -1) {
            break;
        }
        num.push_back(x);
	}
	cout << "your final result is :"<<endl;
	for(int i=0;i!=num.size();i++){
		for(int j=0;j!=num.size()-1;j++){
			if(op == '+')

				num[i] = num[i] + num[j+1];
			if(op == '-')
				num[i] = num[i] - num[j+1];
			if(op == '*')
				num[i] = num[i] * num[j+1];
			if(op == '/')
				num[i] = num[i] / num[j+1];
			if(op == '%')
				num[i] = num[i] % num[j+1];	
			
		}
		while (!num.empty()) {
   	    	num.pop_back();
        }
		SetConsoleTextAttribute(h,10);
		cout << num[i] <<endl;
		break;
		
	}
}

class science_calculator : public s_calculator
{
	protected:
		double n;
	public:
		void sci_input(void);
		void set_sci_calculator(void);
		
};
void science_calculator :: sci_input(void){
	cout << "                       SCIENTIFIC OPERATION'S"<<endl;
	cout << "max(a,b)--->It will return a maximum number between 2 numbers."<<endl;
	cout << "min(a,b)--->It will return a minimum number between 2 numbers."<<endl;
	cout << "pow(a,b)--->It will calculate a raised to the power b"<<endl;
	cout << "sqrt(a)---> it will calculate the square root of a"<<endl;
	cout << "cbrt(a)---> It will calculate the cube root of a."<<endl;
	cout << "sin(a)----->It will calculate the value of sine a."<<endl;
	cout << "cos(a)----->It will calculate the value of cosine a."<<endl;
	cout << "tan(a)----->It will calculate the value of tangent a."<<endl;
	cout << "hypot(a,b)-->It will calculate the hypotenuse of the right-angled triangle."<<endl;
	cout << "cos-1-----> It will calculate the logarithm of a."<<endl;
	cout << "tan-1------>It will calculate the common logarithm of a."<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
	cout << "                               HOPE YOU ENJOY THIS OPERATION'S'"<<endl;
	cout<< "---------------------------------------------------------------------------------------------------------------"<<endl;
	
}
void science_calculator :: set_sci_calculator(void){
	string op;
	double a,b;
	cout << " enter what you want to operate (enter operation name) ::";
	cin >>op;
	if(op.compare("max")==0 || op.compare("MAX")==0){
		cout << "enter 2 number's :";
		cin >> a >> b;
		cout << "your maximum = "<< max(a,b) << endl<<endl;
	}
	if(op.compare("min")==0 || op.compare("MIN")==0){
		cout << "enter 2 number's :";
		cin >> a >> b;
		cout << "your minimum = "<< min(a,b) << endl<<endl;
	}
	if(op.compare("pow")==0 || op.compare("POW")==0){
		cout << "enter 2 number's :";
		cin >> a >> b;
		cout << "POWER of  number = "<< pow(a,b) << endl<<endl;
	}
	if(op.compare("sqrt")==0 || op.compare("SQRT")==0){
		cout << "enter the number's :";
		cin >> a;
		cout << "square root  = "<< sqrt(a) << endl<<endl;
	}
	if(op.compare("cbrt")==0 || op.compare("CBRT")==0){
		cout << "enter the number's :";
		cin >> a;
		cout << "cube root = "<< cbrt(a) << endl<<endl;
	}
	if(op.compare("sin")==0 || op.compare("SIN")==0){
		cout << "enter the number's :";
		cin >> a;
      double radians = a * M_PI / 180.0;
      double sine = sin(radians); 
		cout << "the value of sine "<<a<<"  =  "<< sine << endl<<endl;
	}
	if(op.compare("cos")==0 || op.compare("COS")==0){
		cout << "enter the number's :";
		cin >> a;
      double radians = a * M_PI / 180.0;
      double cosine = cos(radians);
		cout << "the value of cos "<<a<<"  =  "<< cosine << endl<<endl;
	}
	if(op.compare("tan")==0 || op.compare("TAN")==0){
		cout << "enter the number's :";
		cin >> a;
      double radians = a * M_PI / 180.0;
      double cosine = tan(radians);
		cout << "the value of tan "<<a<<"  =  "<< cosine << endl<<endl;
	}
	if(op.compare("cos-1")==0 || op.compare("COS-1")==0){
		cout << "enter the number's :";
		cin >> a;
		cout << "your logarithm = "<< log10(a) << endl<<endl;
	}
	if(op.compare("tan-1")==0 || op.compare("TAN-1")==0){
		cout << "enter the number's :";
		cin >> a;
		cout << "your common logarithm  = "<< log(a) << endl<<endl;
	}
	if(op.compare("hypot")==0 || op.compare("HYPOT")==0){
		cout << "enter the number's :";
		cin >> a>>b;
		cout << "your common logarithm  = "<< hypot(a,b) << endl<<endl;
	}
}

int main() {
    int a;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    science_calculator c;

    SetConsoleTextAttribute(h, 10);
    std::cout << "__________________________________________WHAT YOU WANT TO CALCULATE__________________________"<<endl<<endl;
    c.sci_input();
    while (true) {
        cout << "If you wnat to simple calculation (+ , - , * , / , % ) press 1" <<endl;
        cout << "If you want to scientific calculation press 2." <<endl;
        cout << "Press 99 for quit the program ." <<endl;
        cin >> a;
        if (a == 99) {
             break;
        }else if (a == 1) {
            system("color 1E");
            c.set_calculator();
        }else if (a == 2) {
            system("color 4B");
            c.set_sci_calculator();
        }
		else cout << "YOU ENTER A RONG NUMBER ,"<<endl
				  << "PLEASE ENTER '1' FOR SIMPLE CALCULATION AND '2' FOR SCIENTIFIC CALCULATION" 
				  <<endl<<endl<<endl;
		cout << "________________________________________________________________________________________________"<<endl;
    }  
    return 0;
}

