#ifndef _org_w3c_dom_ls_LSSerializer_h_
#define _org_w3c_dom_ls_LSSerializer_h_
//$ interface org.w3c.dom.ls.LSSerializer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class DOMConfiguration;
			class Node;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSOutput;
				class LSSerializerFilter;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

class $import LSSerializer : public ::java::lang::Object {
	$interface(LSSerializer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::DOMConfiguration* getDomConfig() {return nullptr;}
	virtual ::org::w3c::dom::ls::LSSerializerFilter* getFilter() {return nullptr;}
	virtual $String* getNewLine() {return nullptr;}
	virtual void setFilter(::org::w3c::dom::ls::LSSerializerFilter* filter) {}
	virtual void setNewLine($String* newLine) {}
	virtual bool write(::org::w3c::dom::Node* nodeArg, ::org::w3c::dom::ls::LSOutput* destination) {return false;}
	virtual $String* writeToString(::org::w3c::dom::Node* nodeArg) {return nullptr;}
	virtual bool writeToURI(::org::w3c::dom::Node* nodeArg, $String* uri) {return false;}
};

			} // ls
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_ls_LSSerializer_h_