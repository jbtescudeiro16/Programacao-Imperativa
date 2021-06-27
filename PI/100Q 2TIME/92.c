

int contaFolhas(ABin a)
{
    if (!a)
        return 0;
    if (!a->esq && !a->dir)
        return 1;
    else
        return contaFolhas(a->esq) + contaFolhas(a->dir)
}