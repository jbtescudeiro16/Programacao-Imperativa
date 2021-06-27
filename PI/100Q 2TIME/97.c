int maiorAB(ABin a)
{
    if (!a)
        return 0;
    else
    {
        while (a->dir)
        {
            a = a->dir;
        }
        return a->valor;
    }
}