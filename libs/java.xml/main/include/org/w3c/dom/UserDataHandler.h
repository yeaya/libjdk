#ifndef _org_w3c_dom_UserDataHandler_h_
#define _org_w3c_dom_UserDataHandler_h_
//$ interface org.w3c.dom.UserDataHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NODE_ADOPTED")
#undef NODE_ADOPTED
#pragma push_macro("NODE_CLONED")
#undef NODE_CLONED
#pragma push_macro("NODE_DELETED")
#undef NODE_DELETED
#pragma push_macro("NODE_IMPORTED")
#undef NODE_IMPORTED
#pragma push_macro("NODE_RENAMED")
#undef NODE_RENAMED

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {

class $import UserDataHandler : public ::java::lang::Object {
	$interface(UserDataHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void handle(int16_t operation, $String* key, Object$* data, ::org::w3c::dom::Node* src, ::org::w3c::dom::Node* dst) {}
	static const int16_t NODE_CLONED = 1;
	static const int16_t NODE_IMPORTED = 2;
	static const int16_t NODE_DELETED = 3;
	static const int16_t NODE_RENAMED = 4;
	static const int16_t NODE_ADOPTED = 5;
};

		} // dom
	} // w3c
} // org

#pragma pop_macro("NODE_ADOPTED")
#pragma pop_macro("NODE_CLONED")
#pragma pop_macro("NODE_DELETED")
#pragma pop_macro("NODE_IMPORTED")
#pragma pop_macro("NODE_RENAMED")

#endif // _org_w3c_dom_UserDataHandler_h_