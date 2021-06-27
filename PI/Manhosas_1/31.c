

int maisFreq(int v[], int N)
{
    int max = 1, nummax = v[0], reps = 1, i = 0;
    for (i; i < N; i++)
    {
        if (v[i] == v[i + 1])
        {
            reps++;
        }
        else
        {
            if (reps > max)
            {
                max = reps;
                nummax = v[i];
            }
            reps = 1;
        }
    }
    return nummax;
}