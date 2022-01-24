#include <iostream>
#include <cstring>

using namespace std;

int main(){

cout << "how many numbers do you want to enter" << endl;
int size;
cin >> size;
int *array = new int[size];

cout << "Enter " << size << " items" << endl;
for(int i = 0; i < size; i++){
  cin >> array[i];
}

cout << "You have entered: "  << endl;

for(int i = 0; i < size; i++){
  cout << array[i] << endl;
}


}
