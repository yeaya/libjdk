#ifndef _sun_text_resources_cldr_ext_FormatData_gl_h_
#define _sun_text_resources_cldr_ext_FormatData_gl_h_
//$ class sun.text.resources.cldr.ext.FormatData_gl
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

class FormatData_gl : public ::java::util::ListResourceBundle {
	$class(FormatData_gl, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	FormatData_gl();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_cldr_ext_FormatData_gl_h_