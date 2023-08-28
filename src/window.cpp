#include <window.hpp>

Window::~Window(){

}

void Window::allEvents(){
    sf::Event event;
    while(win.pollEvent(event)){
        if(event.type == sf::Event::Closed){
            win.close();
        }
    }
}

void Window::main_looping(){
    while(win.isOpen()){
        this->allEvents();

        win.clear();
        win.display();
    }
    return;
}
