#ifndef _sun_text_resources_ext_CollationData_da_h_
#define _sun_text_resources_ext_CollationData_da_h_
//$ class sun.text.resources.ext.CollationData_da
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

class CollationData_da : public ::java::util::ListResourceBundle {
	$class(CollationData_da, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	CollationData_da();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_ext_CollationData_da_h_