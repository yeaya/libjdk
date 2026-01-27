#ifndef _com_sun_org_apache_bcel_internal_classfile_ClassParser_h_
#define _com_sun_org_apache_bcel_internal_classfile_ClassParser_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ClassParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUFSIZE")
#undef BUFSIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Attribute;
							class ConstantPool;
							class Field;
							class JavaClass;
							class Method;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class DataInputStream;
		class InputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class ClassParser : public ::java::lang::Object {
	$class(ClassParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassParser();
	void init$(::java::io::InputStream* inputStream, $String* fileName);
	void init$($String* fileName);
	void init$($String* zipFile, $String* fileName);
	::com::sun::org::apache::bcel::internal::classfile::JavaClass* parse();
	void readAttributes();
	void readClassInfo();
	void readConstantPool();
	void readFields();
	void readID();
	void readInterfaces();
	void readMethods();
	void readVersion();
	::java::io::DataInputStream* dataInputStream = nullptr;
	bool fileOwned = false;
	$String* fileName = nullptr;
	$String* zipFile = nullptr;
	int32_t classNameIndex = 0;
	int32_t superclassNameIndex = 0;
	int32_t major = 0;
	int32_t minor = 0;
	int32_t accessFlags = 0;
	$ints* interfaces = nullptr;
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Field>* fields = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Method>* methods = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attributes = nullptr;
	bool isZip = false;
	static const int32_t BUFSIZE = 8192;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BUFSIZE")

#endif // _com_sun_org_apache_bcel_internal_classfile_ClassParser_h_