#include <iostream>
using namespace std;

class Persona{
	
	private:
		string Nombre, Correo;
		int Cedula, Telefono;
	public:
		Persona(string Nombre_, int Cedula_, int Telefono_, string Correo_);
		Persona(string Nombre_, int Cedula111_);
		
		void SetNombre(string NuevoNombre);
		void SetCedula(int NuevaCedula);
		void SetTelefono(int NuevoTelefono);
		void SetCorreo(string NuevoCorreo);
		
		string GetNombre();
		int GetCedula();
		int GetTelefono();
		string GetCorreo();
};

class VentaSillas: Persona{
	private:
		string Color, Tamano;
		int Precio;
	public:
		VentaSillas(string Nombre_, int Cedula_, int Telefono_, string Correo_,
					string Color_, string Tamano_, int Precio_);
		
		//Gettes
		string GetColor();
		string GetTamano();
		int GetPrecio();
		
		//Getters clase padre
		string GetNombrePersona();
		int GetCedulaPersona();
		int GetTelefonoPersona();
		string GetCorreoPersona();
		
		//Setter
		void SetColor(string NuevoColor);
		void SetTamano(string NuevoTamano);
		void SetPrecio(int NuevoPrecio);
		
		void SetNombrePersona(string NuevoNombre);
		void SetCedulaPersona(int NuevaCedula);
		void SetTelefonoPersona(int NuevoTelefono);
		void SetCorreoPersona(string NuevoCorreo);
};

int main() {
	
	Persona Lu = Persona("Luisa", 2342,214234,"lu@utp.edu.co");
	cout<<"Nombre de la persona: "<<Lu.GetNombre()<<endl;
	Lu.SetNombre("Ana");
	cout<<"El nuevo nombre de la persona: "<<Lu.GetNombre()<<endl;
	cout<<"Cedula de la persona: "<<Lu.GetCedula()<<endl;
	cout<<"Telefono de la persona: "<<Lu.GetTelefono()<<endl;
	cout<<"Correo de la persona: "<<Lu.GetCorreo()<<endl;
	
	VentaSillas PrimeraVenta = VentaSillas("Jorge",232,343,"j@utp.edu.co","Negra","Mediana",150000);
	cout<<"Color de la silla: "<<PrimeraVenta.GetColor()<<endl;
	cout<<"Nombre de la persona: "<<PrimeraVenta.GetNombrePersona()<<endl;
	PrimeraVenta.SetColor("Azul");
	PrimeraVenta.SetNombrePersona("Juan");
	cout<<"Nombre de la persona: "<<PrimeraVenta.GetNombrePersona()<<endl;
	
	return 0;
}

Persona::Persona(string Nombre_, int Cedula_, int Telefono_, string Correo_){
	Nombre = Nombre_;
	Cedula = Cedula_;
	Telefono = Telefono_;
	Correo = Correo_;
}
Persona::Persona(string Nombre_, int Cedula_){
	Nombre = Nombre_;
	Cedula = Cedula_;
}

void Persona::SetNombre(string NuevoNombre){
	Nombre = NuevoNombre;
}
void Persona::SetCedula(int NuevaCedula){
	Cedula = NuevaCedula;
}
void Persona::SetTelefono(int NuevoTelefono){
	Telefono = NuevoTelefono;
}
void Persona::SetCorreo(string NuevoCorreo){
	Correo = NuevoCorreo;
}

string Persona::GetNombre(){
	return(Nombre);
}
int Persona::GetCedula(){
	return(Cedula);
}
int Persona::GetTelefono(){
	return(Telefono);
}
string Persona::GetCorreo(){
	return(Correo);
}
VentaSillas::VentaSillas(string Nombre_, int Cedula_, int Telefono_, string Correo_,
					string Color_, string Tamano_, int Precio_)
					:Persona(Nombre_, Cedula_, Telefono_, Correo_)	
					{
						Color = Color_;
						Tamano = Tamano_;
						Precio = Precio_;
						
						
					}
					
//Gettes
string VentaSillas::GetColor(){
	return(Color);
}
string VentaSillas::GetTamano(){
	return(Tamano);
}
int VentaSillas::GetPrecio(){
	return(Precio);
}

string VentaSillas::GetNombrePersona(){
	return(GetNombre());
}
int VentaSillas::GetCedulaPersona(){
	return(GetCedula());
}
int VentaSillas::GetTelefonoPersona(){
	return(GetTelefono());
}
string VentaSillas::GetCorreoPersona(){
	return(GetCorreo());
}


//Setter
void VentaSillas::SetColor(string NuevoColor){
	Color = NuevoColor;
}
void VentaSillas::SetTamano(string NuevoTamano){
	Tamano = NuevoTamano;
}
void VentaSillas::SetPrecio(int NuevoPrecio){
	Precio = NuevoPrecio;
}		

void VentaSillas::SetNombrePersona(string NuevoNombre){
	SetNombre(NuevoNombre);
}
void VentaSillas::SetCedulaPersona(int NuevaCedula){
	SetCedula(NuevaCedula);
}
void VentaSillas::SetTelefonoPersona(int NuevoTelefono){
	SetTelefono(NuevoTelefono);
}
void VentaSillas::SetCorreoPersona(string NuevoCorreo){
	SetCorreo(NuevoCorreo);
}		
					