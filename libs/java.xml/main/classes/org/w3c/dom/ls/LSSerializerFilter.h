#ifndef _org_w3c_dom_ls_LSSerializerFilter_h_
#define _org_w3c_dom_ls_LSSerializerFilter_h_
//$ interface org.w3c.dom.ls.LSSerializerFilter
//$ extends org.w3c.dom.traversal.NodeFilter

#include <org/w3c/dom/traversal/NodeFilter.h>

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

class $export LSSerializerFilter : public ::org::w3c::dom::traversal::NodeFilter {
	$interface(LSSerializerFilter, $NO_CLASS_INIT, ::org::w3c::dom::traversal::NodeFilter)
public:
	virtual int32_t getWhatToShow() {return 0;}
};

			} // ls
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_ls_LSSerializerFilter_h_