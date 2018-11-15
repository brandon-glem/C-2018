#include <iostream>
#include <string.h>

using namespace std;

class animal{
    protected:
        string nombre;
        int nroPatas;

    public:
        void hacer_hablar(){
            this->habla();
        }
        virtual void habla()=0;
};

class perro:public animal{
    private:
        string raza;

    public:
        perro(string n, int p, string r){
            nombre=n;
            nroPatas=p;
            raza=r;
            }

        void que_raza(){
            cout<<raza<<endl;
}
        void habla(){
            cout<<"wof wof"<<endl;
        }
};

class gato:public animal{
    private:
        string rasa;
        string pelaje;

    public:
        gato(string no, int pa, string r,string pel){
            nombre=no;
            nroPatas=pa;
            rasa=r;
            pelaje = pel;
            }

        void caracteristicas(){
            cout<<rasa<<endl;
            cout<<pelaje<<endl;
            }

        void habla(){
            cout<<"miau miau"<<endl;
        }
};

class loro:public animal{
    private:
        string tipo;
        string pais;

    public:
        loro(string nob, int pat, string t,string fron){
            nombre=nob;
            nroPatas=pat;
            tipo=t;
            pais = fron;
            }
        void caracte(){
            cout<<tipo<<endl;
            cout<<pais<<endl;
            }
        void habla(){
            cout<<"hola hola"<<endl;
        }
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Animal{
    protected:
        string nombre;
        int nroPatas;

    public:
        Animal(){
            nombre = " ";
            nroPatas = 0;
        }

        Animal(string nomb, int patas){
            nombre = nomb;
            nroPatas = patas;
        }

        void mostrar_atributos(){
            this->atributos();
        }

        void atributos(){
            cout<<"Mi nombre es: "<< nombre<<endl;
            cout<<"Tengo: "<<nroPatas<<" patas"<<endl;
        }
};

class AnimalArray
{
    public:
        AnimalArray(){
            this->size = 0;
            this->Animales = new Animal[size];
        }

        AnimalArray(const Animal pts[], const int size){
            this->size = size;
            this->Animales = new Animal[size];
            for(int i = 0; i < size; i++)
                Animales[i] = pts[i];
        }

        AnimalArray(AnimalArray &o){
            this->size = o.size;
            this->Animales = new Animal[size];
            for(int i = 0; i < size; i++)
                Animales[i] = o.Animales[i];
        }

        ~AnimalArray(){
            delete[] Animales;
        }

        void print(){
            for(int t=0;t<size;t++)
                Animales[t].mostrar_atributos();
        }

        int getSize(){
            return size;
        }

        void resize(int newSize){
            Animal *pts = new Animal[newSize];
            int minsize = (newSize > size)? size: newSize;
            for(int t=0;t<minsize;t++)
                pts[t] = Animales[t];
            delete [] Animales;
            size = newSize;
            Animales = pts;
        }

        void push_back(const Animal &p){
            resize(size+1);
            Animales[size-1] = p;
        }

        void insert(const int pos, const Animal &q){
            resize(size+1);
            for(int i=size-1; i>pos; i--)
                Animales[i]= Animales[i-1];
            Animales[pos]=q;
        }

        //void insert(const int, const Animal &p);

    private:
        int size;
        Animal *Animales;
};

int main()
{
    int opcion;
    cout<<"1 = Pregunta 1"<<endl;
    cout<<"2 = Pregunta 2"<<endl;
    cout<<"ingrese opcion: ";
    cin>>opcion;

    if(opcion == 1){
        perro p("spike",4,"pastor aleman");
        p.hacer_hablar();
        p.que_raza();
        cout<<'\n';

        perro *ptp = &p;
        ptp->hacer_hablar();
        ptp->que_raza();
        cout<<'\n';

        gato g("mouse",4,"persa","corto");
        g.hacer_hablar();
        g.caracteristicas();
        cout<<'\n';

        gato *ptg = &g;
        ptg->hacer_hablar();
        ptg->caracteristicas();
        cout<<'\n';

        loro l("juan",2,"papagayo","brasil");
        l.hacer_hablar();
        l.caracte();
        cout<<'\n';

        loro *ptl = &l;
        ptl->hacer_hablar();
        ptl->caracte();
        cout<<'\n';
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    if(opcion == 2){

        Animal p("juan", 3);
        Animal q("marcelo", 4);
        Animal r("jhango", 2);
        Animal arr[] = {p, q , r};
        int size = sizeof(arr)/sizeof(arr[0]);

        AnimalArray pa2(arr, size);

        AnimalArray pa = pa2;

        cout <<"el tamaño del arreglo es: "<<pa.getSize() << endl;

        pa2.print();

        Animal t("spike", 100);
        cout<<'\n';

        pa2.push_back(t);

        pa2.print();
    }

    return 0;
}
