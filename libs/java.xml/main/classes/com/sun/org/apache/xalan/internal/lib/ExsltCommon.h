#ifndef _com_sun_org_apache_xalan_internal_lib_ExsltCommon_h_
#define _com_sun_org_apache_xalan_internal_lib_ExsltCommon_h_
//$ class com.sun.org.apache.xalan.internal.lib.ExsltCommon
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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class NodeSet;
					}
				}
			}
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

class ExsltCommon : public ::java::lang::Object {
	$class(ExsltCommon, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExsltCommon();
	void init$();
	static ::com::sun::org::apache::xpath::internal::NodeSet* nodeSet(::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* myProcessor, Object$* rtf);
	static $String* objectType(Object$* obj);
};

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_lib_ExsltCommon_h_