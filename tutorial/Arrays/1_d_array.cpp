#include <iostream> 
using namespace std;
//Question 1 — Sum of 5 numbers (Easy)

/*int main(){
    int arr[5];
    int sum = 0;

    cout<<"Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin>>arr[i];
        sum = sum + arr[i];
    }

    cout << "Sum = "<< sum <<endl;
    return 0;
}
*/

//Question 2 — Maximum of 10 numbers
 /*int main(){
    int arr[10];
    int maxNum; 
    
    //Input of first element
    cin >> arr[0];
    maxNum = arr[0];

    //other 9 elements
    for (int i = 1; i < 10; i++){
        cin >> arr[i];
        if (arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    cout <<"Maximum = "<< maxNum;
    return 0;
 }
*/

int main() {
    int arr[7];

    cout<<"Enter 7 numbers: ";
    for (int i = 0; i < 7; i++){
        cin >> arr[i];
    }
    //print even numbers
    cout << "Even numbers: ";
    for (int i = 0; i < 7; i++){
        if (arr[i] % 2 == 0){
            cout << arr[i] <<" ";
        }
    }
    return 0;
}