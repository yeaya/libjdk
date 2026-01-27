#ifndef _sun_text_resources_ext_FormatData_it_h_
#define _sun_text_resources_ext_FormatData_it_h_
//$ class sun.text.resources.ext.FormatData_it
//$ extends sun.util.resources.ParallelListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/ParallelListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

class FormatData_it : public ::sun::util::resources::ParallelListResourceBundle {
	$class(FormatData_it, $NO_CLASS_INIT, ::sun::util::resources::ParallelListResourceBundle)
public:
	FormatData_it();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_ext_FormatData_it_h_