#ifndef _sun_text_resources_cldr_ext_FormatData_luy_h_
#define _sun_text_resources_cldr_ext_FormatData_luy_h_
//$ class sun.text.resources.cldr.ext.FormatData_luy
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

class FormatData_luy : public ::java::util::ListResourceBundle {
	$class(FormatData_luy, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	FormatData_luy();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_cldr_ext_FormatData_luy_h_