#ifndef _sun_text_resources_ext_CollationData_lt_h_
#define _sun_text_resources_ext_CollationData_lt_h_
//$ class sun.text.resources.ext.CollationData_lt
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

class CollationData_lt : public ::java::util::ListResourceBundle {
	$class(CollationData_lt, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	CollationData_lt();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_ext_CollationData_lt_h_