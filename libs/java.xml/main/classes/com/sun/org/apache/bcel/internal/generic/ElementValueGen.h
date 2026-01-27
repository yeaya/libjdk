#ifndef _com_sun_org_apache_bcel_internal_generic_ElementValueGen_h_
#define _com_sun_org_apache_bcel_internal_generic_ElementValueGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.ElementValueGen
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ANNOTATION")
#undef ANNOTATION
#pragma push_macro("ARRAY")
#undef ARRAY
#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("ENUM_CONSTANT")
#undef ENUM_CONSTANT
#pragma push_macro("PRIMITIVE_BOOLEAN")
#undef PRIMITIVE_BOOLEAN
#pragma push_macro("PRIMITIVE_BYTE")
#undef PRIMITIVE_BYTE
#pragma push_macro("PRIMITIVE_CHAR")
#undef PRIMITIVE_CHAR
#pragma push_macro("PRIMITIVE_DOUBLE")
#undef PRIMITIVE_DOUBLE
#pragma push_macro("PRIMITIVE_FLOAT")
#undef PRIMITIVE_FLOAT
#pragma push_macro("PRIMITIVE_INT")
#undef PRIMITIVE_INT
#pragma push_macro("PRIMITIVE_LONG")
#undef PRIMITIVE_LONG
#pragma push_macro("PRIMITIVE_SHORT")
#undef PRIMITIVE_SHORT
#pragma push_macro("STRING")
#undef STRING

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ElementValue;
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
						namespace generic {
							class ConstantPoolGen;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class DataInput;
		class DataOutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class ElementValueGen : public ::java::lang::Object {
	$class(ElementValueGen, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ElementValueGen();
	void init$(int32_t type, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen);
	static ::com::sun::org::apache::bcel::internal::generic::ElementValueGen* copy(::com::sun::org::apache::bcel::internal::classfile::ElementValue* value, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool, bool copyPoolEntries);
	virtual void dump(::java::io::DataOutputStream* dos) {}
	virtual ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* getConstantPool();
	virtual ::com::sun::org::apache::bcel::internal::classfile::ElementValue* getElementValue() {return nullptr;}
	virtual int32_t getElementValueType();
	static ::com::sun::org::apache::bcel::internal::generic::ElementValueGen* readElementValue(::java::io::DataInput* dis, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen);
	virtual $String* stringifyValue() {return nullptr;}
	int32_t type = 0;
	::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpGen = nullptr;
	static const int32_t STRING = ((char16_t)115);
	static const int32_t ENUM_CONSTANT = ((char16_t)101);
	static const int32_t CLASS = ((char16_t)99);
	static const int32_t ANNOTATION = ((char16_t)64);
	static const int32_t ARRAY = ((char16_t)91);
	static const int32_t PRIMITIVE_INT = ((char16_t)73);
	static const int32_t PRIMITIVE_BYTE = ((char16_t)66);
	static const int32_t PRIMITIVE_CHAR = ((char16_t)67);
	static const int32_t PRIMITIVE_DOUBLE = ((char16_t)68);
	static const int32_t PRIMITIVE_FLOAT = ((char16_t)70);
	static const int32_t PRIMITIVE_LONG = ((char16_t)74);
	static const int32_t PRIMITIVE_SHORT = ((char16_t)83);
	static const int32_t PRIMITIVE_BOOLEAN = ((char16_t)90);
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ANNOTATION")
#pragma pop_macro("ARRAY")
#pragma pop_macro("CLASS")
#pragma pop_macro("ENUM_CONSTANT")
#pragma pop_macro("PRIMITIVE_BOOLEAN")
#pragma pop_macro("PRIMITIVE_BYTE")
#pragma pop_macro("PRIMITIVE_CHAR")
#pragma pop_macro("PRIMITIVE_DOUBLE")
#pragma pop_macro("PRIMITIVE_FLOAT")
#pragma pop_macro("PRIMITIVE_INT")
#pragma pop_macro("PRIMITIVE_LONG")
#pragma pop_macro("PRIMITIVE_SHORT")
#pragma pop_macro("STRING")

#endif // _com_sun_org_apache_bcel_internal_generic_ElementValueGen_h_