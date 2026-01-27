#ifndef _org_xml_sax_helpers_NamespaceSupport$Context_h_
#define _org_xml_sax_helpers_NamespaceSupport$Context_h_
//$ class org.xml.sax.helpers.NamespaceSupport$Context
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Enumeration;
		class List;
		class Map;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class NamespaceSupport;
			}
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class $export NamespaceSupport$Context : public ::java::lang::Object {
	$class(NamespaceSupport$Context, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NamespaceSupport$Context();
	void init$(::org::xml::sax::helpers::NamespaceSupport* this$0);
	void clear();
	void copyTables();
	void declarePrefix($String* prefix, $String* uri);
	::java::util::Enumeration* getDeclaredPrefixes();
	$String* getPrefix($String* uri);
	::java::util::Enumeration* getPrefixes();
	$String* getURI($String* prefix);
	$StringArray* processName($String* qName, bool isAttribute);
	void setParent(::org::xml::sax::helpers::NamespaceSupport$Context* parent);
	::org::xml::sax::helpers::NamespaceSupport* this$0 = nullptr;
	::java::util::Map* prefixTable = nullptr;
	::java::util::Map* uriTable = nullptr;
	::java::util::Map* elementNameTable = nullptr;
	::java::util::Map* attributeNameTable = nullptr;
	$String* defaultNS = nullptr;
	::java::util::List* declarations = nullptr;
	bool declSeen = false;
	::org::xml::sax::helpers::NamespaceSupport$Context* parent = nullptr;
};

			} // helpers
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_helpers_NamespaceSupport$Context_h_