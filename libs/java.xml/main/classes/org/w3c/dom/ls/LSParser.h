#ifndef _org_w3c_dom_ls_LSParser_h_
#define _org_w3c_dom_ls_LSParser_h_
//$ interface org.w3c.dom.ls.LSParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACTION_APPEND_AS_CHILDREN")
#undef ACTION_APPEND_AS_CHILDREN
#pragma push_macro("ACTION_INSERT_AFTER")
#undef ACTION_INSERT_AFTER
#pragma push_macro("ACTION_INSERT_BEFORE")
#undef ACTION_INSERT_BEFORE
#pragma push_macro("ACTION_REPLACE")
#undef ACTION_REPLACE
#pragma push_macro("ACTION_REPLACE_CHILDREN")
#undef ACTION_REPLACE_CHILDREN

namespace org {
	namespace w3c {
		namespace dom {
			class DOMConfiguration;
			class Document;
			class Node;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSInput;
				class LSParserFilter;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

class $export LSParser : public ::java::lang::Object {
	$interface(LSParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void abort() {}
	virtual bool getAsync() {return false;}
	virtual bool getBusy() {return false;}
	virtual ::org::w3c::dom::DOMConfiguration* getDomConfig() {return nullptr;}
	virtual ::org::w3c::dom::ls::LSParserFilter* getFilter() {return nullptr;}
	virtual ::org::w3c::dom::Document* parse(::org::w3c::dom::ls::LSInput* input) {return nullptr;}
	virtual ::org::w3c::dom::Document* parseURI($String* uri) {return nullptr;}
	virtual ::org::w3c::dom::Node* parseWithContext(::org::w3c::dom::ls::LSInput* input, ::org::w3c::dom::Node* contextArg, int16_t action) {return nullptr;}
	virtual void setFilter(::org::w3c::dom::ls::LSParserFilter* filter) {}
	static const int16_t ACTION_APPEND_AS_CHILDREN = 1;
	static const int16_t ACTION_REPLACE_CHILDREN = 2;
	static const int16_t ACTION_INSERT_BEFORE = 3;
	static const int16_t ACTION_INSERT_AFTER = 4;
	static const int16_t ACTION_REPLACE = 5;
};

			} // ls
		} // dom
	} // w3c
} // org

#pragma pop_macro("ACTION_APPEND_AS_CHILDREN")
#pragma pop_macro("ACTION_INSERT_AFTER")
#pragma pop_macro("ACTION_INSERT_BEFORE")
#pragma pop_macro("ACTION_REPLACE")
#pragma pop_macro("ACTION_REPLACE_CHILDREN")

#endif // _org_w3c_dom_ls_LSParser_h_