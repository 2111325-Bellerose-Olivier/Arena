#include "Creature.h"

Creature::Creature(std::string nom, Point2D position)
{
    m_nom = nom;
    m_position = position;
}

std::string Creature::getNom()
{
    return std::string(m_nom);
}

Point2D* Creature::getPosition()
{
    Point2D* getPos{ new Point2D{m_position.getX(),m_position.getY()}};
    return getPos;
}

void Creature::deplacerCreature(int x, int y)
{
    m_position.setPoint(x, y);
}
