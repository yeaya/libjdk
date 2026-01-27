#ifndef _com_sun_org_apache_xml_internal_utils_TreeWalker_h_
#define _com_sun_org_apache_xml_internal_utils_TreeWalker_h_
//$ class com.sun.org.apache.xml.internal.utils.TreeWalker
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class LocatorImpl;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export TreeWalker : public ::java::lang::Object {
	$class(TreeWalker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TreeWalker();
	void init$(::org::xml::sax::ContentHandler* contentHandler, $String* systemId);
	void init$(::org::xml::sax::ContentHandler* contentHandler);
	void dispatachChars(::org::w3c::dom::Node* node);
	virtual void endNode(::org::w3c::dom::Node* node);
	virtual ::org::xml::sax::ContentHandler* getContentHandler();
	virtual void setContentHandler(::org::xml::sax::ContentHandler* ch);
	virtual void startNode(::org::w3c::dom::Node* node);
	virtual void traverse(::org::w3c::dom::Node* pos);
	virtual void traverse(::org::w3c::dom::Node* pos, ::org::w3c::dom::Node* top);
	virtual void traverseFragment(::org::w3c::dom::Node* pos);
	::org::xml::sax::ContentHandler* m_contentHandler = nullptr;
	::org::xml::sax::helpers::LocatorImpl* m_locator = nullptr;
	bool nextIsRaw = false;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_TreeWalker_h_