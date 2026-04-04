#include <jdk/nio/zipfs/ZipFileStore$ZipFileStoreAttributes.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <jdk/nio/zipfs/ZipFileStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $ZipFileStore = ::jdk::nio::zipfs::ZipFileStore;

namespace jdk {
	namespace nio {
		namespace zipfs {

void ZipFileStore$ZipFileStoreAttributes::init$($ZipFileStore* fileStore) {
	$useLocalObjectStack();
	$var($Path, path, $$nc($FileSystems::getDefault())->getPath($($nc(fileStore)->name()), $$new($StringArray, 0)));
	this->size = $Files::size(path);
	$set(this, fstore, $Files::getFileStore(path));
}

int64_t ZipFileStore$ZipFileStoreAttributes::totalSpace() {
	return this->size;
}

int64_t ZipFileStore$ZipFileStoreAttributes::usableSpace() {
	if (!$nc(this->fstore)->isReadOnly()) {
		return this->fstore->getUsableSpace();
	}
	return 0;
}

int64_t ZipFileStore$ZipFileStoreAttributes::unallocatedSpace() {
	if (!$nc(this->fstore)->isReadOnly()) {
		return this->fstore->getUnallocatedSpace();
	}
	return 0;
}

ZipFileStore$ZipFileStoreAttributes::ZipFileStore$ZipFileStoreAttributes() {
}

$Class* ZipFileStore$ZipFileStoreAttributes::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fstore", "Ljava/nio/file/FileStore;", nullptr, $FINAL, $field(ZipFileStore$ZipFileStoreAttributes, fstore)},
		{"size", "J", nullptr, $FINAL, $field(ZipFileStore$ZipFileStoreAttributes, size)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/nio/zipfs/ZipFileStore;)V", nullptr, 0, $method(ZipFileStore$ZipFileStoreAttributes, init$, void, $ZipFileStore*), "java.io.IOException"},
		{"totalSpace", "()J", nullptr, 0, $virtualMethod(ZipFileStore$ZipFileStoreAttributes, totalSpace, int64_t)},
		{"unallocatedSpace", "()J", nullptr, 0, $virtualMethod(ZipFileStore$ZipFileStoreAttributes, unallocatedSpace, int64_t), "java.io.IOException"},
		{"usableSpace", "()J", nullptr, 0, $virtualMethod(ZipFileStore$ZipFileStoreAttributes, usableSpace, int64_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.nio.zipfs.ZipFileStore$ZipFileStoreAttributes", "jdk.nio.zipfs.ZipFileStore", "ZipFileStoreAttributes", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.nio.zipfs.ZipFileStore$ZipFileStoreAttributes",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.nio.zipfs.ZipFileStore"
	};
	$loadClass(ZipFileStore$ZipFileStoreAttributes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFileStore$ZipFileStoreAttributes);
	});
	return class$;
}

$Class* ZipFileStore$ZipFileStoreAttributes::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk