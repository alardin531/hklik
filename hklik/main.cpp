//
//  main.cpp
//  hklik
//
//  Created by s20181102934 on 2019/6/13.
//  Copyright © 2019 tod. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int i;
    for(i=0;i<10;i++){
        if(i%2==0){
            cout<<"aha"<<i<<"is a double count"<<endl;
        }
        if(i==4){
                        cout<<"game over";
            return 0;
        }
    }
    return 0;
}
