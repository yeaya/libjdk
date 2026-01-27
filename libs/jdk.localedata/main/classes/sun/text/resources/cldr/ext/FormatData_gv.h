#ifndef _sun_text_resources_cldr_ext_FormatData_gv_h_
#define _sun_text_resources_cldr_ext_FormatData_gv_h_
//$ class sun.text.resources.cldr.ext.FormatData_gv
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

class FormatData_gv : public ::java::util::ListResourceBundle {
	$class(FormatData_gv, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	FormatData_gv();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_cldr_ext_FormatData_gv_h_