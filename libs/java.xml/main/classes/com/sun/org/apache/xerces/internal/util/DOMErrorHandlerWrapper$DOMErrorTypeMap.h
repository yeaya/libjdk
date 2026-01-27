#ifndef _com_sun_org_apache_xerces_internal_util_DOMErrorHandlerWrapper$DOMErrorTypeMap_h_
#define _com_sun_org_apache_xerces_internal_util_DOMErrorHandlerWrapper$DOMErrorTypeMap_h_
//$ class com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper$DOMErrorTypeMap
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class XMLErrorCode;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class DOMErrorHandlerWrapper$DOMErrorTypeMap : public ::java::lang::Object {
	$class(DOMErrorHandlerWrapper$DOMErrorTypeMap, 0, ::java::lang::Object)
public:
	DOMErrorHandlerWrapper$DOMErrorTypeMap();
	void init$();
	static $String* getDOMErrorType(::com::sun::org::apache::xerces::internal::util::XMLErrorCode* error);
	static ::java::util::Map* fgDOMErrorTypeTable;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_DOMErrorHandlerWrapper$DOMErrorTypeMap_h_