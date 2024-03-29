#ifndef STUDENTWORLD_H_
#define STUDENTWORLD_H_

#include "GameWorld.h"
#include <string>
#include <list>

// Students:  Add code to this file, StudentWorld.cpp, Actor.h, and Actor.cpp
class Actor;

class StudentWorld : public GameWorld
{
public:
    StudentWorld(std::string assetPath);
    virtual int init();
    virtual int move();
    virtual void cleanUp();
    bool hitSomething(double x, double y, Actor* a) const;
    virtual ~StudentWorld();
    
private:
    std::list<Actor*> m_actors;
    Actor* p;
};

#endif // STUDENTWORLD_H_
