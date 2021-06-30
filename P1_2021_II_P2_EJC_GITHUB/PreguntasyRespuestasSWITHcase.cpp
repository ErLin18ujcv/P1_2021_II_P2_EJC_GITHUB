#include <iostream>
#include <string>
#include<Windows.h> // Español
#include<clocale> //Español
using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");
    SetConsoleCP(1252);
    char respuesta;
    cout << "¿Usa más dispositivos inteligentes aparte del teléfono?[s/n]" << endl;
    cout << "R: ";
    cin >> respuesta;
    switch (respuesta)
    {
    case 's':cout << "SI" << endl << endl; break;
    case 'n':cout << "NO" << endl << endl; break;
    default:cout << "No ha respondido!";
    }



    cout << "¿La tecnoloia suple todas sus necesidades en su dia a dia?[s/n]" << endl;
    cout << "R: ";
    cin >> respuesta;
    switch (respuesta)
    {
    case 's':cout << "SI" << endl << endl; break;
    case 'n':cout << "NO" << endl << endl; break;
    default:cout << "No ha respondido!";
    }


    cout << "¿La tecnologia puede cambiarle la vida a alguien?[s/n]" << endl;
    cout << "R: ";
    cin >> respuesta;
    switch (respuesta)
    {
    case 's':cout << "SI" << endl << endl; break;
    case 'n':cout << "NO" << endl << endl; break;
    default:cout << "No ha respondido!";
    }


    cout << "¿Para usted la tecnología es indispensable en nuestros días?[s/n]" << endl;
    cout << "R: ";
    cin >> respuesta;
    switch (respuesta)
    {
    case 's':cout << "si" << endl << endl; break;
    case 'n':cout << "no" << endl << endl; break;
    default:cout << "No ha respondido!";
    }

    cout << "¿La tecnologia es dañina para la salud mental de los niños?[s/n]" << endl;
    cout << "R: ";
    cin >> respuesta;
    switch (respuesta)
    {
    case 's':cout << "SI" << endl << endl; break;
    case 'n':cout << "NO" << endl << endl; break;
    default:cout << "No ha respondido!";
    }

    system("pause");
    return 0;
}
