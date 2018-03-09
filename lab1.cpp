#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n; //define an integer n
    cin >> n;
    cout << n;
    /*check if n == 1 or not*/
    while (n != 1){
        /*differentiate the parity of the recent n*/
        if (n%2 == 1)
            n = n*3+1;//3n+1 for odd integer
        else
            n=n/2;//n/2 for even integer
        cout <<" "<< n;//print it out
    }
//    cout <<" "<< n;//print the final term which is suppose to be 1
    return 0;
}
