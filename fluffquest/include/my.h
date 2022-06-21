#ifndef MY_H_
    #define MY_H_

    #include <iostream>
    #include <SFML/Graphics.hpp>
    #include <SFML/Window.hpp>
    #include <SFML/System.hpp>

    typedef struct args_s {
        struct args_s *next;
    } args_t;

    typedef struct linked_list_s {
        struct linked_list_s *next;
        args_t *args_s;
    } linked_list_t;

    typedef struct all {
        linked_list_t *linked_list_s;
        sf::Window *window;
    } all_t;


#endif /* !MY_H_ */
