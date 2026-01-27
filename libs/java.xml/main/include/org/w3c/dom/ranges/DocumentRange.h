#ifndef _org_w3c_dom_ranges_DocumentRange_h_
#define _org_w3c_dom_ranges_DocumentRange_h_
//$ interface org.w3c.dom.ranges.DocumentRange
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			namespace ranges {
				class Range;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace ranges {

class $import DocumentRange : public ::java::lang::Object {
	$interface(DocumentRange, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::ranges::Range* createRange() {return nullptr;}
};

			} // ranges
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_ranges_DocumentRange_h_