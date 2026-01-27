#ifndef _com_sun_org_apache_xml_internal_serializer_utils_Utils_h_
#define _com_sun_org_apache_xml_internal_serializer_utils_Utils_h_
//$ class com.sun.org.apache.xml.internal.serializer.utils.Utils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {
								class Messages;
							}
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
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

class Utils : public ::java::lang::Object {
	$class(Utils, 0, ::java::lang::Object)
public:
	Utils();
	void init$();
	static ::com::sun::org::apache::xml::internal::serializer::utils::Messages* messages;
};

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_utils_Utils_h_