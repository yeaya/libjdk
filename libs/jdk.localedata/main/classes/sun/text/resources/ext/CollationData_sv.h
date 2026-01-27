#ifndef _sun_text_resources_ext_CollationData_sv_h_
#define _sun_text_resources_ext_CollationData_sv_h_
//$ class sun.text.resources.ext.CollationData_sv
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

class CollationData_sv : public ::java::util::ListResourceBundle {
	$class(CollationData_sv, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	CollationData_sv();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_ext_CollationData_sv_h_