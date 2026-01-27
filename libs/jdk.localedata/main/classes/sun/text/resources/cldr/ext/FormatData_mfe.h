#ifndef _sun_text_resources_cldr_ext_FormatData_mfe_h_
#define _sun_text_resources_cldr_ext_FormatData_mfe_h_
//$ class sun.text.resources.cldr.ext.FormatData_mfe
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

class FormatData_mfe : public ::java::util::ListResourceBundle {
	$class(FormatData_mfe, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	FormatData_mfe();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_cldr_ext_FormatData_mfe_h_