#include <iostream>

using namespace std;

int main()
{
    int a,k=0;
    double s=0;
    cin >>a;
    while (a!=0){
            k++;
            s=s+a;
            cin>>a;
    }
    cout << s/k << endl;
    return 0;
}
