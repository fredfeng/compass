using namespace spec;

void foo()
{
  vector<int> a;
  a.push_back(1);
  a.push_back(2);
  a[1] = 6;



  static_assert(a[1] == 2); //should fail
  

  
}