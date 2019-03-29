#ifndef GAMEFUNCTIONS_H_INCLUDED
#define GAMEFUNCTIONS_H_INCLUDED




void moveUnit(int arr[], int speed)
{
    int x = rand() % 2;
    if (x==1)
        arr[0]=arr[0]+1*speed;
    else
        arr[0]=arr[0]-1*speed;

    int y = rand() % 2;
    if (y==1)
        arr[1]=arr[1]+1*speed;
    else
        arr[1]=arr[1]-1*speed;
}



#endif // GAMEFUNCTIONS_H_INCLUDED
