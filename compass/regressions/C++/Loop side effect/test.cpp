void specify_checks()
{
  //check_deleted_access();
//check_double_delete();
}

class A
{

public:
  int x;
 // int y;
 // A(){};
  //virtual int foo() {return 1;};
  //~A(){};
  
};




void foo()
{	

  A* arr[2];
  A* a = new A();
  arr[0] = a;
  arr[1] = new A();

  
 // bar(arr, 2); 
 for(int i=0; i<2; i++)
     arr[i]->x = 77;

  int t = a->x;
  static_assert(t == 77);


  


}