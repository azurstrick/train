/*
** main.c for  in /home/samain_c/rendu/Semestre_3/prepare/piscine_tek_2/D06/ex_3
** 
** Made by carl samain
** Login   <samain_c@epitech.net>
** 
** Started on  Fri Nov 18 10:44:21 2016 carl samain
// Last update Wed Nov 30 16:28:42 2016 carl samain
*/

#include <string>
#include <iostream>
#include "../include/koala.h"


SickKoala::SickKoala(std::string str)
{
  std::string name = str;
}

SickKoala::~SickKoala(void)
{
  std::cout << name << "KREOOOG !! Je SUIS GUERIIII !" << std::endl;
}

void		SickKoala::overDrive(std::string str)
{
  size_t	pos;
  std::string kreog = "kreog !";
  
  while ((pos = str.find(kreog)) != -1)
    str.replace(pos, 6, "1337 !");
  std::cout << name << str << std::endl;
}

void		SickKoala::poke()
{
  std::cout << name << "AAAAAARG" << std::endl;
}

bool		SickKoala::takeDrug(std::string str)
{
  if (str.compare("Buronzand") == 0)
    {
      std::cout << name << "Et la fatigue a fait son temps !" << std::endl;
      return (true);
    }
  else if (str.compare ("mars") == 0)
    {
      std::cout << name << str.c_str() << "et ca kreog !" << std::endl;
      return (true);
    }
  std::cout << name << "Goerkreog !" << std::endl;
  return (false);
}

int		 main(int ac, char **av)
{
  std::string	name = "koala";
  SickKoala koala(name);
  koala.poke();
  return (0);
}
