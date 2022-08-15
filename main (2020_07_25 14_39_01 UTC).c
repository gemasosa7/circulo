//area y perimetro de un circulo

main()
{
    float PI=3.1415;
    float area,perimetro;
    float r;
    printf ("Perimetro y Area\n");
    printf("Ingresa radio\n");
    scanf("%f",&r);
    area=PI*r*r;
    perimetro=2*PI*r;
    system("cls");
        printf("resultado\n");
        printf("area=%.2f\n",area);
        printf("perimetro=%.2f\n",perimetro);
}


