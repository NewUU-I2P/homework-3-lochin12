#include <string>

std:: string problemSolution3(float height, char S){
    // write your code here
if (S=='M')
{
    if ( height<1.7){return "Short"; }
    else if (height >= 1.7 and height<1.85){return "Normal";}
    else {return "Tall";}
}
else if (S=='W')
{ if ( height<1.6){return "Short"; }
    else if (height >= 1.6 and height<1.75){return "Normal";}
    else {return "Tall";}
}   
}
