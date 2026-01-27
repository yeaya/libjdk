#ifndef _com_sun_org_apache_xalan_internal_lib_NodeInfo_h_
#define _com_sun_org_apache_xalan_internal_lib_NodeInfo_h_
//$ class com.sun.org.apache.xalan.internal.lib.NodeInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace extensions {
							class ExpressionContext;
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
			class NodeList;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

class NodeInfo : public ::java::lang::Object {
	$class(NodeInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NodeInfo();
	void init$();
	static int32_t columnNumber(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* context);
	static int32_t columnNumber(::org::w3c::dom::NodeList* nodeList);
	static int32_t lineNumber(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* context);
	static int32_t lineNumber(::org::w3c::dom::NodeList* nodeList);
	static $String* publicId(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* context);
	static $String* publicId(::org::w3c::dom::NodeList* nodeList);
	static $String* systemId(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* context);
	static $String* systemId(::org::w3c::dom::NodeList* nodeList);
};

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_lib_NodeInfo_h_