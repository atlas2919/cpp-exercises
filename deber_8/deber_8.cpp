#include <SFML/Graphics.hpp>
#include <cmath>
#include "gif.h" // gif.h library for creating GIFs

const int WIDTH = 800;
const int HEIGHT = 600;
const int NUM_FRAMES = 50; // Number of frames for the GIF
const double X_MIN = -2.0;
const double X_MAX = 2.0;

double function(double x, double a)
{
    return pow(x, 2.0 / 3.0) + 1.5 * sqrt(5 - pow(x, 2)) * sin(a * M_PI * x);
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Function GIF");
    window.setFramerateLimit(30); // Adjust as needed

    // Create a GIF
    GifWriter gifWriter;
    GifBegin(&gifWriter, "function.gif", WIDTH, HEIGHT, 100); // Filename, width, height, delay between frames

    // Iterate through different values of 'a'
    for (int frame = 0; frame < NUM_FRAMES; ++frame)
    {
        double a = 1.0 + frame * 0.1; // Increment 'a'

        // Create an image for this frame
        sf::Image image;
        image.create(WIDTH, HEIGHT, sf::Color::White);

        // Draw the function graph on the image
        for (int px = 0; px < WIDTH; ++px)
        {
            double x = X_MIN + (double(px) / WIDTH) * (X_MAX - X_MIN);
            double y = function(x, a);
            int py = HEIGHT / 2 - int(y * (HEIGHT / 4)); // Adjust scale and offset for visualization
            if (py >= 0 && py < HEIGHT)
                image.setPixel(px, py, sf::Color::Black); // Plot the point
        }

        // Save the image to the GIF
        GifWriteFrame(&gifWriter, image.getPixelsPtr(), WIDTH, HEIGHT, 100);

        // Display the frame
        sf::Texture texture;
        texture.loadFromImage(image);
        sf::Sprite sprite(texture);
        window.draw(sprite);
        window.display();
    }

    // Close the GIF
    GifEnd(&gifWriter);

    // Wait for the window to be closed
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}
