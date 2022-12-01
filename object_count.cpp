#include <iostream>
using namespace std;
class class1{
   private:
      static int count;
   public:
      class1() { 
         cout << "Calling Constructor" << endl;

         count++;
      } static int objCount() {
         return count;
      }
   };
int class1::count;
int main() {
   class1 obj1, obj2, obj3,obj4;
   int res;
   res = class1::objCount();
   cout<<"The count number is:"<<endl;
   cout << "" << res;
}


