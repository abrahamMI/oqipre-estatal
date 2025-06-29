#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

int main() {
  int ini = 0;
  int fin = 9;

  srand( (unsigned)time(NULL) );

  for (int i=ini;i<fin;i++) {
    ofstream sal;
    sal.open(to_string(i) + ".in");
    sal << 5 << endl;

    sal << (rand() % 20) + 1 << " " << (rand() % 20) + 1;
  }
}