#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc,char *argv[])
{
    float sum = 0;
    int size = argc - 1; 
    if(argc == 1) cout << "Please input numbers to find average.";
    else
    {
    for(int i=1;i<=size;i++) sum += atof(argv[i]);
    float avg = sum / size;
    cout << "---------------------------------" << "\n";
    cout << "Average of " << size << " numbers = " << avg << "\n"; 
    cout << "---------------------------------" << "\n";
    }
    return 0;
}   

