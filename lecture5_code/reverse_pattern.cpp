// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int space=1;
//         while (space<=n-i)
//         {
//             cout<<" ";
//             space+=1;
//         }

//         int star=1;
//         while (star<=i)
//         {
//             cout<<"*";
//             star=star+1;
//         }
//         cout<<endl;
//         i=i+1;

//     }
// }

// Code : Mirror Number Pattern
// Send Feedback
// Print the following pattern for the given N number of rows.
// Pattern for N = 4

// The dots represent spaces.

// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints
// 0 <= N <= 50
// Sample Input 1:
// 3
// Sample Output 1:
//       1
//     12
//   123
// Sample Input 2:
// 4
// Sample Output 2:
//       1
//     12
//   123
// 1234

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int space=1;
//         while (space<=n-i)
//         {
//             cout<<" ";
//             space+=1;
//         }

//         int j=1;
//         while (j<=i)
//         {
//             cout<<j;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;

//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int star=1;
//         while (star<=n-i+1)
//         {
//             cout<<"*";
//             star+=1;
//         }
//         cout<<endl;
//         i=i+1;

//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int star=1;
//         while (star<=n-i+1)
//         {
//             cout<<star;
//             star+=1;
//         }
//         cout<<endl;
//         i=i+1;

//     }
// }

// Code : Inverted Number Pattern
// Send Feedback
// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 4444
// 333
// 22
// 1
// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50
// Sample Input 1:
// 5
// Sample Output 1:
// 55555
// 4444
// 333
// 22
// 1
// Sample Input 2:
// 6
// Sample Output 2:
// 666666
// 55555
// 4444
// 333
// 22
// 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n - i + 1)
//         {
//             cout << n-i+1;
//             j += 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }




#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int space=1;
        while (space<=n-i)
        {
            cout<<" ";
            space+=1;
        }

        int j=1;
        while (j<=i)
        {
            cout<<j;
            j=j+1;
        }

        j=i-1;
        while (j>=1)
        {
            cout<<j;
            j=j-1;
        }
        cout<<endl;
        i=i+1;

    }
}