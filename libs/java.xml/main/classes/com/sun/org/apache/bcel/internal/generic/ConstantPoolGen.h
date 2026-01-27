#ifndef _com_sun_org_apache_bcel_internal_generic_ConstantPoolGen_h_
#define _com_sun_org_apache_bcel_internal_generic_ConstantPoolGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.ConstantPoolGen
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_BUFFER_SIZE")
#undef DEFAULT_BUFFER_SIZE
#pragma push_macro("FIELDREF_DELIM")
#undef FIELDREF_DELIM
#pragma push_macro("IMETHODREF_DELIM")
#undef IMETHODREF_DELIM
#pragma push_macro("METHODREF_DELIM")
#undef METHODREF_DELIM
#pragma push_macro("NAT_DELIM")
#undef NAT_DELIM

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Constant;
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
						namespace generic {
							class ArrayType;
							class MethodGen;
							class ObjectType;
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
				namespace bcel {
					namespace internal {
						namespace generic {

class ConstantPoolGen : public ::java::lang::Object {
	$class(ConstantPoolGen, 0, ::java::lang::Object)
public:
	ConstantPoolGen();
	void init$($Array<::com::sun::org::apache::bcel::internal::classfile::Constant>* cs);
	void init$(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp);
	void init$();
	virtual int32_t addArrayClass(::com::sun::org::apache::bcel::internal::generic::ArrayType* type);
	virtual int32_t addClass($String* str);
	virtual int32_t addClass(::com::sun::org::apache::bcel::internal::generic::ObjectType* type);
	int32_t addClass_($String* clazz);
	virtual int32_t addConstant(::com::sun::org::apache::bcel::internal::classfile::Constant* c, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	virtual int32_t addDouble(double n);
	virtual int32_t addFieldref($String* class_name, $String* field_name, $String* signature);
	virtual int32_t addFloat(float n);
	virtual int32_t addInteger(int32_t n);
	virtual int32_t addInterfaceMethodref($String* class_name, $String* method_name, $String* signature);
	virtual int32_t addInterfaceMethodref(::com::sun::org::apache::bcel::internal::generic::MethodGen* method);
	virtual int32_t addLong(int64_t n);
	virtual int32_t addMethodref($String* class_name, $String* method_name, $String* signature);
	virtual int32_t addMethodref(::com::sun::org::apache::bcel::internal::generic::MethodGen* method);
	virtual int32_t addNameAndType($String* name, $String* signature);
	virtual int32_t addString($String* str);
	virtual int32_t addUtf8($String* n);
	virtual void adjustSize();
	virtual ::com::sun::org::apache::bcel::internal::classfile::Constant* getConstant(int32_t i);
	virtual ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* getConstantPool();
	virtual ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* getFinalConstantPool();
	virtual int32_t getSize();
	virtual int32_t lookupClass($String* str);
	virtual int32_t lookupDouble(double n);
	virtual int32_t lookupFieldref($String* class_name, $String* field_name, $String* signature);
	virtual int32_t lookupFloat(float n);
	virtual int32_t lookupInteger(int32_t n);
	virtual int32_t lookupInterfaceMethodref($String* class_name, $String* method_name, $String* signature);
	virtual int32_t lookupInterfaceMethodref(::com::sun::org::apache::bcel::internal::generic::MethodGen* method);
	virtual int32_t lookupLong(int64_t n);
	virtual int32_t lookupMethodref($String* class_name, $String* method_name, $String* signature);
	virtual int32_t lookupMethodref(::com::sun::org::apache::bcel::internal::generic::MethodGen* method);
	virtual int32_t lookupNameAndType($String* name, $String* signature);
	virtual int32_t lookupString($String* str);
	virtual int32_t lookupUtf8($String* n);
	virtual void setConstant(int32_t i, ::com::sun::org::apache::bcel::internal::classfile::Constant* c);
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static const int32_t DEFAULT_BUFFER_SIZE = 256;
	int32_t size = 0;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Constant>* constants = nullptr;
	int32_t index = 0;
	static $String* METHODREF_DELIM;
	static $String* IMETHODREF_DELIM;
	static $String* FIELDREF_DELIM;
	static $String* NAT_DELIM;
	::java::util::Map* stringTable = nullptr;
	::java::util::Map* classTable = nullptr;
	::java::util::Map* utf8Table = nullptr;
	::java::util::Map* natTable = nullptr;
	::java::util::Map* cpTable = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEFAULT_BUFFER_SIZE")
#pragma pop_macro("FIELDREF_DELIM")
#pragma pop_macro("IMETHODREF_DELIM")
#pragma pop_macro("METHODREF_DELIM")
#pragma pop_macro("NAT_DELIM")

#endif // _com_sun_org_apache_bcel_internal_generic_ConstantPoolGen_h_