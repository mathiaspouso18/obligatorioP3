#include <iostream>
#include "Menu.h"
#include "CapaLogica.h"

using namespace std;

int main()
{

    int opcion = -1;
    int opcion2 = 0;
    CapaLogica CL;
    Iterador iter;
    TipoMensaje msj;
    String nombre;
    String matricula;
    String depto;
    String marca;
    int tat = 0;
    int cantviajes=0;
    int dia,mes,anio;
	int sim = 0, gran = 0, rem = 0;
    long int cedula = 0;
    float capacidadrem=0;
    float capacidad=0;
    do
    {
        MenuPrincipal(opcion);

        switch(opcion)
        {
                case 1:
                    {
                        std::cin.ignore(); //Agregue esto para que ignore el salto de linea, si no no permite agregar datos.
                        printf("\n\tIngrese la matricula: ");
                        matricula.scan();
                        printf("\tIngrese la marca: ");
                        marca.scan();
                        printf("\tIngrese la cantidad de viajes: ");
                        scanf("%d", &cantviajes);
                        printf("\tIngrese la cedula del camionero: ");
                        scanf("%d", &cedula);
                        printf("\tIngrese el tipo de camion:");
                        printf("\t1- Simple: ");
                        printf("\t2- Grande: ");
                        printf("\t3- Con Remolque: ");
                        scanf("%d", &opcion2);
                        switch (opcion2){
                            case 1:{
                                std::cin.ignore(); //Agregue esto para que ignore el salto de linea, si no no permite agregar datos.
                                printf("\tIngrese el departamento: ");
                                Fecha f;
                                depto.scan();
                                Camion * c = new CamSimple(matricula, marca, cantviajes, depto);
                                CL.AltaCamion(c,cedula,msj);
                                printf("\n");
                                MostrarMensaje(msj);
                            }
                            break;
                            case 2:{
                                fflush(stdin);
                                printf("\tIngrese capacidad del camion: ");
                                scanf("%f", &capacidad);
                                printf("\tIngrese fecha de adquirido\n");
                                printf("\t\tIngrese dia: ");
                                scanf("%d", &dia);
                                printf("\t\tIngrese mes: ");
                                scanf("%d", &mes);
                                printf("\t\tIngrese anio: ");
                                scanf("%d", &anio);
                                Fecha f(dia,mes,anio);
                                Camion * c = new CamGrande(matricula, marca, cantviajes, capacidad,f);
                                CL.AltaCamion(c,cedula,msj);
                                printf("\n");
                                MostrarMensaje(msj);
                            }
                                break;
                            case 3:{
                                printf("\tIngrese capacidad del remolque: ");
                                scanf("%f", &capacidadrem);
                                printf("\tIngrese capacidad del camion: ");
                                scanf("%f", &capacidad);
                                printf("\tIngrese fecha de adquirido\n");
                                printf("\t\tIngrese dia: ");
                                scanf("%d", &dia);
                                printf("\t\tIngrese mes: ");
                                scanf("%d", &mes);
                                printf("\t\tIngrese anio: ");
                                scanf("%d", &anio);
                                Fecha f(dia,mes,anio);
                                Camion * c = new CamGrandeRem (matricula, marca, cantviajes, capacidad, f,capacidadrem);
                                CL.AltaCamion(c,cedula,msj);
                                printf("\n");
                                MostrarMensaje(msj);
                                break;
                            }
                        }
                    }
                break;
                case 2:
                    {
                        CL.ListarCamiones(iter,msj);
						if(msj == OK){
							Objeto * o;
							do{
								o= iter.proximoObjeto();
								o->print();
							}while(iter.hayMasObjetos());
						}else{
							printf("\n");
							MostrarMensaje(msj);
						}

                        iter.~Iterador(); //Destruyo iterador al final
                                          //porque si no se rompe al hacer: -Inserto
                                          //                                -Listar
                                          //                                -Inserto
                                          //                                -Listar
                                          // ERROR: SEGMENTATION FAULT.
                    }
                    printf("\n");
                break;
                case 3:
                    {
                        std::cin.ignore(); //Agregue esto para que ignore el salto de linea, si no no permite agregar datos.
                        printf("\n\tIngrese matricula: ");
                        matricula.scan();
                        CL.ListarCamionCamionero(iter,matricula, msj);
                        if(msj == OK){
							Objeto * o;
							do{
								o= iter.proximoObjeto();
								o->print();

							}while(iter.hayMasObjetos());
						}else{
							printf("\n");
							MostrarMensaje(msj);
						}

                        iter.~Iterador(); //Destruyo iterador al final
                                          //porque si no se rompe al hacer: -Inserto
                                          //                                -Listar
                                          //                                -Inserto
                                          //                                -Listar
                    }
                break;
                case 4:
                    {
                        printf("\n\tIngrese cedula: ");
                        scanf("%d", &cedula);
                        std::cin.ignore(); //Agregue esto para que ignore el salto de linea, si no no permite agregar datos.
                        printf("\tIngrese nombre: ");
                        nombre.scan();
                        printf("\tIngrese cantidad de tatuajes: ");
                        scanf("%d", &tat);
                        printf("\tIngrese fecha de nacimiento\n");
                        printf("\t\tIngrese dia: ");
                        scanf("%d", &dia);
                        printf("\t\tIngrese mes: ");
                        scanf("%d", &mes);
                        printf("\t\tIngrese anio: ");
                        scanf("%d", &anio);
                        Fecha f(dia, mes, anio);
                        CL.AltaCamionero(cedula, nombre, tat, f, msj);
                        printf("\n");
                        MostrarMensaje(msj);
                    }
                break;
                case 5:
                    {
                        //Agregue el destructor porque se me estaba rompiendo la app por segmentation fault
                        CL.ListarCamioneros(iter,msj);
						if(msj == OK){
							Objeto * o;
							do{
								o= iter.proximoObjeto();
								o->print();
							}while(iter.hayMasObjetos());
						}else{
							printf("\n");
							MostrarMensaje(msj);
						}

                        iter.~Iterador(); //Destruyo iterador al final
                                          //porque si no se rompe al hacer: -Inserto
                                          //                                -Listar
                                          //                                -Inserto
                                          //                                -Listar
					}
                break;
                case 6:
                    fflush(stdin);
                    printf("%f",CL.VolumenTotal());
                break;
                case 7:printf("Opcion 7");
                break;
                case 8:printf("Opcion 8");
					{
						CL.CamionesxTipo(sim,gran,rem,msj);
						if(msj == OK){
							printf("\n\tCamiones simples: %d - ", sim);
							printf("Camiones grandes: %d - ", gran);
							printf("Camiones con remolque: %d", rem);
						}else
							printf("\n");
							MostrarMensaje(msj);
					}
                break;
                case 9:printf("Opcion 9");
                break;
                case 10:printf("Opcion 10");
                break;
            }
        }while(opcion != 0);

    opcion = -1;//limpio las variables dejandolas en -1;
}
