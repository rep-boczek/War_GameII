#ifndef UNIT_H
#define UNIT_H


class Unit
{
    public:
        Unit();
        int healthp;
        int damagep;
        int speed;

        void calc_distance (float dis);
        void position ();
        void move();
        void attack();



        virtual ~Unit();

    protected:

    private:
        //pozniej


};

#endif // UNIT_H
