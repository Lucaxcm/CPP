#include <iostream>

using namespace std;

class Livro{

  private:

    string Titulo;
    string Introducao;
    string Desenvolvimento;
    string Conclusao;

  public:

  Livro(){
    Titulo = " ";
    Introducao = " ";
    Desenvolvimento = " ";
    Conclusao = " ";
  }

  Livro(string titulo, string introducao, string desenvolvimento, string conclusao){
    Titulo = titulo;
    Introducao = introducao;
    Desenvolvimento = desenvolvimento;
    Conclusao = conclusao;
  }
  void getLivro(){
    cout << "\n\t\t\t" << Titulo << endl <<endl;
    cout << "   " << Introducao << endl;
    cout << "   " << Desenvolvimento << endl;
    cout << "   " << Conclusao << endl;
  }
};

int main(){

  string titulo, introducao, desenvolvimento, conclusao;
  
  Livro livro1;

  cout << "Digite o titulo do livro: ";
  getline(cin, titulo);
  cout << "Digite a introducao do livro: ";
  getline(cin, introducao);
  cout << "Digite o desenvolvimento do livro: ";
  getline(cin, desenvolvimento);
  cout << "Digite a conclusao do livro: ";
  getline(cin, conclusao);

  Livro livro(titulo, introducao, desenvolvimento, conclusao);
  
  livro.getLivro();
  
}
