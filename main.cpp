#include <iostream>

using namespace std;

int linearSearch(int array[],int size,int searchValue){

        for(int i=0;i<=size;i++){

           if (searchValue==array[i]){
                return i;
           }
        }
    return -1;
}

int main()
{
    int a[]={12,13,56,44,55,644,644,34,32,667,2,5,6,7,8,9,23,32,86};
    int uservalue;
    cout<<"Enter a value to search" << endl;
    cin >>uservalue;
    int result = linearSearch(a,19,uservalue);
    if(result>=0){
        cout<<"Found"<<a[result] <<"in index" <<result<< endl;
    }
    else{
        cout<<"Not Found" << endl;
    }
}
