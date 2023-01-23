//
//  main.cpp
//  C++L5P1
//
//  Created by Tadeusz Potoniec on 23/01/2023.
//  Based on https://www.youtube.com/watch?v=ErOzmh3BiXU&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo

#include <iostream>


using namespace std;
float grades [5]; float sum=0,av;

int main() {
    
    for(int i=0;i<5;i++)
    {
        cout<<endl<<"Enter your "<<i+1<< " grade: ";
        cin>>grades[i];
        sum+=grades[i];//+= mean sum=sum+grades
    }
    av=sum/5;
    cout<<endl<<"Average = "<<av<<endl;
    return 0;
}
/*
 In C++, an array is a collection of elements of the same data type, stored in contiguous memory locations. Elements of an array are accessed using their index, which is an integer value that represents their position within the array. The first element of the array is at index 0, the second element is at index 1, and so on.

 For example, an array of integers called "numbers" with 5 elements, could be declared as follows:

 Copy code
 int numbers[5];
 You can access the elements of the array using the index operator [], as follows:

 Copy code
 numbers[0] = 3;
 numbers[1] = 7;
 You can also initialize an array when declaring it, like this:

 Copy code
 int numbers[] = {1, 2, 3, 4, 5};
 You can also use a for loop to access the elements of an array one by one, like this:

 Copy code
 for (int i = 0; i < 5; i++)
 {
     cout << numbers[i] << endl;
 }
 It's important to keep in mind that arrays have a fixed size and once they are created, they can't be resized. If you need a dynamic data structure, you should look into using a data structure such as a vector.
 */
