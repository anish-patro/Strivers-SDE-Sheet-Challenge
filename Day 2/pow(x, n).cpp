#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
  long ans=1;
  long xx=x;
  while(n>0){
    if(n%2)
    ans=(ans%m*(xx)%m)%m;
    
    xx=((xx)%m*(xx)%m)%m;

    n=n>>1;

}

return (int)(ans%m);
}