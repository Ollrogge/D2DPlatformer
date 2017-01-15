#include "Object.h"

int __new_id = 1;

Object::Object(float fX, float fY)
{
	m_nID = __new_id++;

	m_fX = fX;
	m_fY = fY;
	m_fSpeedY = 0;

	m_pSpriteSheet = NULL;
}

Object::~Object()
{
	if (m_pSpriteSheet) delete m_pSpriteSheet;
}