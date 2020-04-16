//
// Created by Jorge Luis Vasquez on 14/04/2020.
//

#ifndef WORKSPACE_VECTOR_H
#define WORKSPACE_VECTOR_H
namespace utec {
    class vector {
    private:
        int* data_;
        int size_;
        int capacity_;
        void add_one();
        void delete_one();
        void add_one_index(int index,int value);
        void delete_one_position(int index);
    public:
        //contructor por default
        vector();
        //contructor con capacidad
        vector(std::size_t n);
        //contructor por copia
        vector(const utec::vector& that);
        //sobrecarga de la asignacion
        utec::vector &operator= (const utec::vector& that);
        //desctructor
        ~vector();
        //agregar atras
        void push_back(int value);
        //eliminar el ultimo elemeto de la pila
        void pop_back();
        //insertar en la posicion que desees
        void insert(std::size_t index, int value);
        int size()
        {
            return size_;
        }
        void print()
        {
            for (int i = 0; i < size_; i++) {
                cout << data_[i] << " ";
            }
            cout << endl;
        }
        //elimina la posicion que desees
         void erase(std::size_t index);
        //recargar de operador mas para concatenar vectores.
        utec::vector operator+(const utec::vector& that);

    };
}

#endif //WORKSPACE_VECTOR_H
