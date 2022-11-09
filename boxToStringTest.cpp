#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box *b1;

  initBox(b1,2.0,3.0,4.0,5.0);  
  assertEquals("ul=(2.0,3.0),w=4.0,h=5.0", boxToString(*b1,2), "boxToString()");
  
  initBox(b1,2.032,3.051,4.402,5.042);  
  assertEquals("ul=(2.032,3.051),w=4.402,h=5.042", boxToString(*b1,4), "boxToString()");
  
  initBox(b1,2.62,3.91,4.52,5.33);  
  assertEquals("ul=(2.6,3.9),w=4.5,h=5.3", boxToString(*b1,2), "boxToString()");
		   
  return 0;
}
