#define NULL 0

enum animal_type {
  BIRD,
  RABBIT
  
};

class Animal
{
  public:
  virtual bool is_mammal() = 0;
  virtual animal_type get_type() = 0;
};

class Bird:public Animal
{
  public:
  virtual bool is_mammal() {return false;};
  virtual animal_type get_type() {return BIRD;};
};

class Rabbit:public Animal
{
public:
virtual bool is_mammal() {return true;};
virtual animal_type get_type() {return RABBIT;};
};

Animal* find_mammal(Animal** animals, int num)
{
  

  Animal* m = NULL;
  for(int i=0; i<num; i++) {
    Animal* a = animals[i];
    if(a->is_mammal()) {
	m = a;
	break;
    }
  }
  
  if(m!=NULL) static_assert(m->get_type() == BIRD); // should fail
  return m;
}