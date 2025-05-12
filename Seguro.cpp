#include <iostream>
using namespace std;

int main(){
    int opcion;
    float salario, seguro1, seguro2,seguro3,seguro4;
    cout<<"ingresa una opcion"<<endl;
    cout<<"1-seguro de vida"<<endl;
    cout<<"2-seguro por muerte"<<endl;
    cout<<"3-seguro por invalidez"<<endl;
    cout<<"4-gastos funerarios"<<endl;
    cin>>opcion;
     
    cout<<"ingresa tu salario";
    cin>>salario;

    seguro1=10,000.00;
    seguro2=14,000.00;
    seguro3=18,000.00;
    seguro4=22,000.00;

    switch (opcion){
        case 1:
        if(salario <=910.00){
            cout<<"El monto de su seguro es de $10,000.00";
            
        }
        else if(salario >=910.01 && salario <=1255.00){
            cout<<"El monto de su seguro es de $14,000.00";
           
        }
        else if(salario >=1255.01 && salario <=1630.00){
            cout<<"El monto de su seguro es de $18,000.00";
           
        }
        else if(salario >=1630.01){
            cout<<"El monto de su seguro es de $22,000.00";
        }
        break ;
       
        case 2:
        if(salario <=910.00){
            cout<<"La compania pagara a los beneficiarios la suma asegurada individual contratada al ocurrir el fallecimieto. El monto de su seguro es de $10,000.00";
        }
        else if(salario >=910.01 && salario <=1255.00){
            cout<< "La compania pagara a los beneficiarios la suma asegurada individual contratada al ocurrir el fallecimieto. El monto de su seguro es de $14,000.00";
        }
        else if(salario >=1255.01 && salario <=1630.00){
            cout<<"La compania pagara a los beneficiarios la suma asegurada individual contratada al ocurrir el fallecimieto. El monto de su seguro es de $18,000.00";
        }
        else if(salario >=1630.01){
            cout<<"La compania pagara a los beneficiarios la suma asegurada individual contratada al ocurrir el fallecimieto. El monto de su seguro es de $22,000.00";
        }
        break;

        case 3:
        if(salario <=910.00){
            cout<<"El monto de su seguro es de $10,000.00\n";
            cout<<"Anticipacion del 50% de la suma asegurada por invalidez total y permanente. El valor asegurado se entregara asi:\n 50% en un solo pago y el 50% restante en 12 cuotas mensuales\n 50%=$5,000.00\n 50% en 12 cuotas =$416.67 cada 1 de mes "; 
        }
        if(salario >=910.01 && salario <=1255.00){
            cout<<"El monto de su seguro es de $14,000.00\n";
            cout<<"Anticipacion del 50% de la suma asegurada por invalidez total y permanente. El valor asegurado se entregara asi:\n 50% en un solo pago y el 50% restante en 12 cuotas mensuales\n 50%=$7,000.00\n 50% en 12 cuotas =$583.33 cada 1 de mes ";
        }
        if(salario >=1255.01 && salario <=1630.00){
            cout<<"El monto de su seguro es de $18,000.00\n";
            cout<<"Anticipacion del 50% de la suma asegurada por invalidez total y permanente. El valor asegurado se entregara asi:\n 50% en un solo pago y el 50% restante en 12 cuotas mensuales\n 50%=$9,000.00\n 50% en 12 cuotas =$750.00 cada 1 de mes ";
        }
        if(salario >=1630.01){
            cout<<"El monto de su seguro es de $22,000.00\n";
            cout<<"Anticipacion del 50% de la suma asegurada por invalidez total y permanente. El valor asegurado se entregara asi:\n 50% en un solo pago y el 50% restante en 12 cuotas mensuales\n 50%=$11,000.00\n 50% en 12 cuotas =$916.67 cada 1 de mes ";
        }
        break;
        case 4:

        break;
    }
    return 0;           
}