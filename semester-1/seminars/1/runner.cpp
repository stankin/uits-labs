/* 
 Бегун Вася бегает по стадиону,
 определить сколько раз он сможет
 пробежать по стадиону за 20 минут.
 * 
 * S = 2*P*R + 2L
 * 
 * t = S/V
 * 
 * N = T/t = T*V / S 
 * 
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    
    float v = 0;
    float l = 0;
    float R = 0;
    float T = 0;
        
    cin >> v;
    cin >> l;
    cin >> R;
    cin >> T;
    
    float s = 2 * M_PI * R  + 2 * l;
    
    float N = 60 * T * v / s;
    
    cout << N;   
    

    return 0;
}


