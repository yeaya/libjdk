#ifndef _sun_text_resources_cldr_ext_FormatData_ses_h_
#define _sun_text_resources_cldr_ext_FormatData_ses_h_
//$ class sun.text.resources.cldr.ext.FormatData_ses
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

class FormatData_ses : public ::java::util::ListResourceBundle {
	$class(FormatData_ses, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	FormatData_ses();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_cldr_ext_FormatData_ses_h_