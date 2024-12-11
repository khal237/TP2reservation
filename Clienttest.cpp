#include "Client.h"
#include <iostream>

Client::Client(int id, const string& nom, const string& prenom)
    : idclient(id), nom(nom), prenom(prenom) {}


//nos getters
 int Client getidclient(){
 	return idclient;
 }

 string Client getnom(){
 	return getnom;
 }

 String Client getprenom(){
 	return getprenom;
 }


//nos setters 
 void Client::setidclient(int newid){
 	idclient = newid;
 }

 void Client::setnom(int newnom){
 	nom = newnom;
 }
 
  void Client::setprenom(int newprenom){
 	prenom = newprenom;
 }
 
 
void Client::affichageclient() const {
    cout << "ID Client: " << getidclient << endl;
    cout << "Nom: " << getnom << endl;
    cout << "Prénom: " << getprenom << endl;

}

