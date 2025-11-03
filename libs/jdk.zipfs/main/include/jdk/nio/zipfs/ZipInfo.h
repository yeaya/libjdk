#ifndef _jdk_nio_zipfs_ZipInfo_h_
#define _jdk_nio_zipfs_ZipInfo_h_
//$ class jdk.nio.zipfs.ZipInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace nio {
		namespace zipfs {

class $import ZipInfo : public ::java::lang::Object {
	$class(ZipInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ZipInfo();
	void init$();
	static int64_t locoff($bytes* cen, int32_t pos);
	static void main($StringArray* args);
	static void print($String* fmt, $ObjectArray* objs);
	static void printCEN($bytes* cen, int32_t off);
	static void printExtra($bytes* extra, int32_t off, int32_t len);
	static void printLOC($bytes* loc);
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipInfo_h_