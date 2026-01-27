#ifndef _sun_text_resources_ext_FormatData_en_CA_h_
#define _sun_text_resources_ext_FormatData_en_CA_h_
//$ class sun.text.resources.ext.FormatData_en_CA
//$ extends sun.util.resources.ParallelListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/ParallelListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

class FormatData_en_CA : public ::sun::util::resources::ParallelListResourceBundle {
	$class(FormatData_en_CA, $NO_CLASS_INIT, ::sun::util::resources::ParallelListResourceBundle)
public:
	FormatData_en_CA();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_ext_FormatData_en_CA_h_