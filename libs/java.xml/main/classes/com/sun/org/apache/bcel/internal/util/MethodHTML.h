#ifndef _com_sun_org_apache_bcel_internal_util_MethodHTML_h_
#define _com_sun_org_apache_bcel_internal_util_MethodHTML_h_
//$ class com.sun.org.apache.bcel.internal.util.MethodHTML
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Field;
							class Method;
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
							class AttributeHTML;
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

class MethodHTML : public ::java::lang::Object {
	$class(MethodHTML, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodHTML();
	void init$($String* dir, $String* class_name, $Array<::com::sun::org::apache::bcel::internal::classfile::Method>* methods, $Array<::com::sun::org::apache::bcel::internal::classfile::Field>* fields, ::com::sun::org::apache::bcel::internal::util::ConstantHTML* constant_html, ::com::sun::org::apache::bcel::internal::util::AttributeHTML* attribute_html);
	void writeField(::com::sun::org::apache::bcel::internal::classfile::Field* field);
	void writeMethod(::com::sun::org::apache::bcel::internal::classfile::Method* method, int32_t method_number);
	$String* className = nullptr;
	::java::io::PrintWriter* file = nullptr;
	::com::sun::org::apache::bcel::internal::util::ConstantHTML* constantHtml = nullptr;
	::com::sun::org::apache::bcel::internal::util::AttributeHTML* attribute_html = nullptr;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_MethodHTML_h_