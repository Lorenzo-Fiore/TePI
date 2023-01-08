void main()
{
    Processo p0, p1;
    Semaforo S(Count = 0);
    InizializzaEsegui(p0, p1);
}

P0
{
    ...
    AzioniPrePartenza();
    Wait(S);
    AzioniDopoPartenza();
}