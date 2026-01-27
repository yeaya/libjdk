#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_NodeTest_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_NodeTest_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.compiler.NodeTest
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ANODE")
#undef ANODE
#pragma push_macro("ATTRIBUTE")
#undef ATTRIBUTE
#pragma push_macro("COMMENT")
#undef COMMENT
#pragma push_macro("ELEMENT")
#undef ELEMENT
#pragma push_macro("GTYPE")
#undef GTYPE
#pragma push_macro("PI")
#undef PI
#pragma push_macro("ROOT")
#undef ROOT
#pragma push_macro("TEXT")
#undef TEXT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class NodeTest : public ::java::lang::Object {
	$interface(NodeTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t TEXT = 3; // DTM.TEXT_NODE
	static const int32_t COMMENT = 8; // DTM.COMMENT_NODE
	static const int32_t PI = 7; // DTM.PROCESSING_INSTRUCTION_NODE
	static const int32_t ROOT = 9; // DTM.DOCUMENT_NODE
	static const int32_t ELEMENT = 1; // DTM.ELEMENT_NODE
	static const int32_t ATTRIBUTE = 2; // DTM.ATTRIBUTE_NODE
	static const int32_t GTYPE = 14; // DTM.NTYPES
	static const int32_t ANODE = -1; // DOM.FIRST_TYPE - 1
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ANODE")
#pragma pop_macro("ATTRIBUTE")
#pragma pop_macro("COMMENT")
#pragma pop_macro("ELEMENT")
#pragma pop_macro("GTYPE")
#pragma pop_macro("PI")
#pragma pop_macro("ROOT")
#pragma pop_macro("TEXT")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_NodeTest_h_