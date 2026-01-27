#ifndef _sun_text_resources_ext_JavaTimeSupplementary_it_h_
#define _sun_text_resources_ext_JavaTimeSupplementary_it_h_
//$ class sun.text.resources.ext.JavaTimeSupplementary_it
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

class JavaTimeSupplementary_it : public ::sun::util::resources::OpenListResourceBundle {
	$class(JavaTimeSupplementary_it, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	JavaTimeSupplementary_it();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_ext_JavaTimeSupplementary_it_h_