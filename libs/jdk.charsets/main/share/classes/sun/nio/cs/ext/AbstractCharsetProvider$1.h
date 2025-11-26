#ifndef _sun_nio_cs_ext_AbstractCharsetProvider$1_h_
#define _sun_nio_cs_ext_AbstractCharsetProvider$1_h_
//$ class sun.nio.cs.ext.AbstractCharsetProvider$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {
				class AbstractCharsetProvider;
			}
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class AbstractCharsetProvider$1 : public ::java::util::Iterator {
	$class(AbstractCharsetProvider$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	AbstractCharsetProvider$1();
	void init$(::sun::nio::cs::ext::AbstractCharsetProvider* this$0, ::java::util::ArrayList* val$ks);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::sun::nio::cs::ext::AbstractCharsetProvider* this$0 = nullptr;
	::java::util::ArrayList* val$ks = nullptr;
	::java::util::Iterator* i = nullptr;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_AbstractCharsetProvider$1_h_