#ifndef _sun_tools_jar_FingerPrint_h_
#define _sun_tools_jar_FingerPrint_h_
//$ class sun.tools.jar.FingerPrint
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MD")
#undef MD

namespace java {
	namespace security {
		class MessageDigest;
	}
}
namespace sun {
	namespace tools {
		namespace jar {
			class FingerPrint$ClassAttributes;
		}
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class FingerPrint : public ::java::lang::Object {
	$class(FingerPrint, 0, ::java::lang::Object)
public:
	FingerPrint();
	void init$($String* basename, $String* entryName, int32_t mrversion, $bytes* bytes);
	$String* basename();
	$String* className();
	$String* entryName();
	::sun::tools::jar::FingerPrint$ClassAttributes* getClassAttributes($bytes* bytes);
	bool isCafeBabe($bytes* bytes);
	bool isClass();
	bool isCompatibleVersion(::sun::tools::jar::FingerPrint* that);
	bool isEqual($bytes* sha1_1, $bytes* sha1_2);
	bool isIdentical(::sun::tools::jar::FingerPrint* that);
	bool isNestedClass();
	bool isPublicClass();
	bool isSameAPI(::sun::tools::jar::FingerPrint* that);
	int32_t mrversion();
	$String* outerClassName();
	$bytes* sha1($bytes* entry);
	$bytes* sha1($bytes* entry, int32_t offset);
	static ::java::security::MessageDigest* MD;
	$String* basename$ = nullptr;
	$String* entryName$ = nullptr;
	int32_t mrversion$ = 0;
	$bytes* sha1$ = nullptr;
	::sun::tools::jar::FingerPrint$ClassAttributes* attrs = nullptr;
	bool isClassEntry = false;
	static $bytes* cafeBabe;
};

		} // jar
	} // tools
} // sun

#pragma pop_macro("MD")

#endif // _sun_tools_jar_FingerPrint_h_