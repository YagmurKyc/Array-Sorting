#include <iostream>
using namespace std;
int main(){
  int i,j,num,min,p,temp;
  int array[20]{};
  cout << "Enter array's size:" ;
  cin >> num;

  for (int i=0; i<num;i++){
    cin >> array[i];
    
  }
  for (int i=0;i< num;i++){
    cout << array[i]<< "\t";
  }
  cout << endl;
  
  for (int i=0; i< num-1;i++){
    min= array[i];
    p=i;
    for (int j=i+1; j<num;j++){
      if(array[j]<min){
        min = array[j];
        p=j;
      }
    }
    temp = array[i];
    array[i]=array[p];
    array[p]= temp;
  }

  for (int i=0; i<num;i++){
    cout << array[i] << "\t";
  }
  
  return 0;
}