bool dateIsBefore(int a,int b,int c,int d)
{
    if(a<c)
    {
        return true;
    }
    else if(a==c)
    {
        if(b<d)
        {
        return true;
        }
        else
        {
        return false;
        }
    }
    else
    {
        return false;
    }
}