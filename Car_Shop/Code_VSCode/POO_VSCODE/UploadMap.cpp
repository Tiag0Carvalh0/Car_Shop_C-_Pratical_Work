#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <math.h>

using namespace std;

class Carros{
public:
    
    int cc;           //Cilindrada
    int hp;           //Potencia
    int ano;          //Ano do Carro
    int alugado;      //0--> Nao Alugado 1-->Alugado
    float preco;      //Preço do Aluguer por dia
    string marca;     //Marca do Carro
    string matricula; //Matricula do Carro
    string modelo;    //Modelo do Carro

    multimap<string,Carros>MapaCarros; //Criacao do mapa

    Carros(string,string,string,int,int,int,float,int); //Construtor
    void GetDataTxt();  //Funcao para dar upload to ficheiro txt
    void ShowAllCars(); //Função para mostar todos os carros no sistema
    void SortByBrand(); //Funcao para mostrar os carros apenas de uma marca
    void SortByModel(); //Funcao para mostrar todos os carros do mesmo modelo
    void SortByYear();  //Funcao para mostrar todos os carros do mesmo ano
    void AddCarro();    //Funçao para adicionar mapa
    void PutDataTxt();  //Função para passar ficheros para o mapa
    void RemoveCar();   //Funcao para remover o carro
    void EditCar();     //Funcao para editar info dos carros
    void Rent();        //Funcao para alugar o carro
    void UnRent();      //Funcao para disponibilizar o carro
    
};
Carros::Carros(string matricula = "xx-xx-xx", string marca = "none",string modelo = "none",int ano = 0,int cc  = 0, int hp = 0,float preco =0,int alugado = 0){
    
    




    
};

void Carros::GetDataTxt()
{
    int cc; //Cilindrada
    int hp; //Potencia
    int ano; //Ano do Carro
    int alugado; //0--> Nao Alugado 1-->Alugado
    float preco; //Preco do aluguer por dia
    string marca; //Marca do Carro
    string modelo; //Modelo do Carro
    string matricula; //Matricula do Carro
    ifstream FicheiroCarros("CarrosData.txt");
        if (FicheiroCarros.is_open())
          {
           while(FicheiroCarros >> matricula >> marca >> modelo >> ano >> cc >> hp >> preco >> alugado )     
            {
                MapaCarros.insert(make_pair(matricula,Carros(matricula,marca,modelo, ano, cc,hp,preco,alugado)));
            }
          }
         else
            {
             cout << "Cannot Open File" << endl;
            }
        FicheiroCarros.close();
}

void Carros::ShowAllCars(){
    int count = 0;
    auto it = MapaCarros.begin();

    for (it; it != MapaCarros.end(); it++){
        count ++;
        cout << "Matricula:" << " " << it->first << endl;
        cout << "Marca:" << " " << it->second.marca << endl;
        cout << "Modelo:" << " " << it->second.modelo << endl;
        cout << "Ano:" << " " << it->second.ano << endl;
        cout << "Cilindrada:" << " " << it->second.cc << endl;
        cout << "Potencia:" << " " << it->second.hp << endl;
        cout << "Preco do Aluguer por Dia:" << " " << it->second.preco << endl;
        if (it->second.alugado == 1)
        {   
            cout << "Status do Veiculo" << ": " << "Indisponivel" << endl << endl;
        }
            else 
                {
                    cout << "Status do Veiculo" << ": " << "Disponivel" << endl << endl;
                }
        
    }
    cout << "Total de Carros Encontrados "<< count << endl;
}

void Carros::SortByBrand(){
    string filtro;
    int count = 0;

    cout << "Selecione a Marca para Filtrar"<< endl;
    cin >> filtro;

    auto it = MapaCarros.begin();

    for(it ; it!=MapaCarros.end(); it++){
        if(it->second.marca == filtro){
            count ++;
            cout << "Matricula-" << it->first <<" "<< "Marca-"<< it->second.marca << " " << "Modelo-"<< it->second.modelo << " " << "Ano-"<< it->second.ano << " " << "Cilindrada-"<< it->second.cc << " " << "Potencia-" << it->second.hp<< " " << "Preco-" << it->second.preco <<" " << "Estado- ";
             if (it->second.alugado == 1)
        {   
            cout << "Indisponivel" << endl;
        }
            else 
                {
                    cout <<  "Disponivel" << endl ;
                }  
        }
    } 
    cout << "Numero de Resultados "<< count <<endl;
}

void Carros::SortByModel(){
    string filtro;
    int count = 0;

    cout << "Selecione o Modelo para Filtrar"<< endl;
    cin >> filtro;

    auto it = MapaCarros.begin();

    for(it ; it!=MapaCarros.end(); it++){
        if(it->second.modelo == filtro){
            count ++;
            cout << "Matricula-" << it->first <<" "<< "Modelo-"<< it->second.modelo << " " << "Marca-"<< it->second.marca << " " << "Ano-"<< it->second.ano << " " << "Cilindrada-"<< it->second.cc << " " << "Potencia-" << it->second.hp<< " " << "Preco-" << it->second.preco <<" " << "Estado- ";
         if (it->second.alugado == 1)
        {   
            cout << "Indisponivel" << endl;
        }
            else 
                {
                    cout <<  "Disponivel" << endl ;
                }  
        }
    } 
    cout << "Numero de Resultados "<< count <<endl;
}

void Carros::SortByYear(){
    int count = 0,filtro;

    cout << "Selecione o Ano para Filtrar"<< endl;
    cin >> filtro;

    auto it = MapaCarros.begin();

    for(it ; it!=MapaCarros.end(); it++){
        if(it->second.ano == filtro){
            count ++;
        cout << "Matricula-" << it->first <<" "<< "Ano-"<< it->second.ano << " " << "Marca-"<< it->second.marca << " " << "Modelo-"<< it->second.modelo << " " << "Cilindrada-"<< it->second.cc << " " << "Potencia-" << it->second.hp<< " " << "Preco-" << it->second.preco <<" " << "Estado- ";
         if (it->second.alugado == 1)
        {   
            cout << "Indisponivel" << endl;
        }
            else 
                {
                    cout <<  "Disponivel" << endl ;
                }  
        }
    } 
    cout << "Numero de Resultados "<< count <<endl;
}

void Carros::AddCarro(){
    cout << "Matricula: " << endl;
    cin >> matricula;
    cout << "Marca" << endl;
    cin >> marca;
    cout << "Modelo" << endl;
    cin >> modelo;
    cout << "Ano" << endl;
    cin >> ano;
    cout << "Cilindrada" << endl;
    cin >> cc;
    cout << "Potencia" << endl;
    cin >> hp;
    cout << "Preco por dia do aluguer" << endl;
    cin >> preco;
    cout << "Estado do Veiculo" << endl;
    cin >> alugado;

    MapaCarros.insert(make_pair(matricula,Carros(matricula,marca,modelo,ano,cc,hp,preco,alugado)));

}

void Carros::PutDataTxt(){
    ofstream WriteMap ("CarrosData.txt");
        if (WriteMap.is_open())
        {
            auto it = MapaCarros.begin();
                for (it ; it != MapaCarros.end(); it++){
                        WriteMap << it->second.matricula << " " << it->second.marca << " " << it->second.modelo << " " << it->second.ano << " " << it->second.cc << " " << it->second.hp << " "<< it->second.preco << endl;
                        WriteMap << it->second.alugado << endl;
                }
                WriteMap.close();  
                cout << "Sucessfully Saved Data" << endl;
        }
            else 
                {
                    cout << "Cannot open File" << endl;
                }    
}

void Carros::RemoveCar(){

string aux; 
cout << "Selecione a Matricula" << endl;
cin >> aux;

multimap<string,Carros>::iterator it = MapaCarros.find(aux);
MapaCarros.erase(it); //apaga apenas o que vai ter a matricula

cout << "Carro Removido Com Sucesso!" << endl;

}

void Carros::EditCar(){
    string matr,newMod;
    int opcao=9,newAno, newCc, newHp;
    float newPreco;

    cout << "Matricula do Carro que Pretende Alterar!" << endl;
    cin >> matr;

    multimap<string,Carros>::iterator it = MapaCarros.find(matr);
    cout << "Carro a editar->"<< " " << "Matricula-" << it->first <<" " << "Marca-"<< it->second.marca << " " << "Modelo-"<< it->second.modelo << " " << "Ano-"<< it->second.ano << " " << "Cilindrada-"<< it->second.cc << " " << "Potencia-" << it->second.hp<< " " << "Preco-" << it->second.preco << endl;

    while (opcao != 0){
        switch (opcao)
        {
        case 9:
            cout << "O que pretende mudar" << endl;
            cout << "1 -> Modelo" << endl;
            cout << "2 -> Ano" << endl;
            cout << "3 -> Cilindrada" << endl;
            cout << "4 -> Potencia" << endl;
            cout << "5 -> Preco De aluguer" << endl;
            cout << "0 -> Sair" << endl;
            cin >> opcao;
            break;
        case 1:
            cout << "Novo Modelo" << endl;
            cin >> it->second.modelo;
            opcao = 9;
            break;
        case 2:
            cout << "Novo Ano" << endl;
            cin >> it->second.ano;
            opcao = 9;
            break;
        case 3:
            cout << "Nova Cilindrada" << endl;
            cin >> it->second.cc;
            opcao = 9;
            break;
        case 4:
            cout << "Nova Potencia" << endl;
            cin >> it->second.hp;
            opcao = 9;
            break;
        case 5:
            cout << "Novo Preco de Aluguer" << endl;
            cin >> it->second.preco;
            opcao = 9;
            break;    
        }
    }
}

void Carros::Rent(){
    //Pensar com um botao no QT
    string mat;
    int dias;
    float precoAlug;
    cout << "Matricula do Carro a Alugar" << endl;
    cin >> mat;

    multimap<string,Carros>::iterator it = MapaCarros.find(mat);

    it->second.alugado = 1;

    cout << "Quantos dias Pretende Alugar o Carro?" << endl;
    cin >> dias;
    precoAlug = (dias * it->second.preco); 

    cout << "Carro Alugado, com o Custo de" << " " << precoAlug << "$" << endl;
}

void Carros::UnRent(){
//Pensar para o QT
    string mat;

    cout << "Matricula do Carro Devolver" << endl;
    cin >> mat;

    multimap<string,Carros>::iterator it = MapaCarros.find(mat);

    it->second.alugado = 0;

    cout << "Carro Disponivel" << endl;
}

bool Login(){ //Deve dar para fazer sem usar para, ler logo do ficheiro
    string user;
    int pass;
    map<string,int>loginMap; //Mapa de LogIns

 ifstream LoginRead("LoginData.txt");
    if (LoginRead.is_open())
          {
           while(LoginRead >> user >> pass)     
            {   
                loginMap[user] = pass; //Passar a info do txt para o mapa 
            }
                cout << "UserName:" << endl;
                cin >> user;
                auto it = loginMap.find(user);

                cout << "PassWord" << endl;
                cin >> pass;
                if (it->second == pass){
                    cout << "Login Com Sucesso!" << endl;
                    return true;
                }
                else {
                    return false;
                }       
          }
         else
            {
             cout << "Cannot Open File" << endl;
            }
        LoginRead.close();
} 

int main(){
    
   bool login = false;

    while (login == false){
    login = Login();//Funcao para o LOGIN
    
    if (login == true){
        Carros C1;
        C1.GetDataTxt();
        //C1.ShowMap();
        //C1.AddCarro();
        //cout << endl << endl << endl;
        //C1.ShowMap();
        //C1.RemoveCar();
        //cout << endl << endl << endl;
        //C1.ShowMap();
        //C1.PutDataTxt();
        //C1.EditCar();
        //C1.Rent();
        //C1.UnRent();
        C1.SortByBrand();
        cout << endl << endl << endl;
        C1.SortByModel();
        cout << endl << endl << endl;
        C1.SortByYear();
        cout << endl << endl << endl;
        C1.PutDataTxt();
    }
        else {
            cout <<" UserName ou PassWord Errados!" << endl << "Tente Novamente!" << endl;
        }
    }
return 0;  
}
