/*
** koala.h for  in /home/samain_c/rendu/Semestre_3/prepare/piscine_tek_2/D06/ex_3
** 
** Made by carl samain
** Login   <samain_c@epitech.net>
** 
** Started on  Fri Nov 18 10:58:17 2016 carl samain
** Last update Mon Nov 28 14:02:05 2016 carl samain
*/

#ifndef KOALA_H_
# define KOALA_H_

#include <iostream>
#include <string>

class SickKoala
{
 public:
  SickKoala(std::string str);
  ~SickKoaka();
  void		poke(std::string str);
  bool		takeDrug(std::string str);
  void		overDrive(std::string str);


 private:
  
std::string name;


};

#endif /* !KOALA_H */
