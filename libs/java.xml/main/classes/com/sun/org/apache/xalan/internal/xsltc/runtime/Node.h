#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_Node_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_Node_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

class Node : public ::java::lang::Object {
	$class(Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Node();
	void init$(int32_t n, int32_t t);
	int32_t node = 0;
	int32_t type = 0;
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_Node_h_