#include <iostream>
#include <iomanip>

using namespace std;

const int TEST_LIMIT = 5;
const int EXPER_NO = 4;

int main()
{
    int storeEx[TEST_LIMIT];
    int storeNum[EXPER_NO] = {1,2,3,4};
    int i = 0; //incrementor
    float average=0;
    float total=0;
    cout << fixed << setprecision(2);

    cout << " We are going to have an experiment "<<endl;
    cout << " 1st experiment results: "<<endl; //test

    while( i < EXPER_NO){ //makes sure we increment to 4 for the outer loop
    cout << storeNum[i] << " experiment results "<<endl;

    //Code below is the first loop that stores numbers

        for(int j=0;j<TEST_LIMIT;j++){
            cin >>storeEx[j]; // stores the experiments result in each learner number
            //total += storeEx[j];
           // average = total/TEST_LIMIT;
        }
        for(int k=0;k < TEST_LIMIT;k++){
        //cout << storeEx[k]<<endl;
            total += storeEx[k];
            average = total/TEST_LIMIT;
       }cout << " Average is :" << average <<endl;
       total = 0;
    i++;
    }

}
