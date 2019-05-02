/#include <iostream>
using namespace std;

int main() {
    
	int t,X1lt,Y1lt,X1rb,Y1rb,X2lt,Y2lt,X2rb,Y2rb;
	cin>> t;
	//always write a freshly thought code
	while(t--)
	{
	    cin>>X1lt>>Y1lt>>X1rb>>Y1rb>>X2lt>>Y2lt>>X2rb>>Y2rb;
	    
	    if(((X1rb>X2lt&&X2lt>X1lt)||(X1rb>X2rb&&X2rb>X1lt))&&((Y1lt>Y2rb&&Y2rb>Y1rb)||(Y1lt>Y2lt&&Y2lt>Y1rb)))//||((X2rb>X1lt>X2lt||X2rb>X1rb>X2lt)&&(Y2lt>Y1rb>Y2rb||Y2lt>Y1lt>Y2rb)))
	    {
	        cout<< 1<<endl;
	    }
	    else {
	        cout<< 0<<endl;
	    }
	}
	
	return 0;
}