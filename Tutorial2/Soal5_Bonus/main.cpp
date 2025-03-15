#include <bits/stdc++.h>
#include "Pokemon.hpp"
#include "FirePokemon.hpp"
#include "WaterPokemon.hpp"
#include "GrassPokemon.hpp"
using namespace std;

int main() {
  FirePokemon *charmander = new FirePokemon("Charmander", 100, 20);
  FirePokemon *charmander2 = new FirePokemon(*charmander);

  WaterPokemon *squirtle = new WaterPokemon("Squirtle", 100, 20, 10);
  squirtle->heal(10);
  
  WaterPokemon *magikarp = new WaterPokemon("Magikarp", 100, 20, 0);
  *magikarp = *squirtle;

  squirtle->attack(*charmander);
  squirtle->attack(*charmander);

  delete charmander;
  delete squirtle;
}