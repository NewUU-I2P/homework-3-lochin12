#include <string>

float problemSolution3(float height, char S){
    // write your code here
if (S=='M')
{
    if ( height<1.7){std::cout<<"Short"; }
    else if (height >= 1.7 and height<1.85){std::cout << "Normal";}
    else {std::cout << "Tall";}
}
else if (S=='W')
{ if ( height<1.6){std::cout<<"Short"; }
    else if (height >= 1.6 and height<1.75){std::cout << "Normal";}
    else {std::cout << "Tall";}
}   
return 0;
}
