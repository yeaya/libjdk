#ifndef _sun_text_resources_ext_BreakIteratorInfo_th_h_
#define _sun_text_resources_ext_BreakIteratorInfo_th_h_
//$ class sun.text.resources.ext.BreakIteratorInfo_th
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

class BreakIteratorInfo_th : public ::java::util::ListResourceBundle {
	$class(BreakIteratorInfo_th, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	BreakIteratorInfo_th();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_ext_BreakIteratorInfo_th_h_