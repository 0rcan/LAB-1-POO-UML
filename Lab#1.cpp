/* JOSUE JACINTO ZAMBRANO LOAIZA 2380741-3743
 DIEGO ANDRES BOLAÑOS ISIQUITA 2379918 */

#include <iostream>
using namespace std;


/////////////////////////SeresVivos//////////////////////////

class SeresVivos { // Clase Padre
private:           // atributos cosas que posee
  bool multiCelulares;
  string sexo;
  bool tomanAgua;

public: // metodos  Acciones
  SeresVivos(bool, string, bool);
  
  void respirar();
  void comer();
  void reproducirse();
  void morir();
};

/////////////////////////Animal//////////////////////////

class Animal : public SeresVivos { // Erencia de la clase padre
private:
  string nombre;                           // atributos
  int patas;
  bool consumoOxigeno;
  string tamano;
  string color;
public: // metodos
  Animal(bool,string,bool,
  string, int, bool, string,string);

  void dormir();
  void respirar();
  void sobrevivir();
};

/////////////////////////vertebradros//////////////////////////

class Vertebrado : public Animal{
private:
  bool cola;
  bool osico;
  bool garras;
  bool pico;
  int fuerza;

public:
  Vertebrado(bool,string,bool,
  string, int, bool,string,string,
  bool, bool, bool,bool,int);

  void caminar();
  void cazar();
  void correr();
  void saltar();
};

/////////////////////////Peces//////////////////////////
class Peces : public Vertebrado {
private:
  bool aletas;
  bool escamas;

public:
  Peces(bool,string,bool,
  string, int, bool, string, string,
  bool, bool,bool,bool,int,
  bool,bool);

  void nadar();
};


/////////////////////////Felinos//////////////////////////

class Felinos : public Vertebrado {
private:
  bool piel;
  bool verenoscuridad;
  bool agilidad;

public:
  Felinos(bool,string,bool,
  string, int, bool, string, string,
  bool, bool,bool,bool,int,
  bool, bool, bool);

  void cazar();
  void correr();
};


/////////////////////////Aves//////////////////////////

class Aves : public Vertebrado {
private:
  bool plumas;
  bool alas;

public:
  Aves(bool,string, bool, 
  string, int, bool, string, string, 
  bool, bool,bool,bool,int,
  bool, bool);

  void volar();
};


/////////////////////////Mamiferos//////////////////////////

class Mamiferos : public Vertebrado {
private:
  bool pelo;
  bool dientes;
  bool granAprendizaje;

public:
  Mamiferos(bool,string,bool,
  string, int, bool, string, string, 
  bool, bool,bool,bool,int,
  bool, bool, bool);

  void amamantar();
};


/////////////////////////Reptiles//////////////////////////

class Reptiles : public Vertebrado {
private:
  bool arrastrarseenelsuelo;
  bool escamas;

public:
  Reptiles(bool,string,bool,
  string, int, bool, string, string, 
  bool, bool,bool,bool,int,
  bool, bool);
  
  void arrastrarse();
  void caminar();
  void cazar();
};


/////////////////////////Invertebrados//////////////////////////

class Invertebrados : public Animal {
private:
  bool insecto;

public:
  Invertebrados(bool,string,bool, 
  string, int, bool, string, string, 
  bool);
  
};


/////////////////////////Artopodos/////////////////////////////

class Artropodo : public Invertebrados {
private:
  bool exoEsqueleto;
  bool cuerpoSegmentado;

public:
  Artropodo(bool,string,bool, 
  string, int, bool, string, string, 
  bool, 
  bool,bool); // Constructor

  void salirEnOscuridad();
  void tejerTelaranas();
};


/////////////////////////Moluscos//////////////////////////

class Moluscos : public Invertebrados {
private:
  bool cuerpoBlando;
  bool tentaculos;
  bool poseenCocha;

public:
  Moluscos(bool,string,bool, 
  string, int, bool, string, string, 
  bool,
  bool, bool, bool);
  
  void viveEnAguaYTierra();
};

/////////////////////////Equinodermos//////////////////////////

class Equinodermos : public Invertebrados {
private:
  bool simetriaRadial;
  bool espinas;

public:
  Equinodermos(bool,string,bool,
  string, int, bool, string, string, 
  bool,
  bool, bool);

  void viveEnFondoMarino();
};

/////////////////////////////////////////Constructor Seres vivos///////////////////////////

SeresVivos::SeresVivos(bool _multiCelulares, string _sexo, bool _tomanAgua) {
  multiCelulares = _multiCelulares;
  sexo = _sexo;
  tomanAgua = _tomanAgua;
}
void SeresVivos::respirar() {
  cout <<endl <<"Los seres vivos tiene capacidad de respirar";
}
void SeresVivos::comer(){
  cout <<endl <<"Tienen capacidad de comer";
}
void SeresVivos::reproducirse(){
  cout <<endl <<"Pueden reproducirse";
}

void SeresVivos::morir(){
  cout <<endl <<"Y Pueden morir"<<endl;
}


///////////////////////////////contructor De Animales/////////////////////////

Animal::Animal(bool _multiCelulares, string _sexo, 
bool _tomanAgua,string _nombre, int _patas,bool _consumoOxigeno, 
string _tamano,string _color) : SeresVivos(_multiCelulares,_sexo,_tomanAgua){
  nombre = _nombre;
  patas = _patas;
  consumoOxigeno = _consumoOxigeno;
  tamano = _tamano;
  color = _color;
}

void Animal::dormir(){
  
  cout <<endl <<"El animal es "<<nombre<<endl
  <<"Numero de patas "<<patas<<endl
  <<"Consume oxigeno?: "<<consumoOxigeno<<endl
  <<"Su tamano es: "<<tamano <<"Color "<<color<<" Y duerme."<<endl;
}

void Animal::respirar(){
  
  cout <<endl <<"El animal es "<<nombre<<endl
  <<"Numero de patas "<<patas<<endl
  <<"Consume oxigeno?: "<<consumoOxigeno<<endl
  <<"Su tamano es: "<<tamano <<" Color "<<color<<" Y respira."<<endl;
}


void Animal::sobrevivir(){
  
  cout <<endl <<"El animal es "<<nombre<<endl
  <<"Numero de patas "<<patas<<endl
  <<"Consume oxigeno?: "<<consumoOxigeno<<endl
  <<"Su tamano es: "<<tamano <<"Color "<<color<<" Y lucha por sobrevivir."<<endl;
  
}



////////////////////////constructor vertebrado//////////////////////////////

Vertebrado::Vertebrado(bool _multiCelulares, string _sexo, bool _tomanAgua,
string _nombre, int _patas,bool _consumoOxigeno, string _tamano,string _color, 
bool _cola, bool _osico, bool _garras,bool _pico, 
int _fuerza) : Animal(_multiCelulares,_sexo,_tomanAgua,_nombre,
_patas,_consumoOxigeno,_tamano,_color)
{
cola = _cola;
osico = _osico;
garras = _garras;
pico = _pico;
fuerza = _fuerza;
}


void Vertebrado::caminar(){

  cout <<endl <<"Tiene cola?: "<<cola<<endl 
  << "Tiene osico?: "<<osico<<endl 
  << "Tiene garras?: "<<garras<<endl
  << "Tiene pico?: "<<pico<<endl
  << "Y Su fuerza es: "<<fuerza<<endl
  << "Tambien puede caminar"<<endl;

} 

void Vertebrado::cazar(){
  cout <<endl <<"Tiene cola?: "<<cola<<endl 
  << "Tiene osico?: "<<osico<<endl 
  << "Tiene garras?: "<<garras<<endl
  << "Tiene pico?: "<<pico<<endl
  << "Y Su fuerza es: "<<fuerza<<endl
  << "Tambien puede cazar"<<endl;

  
}
void Vertebrado::correr(){
  cout <<endl <<"Tiene cola?: "<<cola<<endl 
  << "Tiene osico?: "<<osico<<endl 
  << "Tiene garras?: "<<garras<<endl
  << "Tiene pico?: "<<pico<<endl
  << "Y Su fuerza es: "<<fuerza<<endl
  << "Tambien puede correr"<<endl;
  
}
void Vertebrado::saltar(){
  cout <<endl <<"Tiene cola?: "<<cola<<endl 
  << "Tiene osico?: "<<osico<<endl 
  << "Tiene garras?: "<<garras<<endl
  << "Tiene pico?: "<<pico<<endl
  << "Y Su fuerza es: "<<fuerza<<endl
  << "Tambien puede saltar"<<endl;
  
}
//////////////////////////constructor de peces///////////////////////

Peces::Peces(bool _multiCelulares, string _sexo, bool _tomanAgua, 
string _nombre, int _patas, bool _consumoOxigeno, string _tamano, string _color, 
bool _cola, bool _osico,bool _garras, bool _pico, int _fuerza, 
bool _aletas, bool _escamas) :Vertebrado(_multiCelulares, _sexo, _tomanAgua, 
_nombre, _patas, _consumoOxigeno, _tamano, _color, 
_cola, _osico, _garras, 
_pico, _fuerza){

    aletas= _aletas;
    escamas=_escamas;
  } 


  void Peces ::nadar(){
    cout <<endl <<"Los peces tienen aletas?: "<<aletas<<endl
    <<"Tienen escamas?: "<<escamas<<endl
    <<"Tambien nadan por defecto"<<endl;
  }


 //////////////////////////constructor de felinos///////////////////////

Felinos::Felinos(bool _multiCelulares, string _sexo, bool _tomanAgua, 
string _nombre, int _patas, bool _consumoOxigeno, string _tamano, string _color, 
bool _cola, bool _osico,bool _garras, bool _pico, int _fuerza,
bool _piel, bool _verenoscuridad, bool _agilidad ) : Vertebrado(_multiCelulares, _sexo, _tomanAgua,
_nombre, _patas, _consumoOxigeno, _tamano, _color, 
_cola, _osico, _garras, _pico, _fuerza){
    
    piel = _piel;
    verenoscuridad = _verenoscuridad;
    agilidad = _agilidad;
    
  }

  void Felinos::cazar(){
    cout<<endl <<"Los felinos son animales agiles?: "<<agilidad<<endl
    <<"Los felinos pueden ver en la oscuridad?: "<<verenoscuridad<<endl
    <<"Los felinos tienen piel?: "<< piel<<endl
    <<"Y tambien pueden cazar" <<endl;
    
  
  }
  
  void Felinos::correr(){
    cout <<endl <<"Los felinos son animales agiles?: "<<agilidad<<endl
    <<"Los felinos pueden ver en la oscuridad?: "<<verenoscuridad<<endl
    <<"Los felinos tienen piel?: "<< piel<<endl
    <<"Y tambien pueden correr"<<endl;
    
  }


/////////////////////Constructor de aves////////////////////

Aves::Aves(bool _multiCelulares, string _sexo, bool _tomanAgua, 
string _nombre, int _patas, bool _consumoOxigeno, string _tamano, string _color, 
bool _cola, bool _osico,bool _garras, bool _pico, int _fuerza,
bool _plumas, bool _alas) : Vertebrado(_multiCelulares, _sexo, _tomanAgua,
_nombre, _patas, _consumoOxigeno, _tamano, _color, 
_cola, _osico, _garras, _pico, _fuerza)
{
  plumas =_plumas;
  alas =_alas;
}
void Aves::volar(){

  cout <<endl <<"las aves tiene plumas? : "<<plumas<<endl
  <<"Todas las aves tiene alas?: ? "<<alas<<endl
  <<"Y no todas las aves pueden volar"<<endl;
  if (alas ==true or plumas ==true){
      cout<<"Su animal es un ave";
  
  }
}


///////////////////////////Constructor de mamiferos////////////////

Mamiferos::Mamiferos(bool _multiCelulares, string _sexo, bool _tomanAgua, 
string _nombre, int _patas, bool _consumoOxigeno, string _tamano, string _color, 
bool _cola, bool _osico,bool _garras, bool _pico, int _fuerza,
bool _pelo, bool _dientes, bool _granAprendizaje): Vertebrado(_multiCelulares, _sexo, _tomanAgua,
_nombre, _patas, _consumoOxigeno, _tamano, _color, 
_cola, _osico, _garras, _pico, _fuerza){
  pelo = _pelo;
  dientes=_dientes;
  granAprendizaje=_granAprendizaje;
  
}

void Mamiferos::amamantar(){
  cout <<endl <<" Los mamiferos poseen pelaje?:  "<<pelo<<endl
  <<"Los mamiferos tienen dientes"<<dientes<<endl
  <<"Los mamiferos tiene gran aprendizaje "<<granAprendizaje<<endl
  <<"Y toman liquido lacteo"<<endl;
  
}


///////////////////////////Constructor de reptiles////////////////

Reptiles::Reptiles(bool _multiCelulares, string _sexo, bool _tomanAgua, 
string _nombre, int _patas, bool _consumoOxigeno, string _tamano, string _color, 
bool _cola, bool _osico,bool _garras, bool _pico, int _fuerza,
bool _arrastrarseenelsuelo, bool _escamas): Vertebrado(_multiCelulares, _sexo, _tomanAgua,
_nombre, _patas, _consumoOxigeno, _tamano, _color, 
_cola, _osico, _garras, _pico, _fuerza){

arrastrarseenelsuelo=_arrastrarseenelsuelo;
escamas= _escamas;
}

void Reptiles::arrastrarse(){
  cout <<endl <<"Los reptiles son animale sque se arrastran el el suelo?: "<<arrastrarseenelsuelo<<endl
  <<"Los reptiles tiene escamas "<<escamas<<endl;
}
void Reptiles::caminar(){
  cout <<endl <<"Los reptiles tiene la capacita de trasladrse caminando"<<endl;
  
}
void Reptiles::cazar(){
  cout <<endl <<"Los reptiles tambien son agiles y tienen la capcitad de cazar"<<endl;
  
}

////////////////////////constructor invertebrado//////////////////////////////

Invertebrados::Invertebrados(bool _multiCelulares, string _sexo, bool _tomanAgua,
string _nombre, int _patas,bool _consumoOxigeno, string _tamano,string _color, 
bool _insecto) : Animal(_multiCelulares,_sexo,_tomanAgua,
_nombre,_patas,_consumoOxigeno,_tamano,_color)
{
  insecto = _insecto;
}


//////////////////Constructor Artopodos/////////////////

Artropodo::Artropodo(bool _multiCelulares, string _sexo, bool _tomanAgua,
string _nombre, int _patas,bool _consumoOxigeno, string _tamano,string _color, 
bool _insecto,
bool _exoEsqueleto,bool _cuerpoSegmentado) : Invertebrados(_multiCelulares,_sexo,_tomanAgua,
_nombre,_patas,_consumoOxigeno,_tamano,_color,_insecto)
{
  exoEsqueleto = _exoEsqueleto;
  cuerpoSegmentado = _cuerpoSegmentado;
}

//void salirEnOscuridad();
  //void tejerTelaranas();
void Artropodo::salirEnOscuridad(){

  cout <<endl <<"los artropodos tienen exoesqueleto?: " <<exoEsqueleto<<endl
  <<"los artropodos tiene cuerpo segmento?: "<<cuerpoSegmentado<<endl
  <<"Tambien son muy comunes en la oscuridad"<<endl;
}

void Artropodo::tejerTelaranas(){

  cout <<endl <<"el insectos tienen exoesqueleto?: " <<exoEsqueleto<<endl
  <<"los artropodos tiene cuerpo segmento?: "<<cuerpoSegmentado<<endl
  <<"Tambien pueden tejer telarañas"<<endl;
}

Moluscos::Moluscos(bool _multiCelulares, string _sexo, bool _tomanAgua,
string _nombre, int _patas,bool _consumoOxigeno, string _tamano,string _color, 
bool _insecto,
bool _cuerpoBlando,bool _tentaculos,bool _poseenConcha) : Invertebrados(_multiCelulares,_sexo,_tomanAgua,
_nombre,_patas,_consumoOxigeno,_tamano,_color,_insecto)
{
  cuerpoBlando = _cuerpoBlando;
  tentaculos = _tentaculos;
  poseenCocha = _poseenConcha;
}

void Moluscos::viveEnAguaYTierra(){

  cout <<endl <<"Los moluscos tienen cuerpo blando?: "<<cuerpoBlando <<endl
  <<"Los moluscos tienen cuerpo blando?: " <<tentaculos <<endl
  <<"Los moluscos tienen concha?: " <<poseenCocha<<endl
  <<"Los molucos pueden vivir en agua y en tierra"<<endl;
}

//////////////////Equinodermos/////////////////

Equinodermos::Equinodermos(bool _multiCelulares, string _sexo, bool _tomanAgua,
string _nombre, int _patas,bool _consumoOxigeno, string _tamano,string _color, 
bool _insecto,
bool _simetriaRadial,bool _espinas) : Invertebrados(_multiCelulares,_sexo,_tomanAgua,
_nombre,_patas,_consumoOxigeno,_tamano,_color,_insecto)
{
  simetriaRadial = _simetriaRadial;
  espinas = _espinas;
}

void Equinodermos::viveEnFondoMarino(){

  cout <<endl <<"Los equinodermos tienen simetria radial?: "<<simetriaRadial<<endl
  <<"Los equinodermos tienen espinas?: " <<espinas<<endl
  <<"Los equinodermos viven en el fondo marino"<<endl;

}


/////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////MAIN/////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
  
  //Seres vivos
  SeresVivos s1=SeresVivos(true,"Macho",true);
  s1.respirar();
  s1.comer();
  s1.reproducirse();
  s1.morir();
  

  //Clase animal
  Animal a1= Animal(true,"hembra",true,"Perro",4,false,"grande","negro");
  a1.dormir();
  a1.respirar();
  a1.sobrevivir();


  //Clase vertebrado
  Vertebrado v1=Vertebrado(true,"Macho",true,
  "Perro",4,true,"grande","negro",
  false,true,false,true,20 );
  v1.caminar();
  v1.cazar();
  v1.saltar();
  v1.correr(); 

  
  //Clase peces
  Peces p1=Peces(true,"Macho",true,
  "salmon",4,true,"grande","negro",
  false,true,false,true,20,
  true,true);
  p1.nadar();


  //Clase felinos
  Felinos f1=Felinos(true,"Macho",true,
  "Gato",4,true,"grande","negro",
  false,true,false,true,15,
  true,true,true);
  f1.cazar();
  f1.correr();


  //Clases aves
  Aves t1=Aves(true,"Macho",true,
  "Codorniz",4,true,"grande","negro",
  false,true,false,true,3,
  true,true);
  t1.volar();


  //Clases mamiferos
  Mamiferos m1=Mamiferos(
  true,"Macho",true,
  "Codorniz",4,true,"grande","negro",
  false,true,false,true,3,
  true,true,true);
  m1.amamantar();


  //Clases reptiles
  Reptiles r1=Reptiles(
  true,"Macho",true,
  "Codorniz",4,true,"grande","negro",
  false,true,false,true,3,
  true,true);
  r1.arrastrarse();
  r1.caminar();
  r1.cazar();


  //Clase invertebrados 
  //Invertebrados i1=Invertebrados();
  //i1.
  //Clase atropodo
  Artropodo A1= Artropodo(true,"Macho",true,
  "araña",8,true,"grande","negra",
  false,
  true,true);
  A1.salirEnOscuridad();
  A1.tejerTelaranas();
  //Clases moluscos
  Moluscos l1= Moluscos(true,"Macho",true,
  "caracol",1,true,"grande","negro",
  false,
  true,true,true);
  l1.viveEnAguaYTierra();
  
  //Clase Equinodermos
  Equinodermos e1=Equinodermos(true,"Macho",true,
  "caracol",1,true,"grande","negro",
  false,
  true,true);
  e1.viveEnFondoMarino();
  

}