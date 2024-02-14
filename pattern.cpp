#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int ascii='a';
    // cout<<ascii;

    // int money=300;
    // for(int i=1;i<30;i++)
    // {
    //     if(i%2==0)
    //     continue;
    //     if(money==0)
    //     break;
    //     cout<<"Go "<<i<<endl;
    //     money-=30;
    // }

    // prime no.s in range // cout<<"n: "; cin>>n;

    // int n, i;

    // int a, b;
    // cout << "a and b: ";
    // cin >> a >> b;
    // for (n = a; n <= b; n++)
    // {

    //     for (i = 2; i < n; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             break;
    //         }
    //     }

    //     if (n == i)
    //         cout << n << " ";
    // }

    // Pattern

    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // int a, b; cout<<"a and b :"; cin>>a>>b;

    // for(int i=1;i<=a;i++){
    //     for(int j=1;j<=b;j++)
    //     cout<<"* ";
    //     cout<<endl;
    // }

    // a and b :5 4
    // * * * *
    // *     *
    // *     *
    // *     *
    // * * * *
    //  int a, b; cout<<"a and b :"; cin>>a>>b;

    //     for(int i=1;i<=a;i++){
    //         for(int j=1;j<=b;j++){
    //             if(i==1 || i==a || j==1 || j==b)
    //             cout<<"* ";
    //             else
    //             cout<<"  ";
    //         }
    //         cout<<endl;
    //     }

    // a :4
    // * * * *
    // * * *
    // * *
    // *
    //  int a; cout<<"a :"; cin>>a;
    //     for(int i=a;i>=1;i--){
    //         for(int j=1;j<=i;j++)
    //             cout<<"* ";
    //         cout<<endl;
    //     }


// a :4
//       * 
//     * * 
//   * * *
// * * * *
//     int a;
//     cout << "a :";
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= a; j++)
//             if(i+j > 4)
//             cout<<"* ";
//             else
//             cout<<"  ";
//         cout << endl;
//     }


// a: 5
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
// int a; cout<<"a: "; cin>>a;
//     int cnt=1;
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=i;j++){
//             cout<<cnt<<" ";
//             cnt++;
//         }
//         cout<<endl;
//     }



// a: 4
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             * 
// int a; cout<<"a: "; cin>>a;
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         int space=2*a-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     for(int i=a;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         int space=2*a-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }



// a: 5
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// int a; cout<<"a: "; cin>>a;
// for(int i=a;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
// }



// a: 5
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
// int a; cout<<"a: "; cin>>a;
// for(int i=1;i<=a;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0)
//             cout<<"1"<<" ";
//             else
//             cout<<"0"<<" ";
//         }
//         cout<<endl;
// }



// a: 5
//         * * * * * 
//       * * * * * 
//     * * * * * 
//   * * * * * 
// * * * * * 
// int a; cout<<"a: "; cin>>a;
// for(int i=1;i<=a;i++){
//         for(int j=1;j<=a-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=a;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
// }


// a: 5
//         1  
//       1  2  
//     1  2  3  
//   1  2  3  4  
// 1  2  3  4  5  
// int a; cout<<"a: "; cin>>a;
// for(int i=1;i<=a;i++){
//         for(int j=1;j<=a-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<"  ";
//         }
//         cout<<endl;
// }



// a: 5
//         1 
//       2 1 2 
//     3 2 1 2 3 
//   4 3 2 1 2 3 4 
// 5 4 3 2 1 2 3 4 5 
// int a; cout<<"a: "; cin>>a;
// for(int i=1;i<=a;i++){
//         for(int j=1;j<=a-i;j++){
//             cout<<"  ";
//         }
//         for(int j=i;j>=1;j--){
//             cout<<j<<" ";
//         }
//         for(int j=2;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
// }



// a: 3
//     * 
//   * * * 
// * * * * * 
// * * * * * 
//   * * * 
//     * 
// int a; cout<<"a: "; cin>>a;
// for(int i=1;i<=a;i++){
//         for(int j=1;j<=a-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
// }
// for(int i=a;i>=1;i--){
//         for(int j=1;j<=a-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
// }



//     *       *     
//   *   *   *   *   
// *       *       * 
// int a=3;
//     for(int i=1;i<=a;i++){
//         for(int j=1;j<=a*a;j++){
//             if((i+j)%4==0 || (j%4==0 && i==2))
//             cout<<"* ";
//             else
//             cout<<"  ";
//         }
//         cout<<endl;
//     }




    return 0;
}
