#ifndef _sun_text_resources_ext_CollationData_hi_h_
#define _sun_text_resources_ext_CollationData_hi_h_
//$ class sun.text.resources.ext.CollationData_hi
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

class CollationData_hi : public ::java::util::ListResourceBundle {
	$class(CollationData_hi, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	CollationData_hi();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_ext_CollationData_hi_h_