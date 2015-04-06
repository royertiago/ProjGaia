#ifndef SPRITE_H
#define SPRITE_H
#include "../Tools/Coord.h"
#include "DrawableType.h"
#include "../Tools/HitBox.h"
#include "../Tools/NeedsUpdate.h"

namespace pg {
	class Sprite : public DrawableType, public NeedsUpdate
	{
		public:


			Sprite(HitBox*);
			/** Default constructor */
			Sprite ( pg::Coord position, pg::Coord scale, float rotation, float height );

			/** Default destructor */
			virtual ~Sprite();


			virtual Sprite* getSprite() {
				return this;
			}
		protected:
		    pg::HitBox* hitbox;

		private:
	};
}
#endif // SPRITE_H
