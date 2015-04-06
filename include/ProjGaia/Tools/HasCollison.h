#ifndef HASCOLLISON_H
#define HASCOLLISON_H
#include "HitBox.h"

namespace pg{
class HasCollison
{
	public:
		/** Default constructor */

		/** Default destructor */
		virtual HitBox* getHitBox() = 0;
		virtual ~HasCollison();
	protected:
	private:
};
}
#endif // HASCOLLISON_H
