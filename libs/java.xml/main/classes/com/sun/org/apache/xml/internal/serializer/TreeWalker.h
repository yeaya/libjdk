#ifndef _com_sun_org_apache_xml_internal_serializer_TreeWalker_h_
#define _com_sun_org_apache_xml_internal_serializer_TreeWalker_h_
//$ class com.sun.org.apache.xml.internal.serializer.TreeWalker
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class SerializationHandler;
						}
					}
				}
			}
		}
	}
}
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
						namespace serializer {

class TreeWalker : public ::java::lang::Object {
	$class(TreeWalker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TreeWalker();
	void init$(::org::xml::sax::ContentHandler* ch);
	void init$(::org::xml::sax::ContentHandler* contentHandler, $String* systemId);
	void dispatachChars(::org::w3c::dom::Node* node);
	void endNode(::org::w3c::dom::Node* node);
	::org::xml::sax::ContentHandler* getContentHandler();
	void startNode(::org::w3c::dom::Node* node);
	void traverse(::org::w3c::dom::Node* pos);
	void traverse(::org::w3c::dom::Node* pos, ::org::w3c::dom::Node* top);
	::org::xml::sax::ContentHandler* m_contentHandler = nullptr;
	::com::sun::org::apache::xml::internal::serializer::SerializationHandler* m_Serializer = nullptr;
	::org::xml::sax::helpers::LocatorImpl* m_locator = nullptr;
	bool nextIsRaw = false;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_TreeWalker_h_