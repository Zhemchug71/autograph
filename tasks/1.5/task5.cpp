#include <iostream>

 using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    {
        int day = n;
        for(int i=1;i<n;++i)
            cout << "   ";

        for(int day=1;day<=k;++day)
        {
            if(day<10)
                cout << " ";

            cout << day;

            if(day==7)
            {
                cout << "\n";
                day = 1;
            }
            else
            {
                cout << " ";
                day += 1;
            }
         }
    }
}
