#include<iostream>
using namespace std; 

int brokenCalc(int startValue, int target) {
    int steps=0;
    while (target > startValue){
        if(target%2==0){
            target=target/2;
            steps++;
        }
        else{
            target++; steps++;
        }
    }
    return steps + (startValue-target);
}
int main (){
    cout<<brokenCalc(2,3);
};