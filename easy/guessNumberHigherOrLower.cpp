int guessNumber(int n)
{
    int low = 0;
    int high = n;
    int middle;
    int picked;
    while (low <= high)
    {
        middle = low + (high - low) / 2;
        if (guess(middle) == -1)
        {
            high = middle - 1;
        }
        else if (guess(middle) == 1)
        {
            low = middle + 1;
        }
        else
        {
            picked = middle;
            break;
        }
    }
    return picked;
}