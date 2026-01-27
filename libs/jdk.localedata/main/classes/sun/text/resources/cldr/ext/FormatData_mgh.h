#ifndef _sun_text_resources_cldr_ext_FormatData_mgh_h_
#define _sun_text_resources_cldr_ext_FormatData_mgh_h_
//$ class sun.text.resources.cldr.ext.FormatData_mgh
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

class FormatData_mgh : public ::java::util::ListResourceBundle {
	$class(FormatData_mgh, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	FormatData_mgh();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_cldr_ext_FormatData_mgh_h_