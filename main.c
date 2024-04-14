#include <stdio.h>

//CIPHER()

struct state {
    
}
int CIPHER()
{
    for (int i = 0; i < Nr; i++)
    {
        state = SUBBYTES(state);
        state = SHIFTROWS(state);
        state = MIXCOLUMNS(state);
        state = ADDROUNDKEY(state, w + 4 * i)
    }

    state = SUBBYTES(state);
    state = SHIFTROWS(state);
    state =ADDROUNDKEY(state, w + 4 * Nr);

    return state;98
}

int SUBBYTES()
{

}

int SHIFTROWS()
{

}

int MIXCOLUMNS()
{

}

int ADDROUNDKEY()
{

}

//KEYEXPANSION()

//INVCIPHER()
int INVSHIFTROWS()
{

}

int INVSUBBYTES()
{

}

int INVMIXCOLUMNS()
{

}


int main(void)
{
    return 0;
}