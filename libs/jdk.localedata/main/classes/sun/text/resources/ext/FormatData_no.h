#ifndef _sun_text_resources_ext_FormatData_no_h_
#define _sun_text_resources_ext_FormatData_no_h_
//$ class sun.text.resources.ext.FormatData_no
//$ extends sun.util.resources.ParallelListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/ParallelListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

class FormatData_no : public ::sun::util::resources::ParallelListResourceBundle {
	$class(FormatData_no, $NO_CLASS_INIT, ::sun::util::resources::ParallelListResourceBundle)
public:
	FormatData_no();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_ext_FormatData_no_h_