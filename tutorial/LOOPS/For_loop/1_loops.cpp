// For Loop
#include <iostream> 
using namespace std;
/*int main()
{
   int num = 10;
   int i;
   for (i = 0; i < 10; i++)
   {
    cout<<i<<" ";
   }
}
*/


//While Loop
/*int main(){
    int i = 6;
    while (i < 10)
    {
        cout <<i<<" ";
        i++;
    }
    return 0;
}
*/

// DO_While Loop
/*
int main()
{
    int i = 1;
    do 
    {
        cout<<i<<" ";
        i++;
    }while (i < 6);
    return 0;
}
*/
// break and continue
int main ()
{
    int num = 10;
    int i;
    for (i = 0; i <= num; i++){
        if (i == 4){
         //   break;
         continue;
        }
        cout <<i<<" ";
    }
    return 0;
}
