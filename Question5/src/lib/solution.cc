#include "solution.h"

AcadamicRecord::AcadamicRecord(){
maths = 0;
computers = 0;
physics = 0;
}//Time Complexity O(1)

AcadamicRecord::AcadamicRecord(int m, int c, int p){
maths = m;
computers = c;
physics = p;
}

AcadamicRecord::AcadamicRecord(const AcadamicRecord &old){
maths = old.maths;
computers = old.computers;
physics = old.physics;
}

AcadamicRecord AcadamicRecord::operator++(){
maths = maths + 10;
computers = computers + 10;
physics = physics + 10;

if (maths > 100){maths = 100;}
if (computers > 100){computers = 100;}
if (physics > 100){physics = 100;}

return *this;
}

AcadamicRecord AcadamicRecord::operator++(int){
AcadamicRecord temp = *this;

maths = maths + 10;
computers = computers + 10;
physics = physics + 10;

if (maths > 100){maths = 100;}
if (computers > 100){computers = 100;}
if (physics > 100){physics = 100;}

return temp;
}

AcadamicRecord AcadamicRecord::operator--(){
maths = maths - 20;
computers = computers - 20;
physics = physics - 20;

if (maths < 0){maths = 0;}
if (computers < 0){computers = 0;}
if (physics < 0){physics = 0;}

return *this;
}

AcadamicRecord AcadamicRecord::operator--(int){
AcadamicRecord temp = *this;

maths = maths - 20;
computers = computers - 20;
physics = physics - 20;

if (maths < 0){maths = 0;}
if (computers < 0){computers = 0;}
if (physics < 0){physics = 0;}

return temp;
}

AcadamicRecord AcadamicRecord::operator+=(int a){
maths = maths + a;
computers = computers + a;
physics = physics + a;

if (maths > 100){maths = 100;}
if (computers > 100){computers = 100;}
if (physics > 100){physics = 100;}

return *this;
}

AcadamicRecord AcadamicRecord::operator-=(int b){
maths = maths - b;
computers = computers - b;
physics = physics - b;

if (maths < 0){maths = 0;}
if (computers < 0){computers = 0;}
if (physics < 0){physics = 0;}

return *this;
}

AcadamicRecord::~AcadamicRecord(){

}

string AcadamicRecord::print(){
  string m = "Maths:: " + to_string(maths);
  string c = "Computers:: " + to_string(computers);
  string p = "Physics:: " + to_string(physics);
  return m + "\n" + c + "\n" + p;
}


bool AcadamicRecord::operatorEqu(AcadamicRecord &old1,AcadamicRecord &old2){
  if ((old1.maths == old2.maths) && (old1.computers == old2.computers) && (old1.physics == old2.physics)){
    return true;
  }
  else{
    return false;
  }

}
