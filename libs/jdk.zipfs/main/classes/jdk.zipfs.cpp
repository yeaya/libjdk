#include <jdk.zipfs.h>

#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <jdk/nio/zipfs/ByteArrayChannel.h>
#include <jdk/nio/zipfs/ZipCoder.h>
#include <jdk/nio/zipfs/ZipCoder$UTF8.h>
#include <jdk/nio/zipfs/ZipConstants.h>
#include <jdk/nio/zipfs/ZipDirectoryStream.h>
#include <jdk/nio/zipfs/ZipDirectoryStream$1.h>
#include <jdk/nio/zipfs/ZipFileAttributeView.h>
#include <jdk/nio/zipfs/ZipFileAttributeView$1.h>
#include <jdk/nio/zipfs/ZipFileAttributeView$AttrID.h>
#include <jdk/nio/zipfs/ZipFileAttributes.h>
#include <jdk/nio/zipfs/ZipFileStore.h>
#include <jdk/nio/zipfs/ZipFileStore$ZipFileStoreAttributes.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jdk/nio/zipfs/ZipFileSystem$1.h>
#include <jdk/nio/zipfs/ZipFileSystem$2.h>
#include <jdk/nio/zipfs/ZipFileSystem$DeflatingEntryOutputStream.h>
#include <jdk/nio/zipfs/ZipFileSystem$END.h>
#include <jdk/nio/zipfs/ZipFileSystem$Entry.h>
#include <jdk/nio/zipfs/ZipFileSystem$EntryInputStream.h>
#include <jdk/nio/zipfs/ZipFileSystem$EntryOutputChannel.h>
#include <jdk/nio/zipfs/ZipFileSystem$EntryOutputStream.h>
#include <jdk/nio/zipfs/ZipFileSystem$EntryOutputStreamCRC32.h>
#include <jdk/nio/zipfs/ZipFileSystem$EntryOutputStreamDef.h>
#include <jdk/nio/zipfs/ZipFileSystem$IndexNode.h>
#include <jdk/nio/zipfs/ZipFileSystem$ParentLookup.h>
#include <jdk/nio/zipfs/ZipFileSystem$PosixEntry.h>
#include <jdk/nio/zipfs/ZipFileSystemProvider.h>
#include <jdk/nio/zipfs/ZipInfo.h>
#include <jdk/nio/zipfs/ZipPath.h>
#include <jdk/nio/zipfs/ZipPath$1.h>
#include <jdk/nio/zipfs/ZipPath$2.h>
#include <jdk/nio/zipfs/ZipPosixFileAttributeView.h>
#include <jdk/nio/zipfs/ZipPosixFileAttributeView$1.h>
#include <jdk/nio/zipfs/ZipUtils.h>
#include <jdk/nio/zipfs/ZipUtils$1.h>

#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _jdk$zipfs_classes_[] = {
	$classEntry("jdk.nio.zipfs.ByteArrayChannel", ::jdk::nio::zipfs::ByteArrayChannel),
	$classEntry("jdk.nio.zipfs.ZipCoder", ::jdk::nio::zipfs::ZipCoder),
	$classEntry("jdk.nio.zipfs.ZipCoder$UTF8", ::jdk::nio::zipfs::ZipCoder$UTF8),
	$classEntry("jdk.nio.zipfs.ZipConstants", ::jdk::nio::zipfs::ZipConstants),
	$classEntry("jdk.nio.zipfs.ZipDirectoryStream", ::jdk::nio::zipfs::ZipDirectoryStream),
	$classEntry("jdk.nio.zipfs.ZipDirectoryStream$1", ::jdk::nio::zipfs::ZipDirectoryStream$1),
	$classEntry("jdk.nio.zipfs.ZipFileAttributeView", ::jdk::nio::zipfs::ZipFileAttributeView),
	$classEntry("jdk.nio.zipfs.ZipFileAttributeView$1", ::jdk::nio::zipfs::ZipFileAttributeView$1),
	$classEntry("jdk.nio.zipfs.ZipFileAttributeView$AttrID", ::jdk::nio::zipfs::ZipFileAttributeView$AttrID),
	$classEntry("jdk.nio.zipfs.ZipFileAttributes", ::jdk::nio::zipfs::ZipFileAttributes),
	$classEntry("jdk.nio.zipfs.ZipFileStore", ::jdk::nio::zipfs::ZipFileStore),
	$classEntry("jdk.nio.zipfs.ZipFileStore$ZipFileStoreAttributes", ::jdk::nio::zipfs::ZipFileStore$ZipFileStoreAttributes),
	$classEntry("jdk.nio.zipfs.ZipFileSystem", ::jdk::nio::zipfs::ZipFileSystem),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$1", ::jdk::nio::zipfs::ZipFileSystem$1),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$2", ::jdk::nio::zipfs::ZipFileSystem$2),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$DeflatingEntryOutputStream", ::jdk::nio::zipfs::ZipFileSystem$DeflatingEntryOutputStream),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$END", ::jdk::nio::zipfs::ZipFileSystem$END),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$Entry", ::jdk::nio::zipfs::ZipFileSystem$Entry),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$EntryInputStream", ::jdk::nio::zipfs::ZipFileSystem$EntryInputStream),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$EntryOutputChannel", ::jdk::nio::zipfs::ZipFileSystem$EntryOutputChannel),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$EntryOutputStream", ::jdk::nio::zipfs::ZipFileSystem$EntryOutputStream),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$EntryOutputStreamCRC32", ::jdk::nio::zipfs::ZipFileSystem$EntryOutputStreamCRC32),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$EntryOutputStreamDef", ::jdk::nio::zipfs::ZipFileSystem$EntryOutputStreamDef),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$IndexNode", ::jdk::nio::zipfs::ZipFileSystem$IndexNode),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$ParentLookup", ::jdk::nio::zipfs::ZipFileSystem$ParentLookup),
	$classEntry("jdk.nio.zipfs.ZipFileSystem$PosixEntry", ::jdk::nio::zipfs::ZipFileSystem$PosixEntry),
	$classEntry("jdk.nio.zipfs.ZipFileSystemProvider", ::jdk::nio::zipfs::ZipFileSystemProvider),
	$classEntry("jdk.nio.zipfs.ZipInfo", ::jdk::nio::zipfs::ZipInfo),
	$classEntry("jdk.nio.zipfs.ZipPath", ::jdk::nio::zipfs::ZipPath),
	$classEntry("jdk.nio.zipfs.ZipPath$1", ::jdk::nio::zipfs::ZipPath$1),
	$classEntry("jdk.nio.zipfs.ZipPath$2", ::jdk::nio::zipfs::ZipPath$2),
	$classEntry("jdk.nio.zipfs.ZipPosixFileAttributeView", ::jdk::nio::zipfs::ZipPosixFileAttributeView),
	$classEntry("jdk.nio.zipfs.ZipPosixFileAttributeView$1", ::jdk::nio::zipfs::ZipPosixFileAttributeView$1),
	$classEntry("jdk.nio.zipfs.ZipUtils", ::jdk::nio::zipfs::ZipUtils),
	$classEntry("jdk.nio.zipfs.ZipUtils$1", ::jdk::nio::zipfs::ZipUtils$1)
};

const char* _jdk$zipfs_packages_[] = {
	"jdk.nio.zipfs"
};

void jdk$zipfs$PreloadClass() {
	int32_t length = $lengthOf(_jdk$zipfs_classes_);
	for (int32_t i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_jdk$zipfs_classes_[i];
		if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
			classEntry->loader(nullptr, false);
		}
	}
}

void jdk$zipfs$PreinitClass() {
	int32_t length = $lengthOf(_jdk$zipfs_classes_);
	for (int32_t i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_jdk$zipfs_classes_[i];
		if ($hasFlag(classEntry->mark, $PREINIT)) {
			classEntry->loader(nullptr, true);
		}
	}
}

void jdk$zipfs$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$zipfs$PreloadClass();
	} else if (eventType == JCPP_LIB_EVENT_TYPE_PREINIT_CLASS) {
		jdk$zipfs$PreinitClass();
	}
}

$StringArray* jdk$zipfs$GetPackages() {
	int32_t length = $lengthOf(_jdk$zipfs_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_jdk$zipfs_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* jdk$zipfs$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_jdk$zipfs_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_jdk$zipfs_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* jdk$zipfs$GetResource($String* name) {
	return nullptr;
}

void jdk$zipfs::init() {
	::java$base::init();
	::java::lang::Library lib = {
		"jdk.zipfs", "17.35", "",
		&_jdk$zipfs_ModuleInfo_,
		jdk$zipfs$LibEventAction,
		jdk$zipfs$GetPackages,
		jdk$zipfs$GetClassEntry,
		jdk$zipfs$GetResource
	};
	$System::addLibrary(&lib);
}

#ifdef JCPP_SHARED_BUILD
extern "C" $export void JCPP_OnLoad() {
	jdk$zipfs::init();
}
#endif