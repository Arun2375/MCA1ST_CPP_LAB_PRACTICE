//Example 4: Range Based for Loop
// Syntax:
//  for (variable : collection) {
//     // body of loop
// }
#include <iostream> 
using namespace std;
int main()
{
   int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int n : num_array){
        cout << n << " ";
    }
    return 0;
}