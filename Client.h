#ifndef CLIENT_H
#define CLIENT_H

class Client {
private:
    int idclient;
    string nom;
    string prenom;


public:
    Client(int id, const string& nom, const string& prenom);

    void affichageclient() const;

};

#endif
