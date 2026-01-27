#ifndef _org_w3c_dom_traversal_NodeFilter_h_
#define _org_w3c_dom_traversal_NodeFilter_h_
//$ interface org.w3c.dom.traversal.NodeFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FILTER_ACCEPT")
#undef FILTER_ACCEPT
#pragma push_macro("FILTER_REJECT")
#undef FILTER_REJECT
#pragma push_macro("FILTER_SKIP")
#undef FILTER_SKIP
#pragma push_macro("SHOW_ALL")
#undef SHOW_ALL
#pragma push_macro("SHOW_ATTRIBUTE")
#undef SHOW_ATTRIBUTE
#pragma push_macro("SHOW_CDATA_SECTION")
#undef SHOW_CDATA_SECTION
#pragma push_macro("SHOW_COMMENT")
#undef SHOW_COMMENT
#pragma push_macro("SHOW_DOCUMENT")
#undef SHOW_DOCUMENT
#pragma push_macro("SHOW_DOCUMENT_FRAGMENT")
#undef SHOW_DOCUMENT_FRAGMENT
#pragma push_macro("SHOW_DOCUMENT_TYPE")
#undef SHOW_DOCUMENT_TYPE
#pragma push_macro("SHOW_ELEMENT")
#undef SHOW_ELEMENT
#pragma push_macro("SHOW_ENTITY")
#undef SHOW_ENTITY
#pragma push_macro("SHOW_ENTITY_REFERENCE")
#undef SHOW_ENTITY_REFERENCE
#pragma push_macro("SHOW_NOTATION")
#undef SHOW_NOTATION
#pragma push_macro("SHOW_PROCESSING_INSTRUCTION")
#undef SHOW_PROCESSING_INSTRUCTION
#pragma push_macro("SHOW_TEXT")
#undef SHOW_TEXT

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
			namespace traversal {

class $import NodeFilter : public ::java::lang::Object {
	$interface(NodeFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int16_t acceptNode(::org::w3c::dom::Node* n) {return 0;}
	static const int16_t FILTER_ACCEPT = 1;
	static const int16_t FILTER_REJECT = 2;
	static const int16_t FILTER_SKIP = 3;
	static const int32_t SHOW_ALL = (-1);
	static const int32_t SHOW_ELEMENT = 1;
	static const int32_t SHOW_ATTRIBUTE = 2;
	static const int32_t SHOW_TEXT = 4;
	static const int32_t SHOW_CDATA_SECTION = 8;
	static const int32_t SHOW_ENTITY_REFERENCE = 16;
	static const int32_t SHOW_ENTITY = 32;
	static const int32_t SHOW_PROCESSING_INSTRUCTION = 64;
	static const int32_t SHOW_COMMENT = 128;
	static const int32_t SHOW_DOCUMENT = 256;
	static const int32_t SHOW_DOCUMENT_TYPE = 512;
	static const int32_t SHOW_DOCUMENT_FRAGMENT = 1024;
	static const int32_t SHOW_NOTATION = 2048;
};

			} // traversal
		} // dom
	} // w3c
} // org

#pragma pop_macro("FILTER_ACCEPT")
#pragma pop_macro("FILTER_REJECT")
#pragma pop_macro("FILTER_SKIP")
#pragma pop_macro("SHOW_ALL")
#pragma pop_macro("SHOW_ATTRIBUTE")
#pragma pop_macro("SHOW_CDATA_SECTION")
#pragma pop_macro("SHOW_COMMENT")
#pragma pop_macro("SHOW_DOCUMENT")
#pragma pop_macro("SHOW_DOCUMENT_FRAGMENT")
#pragma pop_macro("SHOW_DOCUMENT_TYPE")
#pragma pop_macro("SHOW_ELEMENT")
#pragma pop_macro("SHOW_ENTITY")
#pragma pop_macro("SHOW_ENTITY_REFERENCE")
#pragma pop_macro("SHOW_NOTATION")
#pragma pop_macro("SHOW_PROCESSING_INSTRUCTION")
#pragma pop_macro("SHOW_TEXT")

#endif // _org_w3c_dom_traversal_NodeFilter_h_