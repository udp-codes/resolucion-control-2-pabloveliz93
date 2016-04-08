//mini tarea 2
#include <iostream>
using namespace std;
class SetTDA
{
public:
	Data d;
	SetTDA();
	void insert(Data x);
	void delete();
	bool isEmpty();
	~SetTDA();	
};

class ConjuntoTDA public:SetTDA
{
public:
	ConjuntoTDA();
	void agrega(Data x){
		insert(x);
	}
	Data saca(){
		return delete();
	}
	bool estaVacio(){return isEmpty()}
	bool pertenece (Data x){
		if(isEmpty())return false;
		Data *aux = head;
		while(aux){
			if(aux.data==x)return true;
			aux = aux.next;
		}
		return false;
	}
	ConjuntoTDA interseccion(ConjuntoTDA c){
		ConjuntoTDA f;
		while(!isEmpty()){
			Data a = saca();
			if(pertenece(a))f.agrega(a);
		}
		return f;
	}
	void intersecta (ConjuntoTDA c){
		ConjuntoTDA aux = interseccion(c);
		while(!isEmpty())
{			saca();
		}
		while(!aux.isEmpty()){
			agrega(aux.sacar());
		}		
	}
	ConjuntoTDA union(ConjuntoTDA c){
		ConjuntoTDA u;
		while(!isEmpty()){
			u.agrega(sacar());
		}
		while(!c.isEmpty()){
			Data aux= c.sacar();
			if(!pertenece (aux)) u.agrega(aux);
		}
		return u;
	}
	void unir(ConjuntoTDA c){
		while(!isEmpty()){
			sacar();
		}
		while(!c.isEmpty()){
			agrega(c.sacar())
;		}
	}
	~ConjuntoTDA();	
};
