#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
int main()
{
  int n=0,cpu=0,utente=0,pc=0;
  srand(time(NULL));
  do
  {
  cout<<"Benvenuto a Sasso Carta Forbice :)"<<endl;
  cout<<"Scegli puttana:\n1:Sasso\n2:Carta\n3:Forbice\nQualsiasi altro numero per uscire ;)"<<endl;
  cin>>n;
  cpu=rand() %3+1;
  if(n==cpu)
  {
    cout<<"Il computer butta:"<<cpu<<endl;
    cout<<"Pareggio puttanelle\n"<<endl;
  }
  if(n==1 && cpu==2)
  {
    cout<<"Il computer butta:"<<cpu<<endl;
    cout<<"Hai perso coglione muaahahhahahahhahahhahhahahhahhahah\n"<<endl;
    pc++;
  }
  if (n==1 && cpu==3)
  {
    cout<<"Il computer butta:"<<cpu<<endl;
    cout<<"Vince la merda\n"<<endl;
    utente++;
  }
  if(n==2 && cpu== 1)
  {
    cout<<"Il computer butta:"<<cpu<<endl;
    cout<<"Vince la merda\n"<<endl;
    utente++;
  }
  if (n==2 && cpu==3)
  {
    cout<<"Il computer butta:"<<cpu<<endl;
    cout<<"Fai schifo merdaaaa\n"<<endl;
    pc++;
  }
  if(n==3 && cpu==1)
  {
    cout<<"Il computer butta:\n"<<cpu<<endl;
    cout<<"Ma quanto sono forteeeee.LOOOOOSEEER\n"<<endl;
    pc++;
    if(n==3 && cpu==2)
    {
      cout<<"Il computer butta:\n"<<cpu<<endl;
      cout<<"Inculato di merda\n"<<endl;
      utente++;
    }
  }
}while(n==1 || n==2 || n==3);
  cout<<"\nUtente:"<<utente<<"\nComputer:"<<pc;
  return 0;
}
