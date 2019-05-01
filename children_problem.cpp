 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
     char ch;
     int i, n, w, s, num[65];
     string per[65];
     while (cin>>n)
     {
        for(i=0 ; i < n; i++)
         {
             cin >> per[i];
             num[i] = i;
         }
         cin >> w >> ch >> s;
         w =(w+n-1)%n;
         n++;
         while (--n)
         {
             w = (w + s -1 ) % n;
                cout << per[num[w]] << endl;
                for(i=w;i<n-1;i++)
                 per[i] = per[i+1];
         }
     }
     return 0;
 }
