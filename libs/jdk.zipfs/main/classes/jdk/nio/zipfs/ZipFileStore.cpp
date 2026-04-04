#include <jdk/nio/zipfs/ZipFileStore.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/FileOwnerAttributeView.h>
#include <java/nio/file/attribute/FileStoreAttributeView.h>
#include <java/nio/file/attribute/PosixFileAttributeView.h>
#include <jdk/nio/zipfs/ZipFileAttributeView.h>
#include <jdk/nio/zipfs/ZipFileStore$ZipFileStoreAttributes.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jdk/nio/zipfs/ZipPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $FileStore = ::java::nio::file::FileStore;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $FileOwnerAttributeView = ::java::nio::file::attribute::FileOwnerAttributeView;
using $FileStoreAttributeView = ::java::nio::file::attribute::FileStoreAttributeView;
using $PosixFileAttributeView = ::java::nio::file::attribute::PosixFileAttributeView;
using $ZipFileAttributeView = ::jdk::nio::zipfs::ZipFileAttributeView;
using $ZipFileStore$ZipFileStoreAttributes = ::jdk::nio::zipfs::ZipFileStore$ZipFileStoreAttributes;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipPath = ::jdk::nio::zipfs::ZipPath;

namespace jdk {
	namespace nio {
		namespace zipfs {

void ZipFileStore::init$($ZipPath* zpath) {
	$FileStore::init$();
	$set(this, zfs, $cast($ZipFileSystem, $nc(zpath)->getFileSystem()));
}

$String* ZipFileStore::name() {
	return $str({$($nc(this->zfs)->toString()), "/"_s});
}

$String* ZipFileStore::type() {
	return "zipfs"_s;
}

bool ZipFileStore::isReadOnly() {
	return $nc(this->zfs)->isReadOnly();
}

bool ZipFileStore::supportsFileAttributeView($Class* type) {
	$load($BasicFileAttributeView);
	$load($ZipFileAttributeView);
	$load($FileOwnerAttributeView);
	$load($PosixFileAttributeView);
	return (type == $BasicFileAttributeView::class$ || type == $ZipFileAttributeView::class$ || ((type == $FileOwnerAttributeView::class$ || type == $PosixFileAttributeView::class$) && $nc(this->zfs)->supportPosix));
}

bool ZipFileStore::supportsFileAttributeView($String* name) {
	bool var$1 = "basic"_s->equals(name);
	bool var$0 = var$1 || "zip"_s->equals(name);
	if (!var$0) {
		bool var$2 = "owner"_s->equals(name);
		var$0 = (var$2 || "posix"_s->equals(name)) && $nc(this->zfs)->supportPosix;
	}
	return var$0;
}

$FileStoreAttributeView* ZipFileStore::getFileStoreAttributeView($Class* type) {
	if (type == nullptr) {
		$throwNew($NullPointerException);
	}
	return nullptr;
}

int64_t ZipFileStore::getTotalSpace() {
	return $$new($ZipFileStore$ZipFileStoreAttributes, this)->totalSpace();
}

int64_t ZipFileStore::getUsableSpace() {
	return $$new($ZipFileStore$ZipFileStoreAttributes, this)->usableSpace();
}

int64_t ZipFileStore::getUnallocatedSpace() {
	return $$new($ZipFileStore$ZipFileStoreAttributes, this)->unallocatedSpace();
}

$Object* ZipFileStore::getAttribute($String* attribute) {
	if ($nc(attribute)->equals("totalSpace"_s)) {
		return $of($Long::valueOf(getTotalSpace()));
	}
	if (attribute->equals("usableSpace"_s)) {
		return $of($Long::valueOf(getUsableSpace()));
	}
	if (attribute->equals("unallocatedSpace"_s)) {
		return $of($Long::valueOf(getUnallocatedSpace()));
	}
	$throwNew($UnsupportedOperationException, "does not support the given attribute"_s);
}

ZipFileStore::ZipFileStore() {
}

$Class* ZipFileStore::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"zfs", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $PRIVATE | $FINAL, $field(ZipFileStore, zfs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/nio/zipfs/ZipPath;)V", nullptr, 0, $method(ZipFileStore, init$, void, $ZipPath*)},
		{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ZipFileStore, getAttribute, $Object*, $String*), "java.io.IOException"},
		{"getFileStoreAttributeView", "(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;", "<V::Ljava/nio/file/attribute/FileStoreAttributeView;>(Ljava/lang/Class<TV;>;)TV;", $PUBLIC, $virtualMethod(ZipFileStore, getFileStoreAttributeView, $FileStoreAttributeView*, $Class*)},
		{"getTotalSpace", "()J", nullptr, $PUBLIC, $virtualMethod(ZipFileStore, getTotalSpace, int64_t), "java.io.IOException"},
		{"getUnallocatedSpace", "()J", nullptr, $PUBLIC, $virtualMethod(ZipFileStore, getUnallocatedSpace, int64_t), "java.io.IOException"},
		{"getUsableSpace", "()J", nullptr, $PUBLIC, $virtualMethod(ZipFileStore, getUsableSpace, int64_t), "java.io.IOException"},
		{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(ZipFileStore, isReadOnly, bool)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ZipFileStore, name, $String*)},
		{"supportsFileAttributeView", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/nio/file/attribute/FileAttributeView;>;)Z", $PUBLIC, $virtualMethod(ZipFileStore, supportsFileAttributeView, bool, $Class*)},
		{"supportsFileAttributeView", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ZipFileStore, supportsFileAttributeView, bool, $String*)},
		{"type", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ZipFileStore, type, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.nio.zipfs.ZipFileStore$ZipFileStoreAttributes", "jdk.nio.zipfs.ZipFileStore", "ZipFileStoreAttributes", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.nio.zipfs.ZipFileStore",
		"java.nio.file.FileStore",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.nio.zipfs.ZipFileStore$ZipFileStoreAttributes"
	};
	$loadClass(ZipFileStore, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFileStore);
	});
	return class$;
}

$Class* ZipFileStore::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk