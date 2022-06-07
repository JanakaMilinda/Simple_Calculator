using namespace std;
#include<iostream>
#include<math.h>

int add(int a, int b);
int sbtract(int a, int b);
int multiply(int a, int b);
int divide(int a , int b);
int power(int a, int b);
int factorial(int a);

int add(int a, int b){
	int sum;
	cout<<"Enter first number  : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	sum=a+b;
	cout<<"Sum of "<<a<<" + "<<b<<" = "<<sum<<endl;
	return sum;
}

int sbtract(int a, int b){
	int sum;
	cout<<"Enter first number  : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	sum=a-b;
	cout<<"Sum of "<<a<<" - "<<b<<" = "<<sum<<endl;
	return sum;
}

int multiply(int a, int b){
	int sum;
	cout<<"Enter first number  : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	sum=a*b;
	cout<<"Sum of "<<a<<"*"<<b<<"="<<sum<<endl;
	return sum;
}

double divide(double a, double b){
	double sum;
	cout<<"Enter first number  : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	if(b==0){
		cout<<" b sohould be>0";
    }
	if (b!=0){
	sum=a/b;
    cout<<endl;
	cout<<"Sum of "<<a<<" / "<<b<<" = "<<sum<<endl;
    }
	return sum;
}

int power(int a, int b){
	int sum;
	cout<<"Enter base number      : ";
	cin>>a;
	cout<<"Enter component number : ";
	cin>>b;
	sum=pow(a, b);
	cout<<"Sum of "<<a<<" ^ "<<b<<" = "<<sum<<endl;
	return sum;
}

int factorial(int n){
	int factorial=1;
	cout<<"Enter a number  : ";
	cin>>n;

	if (n<0){
		cout<<"Error! enter a number grater than 0";
	}
	else{
		for(int i=1; i<=n; i++){
			factorial*=i;
		}
		cout<<"Factorial of "<<n<<" = "<<factorial<<endl;
	}
	return factorial;

}

int main(){
	cout<<"                         CALCULATOR      \n";
	cout<<"                   =====================  ";
	cout<<endl;
    int n;
	char choice='\0';
	while(!(choice=='Q' || choice=='q' || choice=='N' || choice=='n')){
		cout<<"\n";
		cout<<"If you wnat to quit press Q/q or press N/n to proceed :  ";
		cin>>choice;

	    if(choice=='N' || choice=='n'){
	        while(!(n==9)){
	        	cout<<"\n";
	            cout<<"To add two numbers         - press 1\n";
	            cout<<"To subtract two numbers    - press 2\n";
	            cout<<"To multiply two numbers    - press 3\n";
	            cout<<"To divide two numbers      - press 4\n";
	            cout<<"To ca;culate power         - press 5\n";
	            cout<<"To get factorial of number - press 6\n";
	            cout<<"TO QUIT....................- PRESS 9\n";
	            cout<<"What operation do you want to do : ";
	            cin>>n;

			    if(n!=1 && n!=2 && n!=3 && n!=4 && n!=5 && n!=6 &&n!=9){
		            cout<<"Entered value is invalid please enter the number agin..... \n";
		            cin>>n;
	            }      

                if(n==1){
    	            int a, b;
    	            add(a,b);
					cout<<"\n";
    	            cout<<"-------------------------------------";
    	            cout<<endl;
	            }
	            if(n==2){
		            int a,b;
		            sbtract(a,b);
					cout<<"\n";
		            cout<<"-------------------------------------";
		            cout<<endl;
	            }
	            if(n==3){
		            int a,b;
		            multiply(a, b);
					cout<<"\n";
		            cout<<"-------------------------------------";
		            cout<<endl;
	            }
	            if(n==4){
		            double a,b;
		            divide(a, b);
					cout<<"\n";
		            cout<<"-------------------------------------";
		            cout<<endl;
	            }
	            if(n==5){
		            int a,b;
		            power(a, b);
					cout<<"\n";
		            cout<<"-------------------------------------";
		            cout<<endl;
	            }
	            if(n==6){
		            int a;
		            factorial(a);
					cout<<"\n";
		            cout<<"-------------------------------------";
		            cout<<endl;
	            }
	            if(n==9){
                    cout<<"\n";
                    cout<<"-------------------------------------";
                    cout<<endl;
	            }
			}
	        
	    }

		if(choice=='Q' || choice=='q'){
			cout<<"\n";
			cout<<"                       CALCULATER V1.0\n";
			cout<<"                   =====================";
			cout<<endl;
		}
	}
}




