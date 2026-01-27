#ifndef _sun_text_resources_ext_CollationData_ro_h_
#define _sun_text_resources_ext_CollationData_ro_h_
//$ class sun.text.resources.ext.CollationData_ro
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

class CollationData_ro : public ::java::util::ListResourceBundle {
	$class(CollationData_ro, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	CollationData_ro();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_ext_CollationData_ro_h_