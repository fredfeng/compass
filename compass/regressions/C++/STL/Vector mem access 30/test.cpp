using namespace spec;

void specify_checks()
{
  check_deleted_access();
  check_memory_leak();
}

class B
{
  public:
  int x;
  B(int x)
  {
    this->x = x;
  }

  int get_x()
  {
    return x;
  }
};

class A
{
  public:
  B* b;
  A(int x)
  {
    this->b = new B(x);
  }
  B* get_b()
  {
    return b;
  }
  ~A()
  {
    delete b;
  } 
};



void foo(int size)
{
  vector<A*>* a_vec = new vector<A*>();

  for(unsigned int i=0; i<size; i++)
  {
    A* a = new A(i);
    a_vec->push_back(a);
  }

 /* vector<A*>::iterator it = a_vec->begin();
  for(; it!= a_vec->end(); it++)
  {	
    delete *it;
  } */

  delete a_vec;

  // a's inside a_vec and b's inside element a's are leaked
}