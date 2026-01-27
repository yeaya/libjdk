#ifndef _com_sun_org_apache_bcel_internal_util_AttributeHTML_h_
#define _com_sun_org_apache_bcel_internal_util_AttributeHTML_h_
//$ class com.sun.org.apache.bcel.internal.util.AttributeHTML
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Attribute;
							class ConstantPool;
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
				namespace bcel {
					namespace internal {
						namespace util {
							class ConstantHTML;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintWriter;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class AttributeHTML : public ::java::lang::Object {
	$class(AttributeHTML, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AttributeHTML();
	void init$($String* dir, $String* class_name, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool, ::com::sun::org::apache::bcel::internal::util::ConstantHTML* constant_html);
	void close();
	$String* codeLink(int32_t link, int32_t method_number);
	void writeAttribute(::com::sun::org::apache::bcel::internal::classfile::Attribute* attribute, $String* anchor);
	void writeAttribute(::com::sun::org::apache::bcel::internal::classfile::Attribute* attribute, $String* anchor, int32_t method_number);
	$String* class_name = nullptr;
	::java::io::PrintWriter* file = nullptr;
	int32_t attr_count = 0;
	::com::sun::org::apache::bcel::internal::util::ConstantHTML* constant_html = nullptr;
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool = nullptr;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_AttributeHTML_h_