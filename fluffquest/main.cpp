#include "include/my.h"

void exit_game(sf::Event event, sf::RenderWindow* window)
{
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
        window->close();
}

struct all_info
{
    char name[50] = "Fluffquest";
    sf::RenderWindow* window;
    sf::Image icon;
};

struct event_game
{
    sf::Sprite sprite;
    sf::Texture texture;
};

event_game declare_eg(event_game game)
{
    if (!game.texture.loadFromFile("pokemon-logo-png-1421.png")) {
        printf("Error loading image\n");
        exit(84);
    }
    game.sprite.setTexture(game.texture);
    return game;
}

all_info declare_all_info(all_info all)
{
    all.window = new sf::RenderWindow(sf::VideoMode(640, 400), all.name, sf::Style::Default);
    all.window->setFramerateLimit(60);
    all.icon.loadFromFile("pokemon-logo-png-1446.png");
    all.window->setIcon(256,256,all.icon.getPixelsPtr());
    return all;
}

int main()
{
    all_info all;
    event_game eg;

    eg = declare_eg(eg);
    all = declare_all_info(all);

    while(all.window->isOpen()) {
        sf::Event event;
        while(all.window->pollEvent(event)) {
            if (event.type  == sf::Event::Closed)
                all.window->close();
            exit_game(event, all.window);
        }
        all.window->clear(sf::Color(50, 50, 255));
        all.window->draw(eg.sprite);
        all.window->display();
    }
    return 0;
}