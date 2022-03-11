//By Nicolo' Spampatti 11.03.2022
//Algorithm: Creazione di un timer che dopo 300 millisecondi mostra in output "Successo"

#include <iostream>
#include <chrono>

using namespace std;
using std::chrono::system_clock;
using std::chrono::steady_clock;

int main(int argc, char** argv) {
	
    using namespace std::chrono;
    
	bool cycle=true;
	
	auto t1 = steady_clock::now();	//prende il tempo attuale
	
	
	auto t2 = t1+chrono::milliseconds(300);		//aggiunge all'ora attuale il tempo del tick (Alla fine mostra il tempo di esecuzione sara in torno ai 300ms lo scarto e' causato forse dal compilatore o pc)
	
	while(cycle==true){

	 	
		chrono::steady_clock::duration d = t2-t1;	//calcola la differenza
		
		if(d <= chrono::steady_clock::duration::zero()){	//se la durata e' minore di zero (Praticamente uguale a zero) l'azione viene eseguita
			cout<<"Successo"<<endl;
			cycle=false;
			/*per un ciclo continuo aggiungi:
			t1 = steady_clock::now();
			t2 = t1+chrono::milliseconds(300);
			e rimuovi cycle=false*/	
		}
		
		else{						//viene ripreso il tempo attuale ripete finche' la differenza <= zero
			t1 = steady_clock::now();
		}
	}
	
	
	


	return 0;
}


	

	
