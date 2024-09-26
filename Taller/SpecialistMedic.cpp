#include <string>
#include <iostream>
using namespace std;

// Clase Usuario
class Usuario {
    private:
        string Nombre, Correo, Especialidad;
        int Telefono, Estrato; 
        
    public:
        // Setters y getters
        void SetNombre(const string& NuevoNombre) { 
            Nombre = NuevoNombre;
        }
        string GetNombre() const{
            return Nombre;
        }

        void SetCorreo(const string& NuevoCorreo) {
            Correo = NuevoCorreo;
        }

        string GetCorreo() const {
            return Correo;
        }

        void SetEspecialidad(const string& NuevaEspecialidad) {
            Especialidad = NuevaEspecialidad;
        }

        string GetEspecialidad() const {
            return Especialidad;
        }

        void SetTelefono(const int& NuevoTelefono) {
            Telefono = NuevoTelefono;
        }

        int GetTelefono() const {
            return Telefono;
        }

        void SetEstrato(const int& NuevoEstrato){
            Estrato = NuevoEstrato;
        }

        int GetEstrato() const {
            return Estrato;
        }

        // Constructor
        Usuario(const string& Nombre_, const string& Correo_, const string& Especialidad_, const int& Telefono_, const int& Estrato_) {
            Nombre = Nombre_;
            Correo = Correo_;
            Especialidad = Especialidad_;
            Telefono = Telefono_;
            Estrato = Estrato_;
        }
        Usuario(const string& Nombre_,const string& Correo_){
            Nombre = Nombre_;
            Correo = Correo_;
        }

        Usuario(){}

        // Destructor
        ~Usuario() {}
};

// Clase Paciente, hereda de Usuario
class Paciente : public Usuario {
    private:   
        string EstadoGeneral, ResultadosExamenes, ExamenesNecesarios;
        int ValorConsulta;
        bool Referido = false, Afiliado = false;
    public:
        // Setters y getters
        void SetEstadoGeneral(const string& NuevoEstadoGeneral) {
            EstadoGeneral = NuevoEstadoGeneral;
        }

        string GetEstadoGeneral() const {
            return EstadoGeneral;
        }

        void SetResultadosExamenes(const string& NuevosResultadosExamenes) {
            ResultadosExamenes = NuevosResultadosExamenes;
        }

        string GetResultadosExamenes() const {
            return ResultadosExamenes;
        }

        void SetExamenesNecesarios(const string& NuevosExamenesNecesarios) {
            ExamenesNecesarios = NuevosExamenesNecesarios;
        }

        string GetExamenesNecesarios() const {
            return ExamenesNecesarios;
        }

        void SetValorConsulta(const int& NuevoValorConsulta) {
            ValorConsulta = NuevoValorConsulta;
        }

        int GetValorConsulta() const {
            return ValorConsulta;
        }
        
        void SetReferido(const bool& NuevoReferido) {
            Referido = NuevoReferido;
        }

        bool GetReferido() const {
            return Referido;
        }

        void SetAfiliado(const bool& NuevoAfiliado) {
            Afiliado = NuevoAfiliado;
        }

        bool GetAfiliado() const {
            return Afiliado;
        }

        // Constructor
        Paciente (const string& Nombre_, const string& Correo_, const string& Especialidad_, const int& Telefono_, const int& Estrato_,
                  const string& EstadoGeneral_, const string& ResultadosExamenes_, const string& ExamenesNecesarios_, const int& ValorConsulta_,
                  const bool& Referido_, const bool& Afiliado_) 
        : Usuario(Nombre_, Correo_, Especialidad_, Telefono_, Estrato_) {
            EstadoGeneral = EstadoGeneral_;
            ResultadosExamenes = ResultadosExamenes_;
            ExamenesNecesarios = ExamenesNecesarios_;
            ValorConsulta = ValorConsulta_;
            Referido = Referido_;
            Afiliado = Afiliado_;
        }

        Paciente(){}
        // Destructor
        ~Paciente() {}
};

// Nueva clase Afiliacion
class Afiliacion {
    public:
        Paciente paciente; // Referencia al paciente
    public:
        // Constructor que toma un paciente
        Afiliacion(const Paciente& pac) : paciente(pac) {}

        // Método para calcular el costo mensual de la afiliación
        int CalcularCostoMensual() const {
            return 2 * paciente.GetValorConsulta();;
        }

        // Método para calcular el costo anual de la afiliación con el descuento del 30%
        double CalcularCostoAnual() const {
            double costoAnualSinDescuento = 20 * paciente.GetValorConsulta();
            return costoAnualSinDescuento * 0.7; // Aplicando el 30% de descuento
        }

        // Métodos para visualizar los costos
        void MostrarCostosAfiliacion() const {
            cout << "Costo Mensual: " << CalcularCostoMensual() << " pesos" << endl;
            cout << "Costo Anual (con 30% de descuento): " << CalcularCostoAnual() << " pesos" << endl;
        }

        // Método para recalcular los costos si cambian los datos del paciente
        void RecalcularCostos() {
            cout << "Recalculando costos..." << endl;
            MostrarCostosAfiliacion();
        }
};

class Empleado {
    private:
        string nombre, Correo;
        int Telefono, Codigo;

    public:
        // Setters y getters
        void SetNombre(const string& NuevoNombre) {
            nombre = NuevoNombre;
        }

        string GetNombre() const {
            return nombre;
        }

        void SetCorreo(const string& NuevoCorreo) {
            Correo = NuevoCorreo;
        }

        string GetCorreo() const {
            return Correo;
        }

        void SetTelefono(const int& NuevoTelefono) {
            Telefono = NuevoTelefono;
        }

        int GetTelefono() const {
            return Telefono;
        }

        void SetCodigo(const int& NuevoCodigo) {
            Codigo = NuevoCodigo;
        }

        int GetCodigo() const {
            return Codigo;
        }

        // Constructor
        Empleado(const string& Nombre_, const string& Correo_, const int& Telefono_, const int& Codigo_) {
            nombre = Nombre_;
            Correo = Correo_;
            Telefono = Telefono_;
            Codigo = Codigo_;
        }

        Empleado(){}
        // Destructor
        ~Empleado() {}
};

class Specialistmedic {
    public:
        Empleado empleado;
        Paciente paciente;
        Afiliacion afiliacion;

    public:
        // Constructor que inicializa todos los objetos
        Specialistmedic(const Empleado& emp, const Paciente& pac) : empleado(emp), paciente(pac), afiliacion(pac){};

        // Método para mostrar la información de afiliación
        void MostrarInformacion() {
            cout << "Información del empleado: " << endl;
            cout << "Nombre: " << empleado.GetNombre() << endl;
            cout << "Correo: " << empleado.GetCorreo() << endl;
            cout << "Teléfono: " << empleado.GetTelefono() << endl;
            cout << "Código: " << empleado.GetCodigo() << endl;

            cout << "\nInformación del paciente: " << endl;
            cout << "Nombre: " << paciente.GetNombre() << endl;
            cout << "Correo: " << paciente.GetCorreo() << endl;
            cout << "Especialidad: " << paciente.GetEspecialidad() << endl;
            cout << "Valor de la consulta: " << paciente.GetValorConsulta() << endl;

            if(paciente.GetAfiliado()){
                cout << "\nCostos de la afiliación: " << endl;
                afiliacion.MostrarCostosAfiliacion();
            }else{
                cout << "\nNo es afiliado: " << endl;
            }
            

        }

        // Métodos para modificar los datos del empleado o paciente
        void ModificarEmpleado(const string& nuevoNombre, const string& nuevoCorreo, const int& nuevoTelefono, const int& nuevoCodigo) {
            empleado.SetNombre(nuevoNombre);
            empleado.SetCorreo(nuevoCorreo);
            empleado.SetTelefono(nuevoTelefono);
            empleado.SetCodigo(nuevoCodigo);
        }

        void ModificarPaciente(const string& nuevoNombre, const string& nuevoCorreo, const string& nuevaEspecialidad, const int& nuevoValorConsulta) {
            paciente.SetNombre(nuevoNombre);
            paciente.SetCorreo(nuevoCorreo);
            paciente.SetEspecialidad(nuevaEspecialidad);
            paciente.SetValorConsulta(nuevoValorConsulta);
        }

        // Método para recalcular los costos
        void RecalcularAfiliacion() {
            if(paciente.GetAfiliado()){
                afiliacion.RecalcularCostos();
            }else{
                cout << "No es afiliado" << endl;
            }

        }
};

int main() {
    // Crear un empleado
    Empleado empleado1("Miguel", "Miguel@hospital.com", 1234567, 101);

    // Crear un paciente
    Paciente paciente1("Maria Lopez", "maria@correo.com", "Cardiología", 9876543, 3, "Estable", "Sin anormalidades", "Exámenes de sangre", 50000, true, true);
    
    // Crear una instancia de Specialistmedic con los objetos anteriores
    Specialistmedic specialistmedic1(empleado1, paciente1);

    // Mostrar la información y recalcular costos
    specialistmedic1.MostrarInformacion();
    specialistmedic1.RecalcularAfiliacion();
    
    return 0;
}