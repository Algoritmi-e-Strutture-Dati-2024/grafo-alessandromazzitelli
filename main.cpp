#include <iostream>
#include "Grafo.cpp" 

int main() {
    
    Grafo<std::string> grafo;

    grafo.aggiungiNodo("Napoli");
    grafo.aggiungiNodo("Caserta");
    grafo.aggiungiNodo("Benevento");
    grafo.aggiungiNodo("Avellino");
    grafo.aggiungiNodo("Salerno");

    
    grafo.aggiungiArco("Napoli", "Avellino", 60);   
    grafo.aggiungiArco("Avellino", "Salerno", 100); 
    grafo.aggiungiArco("Salerno", "Caserta", 80);   
    grafo.aggiungiArco("Caserta", "Benevento", 50);  
    grafo.aggiungiArco("Benevento", "Napoli", 90);
    grafo.aggiungiArco("Salerno", "Napoli", 30);

    std::cout << "Matrice di adiacenza del grafo (distanze in km):" << std::endl;
    grafo.stampa();

    
    std::cout << "Esiste il nodo Napoli? " << (grafo.verificaNodo("Napoli") ? "Sì" : "No") << std::endl;
    std::cout << "Esiste il nodo Caserta? " << (grafo.verificaNodo("Caserta") ? "Sì" : "No") << std::endl;

    
    std::cout << "Esiste un arco da Napoli a Avellino? " << (grafo.verificaArco("Napoli", "Avellino") ? "Sì" : "No") << std::endl;
    std::cout << "Esiste un arco da Salerno a Benevento? " << (grafo.verificaArco("Salerno", "Benevento") ? "Sì" : "No") << std::endl;

    
    grafo.nodiAdiacenti("Napoli");

    
    grafo.rimuoviArco("Napoli", "Avellino");
    std::cout << "\nDopo aver rimosso l'arco da Napoli a Avellino:" << std::endl;
    grafo.stampa();

    
    grafo.rimuoviNodo("Caserta");
    std::cout << "\nDopo aver rimosso il nodo Caserta:" << std::endl;
    grafo.stampa();

    return 0;
}
