#ifndef _com_sun_org_apache_bcel_internal_classfile_Utility_h_
#define _com_sun_org_apache_bcel_internal_classfile_Utility_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Utility
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHAR_MAP")
#undef CHAR_MAP
#pragma push_macro("ESCAPE_CHAR")
#undef ESCAPE_CHAR
#pragma push_macro("FREE_CHARS")
#undef FREE_CHARS
#pragma push_macro("MAP_CHAR")
#undef MAP_CHAR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
							class LocalVariableTable;
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
							class ByteSequence;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintStream;
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class ThreadLocal;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class Utility : public ::java::lang::Object {
	$class(Utility, 0, ::java::lang::Object)
public:
	Utility();
	using ::java::lang::Object::equals;
	void init$();
	static $String* accessToString(int32_t access_flags);
	static $String* accessToString(int32_t access_flags, bool for_class);
	static int16_t byteToShort(int8_t b);
	static $String* classOrInterface(int32_t access_flags);
	static int32_t clearBit(int32_t flag, int32_t i);
	static $String* codeToString($bytes* code, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool, int32_t index, int32_t length, bool verbose);
	static $String* codeToString($bytes* code, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool, int32_t index, int32_t length);
	static $String* codeToString(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool, bool verbose);
	static $String* codeToString(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	static $String* compactClassName($String* str);
	static $String* compactClassName($String* str, bool chopit);
	static $String* compactClassName($String* str, $String* prefix, bool chopit);
	static $String* convertString($String* label);
	static int32_t countBrackets($String* brackets);
	static $bytes* decode($String* s, bool uncompress);
	static $String* encode($bytes* bytes, bool compress);
	static bool equals($bytes* a, $bytes* b);
	static $String* fillup($String* str, int32_t length, bool left_justify, char16_t fill);
	static $String* format(int32_t i, int32_t length, bool left_justify, char16_t fill);
	static $String* getSignature($String* type);
	static bool isJavaIdentifierPart(char16_t ch);
	static bool isSet(int32_t flag, int32_t i);
	static $StringArray* methodSignatureArgumentTypes($String* signature);
	static $StringArray* methodSignatureArgumentTypes($String* signature, bool chopit);
	static $String* methodSignatureReturnType($String* signature);
	static $String* methodSignatureReturnType($String* signature, bool chopit);
	static $String* methodSignatureToString($String* signature, $String* name, $String* access);
	static $String* methodSignatureToString($String* signature, $String* name, $String* access, bool chopit);
	static $String* methodSignatureToString($String* signature, $String* name, $String* access, bool chopit, ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable* vars);
	static $String* methodTypeToSignature($String* ret, $StringArray* argv);
	static int32_t pow2(int32_t n);
	static void printArray(::java::io::PrintStream* out, $ObjectArray* obj);
	static void printArray(::java::io::PrintWriter* out, $ObjectArray* obj);
	static $String* printArray($ObjectArray* obj);
	static $String* printArray($ObjectArray* obj, bool braces);
	static $String* printArray($ObjectArray* obj, bool braces, bool quote);
	static $String* replace($String* str, $String* old, $String* new_);
	static int16_t searchOpcode($String* name);
	static int32_t setBit(int32_t flag, int32_t i);
	static $String* signatureToString($String* signature);
	static $String* signatureToString($String* signature, bool chopit);
	static $String* toHexString($bytes* bytes);
	static int8_t typeOfMethodSignature($String* signature);
	static int8_t typeOfSignature($String* signature);
	static $String* typeParamTypeToString($String* signature, bool chopit);
	static $String* typeParamTypesToString($String* signature, bool chopit);
	static $String* typeSignatureToString($String* signature, bool chopit);
	static $String* typeSignaturesToString($String* signature, bool chopit, char16_t term);
	static int32_t unwrap(::java::lang::ThreadLocal* tl);
	static void wrap(::java::lang::ThreadLocal* tl, int32_t value);
	static ::java::lang::ThreadLocal* consumed_chars;
	static bool wide;
	static const int32_t FREE_CHARS = 48;
	static $ints* CHAR_MAP;
	static $ints* MAP_CHAR;
	static const char16_t ESCAPE_CHAR = ((char16_t)36);
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CHAR_MAP")
#pragma pop_macro("ESCAPE_CHAR")
#pragma pop_macro("FREE_CHARS")
#pragma pop_macro("MAP_CHAR")

#endif // _com_sun_org_apache_bcel_internal_classfile_Utility_h_