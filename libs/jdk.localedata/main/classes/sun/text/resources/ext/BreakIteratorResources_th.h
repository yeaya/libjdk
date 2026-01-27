#ifndef _sun_text_resources_ext_BreakIteratorResources_th_h_
#define _sun_text_resources_ext_BreakIteratorResources_th_h_
//$ class sun.text.resources.ext.BreakIteratorResources_th
//$ extends sun.util.resources.BreakIteratorResourceBundle

#include <sun/util/resources/BreakIteratorResourceBundle.h>

namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

class BreakIteratorResources_th : public ::sun::util::resources::BreakIteratorResourceBundle {
	$class(BreakIteratorResources_th, $NO_CLASS_INIT, ::sun::util::resources::BreakIteratorResourceBundle)
public:
	BreakIteratorResources_th();
	void init$();
	virtual ::java::util::ResourceBundle* getBreakIteratorInfo() override;
};

			} // ext
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_ext_BreakIteratorResources_th_h_