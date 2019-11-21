#include <SFML/Graphics.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "First window!");

    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                //close window button clicked
                window.close();
            }
        }
        window.clear(sf::Color::Black);
        //draw here
        window.display();
        
    }
    return EXIT_SUCCESS;
}