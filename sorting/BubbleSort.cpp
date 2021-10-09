#include<iostream>
using namespace std;
int main (){
   int i, j, temp, n;
   cout << "Enter number of elements:";
   cin >> n;
   int a[n];
   cout << "Enter elements to be sorted: \n";
   for(i = 0; i < n; i++) {
        cin >> a[i];
   }
   cout << "Array before sorting: ";
   for(i = 0; i < n; i++) {
      cout << a[i] << " ";
   }
    cout<<endl;
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++){
            if(a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout <<"Elements after sorting: ";
    for(i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
