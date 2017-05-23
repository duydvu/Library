#include "role.h"
#include <QString>
Role::Role()
{

}

QString Role::coutROLE(QString charID)
{
 if (charID=="A")
     this->ROLE="Admin";
 else  if
     (charID=="T") this->ROLE="Thu Thu";
 else if
     (charID=="D") this->ROLE="Doc Gia";
 return this->ROLE;
}
