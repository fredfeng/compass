using namespace spec;



struct Duck
{
  int weight;
  int length;
};

void foo()
{
  Duck d;
  d.weight = 7;
  d.length = 14;
  
  vector<Duck> ducks;
  ducks.push_back(d);
  Duck x = ducks[0];
  x.length = 7;
  static_assert(ducks[0].length == 14);
}