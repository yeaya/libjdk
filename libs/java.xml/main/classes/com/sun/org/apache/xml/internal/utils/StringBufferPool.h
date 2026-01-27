#ifndef _com_sun_org_apache_xml_internal_utils_StringBufferPool_h_
#define _com_sun_org_apache_xml_internal_utils_StringBufferPool_h_
//$ class com.sun.org.apache.xml.internal.utils.StringBufferPool
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class FastStringBuffer;
							class ObjectPool;
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
						namespace utils {

class $export StringBufferPool : public ::java::lang::Object {
	$class(StringBufferPool, 0, ::java::lang::Object)
public:
	StringBufferPool();
	void init$();
	static void free(::com::sun::org::apache::xml::internal::utils::FastStringBuffer* sb);
	static ::com::sun::org::apache::xml::internal::utils::FastStringBuffer* get();
	static ::com::sun::org::apache::xml::internal::utils::ObjectPool* m_stringBufPool;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_StringBufferPool_h_