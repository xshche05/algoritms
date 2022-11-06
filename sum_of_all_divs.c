int sum_of_all_divs(int in_n)
{
    int n = in_n;
    int out = 1;
    for (int i = 2; i*i <= n; i++)
    {
        int curr_sum = 1;
        int curr_term = 1;
        while (n % i == 0)
        {
            n = n / i;
            curr_term *= i;
            curr_sum += curr_term;
        }
        out *= curr_sum;
    }
    if (n >= 2)
    {
        out *= (1+n);
    }
    return out;
}
