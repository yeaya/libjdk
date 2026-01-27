#ifndef _com_sun_org_apache_bcel_internal_util_Class2HTML_h_
#define _com_sun_org_apache_bcel_internal_util_Class2HTML_h_
//$ class com.sun.org.apache.bcel.internal.util.Class2HTML
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
							class JavaClass;
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
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class $import Class2HTML : public ::java::lang::Object {
	$class(Class2HTML, 0, ::java::lang::Object)
public:
	Class2HTML();
	void init$(::com::sun::org::apache::bcel::internal::classfile::JavaClass* java_class, $String* dir);
	static void main($StringArray* argv);
	static $String* referenceClass(int32_t index);
	static $String* referenceType($String* type);
	static $String* toHTML($String* str);
	void writeMainHTML(::com::sun::org::apache::bcel::internal::util::AttributeHTML* attribute_html);
	::com::sun::org::apache::bcel::internal::classfile::JavaClass* java_class = nullptr;
	$String* dir = nullptr;
	static $String* class_package;
	static $String* class_name;
	static ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool;
	static ::java::util::Set* basic_types;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_util_Class2HTML_h_