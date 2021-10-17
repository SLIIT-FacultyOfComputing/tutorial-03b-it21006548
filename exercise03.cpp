#include <iostream>

using namespace std;

int volume(int height, int width, int length);
struct Box{
  int height;
  int width;
  int length;
};
// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
  struct Box box1;
  struct Box box2;

  box1.height= box1Height;
  box1.width=box1Width;
  box2.Length=box1Length;

  box2.height=box2Height;
  box2.width=box2Width;
  box2.length=box2Length;
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    int box1Height,box1Width,box1Length,box2Height,box2Length,box2Width;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1Length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2Length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( box1Height,box1Length ,box1Width )
             + volume( box2Height,box2Width ,box2Length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
Volume(int height, int width, int length){
  return height*width*length;
}