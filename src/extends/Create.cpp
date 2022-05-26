#pragma once

#ifndef _CREATE_
#define _CREATE_

#include <iostream>

#include "./Elem.hpp"

using namespace std;

void Create(Elem *&end, Elem *&begin, int a)
{
  Elem *tmp = new Elem;

  tmp->info = a;
  tmp->next = NULL;

  if (end != NULL)
  {
    end->next = tmp;
  }

  end = tmp;

  if (begin == NULL)
  {
    begin = tmp;
  }
}

#endif // !_CREATE_
