#include <iostream>
using namespace std;
int main(){

int temp=0;
  
int array[8]={1,7,43,37,24,13,8,4};
  cout << "Unsorted Array" << endl;

  for (int i = 0; i<8; i++){
    cout << array[i]<< "\t";
  }
  cout << endl;
  cout << "Sorted Array" << endl;

  for (int i=0; i<8;i++){
    for (int j =i+1; j <8; j++){
      if (array[j]<array[i]){
        temp = array[i];
        array[i]= array[j];
        array[j] = temp;
      }
    
    }
    cout << array[i]<<"\t";
  }

  /*for (int i = 0; i<8; i++){
    cout << array[i]<<"\t";
  }*/
  return 0;
}