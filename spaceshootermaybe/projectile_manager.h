#ifndef PROJECTILE_MANAGER
#define PROJECTILE_MANAGER

#include "Projectile.h"
#include <vector>

class ProjectileManager : public sf::Drawable{
private:
	std::vector<Projectile> projectiles_;
public:
	void Spawn(sf::Vector2f spawn_postion);
	void Refresh();
protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const
	{
		for (Projectile p : projectiles_)
		{
			target.draw(p);
		}
	}
};

#endif
