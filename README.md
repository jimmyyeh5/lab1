# lab1
----------

File Lsit
-----------
* READ.md
* lab1.cpp
* lab1.script
* running_script.script

How to compile program for question B(For Unix)
---------------
These are the sequences of commands
1. g++ lab1.cpp
2. g++ -o lab1 lab1.cpp
3. ./lab1

Algorithm is provided by Lab1 handout
-------------
1. input n
2. print n 
3. if n=1 then stop 
    if n is odd then n = 3n+1
    else n = n/2 
4. goto 2.

Source code and some comments
----------

.. code-block:: c_cpp

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
