#ifndef DRAWING_H
#define DRAWING_H


class Drawing : public wxPanel
{
    public:



    // some useful events
    /*
     void mouseMoved(wxMouseEvent& event);
     void mouseDown(wxMouseEvent& event);
     void mouseWheelMoved(wxMouseEvent& event);
     void mouseReleased(wxMouseEvent& event);
     void rightClick(wxMouseEvent& event);
     void mouseLeftWindow(wxMouseEvent& event);
     void keyPressed(wxKeyEvent& event);
     void keyReleased(wxKeyEvent& event);
     */




        Drawing(wxFrame* parent);

        void paintEvent(wxPaintEvent & evt);
        void paintNow();
        void render(wxDC& dc);





        virtual ~Drawing();

 DECLARE_EVENT_TABLE()
    protected:

    private:


};

#endif // DRAWING_H
