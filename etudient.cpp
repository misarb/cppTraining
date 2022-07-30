#include <iostream>
using namespace std;
class Etudient
{
  
 int matricule ;
 string nom;
 int nbrNotes;
 float *tabNotes ;
 static int n;
    
 public:
 Etudient(string nom,int nbrNotes ){
    n++;
    matricule =n;
    this->nbrNotes = nbrNotes;
    this->nom = nom;
    tabNotes = new float[nbrNotes];

 }
 Etudient(){
    this->matricule =0;
    this->nbrNotes = 0;
    this->nom = "misar";
    this->tabNotes = new float[nbrNotes];

 }
 Etudient(Etudient & E){
    this->matricule = E.matricule;
    this->nom = E.nom;
    this->nbrNotes = E.nbrNotes;
    this->tabNotes = new float[nbrNotes];
    //remplier le tableu 
    for (int i = 0; i < nbrNotes; i++)
    {
        tabNotes[i] = E.tabNotes[i];
    }
    


 }
 ~Etudient(){
    delete[] tabNotes;

 }
 string getNom(){
    return nom;
 }
 int getNbrNotes(){
     return nbrNotes;
 }
 int getMatricule(){
    return matricule;
 }

 void setNom(string nom){
    this->nom=nom;
 }
 void setMatricule(int newMatrecuile){
    matricule = newMatrecuile;

 }
 void saisie(){
    cout << "Entre les note des Etudient"<<endl  ;
    for(int i=0;i<nbrNotes;i++){
        cout << "Donner la note " << i+1 << ":";
        cin  >> tabNotes[i] ;
    }
 }
 void affichage(){
    cout << "Matricule = " <<matricule <<endl;
    cout << "Nom = "<<nom<<endl;
    cout << "nombre de notes = "<<nbrNotes<<endl;
    for(int i=0;i<nbrNotes;i++){
        cout<<"note : "<<tabNotes[i] <<endl;
    }
 }
 float moyenne(){
    float somme=0  ;
    for(int i=0;i<nbrNotes;i++){
        somme += tabNotes[i];

    }
    
    return (somme/nbrNotes);
 }
 bool compaer(float moy1,float moy2){
    if(moy1==moy2){
        return true;
    }else{
        return false;
    }

 }
 



};
int Etudient::n =0;
int main(){
    Etudient E1("mamado",5) ;
    Etudient E3("misar",5);
    cout <<"Enter note E1" << E1.getNbrNotes()<< endl;
    E1.saisie();
    cout <<"Enter note E3" << E1.getNbrNotes()<< endl;
    E3.saisie();
    cout <<"******** afficher E1 ****************" << endl;
    E1.affichage();
    cout <<"******** afficher E3 ****************" << endl;
    E3.affichage();
    Etudient E2(E1);
    
    cout << "nr notes : "<< E2.getNbrNotes() << "Matricule : " << E2.getMatricule()<< "nome : " << E2.getNom()<<endl ;
 
    cout <<"*******************************Affichage*************************" << endl;
    E2.affichage();
    cout <<"**************************Moyenne**************************" << endl;
    float moy2 = E2.moyenne();
    float moy1 = E3.moyenne();
    cout << "la moyenne de l'etudient E2 est = "<< moy2;
    cout << "la moyenne de l'etudient E3 est = "<< moy1;
    bool resultCmpr = E1.compaer(moy1,moy2);
    cout << "result diu cmpr est = "<< resultCmpr;
  
    return 0;
}