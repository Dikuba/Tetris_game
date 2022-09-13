/*Sir i think there is problem with your font directory */

#include<SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include "effects.h"
using namespace sf;


//brick_tex.loadFromFile("image/apple1.png");


tetris::Effect::Effect():brick_tex(),
    brick(),
   track(),
    buffer(),
    bufferTwo(),
    bufferThree()
{
    brick_tex.loadFromFile("../resource/image/apple1.png");

	brick = Sprite(brick_tex);
	brick.setScale(2.83, 2.83);
	
	float brick_size = brick_tex.getSize().x * brick.getScale().x;
	size_t width = brick_size * 12, height = brick_size * 20;

	//Music

	track.openFromFile("../resource/sounds/tetris_theme.wav");
	track.play();
	track.setLoop(true);

	//Sound effects
	
	buffer.loadFromFile("../resource/sounds/fall.wav");
	sf::Sound fall;
	fall.setBuffer(buffer);

	
	bufferTwo.loadFromFile("../resource/sounds/line.wav");
	sf::Sound line;
	line.setBuffer(bufferTwo);

	
	bufferThree.loadFromFile("../resource/sounds/tetris.wav");
	sf::Sound tetris;
	tetris.setBuffer(bufferThree);

}
	
void tetris::Effect::Score(){
	//Setup score counter
	
	font.loadFromFile("../resource/font/Forwa_font.TTF");
	score.setFont(font);
	score.setCharacterSize(15);
	score.setFillColor(sf::Color::Blue);
	score.setPosition(10,25);
	sf::Vector2<float> score_scale(1.5f,1.5f);
	score.setScale(score_scale);
	score.setString("Lines: 0");
}