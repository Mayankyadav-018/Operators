/* Name - Mayank yadav
   Class - ENTC A
   PRN - 24070123060 */
#include <iostream>
using namespace std;
int main() {
    float x,y;
    cout << "Enter the x coordinate:";
    cin >> x;
    cout << "Enter the y coordinate:";
    cin >> y;
    
    if(x>0 && y>0){
        cout << "The point is in I Quadrant.";
    }
    else if(y>0 && x<0){
        cout << "The point is in II Quadrant.";
    }
    else if(y<0 && x<0){
        cout << "The point is in III Quadrant.";
    }
    else if(y<0 && x>0){
        cout << "The point is in IV Quadrant.";
    }
    else if(y==0 && x==0){
        cout << "The point lies on the centre.";
    }
    else if(y==0){
        cout << "The point lies on the x axis.";
    }
    else{
        cout << "The point lies on the y axis.";
    }
    return 0;
}


/*   OUTPUT:
Enter the x coordinate:-3
Enter the y coordinate:-5
The point is in III Quadrant. */
