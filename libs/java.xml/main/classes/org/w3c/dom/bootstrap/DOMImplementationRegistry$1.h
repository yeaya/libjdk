#ifndef _org_w3c_dom_bootstrap_DOMImplementationRegistry$1_h_
#define _org_w3c_dom_bootstrap_DOMImplementationRegistry$1_h_
//$ class org.w3c.dom.bootstrap.DOMImplementationRegistry$1
//$ extends org.w3c.dom.DOMImplementationList

#include <org/w3c/dom/DOMImplementationList.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace bootstrap {
				class DOMImplementationRegistry;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace bootstrap {

class DOMImplementationRegistry$1 : public ::org::w3c::dom::DOMImplementationList {
	$class(DOMImplementationRegistry$1, $NO_CLASS_INIT, ::org::w3c::dom::DOMImplementationList)
public:
	DOMImplementationRegistry$1();
	void init$(::org::w3c::dom::bootstrap::DOMImplementationRegistry* this$0, ::java::util::List* val$implementations);
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::DOMImplementation* item(int32_t index) override;
	::org::w3c::dom::bootstrap::DOMImplementationRegistry* this$0 = nullptr;
	::java::util::List* val$implementations = nullptr;
};

			} // bootstrap
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_bootstrap_DOMImplementationRegistry$1_h_