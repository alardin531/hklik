//
//  main.cpp
//  hklik
//
//  Created by s20181102934 on 2019/6/13.
//  Copyright © 2019 tod. All rights reserved.
//

#include <iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream timi("/Users/s20181102934/Desktop/timi.doc ");
    if(timi.is_open()){
        timi<<"David is Lv223";
        timi.close();
       
    }
    return 0;
}
