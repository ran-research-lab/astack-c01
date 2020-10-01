// Su nombre aqui

#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "Stack.h"
#include "AStack.h"
using namespace std;


TEST_CASE( "Pushing and popping to the AStack", "[AStack]" ) {
	AStack S(20);
	for(int i = 0; i < 10; i++) S.push(i*10);
    CHECK( S.toString() == "90 80 70 60 50 40 30 20 10 0 ");
    int ctr = 0;
    while(!S.isEmpty()) {
        S.pop();
        ctr++;
    }
    CHECK( ctr == 10);
}
