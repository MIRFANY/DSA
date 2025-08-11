#include<iostream>
using namespace std;
void ptrn1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}
void ptrn2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*" <<" ";
        }
        cout<<endl;
    }

}

void ptrn3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }

}

void ptrn4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
        for(int k=0;k<(2*i) +1;k++){
            cout<<"*";
        }
        for(int l=0;l<n-i-1;l++){
            cout<<" ";
        }

        cout<<endl;
    }
}
void ptrn8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<((2*(n-1)+1)-(2*i));j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}

void ptrn9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;

        
    }
}
void ptrn10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars= 2 * n -i;

        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void ptrn11(int n){
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"1" <<" ";
    //     }
    //     cout<<endl;
    // }

}

void ptrn12(int n){
    for(int i=0;i<n;i++){
        int start =1;
        if(i%2 ==0){
            start = 1;
        }
        else 
        {
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout<<start;

            start= 1-start;


        }
        cout<<endl;
    }

}


void ptrn13(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int j=0;j<2*(n-i);j++){
            cout<<" ";
        }
        // for(int j=0;j<n-i;j++){
        //     cout<<" ";
        // }

        // for(int j=1;j<=i;j++){
        //     cout<<j<<" ";
        // }
        // for(int j=0;j<=n-i;j++){
        //     cout <<" ";
        // }

        for(int j=i;j>=1;j--){
            cout<<j;
        }

        // cout<<endl;

        cout<<endl;
    }
}

void ptrn(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        // for(int j=0;j<=n-i;j++){
        //     cout <<" ";
        // }
        
        for(int j=0;j<=i;j++){
            
            cout<<ch<<"  ";
            // strt++;
            
        }
        ch++;
        // strt++;
        

        cout<<endl;
    }
}

void ptrn14(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
            for(int k=0;k<n/2;k++){
                for(int l=0;l<n/2;l++){
                    cout<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

void ptrn15(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}


void ptrn16(int n){
    int number=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<number<<" ";
            }
            else if(i==1 || j==1 || i==n-2 ||j==n-2){
                cout<<(number -1)<<" ";
            }
            else if(i==2 || j==2 || i==n-3 || j==n-3){
                cout<<(number-2)<<" ";
            }
            else{
                cout<<(number-3)<<" ";
            }
        }
        cout<<endl;
    }

}


    


// }

int main(){
    int n=7;
    // cout<<"Enter the value of n:"<<endl;
    // cin>>n;
    // cout<<endl;
    // ptrn1(n);

    // cout<<endl;

    // ptrn2(n);

    // cout<<endl;

    // ptrn3(n);

    // cout<<endl;

    // ptrn4(n);
    // cout<<endl;

    // ptrn8(n);

    // cout<<endl;
    // cout<<endl;

    // ptrn4(n);
    // ptrn8(n);


    cout<<endl;
    cout<<endl;

    // ptrn10(n);
    // cout<<endl;
    // cout<<endl;

    // ptrn11(n);

    cout<<endl;
    ptrn(n);


    // ptrn0(n);

    ptrn14(n);

    ptrn15(n);

    cout<<endl;
    ptrn16(n);




}