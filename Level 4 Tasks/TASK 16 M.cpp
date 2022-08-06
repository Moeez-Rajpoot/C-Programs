#include<iostream>
using namespace std;
int main()
{
	int a;
	double b,c,d,e,f,g,i,j,k;
	const float h=3.1415;
	cout<<"CHOOSE A NUMBER\n1) RECTANGLE\n2) SQUARE\n3) CIRCLE\n4) TRIANGLE"<<endl;
	cin>>a;
	switch(a){
		case 1:
		    cout<<"ENTER THE LENGTH & WIDTH = "<<"\n";
		    cin>>b>>c;
		    d=b*c;
	    	cout<<"THE AREA OF RECTANGLE IS = "<<d;
	    	break;
		case 2:
		    cout<<"ENTER THE LENGTH OF ONE SIDE = "<<"\n";
		    cin>>d;
		    e=d*d;
		    cout<<"THE AREA OF SQUARE IS = "<<e;
		    break;
		case 3:
		    cout<<"ENTER THE RADIUS OF A CIRCLE = "<<"\n";
		    cin>>f;
		    g=h*(f*f);
		    cout<<"THE AREA OF CIRCLE IS = "<<g;
		    break;
		case 4:
		    cout<<"ENTER THE BASE & HEIGHT = " <<"\n";
			cin>>i>>j;   
			k=(i*j)/2;
			cout<<"THE AREA OF TRIANGLE IS = "<<k;
			break;
	}
return 0;
}
