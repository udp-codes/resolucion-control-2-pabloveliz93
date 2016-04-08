#include <iostream>
using namespace std;
class Lista
{
public:
	Item *head=nullptr;
	void agregar(Item i){
		Item *aux =head;
		int maximo=0;
		while(aux){
			if(aux->cant_llamados>maximo && aux->next->cant_llamados <aux->cant_llamados){
				i->next=aux->next;
				aux->next=i;
			}

		}
		i->next=aux->next;
		aux->next=i;

	}
	int probabilidad(string valor){
		Item *aux = head;
		float contador=0.0;
		while(aux){
			contador++;
			aux=aux->next;			
		}
		float a=1/contador;
		cout<<a*100<<endl;
	}
	string llamar_kesimo(int k){
		Item *aux=head;
		for (int i = 0; i < k; ++i)
		{
			aux=aux->next;
		}
		return aux->valor;
	}
	Lista();
	~Lista();	
};
