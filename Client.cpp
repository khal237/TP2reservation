#include "Client.h"
#include <iostream>

Client::Client(int id, const string& nom, const string& prenom)
    : idclient(id), nom(nom), prenom(prenom) {}


void Client::affichageclient() const {
    cout << "ID Client: " << idclient << endl;
    cout << "Nom: " << nom << endl;
    cout << "Prénom: " << prenom << endl;

}
 int Client getidclient(){
 	return idclient;
 }

 string Client getnom(){
 	return getnom;
 }

 String Client getprenom(){
 	return getprenom;
 }


//les setters a client
 void Client::setidclient(int newid){
 	idclient = newid;
 }

 void Client::setnom(int newnom){
 	nom = newnom;
 }
 
  void Client::setprenom(int newprenom){
 	prenom = newprenom;
 }
