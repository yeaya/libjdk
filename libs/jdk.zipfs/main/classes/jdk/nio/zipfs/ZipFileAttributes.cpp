#include <jdk/nio/zipfs/ZipFileAttributes.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::java::util::Optional;

namespace jdk {
	namespace nio {
		namespace zipfs {

$Class* ZipFileAttributes::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"comment", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ZipFileAttributes, comment, $bytes*)},
		{"compressedSize", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ZipFileAttributes, compressedSize, int64_t)},
		{"crc", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ZipFileAttributes, crc, int64_t)},
		{"extra", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ZipFileAttributes, extra, $bytes*)},
		{"method", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ZipFileAttributes, method, int32_t)},
		{"storedPermissions", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ZipFileAttributes, storedPermissions, $Optional*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.nio.zipfs.ZipFileAttributes",
		nullptr,
		"java.nio.file.attribute.BasicFileAttributes",
		nullptr,
		methodInfos$$
	};
	$loadClass(ZipFileAttributes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFileAttributes);
	});
	return class$;
}

$Class* ZipFileAttributes::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk