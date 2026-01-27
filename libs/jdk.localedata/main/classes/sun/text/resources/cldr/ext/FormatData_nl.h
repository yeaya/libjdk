#ifndef _sun_text_resources_cldr_ext_FormatData_nl_h_
#define _sun_text_resources_cldr_ext_FormatData_nl_h_
//$ class sun.text.resources.cldr.ext.FormatData_nl
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

class FormatData_nl : public ::java::util::ListResourceBundle {
	$class(FormatData_nl, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	FormatData_nl();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_cldr_ext_FormatData_nl_h_