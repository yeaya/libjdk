#ifndef _sun_nio_cs_ext_ExtendedCharsets_h_
#define _sun_nio_cs_ext_ExtendedCharsets_h_
//$ class sun.nio.cs.ext.ExtendedCharsets
//$ extends sun.nio.cs.ext.AbstractCharsetProvider

#include <java/lang/Array.h>
#include <sun/nio/cs/ext/AbstractCharsetProvider.h>

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class ExtendedCharsets : public ::sun::nio::cs::ext::AbstractCharsetProvider {
	$class(ExtendedCharsets, 0, ::sun::nio::cs::ext::AbstractCharsetProvider)
public:
	ExtendedCharsets();
	void init$();
	static $StringArray* aliasesFor($String* charsetName);
	static $volatile(::sun::nio::cs::ext::ExtendedCharsets*) instance;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_ExtendedCharsets_h_