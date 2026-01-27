#ifndef _org_w3c_dom_ls_LSParserFilter_h_
#define _org_w3c_dom_ls_LSParserFilter_h_
//$ interface org.w3c.dom.ls.LSParserFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FILTER_ACCEPT")
#undef FILTER_ACCEPT
#pragma push_macro("FILTER_INTERRUPT")
#undef FILTER_INTERRUPT
#pragma push_macro("FILTER_REJECT")
#undef FILTER_REJECT
#pragma push_macro("FILTER_SKIP")
#undef FILTER_SKIP

namespace org {
	namespace w3c {
		namespace dom {
			class Element;
			class Node;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

class $export LSParserFilter : public ::java::lang::Object {
	$interface(LSParserFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int16_t acceptNode(::org::w3c::dom::Node* nodeArg) {return 0;}
	virtual int32_t getWhatToShow() {return 0;}
	virtual int16_t startElement(::org::w3c::dom::Element* elementArg) {return 0;}
	static const int16_t FILTER_ACCEPT = 1;
	static const int16_t FILTER_REJECT = 2;
	static const int16_t FILTER_SKIP = 3;
	static const int16_t FILTER_INTERRUPT = 4;
};

			} // ls
		} // dom
	} // w3c
} // org

#pragma pop_macro("FILTER_ACCEPT")
#pragma pop_macro("FILTER_INTERRUPT")
#pragma pop_macro("FILTER_REJECT")
#pragma pop_macro("FILTER_SKIP")

#endif // _org_w3c_dom_ls_LSParserFilter_h_