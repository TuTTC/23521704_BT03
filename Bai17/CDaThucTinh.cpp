#include "CDaThucTinh.h"
using namespace std;
istream& operator>>(istream& is, CDaThucTinh& P)
{
    // TODO: insert return statement here
    cout << "Nhap bac da thuc: ";
    is >> P.n;
    cout << "Nhap cac he so cua da thuc: \n";
    for (int i = P.n - 1; i >= 0; i--) {
        cout << "a[" << i << "] = ";
        is >> P.a[i];
    }
    return is;
}

ostream& operator<<(ostream& out, CDaThucTinh P)
{
   /* int check = 0;
 for (int i = 0; i < P.n; i++)
 {
     for (int j = 0; j < 2; j++)
     {
         if (j == 0)
         {
             if (P.a[i][j] == 0) {
                 continue;
             }
             else if ((P.a[i][j] == 1)) {
                 out << (check ? "+" : "");
                 check = 1;
                 if (!(P.a[i][j + 1])) {
                     out << 1;
                     continue;
                 }
             }
             else if ((P.a[i][j] == -1))
             {
                 out << "-";
                 check = 1;
                 if (!(P.a[i][j + 1])) {
                     out << 1;
                     continue;
                 }
             }
             else
             {
                 out << (((P.a[i][j] > 0) && check) ? "+" : "") << P.a[i][j];
                 check = 1;
             }
         }
         if (j == 1)
         {
             if (P.a[i][j] == 0)
             {
                 continue;
             }
             else if ((P.a[i][j] == 1)) {
                 check = 1;
                 out << "x";
             }
             else
             {
                 check = 1;
                 out << "x^" << P.a[i][j];
             }
         }

     }
    
 } 
 if (!check)
         out << 0;

 return out;*/
}

