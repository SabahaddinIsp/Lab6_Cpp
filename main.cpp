#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double sum = 0;
double sum_with_overloadedFunc = 0;

double function(int n){
    double temp = ::pow(-1, n+1) / n ;
    sum = sum + temp;
    n--;
    if(n>0)
        function(n);
    else
        return sum;
}
double function(){
    int x;
    cout<<"Enter the step size of the function"<<endl;
    cin>>x;
    while(x>0){
        double temp = ::pow(-1, x+1) / x ;
        sum_with_overloadedFunc = sum_with_overloadedFunc + temp;
        x--;
    }
    return sum_with_overloadedFunc;

}

int main() {

    int n;
    cout<<"Enter the step size of the function";
    cin>>n;
    function(n);
    cout<<"sum is: " << sum<<endl;
    cout<<"Overloaded sum is: "<<function();

}
