#ifndef __POPULATION_H
#define __POPULATION_H

#include "Random.h"
#include <omp.h>

//
// Classe que representa uma população contaminável.
//
class Population
{
   public:

      Population(int s,int nthreads);
      ~Population();

      struct PersonPosn
      { 
            int i; 
            int j;
      };
      struct PersonPosn centralPerson();
      
      
      int propagateUntilOut(PersonPosn start_person, double prob_spread, Random& r);
      double getPercentInfected();

   private:

      void reset();
      void exposePerson(PersonPosn p);
      void propagate(double prob_spread, Random& r);     
      void propagate2(double prob_spread, Random& r,int* count);
      bool isPropagating();
      bool virusSpreads(double prob_spread, Random& r);

   private:

      // A população é armazenada em uma matriz.
      // Cada elemento é um indivíduo que pode estar em 4 estados.

      enum Person {
         Uninfected,    // pessoa não infectada
         Exposed,       // pessoa exposta
         Infected       // pessoa infectada
      };        

      Person** pop; 
      int size;

};

#endif

