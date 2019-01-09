#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n = 0;
        
    while((n < 1) or (n > 1000000000)){
        cout << "Enter count of sqaures (n). (1 ≤ n ≤ 10^9)." << endl;
        cin >> n;
    }

        int l = sqrt(n);
        int e = n / l;
        int mn = n - (l * e);
        int res = l * (e + 1) + e * (l + 1);
        if(mn){
            res = res + 2 * mn + 1;
        }
        cout << "Matches quantity for squares = ";
        cout << res << endl;
     
    return 0;
}
