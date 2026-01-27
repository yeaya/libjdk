#ifndef _org_w3c_dom_ls_LSResourceResolver_h_
#define _org_w3c_dom_ls_LSResourceResolver_h_
//$ interface org.w3c.dom.ls.LSResourceResolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSInput;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

class $export LSResourceResolver : public ::java::lang::Object {
	$interface(LSResourceResolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::ls::LSInput* resolveResource($String* type, $String* namespaceURI, $String* publicId, $String* systemId, $String* baseURI) {return nullptr;}
};

			} // ls
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_ls_LSResourceResolver_h_