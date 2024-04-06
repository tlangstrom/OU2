void interse(void) {
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
        if (A[i] == B[j])
            C[i] = A[i];
}