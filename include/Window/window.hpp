#ifndef WINDOW_HPP
#define WINDOW_HPP


class ApplicationWindow {
    public:
        ApplicationWindow(int width, int height, const char* title);
        void createWindow();
        


    private:
        const char* title;
        const int width, height;


};

#endif