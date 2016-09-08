
#include<bits/stdc++.h>
using namespace std;
int compare(const void *a, const void * b)
{
    return ( *(int  *)a - *(int *)b );
}

int main()
{
     int str[]={6,1,1,9,};

  int s=4;


    qsort(str, s, sizeof( str[0] ), compare);
  for(int i=0;i<=3;i++)
  {
      cout<<str[i];

  }
return 0;
}
