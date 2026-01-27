#ifndef _sun_text_resources_ext_JavaTimeSupplementary_bg_h_
#define _sun_text_resources_ext_JavaTimeSupplementary_bg_h_
//$ class sun.text.resources.ext.JavaTimeSupplementary_bg
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

class JavaTimeSupplementary_bg : public ::sun::util::resources::OpenListResourceBundle {
	$class(JavaTimeSupplementary_bg, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	JavaTimeSupplementary_bg();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_ext_JavaTimeSupplementary_bg_h_