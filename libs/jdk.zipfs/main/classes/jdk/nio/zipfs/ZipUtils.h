#ifndef _jdk_nio_zipfs_ZipUtils_h_
#define _jdk_nio_zipfs_ZipUtils_h_
//$ class jdk.nio.zipfs.ZipUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EOL")
#undef EOL
#pragma push_macro("POSIX_GROUP_EXECUTE")
#undef POSIX_GROUP_EXECUTE
#pragma push_macro("POSIX_GROUP_READ")
#undef POSIX_GROUP_READ
#pragma push_macro("POSIX_GROUP_WRITE")
#undef POSIX_GROUP_WRITE
#pragma push_macro("POSIX_OTHER_EXECUTE")
#undef POSIX_OTHER_EXECUTE
#pragma push_macro("POSIX_OTHER_READ")
#undef POSIX_OTHER_READ
#pragma push_macro("POSIX_OTHER_WRITE")
#undef POSIX_OTHER_WRITE
#pragma push_macro("POSIX_USER_EXECUTE")
#undef POSIX_USER_EXECUTE
#pragma push_macro("POSIX_USER_READ")
#undef POSIX_USER_READ
#pragma push_macro("POSIX_USER_WRITE")
#undef POSIX_USER_WRITE
#pragma push_macro("WINDOWS_EPOCH_IN_MICROSECONDS")
#undef WINDOWS_EPOCH_IN_MICROSECONDS

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class PosixFilePermission;
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipUtils : public ::java::lang::Object {
	$class(ZipUtils, 0, ::java::lang::Object)
public:
	ZipUtils();
	void init$();
	static int64_t dosToJavaTime(int64_t dtime);
	static bool isGlobMeta(char16_t c);
	static bool isRegexMeta(char16_t c);
	static int64_t javaToDosTime(int64_t time);
	static int64_t javaToUnixTime(int64_t time);
	static int64_t javaToWinTime(int64_t time);
	static char16_t next($String* glob, int32_t i);
	static int64_t overflowDosToJavaTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);
	static int32_t permToFlag(::java::nio::file::attribute::PosixFilePermission* perm);
	static int32_t permsToFlags(::java::util::Set* perms);
	static $bytes* toDirectoryPath($bytes* dir);
	static $String* toRegexPattern($String* globPattern);
	static int64_t unixToJavaTime(int64_t utime);
	static int64_t winToJavaTime(int64_t wtime);
	static void writeBytes(::java::io::OutputStream* os, $bytes* b);
	static void writeBytes(::java::io::OutputStream* os, $bytes* b, int32_t off, int32_t len);
	static void writeInt(::java::io::OutputStream* os, int64_t v);
	static void writeLong(::java::io::OutputStream* os, int64_t v);
	static void writeShort(::java::io::OutputStream* os, int32_t v);
	static const int32_t POSIX_USER_READ = 256;
	static const int32_t POSIX_USER_WRITE = 128;
	static const int32_t POSIX_USER_EXECUTE = 64;
	static const int32_t POSIX_GROUP_READ = 32;
	static const int32_t POSIX_GROUP_WRITE = 16;
	static const int32_t POSIX_GROUP_EXECUTE = 8;
	static const int32_t POSIX_OTHER_READ = 4;
	static const int32_t POSIX_OTHER_WRITE = 2;
	static const int32_t POSIX_OTHER_EXECUTE = 1;
	static const int64_t WINDOWS_EPOCH_IN_MICROSECONDS = (int64_t)0xFFD6A169B779C000;
	static $String* regexMetaChars;
	static $String* globMetaChars;
	static char16_t EOL;
};

		} // zipfs
	} // nio
} // jdk

#pragma pop_macro("EOL")
#pragma pop_macro("POSIX_GROUP_EXECUTE")
#pragma pop_macro("POSIX_GROUP_READ")
#pragma pop_macro("POSIX_GROUP_WRITE")
#pragma pop_macro("POSIX_OTHER_EXECUTE")
#pragma pop_macro("POSIX_OTHER_READ")
#pragma pop_macro("POSIX_OTHER_WRITE")
#pragma pop_macro("POSIX_USER_EXECUTE")
#pragma pop_macro("POSIX_USER_READ")
#pragma pop_macro("POSIX_USER_WRITE")
#pragma pop_macro("WINDOWS_EPOCH_IN_MICROSECONDS")

#endif // _jdk_nio_zipfs_ZipUtils_h_