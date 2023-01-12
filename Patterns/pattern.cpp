#include<bits/stdc++.h>
using namespace std;

void print2(int n) {
  for(int i = 0;i<n;i++){
    for(int j = 0;j<=i;j++){
      cout  << "* ";
    }
    cout << endl;
  }
}

void print3(int n){
  for(int i = 1;i<=n;i++) {
    for(int j = 1;j<=i;j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}
void print4(int n){
  for(int i = 1;i<=n;i++) {
    for(int j = 1;j<=i;j++) {
      cout << i << " ";
    }
    cout << endl;
  }
}

void print5(int n){
  for(int i = 1;i<=n;i++) {
    for(int j = 0;j<n-i+1;j++){
      cout << "* ";
    }
    cout << endl;
  }
}

void print6(int n){
  for(int i = 1;i<=n;i++) {
    for(int j = 0;j<n-i+1;j++){
      cout << j+1 << " ";
    }
    cout << endl;
  }
}

void print7(int n){
  for(int i = 1;i<=n;i++) {
    for(int j = 1;j<=n-i;j++){
      cout << " ";
    }
    for(int k = 1;k<=2*i-1;k++){
      cout << "*";
    }
    cout << endl;
  }

}

void print8(int n){
  for(int i = 0;i<n;i++){
    for(int j = 1;j<=i;j++){
      cout << " ";
    }

    for(int j = 0;j<(2*n-2*i-1);j++){
      cout << "*";
    }

     for(int j = 1;j<=i;j++){
      cout << " ";
    }
    cout << endl;
  }
}

void print9(int n) {
  for(int i = 0;i<n;i++) {
    for(int j = 0;j<n-i-1;j++){
        cout << " ";
    }
    for(int j = 0;j<2*i+1;j++) {
        cout << "*";
    }
    for(int j = 0;j<n-i-1;j++){
        cout << " ";
    }
    cout << endl;
  }
  for(int i = 0;i<n;i++) {
    for(int j = 1;j<=i;j++){
      cout << " ";
    }
    for(int j = 0;j<(2*n-2*i-1);j++){
      cout << "*";
    }

     for(int j = 1;j<=i;j++){
      cout << " ";
    }
    cout << endl;
  }
}

void print10(int n) {
    for(int i = 1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n -i;
        for(int j = 1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void print11(int n) {
    int flip = 1;
    for(int i = 0;i<n;i++){
        if(i % 2 == 0) flip = 1;
        else flip = 0;
        for(int j = 0;j<=i;j++){
            cout << flip << " ";
            flip = 1 - flip;
        }
        cout << endl;
    }
}

void print12(int n) {
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout << j;
        }
        for(int j = 1;j<=2*(n-i);j++){
            cout << " ";
        }
        for(int j =i;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }
}

void print13(int n) {
    int count  = 1;
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<=i;j++){
            cout << count <<" " ;
            count++;
        }
        cout << endl;
    }
}

void print14(int n){
    for(int i=0;i<n;i++){
        for(char ch = 'A';ch<='A'+i;ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void print15(int n){
    for(int i=0;i<n;i++){
        for(char ch = 'A';ch<='A'+n-i-1;ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void print16(int n){
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout << ch ;
        }
        ch++;
        cout << endl;
    }
}

void print17(int n){
  for(int i = 1;i<=n;i++) {
    for(int j = 1;j<=n-i;j++){
      cout << " ";
    }
    char ch = 'A';
    int breakpoint = (2*i+1)/2;
    for(int k = 1;k<=2*i-1;k++){
      cout << ch;
      if(k<breakpoint) ch++;
      else ch--;
    }
    cout << endl;
  }

}

void print18(int n) {
    for(int i = 0;i<n;i++){
        for(char ch ='E'-i;ch<='E';ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


void print19(int n){
    int iniS=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        for(int j=0;j<iniS;j++){
            cout << " ";
        }
         for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        iniS+=2;
        cout<<endl;
    }
    iniS=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        for(int j=0;j<iniS;j++){
            cout << " ";
        }
         for(int j=1;j<=i;j++){
            cout << "*";
        }
        iniS-=2;
        cout<<endl;
    }

}

int main() {
  int t;
  cin >> t;
  for(int i = 0;i<t;i++){
    int n;
    cin >> n;
    print19(n);
  }
  return 0;
}