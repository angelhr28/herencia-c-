#include <iostream>

using namespace std;

class Persona {
  protected:
    int edad;
    string nombre   = "";
    string apellido = "";
    string sexo     = "";

  public:
    int getEdad();
    string getNombre();
    string getApellido();
    string getSexo();
    void setEdad(int c_edad);
    void setNombre(string c_nombre);
    void setApellido(string c_apellido);
    void setSexo(string c_sexo);
};

int Persona::getEdad(){
    return edad;
};

string Persona::getNombre(){
    return nombre;
};

string Persona::getApellido(){
    return apellido;
};

string Persona::getSexo(){
    return sexo;
};

void Persona::setApellido(string c_apellido) {
   apellido = c_apellido;
}

void Persona::setEdad(int c_edad) {
   edad = c_edad;
}

void Persona::setNombre(string c_nombre) {
    nombre = c_nombre;
}

void Persona::setSexo(string c_sexo) {
   sexo = c_sexo;
}

class Alumno : public Persona {
  protected:
    string codAlumno = "";

  public:
    string getCodAlumno();
    void setCodAlumno(string c_codAlumno);
};

string Alumno::getCodAlumno(){
    return codAlumno;
};

void Alumno::setCodAlumno(string c_codAlumno) {
   codAlumno = c_codAlumno;;
}
int main() {

        Alumno al;

        al.setNombre("Newton Angel");
        al.setApellido("Huamanñahui Robles");
        al.setEdad(21);
        al.setSexo("Masculino");
        al.setCodAlumno("2016200111");

        std::cout <<
          "Nombre: "   << al.getNombre()    << "\n" << 
          "Apellido: " << al.getApellido()  << "\n" <<
          "Codigo: "   << al.getCodAlumno() << "\n" <<
          "Edad: "     << al.getEdad()      << "\n" <<
          "sexo: "     << al.getSexo()      << endl;  
}