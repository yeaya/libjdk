#ifndef _sun_text_resources_cldr_ext_FormatData_bas_h_
#define _sun_text_resources_cldr_ext_FormatData_bas_h_
//$ class sun.text.resources.cldr.ext.FormatData_bas
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

class FormatData_bas : public ::java::util::ListResourceBundle {
	$class(FormatData_bas, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	FormatData_bas();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_cldr_ext_FormatData_bas_h_