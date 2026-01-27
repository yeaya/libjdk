#ifndef _com_sun_org_apache_bcel_internal_generic_Type_h_
#define _com_sun_org_apache_bcel_internal_generic_Type_h_
//$ class com.sun.org.apache.bcel.internal.generic.Type
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("BYTE")
#undef BYTE
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("INT")
#undef INT
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("NO_ARGS")
#undef NO_ARGS
#pragma push_macro("NULL")
#undef NULL
#pragma push_macro("OBJECT")
#undef OBJECT
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("STRING")
#undef STRING
#pragma push_macro("STRINGBUFFER")
#undef STRINGBUFFER
#pragma push_macro("THROWABLE")
#undef THROWABLE
#pragma push_macro("UNKNOWN")
#undef UNKNOWN
#pragma push_macro("VOID")
#undef VOID

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class BasicType;
							class ObjectType;
							class ReferenceType;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
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

class Type : public ::java::lang::Object {
	$class(Type, 0, ::java::lang::Object)
public:
	Type();
	void init$(int8_t t, $String* s);
	static int32_t consumed(int32_t coded);
	static int32_t encode(int32_t size, int32_t consumed);
	virtual bool equals(Object$* o) override;
	static $Array<::com::sun::org::apache::bcel::internal::generic::Type>* getArgumentTypes($String* signature);
	static int32_t getArgumentTypesSize($String* signature);
	static $String* getMethodSignature(::com::sun::org::apache::bcel::internal::generic::Type* return_type, $Array<::com::sun::org::apache::bcel::internal::generic::Type>* arg_types);
	static ::com::sun::org::apache::bcel::internal::generic::Type* getReturnType($String* signature);
	static int32_t getReturnTypeSize($String* signature);
	virtual $String* getSignature();
	static $String* getSignature(::java::lang::reflect::Method* meth);
	virtual int32_t getSize();
	virtual int8_t getType();
	static ::com::sun::org::apache::bcel::internal::generic::Type* getType($String* signature);
	static ::com::sun::org::apache::bcel::internal::generic::Type* getType($Class* cl);
	static int32_t getTypeSize($String* signature);
	static $Array<::com::sun::org::apache::bcel::internal::generic::Type>* getTypes($ClassArray* classes);
	virtual int32_t hashCode() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* normalizeForStackOrLocal();
	virtual void setSignature($String* signature);
	static int32_t size(int32_t coded);
	virtual $String* toString() override;
	static int32_t unwrap(::java::lang::ThreadLocal* tl);
	static void wrap(::java::lang::ThreadLocal* tl, int32_t value);
	int8_t type = 0;
	$String* signature = nullptr;
	static ::com::sun::org::apache::bcel::internal::generic::BasicType* VOID;
	static ::com::sun::org::apache::bcel::internal::generic::BasicType* BOOLEAN;
	static ::com::sun::org::apache::bcel::internal::generic::BasicType* INT;
	static ::com::sun::org::apache::bcel::internal::generic::BasicType* SHORT;
	static ::com::sun::org::apache::bcel::internal::generic::BasicType* BYTE;
	static ::com::sun::org::apache::bcel::internal::generic::BasicType* LONG;
	static ::com::sun::org::apache::bcel::internal::generic::BasicType* DOUBLE;
	static ::com::sun::org::apache::bcel::internal::generic::BasicType* FLOAT;
	static ::com::sun::org::apache::bcel::internal::generic::BasicType* CHAR;
	static ::com::sun::org::apache::bcel::internal::generic::ObjectType* OBJECT;
	static ::com::sun::org::apache::bcel::internal::generic::ObjectType* CLASS;
	static ::com::sun::org::apache::bcel::internal::generic::ObjectType* STRING;
	static ::com::sun::org::apache::bcel::internal::generic::ObjectType* STRINGBUFFER;
	static ::com::sun::org::apache::bcel::internal::generic::ObjectType* THROWABLE;
	static $Array<::com::sun::org::apache::bcel::internal::generic::Type>* NO_ARGS;
	static ::com::sun::org::apache::bcel::internal::generic::ReferenceType* NULL;
	static ::com::sun::org::apache::bcel::internal::generic::Type* UNKNOWN;
	static ::java::lang::ThreadLocal* consumed_chars;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BOOLEAN")
#pragma pop_macro("BYTE")
#pragma pop_macro("CHAR")
#pragma pop_macro("CLASS")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("FLOAT")
#pragma pop_macro("INT")
#pragma pop_macro("LONG")
#pragma pop_macro("NO_ARGS")
#pragma pop_macro("NULL")
#pragma pop_macro("OBJECT")
#pragma pop_macro("SHORT")
#pragma pop_macro("STRING")
#pragma pop_macro("STRINGBUFFER")
#pragma pop_macro("THROWABLE")
#pragma pop_macro("UNKNOWN")
#pragma pop_macro("VOID")

#endif // _com_sun_org_apache_bcel_internal_generic_Type_h_