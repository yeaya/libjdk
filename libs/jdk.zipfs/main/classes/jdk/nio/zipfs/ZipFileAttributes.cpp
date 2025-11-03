#include <jdk/nio/zipfs/ZipFileAttributes.h>

#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $Optional = ::java::util::Optional;

namespace jdk {
	namespace nio {
		namespace zipfs {

$MethodInfo _ZipFileAttributes_MethodInfo_[] = {
	{"comment", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"compressedSize", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"crc", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"extra", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"method", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"storedPermissions", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ZipFileAttributes_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.nio.zipfs.ZipFileAttributes",
	nullptr,
	"java.nio.file.attribute.BasicFileAttributes",
	nullptr,
	_ZipFileAttributes_MethodInfo_
};

$Object* allocate$ZipFileAttributes($Class* clazz) {
	return $of($alloc(ZipFileAttributes));
}

$Class* ZipFileAttributes::load$($String* name, bool initialize) {
	$loadClass(ZipFileAttributes, name, initialize, &_ZipFileAttributes_ClassInfo_, allocate$ZipFileAttributes);
	return class$;
}

$Class* ZipFileAttributes::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk