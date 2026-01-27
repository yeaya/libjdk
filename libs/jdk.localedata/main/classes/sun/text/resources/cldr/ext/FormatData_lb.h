#ifndef _sun_text_resources_cldr_ext_FormatData_lb_h_
#define _sun_text_resources_cldr_ext_FormatData_lb_h_
//$ class sun.text.resources.cldr.ext.FormatData_lb
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

class FormatData_lb : public ::java::util::ListResourceBundle {
	$class(FormatData_lb, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	FormatData_lb();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_cldr_ext_FormatData_lb_h_