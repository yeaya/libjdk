#ifndef _sun_text_resources_cldr_ext_FormatData_dsb_h_
#define _sun_text_resources_cldr_ext_FormatData_dsb_h_
//$ class sun.text.resources.cldr.ext.FormatData_dsb
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

class FormatData_dsb : public ::java::util::ListResourceBundle {
	$class(FormatData_dsb, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	FormatData_dsb();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_cldr_ext_FormatData_dsb_h_