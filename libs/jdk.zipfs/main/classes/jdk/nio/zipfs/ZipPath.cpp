#include <jdk/nio/zipfs/ZipPath.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/nio/file/AccessDeniedException.h>
#include <java/nio/file/AccessMode.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/DirectoryNotEmptyException.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileAlreadyExistsException.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/NoSuchFileException.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/ProviderMismatchException.h>
#include <java/nio/file/StandardCopyOption.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <java/nio/file/attribute/FileOwnerAttributeView.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/nio/file/attribute/PosixFileAttributeView.h>
#include <java/nio/file/attribute/PosixFileAttributes.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jdk/nio/zipfs/ZipCoder.h>
#include <jdk/nio/zipfs/ZipDirectoryStream.h>
#include <jdk/nio/zipfs/ZipFileAttributeView.h>
#include <jdk/nio/zipfs/ZipFileAttributes.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jdk/nio/zipfs/ZipPath$1.h>
#include <jdk/nio/zipfs/ZipPath$2.h>
#include <jdk/nio/zipfs/ZipPosixFileAttributeView.h>
#include <jcpp.h>

#undef COPY_ATTRIBUTES
#undef CREATE
#undef READ
#undef REPLACE_EXISTING
#undef TRUNCATE_EXISTING
#undef UTF_8
#undef WRITE

using $AccessModeArray = $Array<::java::nio::file::AccessMode>;
using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $WatchEvent$ModifierArray = $Array<::java::nio::file::WatchEvent$Modifier>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URI = ::java::net::URI;
using $FileChannel = ::java::nio::channels::FileChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $AccessDeniedException = ::java::nio::file::AccessDeniedException;
using $AccessMode = ::java::nio::file::AccessMode;
using $CopyOption = ::java::nio::file::CopyOption;
using $DirectoryNotEmptyException = ::java::nio::file::DirectoryNotEmptyException;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $FileAlreadyExistsException = ::java::nio::file::FileAlreadyExistsException;
using $FileStore = ::java::nio::file::FileStore;
using $FileSystem = ::java::nio::file::FileSystem;
using $Files = ::java::nio::file::Files;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $ProviderMismatchException = ::java::nio::file::ProviderMismatchException;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;
using $BasicFileAttributeView = ::java::nio::file::attribute::BasicFileAttributeView;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileAttributeView = ::java::nio::file::attribute::FileAttributeView;
using $FileOwnerAttributeView = ::java::nio::file::attribute::FileOwnerAttributeView;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $PosixFileAttributeView = ::java::nio::file::attribute::PosixFileAttributeView;
using $PosixFileAttributes = ::java::nio::file::attribute::PosixFileAttributes;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $ZipCoder = ::jdk::nio::zipfs::ZipCoder;
using $ZipDirectoryStream = ::jdk::nio::zipfs::ZipDirectoryStream;
using $ZipFileAttributeView = ::jdk::nio::zipfs::ZipFileAttributeView;
using $ZipFileAttributes = ::jdk::nio::zipfs::ZipFileAttributes;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipPath$1 = ::jdk::nio::zipfs::ZipPath$1;
using $ZipPath$2 = ::jdk::nio::zipfs::ZipPath$2;
using $ZipPosixFileAttributeView = ::jdk::nio::zipfs::ZipPosixFileAttributeView;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipPath_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZipPath, $assertionsDisabled)},
	{"zfs", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $PRIVATE | $FINAL, $field(ZipPath, zfs)},
	{"path", "[B", nullptr, $PRIVATE | $FINAL, $field(ZipPath, path)},
	{"offsets", "[I", nullptr, $PRIVATE | $VOLATILE, $field(ZipPath, offsets)},
	{"hashcode", "I", nullptr, $PRIVATE, $field(ZipPath, hashcode)},
	{"resolved", "[B", nullptr, $PRIVATE | $VOLATILE, $field(ZipPath, resolved)},
	{}
};

$MethodInfo _ZipPath_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;[B)V", nullptr, 0, $method(ZipPath, init$, void, $ZipFileSystem*, $bytes*)},
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;[BZ)V", nullptr, 0, $method(ZipPath, init$, void, $ZipFileSystem*, $bytes*, bool)},
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljava/lang/String;)V", nullptr, 0, $method(ZipPath, init$, void, $ZipFileSystem*, $String*)},
	{"checkAccess", "([Ljava/nio/file/AccessMode;)V", nullptr, $TRANSIENT, $method(ZipPath, checkAccess, void, $AccessModeArray*), "java.io.IOException"},
	{"checkPath", "(Ljava/nio/file/Path;)Ljdk/nio/zipfs/ZipPath;", nullptr, $PRIVATE, $method(ZipPath, checkPath, ZipPath*, $Path*)},
	{"compareTo", "(Ljava/nio/file/Path;)I", nullptr, $PUBLIC, $virtualMethod(ZipPath, compareTo, int32_t, $Path*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ZipPath, compareTo, int32_t, Object$*)},
	{"copy", "(Ljdk/nio/zipfs/ZipPath;[Ljava/nio/file/CopyOption;)V", nullptr, $TRANSIENT, $method(ZipPath, copy, void, ZipPath*, $CopyOptionArray*), "java.io.IOException"},
	{"copyToTarget", "(Ljdk/nio/zipfs/ZipPath;[Ljava/nio/file/CopyOption;)V", nullptr, $PRIVATE | $TRANSIENT, $method(ZipPath, copyToTarget, void, ZipPath*, $CopyOptionArray*), "java.io.IOException"},
	{"createDirectory", "([Ljava/nio/file/attribute/FileAttribute;)V", "([Ljava/nio/file/attribute/FileAttribute<*>;)V", $TRANSIENT, $method(ZipPath, createDirectory, void, $FileAttributeArray*), "java.io.IOException"},
	{"decode", "(C)I", nullptr, $PRIVATE | $STATIC, $staticMethod(ZipPath, decode, int32_t, char16_t)},
	{"decodeUri", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(ZipPath, decodeUri, $String*, $String*)},
	{"delete", "()V", nullptr, 0, $method(ZipPath, delete$, void), "java.io.IOException"},
	{"deleteIfExists", "()V", nullptr, $PRIVATE, $method(ZipPath, deleteIfExists, void), "java.io.IOException"},
	{"endsWith", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(ZipPath, endsWith, bool, $Path*)},
	{"endsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ZipPath, endsWith, bool, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ZipPath, equals, bool, Object$*)},
	{"equalsNameAt", "(Ljdk/nio/zipfs/ZipPath;I)Z", nullptr, $PRIVATE, $method(ZipPath, equalsNameAt, bool, ZipPath*, int32_t)},
	{"exists", "()Z", nullptr, $PRIVATE, $method(ZipPath, exists, bool)},
	{"getFileAttributeView", "(Ljava/lang/Class;)Ljava/nio/file/attribute/FileAttributeView;", "<V::Ljava/nio/file/attribute/FileAttributeView;>(Ljava/lang/Class<TV;>;)TV;", 0, $method(ZipPath, getFileAttributeView, $FileAttributeView*, $Class*)},
	{"getFileAttributeView", "(Ljava/lang/String;)Ljdk/nio/zipfs/ZipFileAttributeView;", nullptr, $PRIVATE, $method(ZipPath, getFileAttributeView, $ZipFileAttributeView*, $String*)},
	{"getFileName", "()Ljdk/nio/zipfs/ZipPath;", nullptr, $PUBLIC, $virtualMethod(ZipPath, getFileName, ZipPath*)},
	{"getFileStore", "()Ljava/nio/file/FileStore;", nullptr, 0, $method(ZipPath, getFileStore, $FileStore*), "java.io.IOException"},
	{"getFileSystem", "()Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $PUBLIC, $virtualMethod(ZipPath, getFileSystem, $FileSystem*)},
	{"getName", "(I)Ljdk/nio/zipfs/ZipPath;", nullptr, $PUBLIC, $virtualMethod(ZipPath, getName, ZipPath*, int32_t)},
	{"getNameCount", "()I", nullptr, $PUBLIC, $virtualMethod(ZipPath, getNameCount, int32_t)},
	{"getParent", "()Ljdk/nio/zipfs/ZipPath;", nullptr, $PUBLIC, $virtualMethod(ZipPath, getParent, ZipPath*)},
	{"getResolved", "()[B", nullptr, $PRIVATE, $method(ZipPath, getResolved, $bytes*)},
	{"getResolvedPath", "()[B", nullptr, 0, $method(ZipPath, getResolvedPath, $bytes*)},
	{"getRoot", "()Ljdk/nio/zipfs/ZipPath;", nullptr, $PUBLIC, $virtualMethod(ZipPath, getRoot, ZipPath*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ZipPath, hashCode, int32_t)},
	{"initOffsets", "()V", nullptr, $PRIVATE, $method(ZipPath, initOffsets, void)},
	{"isAbsolute", "()Z", nullptr, $PUBLIC, $virtualMethod(ZipPath, isAbsolute, bool)},
	{"isHidden", "()Z", nullptr, 0, $method(ZipPath, isHidden, bool)},
	{"isSameFile", "(Ljava/nio/file/Path;)Z", nullptr, 0, $method(ZipPath, isSameFile, bool, $Path*), "java.io.IOException"},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC, $virtualMethod(ZipPath, iterator, $Iterator*)},
	{"move", "(Ljdk/nio/zipfs/ZipPath;[Ljava/nio/file/CopyOption;)V", nullptr, $TRANSIENT, $method(ZipPath, move, void, ZipPath*, $CopyOptionArray*), "java.io.IOException"},
	{"newByteChannel", "(Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;", "(Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/SeekableByteChannel;", $TRANSIENT, $method(ZipPath, newByteChannel, $SeekableByteChannel*, $Set*, $FileAttributeArray*), "java.io.IOException"},
	{"newDirectoryStream", "(Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;", "(Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;", 0, $method(ZipPath, newDirectoryStream, $DirectoryStream*, $DirectoryStream$Filter*), "java.io.IOException"},
	{"newFileChannel", "(Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;", "(Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/FileChannel;", $TRANSIENT, $method(ZipPath, newFileChannel, $FileChannel*, $Set*, $FileAttributeArray*), "java.io.IOException"},
	{"newInputStream", "([Ljava/nio/file/OpenOption;)Ljava/io/InputStream;", nullptr, $TRANSIENT, $method(ZipPath, newInputStream, $InputStream*, $OpenOptionArray*), "java.io.IOException"},
	{"newOutputStream", "([Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;", nullptr, $TRANSIENT, $method(ZipPath, newOutputStream, $OutputStream*, $OpenOptionArray*), "java.io.IOException"},
	{"normalize", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(ZipPath, normalize, $Path*)},
	{"normalize", "([B)[B", nullptr, $PRIVATE, $method(ZipPath, normalize, $bytes*, $bytes*)},
	{"normalize", "([BI)[B", nullptr, $PRIVATE, $method(ZipPath, normalize, $bytes*, $bytes*, int32_t)},
	{"normalize", "(Ljava/lang/String;)[B", nullptr, $PRIVATE, $method(ZipPath, normalize, $bytes*, $String*)},
	{"normalize", "(Ljava/lang/String;II)[B", nullptr, $PRIVATE, $method(ZipPath, normalize, $bytes*, $String*, int32_t, int32_t)},
	{"readAttributes", "()Ljdk/nio/zipfs/ZipFileAttributes;", nullptr, 0, $method(ZipPath, readAttributes, $ZipFileAttributes*), "java.io.IOException"},
	{"readAttributes", "(Ljava/lang/Class;)Ljava/nio/file/attribute/BasicFileAttributes;", "<A::Ljava/nio/file/attribute/BasicFileAttributes;>(Ljava/lang/Class<TA;>;)TA;", 0, $method(ZipPath, readAttributes, $BasicFileAttributes*, $Class*), "java.io.IOException"},
	{"readAttributes", "(Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;", "(Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $TRANSIENT, $method(ZipPath, readAttributes, $Map*, $String*, $LinkOptionArray*), "java.io.IOException"},
	{"register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind<*>;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", $PUBLIC | $TRANSIENT, $virtualMethod(ZipPath, register$, $WatchKey*, $WatchService*, $WatchEvent$KindArray*, $WatchEvent$ModifierArray*)},
	{"register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind<*>;)Ljava/nio/file/WatchKey;", $PUBLIC | $TRANSIENT, $virtualMethod(ZipPath, register$, $WatchKey*, $WatchService*, $WatchEvent$KindArray*)},
	{"relativize", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(ZipPath, relativize, $Path*, $Path*)},
	{"resolve", "(Ljava/nio/file/Path;)Ljdk/nio/zipfs/ZipPath;", nullptr, $PUBLIC, $virtualMethod(ZipPath, resolve, ZipPath*, $Path*)},
	{"resolve", "([B)Ljdk/nio/zipfs/ZipPath;", nullptr, $PRIVATE, $method(ZipPath, resolve, ZipPath*, $bytes*)},
	{"resolve", "(Ljava/lang/String;)Ljdk/nio/zipfs/ZipPath;", nullptr, $PUBLIC, $virtualMethod(ZipPath, resolve, ZipPath*, $String*)},
	{"resolve0", "()[B", nullptr, $PRIVATE, $method(ZipPath, resolve0, $bytes*)},
	{"resolveSibling", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(ZipPath, resolveSibling, $Path*, $Path*)},
	{"resolveSibling", "(Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ZipPath, resolveSibling, $Path*, $String*)},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)V", nullptr, $TRANSIENT, $method(ZipPath, setAttribute, void, $String*, Object$*, $LinkOptionArray*), "java.io.IOException"},
	{"setGroup", "(Ljava/nio/file/attribute/GroupPrincipal;)V", nullptr, 0, $method(ZipPath, setGroup, void, $GroupPrincipal*), "java.io.IOException"},
	{"setOwner", "(Ljava/nio/file/attribute/UserPrincipal;)V", nullptr, 0, $method(ZipPath, setOwner, void, $UserPrincipal*), "java.io.IOException"},
	{"setPermissions", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;)V", 0, $method(ZipPath, setPermissions, void, $Set*), "java.io.IOException"},
	{"setTimes", "(Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, 0, $method(ZipPath, setTimes, void, $FileTime*, $FileTime*, $FileTime*), "java.io.IOException"},
	{"startsWith", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(ZipPath, startsWith, bool, $Path*)},
	{"startsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ZipPath, startsWith, bool, $String*)},
	{"subpath", "(II)Ljdk/nio/zipfs/ZipPath;", nullptr, $PUBLIC, $virtualMethod(ZipPath, subpath, ZipPath*, int32_t, int32_t)},
	{"toAbsolutePath", "()Ljdk/nio/zipfs/ZipPath;", nullptr, $PUBLIC, $virtualMethod(ZipPath, toAbsolutePath, ZipPath*)},
	{"toFile", "()Ljava/io/File;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ZipPath, toFile, $File*)},
	{"toRealPath", "([Ljava/nio/file/LinkOption;)Ljdk/nio/zipfs/ZipPath;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(ZipPath, toRealPath, ZipPath*, $LinkOptionArray*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ZipPath, toString, $String*)},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(ZipPath, toUri, $URI*)},
	{}
};

$InnerClassInfo _ZipPath_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipPath$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"jdk.nio.zipfs.ZipPath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ZipPath_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.nio.zipfs.ZipPath",
	"java.lang.Object",
	"java.nio.file.Path",
	_ZipPath_FieldInfo_,
	_ZipPath_MethodInfo_,
	nullptr,
	nullptr,
	_ZipPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipPath$2,jdk.nio.zipfs.ZipPath$1"
};

$Object* allocate$ZipPath($Class* clazz) {
	return $of($alloc(ZipPath));
}

bool ZipPath::$assertionsDisabled = false;

void ZipPath::init$($ZipFileSystem* zfs, $bytes* path) {
	ZipPath::init$(zfs, path, false);
}

void ZipPath::init$($ZipFileSystem* zfs, $bytes* path, bool normalized) {
	this->hashcode = 0;
	$set(this, resolved, nullptr);
	$set(this, zfs, zfs);
	if (normalized) {
		$set(this, path, path);
	} else if ($nc($nc(zfs)->zc)->isUTF8()) {
		$set(this, path, normalize(path));
	} else {
		$set(this, path, normalize($(zfs->getString(path))));
	}
}

void ZipPath::init$($ZipFileSystem* zfs, $String* path) {
	this->hashcode = 0;
	$set(this, resolved, nullptr);
	$set(this, zfs, zfs);
	$set(this, path, normalize(path));
}

ZipPath* ZipPath::getRoot() {
	if (this->isAbsolute()) {
		return $nc(this->zfs)->getRootDir();
	} else {
		return nullptr;
	}
}

ZipPath* ZipPath::getFileName() {
	$useLocalCurrentObjectStackCache();
	int32_t off = $nc(this->path)->length;
	if (off == 0 || off == 1 && $nc(this->path)->get(0) == u'/') {
		return nullptr;
	}
	while (true) {
		bool var$0 = --off >= 0;
		if (!(var$0 && $nc(this->path)->get(off) != u'/')) {
			break;
		}
		{
		}
	}
	if (off < 0) {
		return this;
	}
	++off;
	$var($bytes, result, $new($bytes, $nc(this->path)->length - off));
	$System::arraycopy(this->path, off, result, 0, result->length);
	return $new(ZipPath, $($cast($ZipFileSystem, getFileSystem())), result, true);
}

ZipPath* ZipPath::getParent() {
	$useLocalCurrentObjectStackCache();
	int32_t off = $nc(this->path)->length;
	if (off == 0 || off == 1 && $nc(this->path)->get(0) == u'/') {
		return nullptr;
	}
	while (true) {
		bool var$0 = --off >= 0;
		if (!(var$0 && $nc(this->path)->get(off) != u'/')) {
			break;
		}
		{
		}
	}
	if (off <= 0) {
		return getRoot();
	}
	$var($bytes, result, $new($bytes, off));
	$System::arraycopy(this->path, 0, result, 0, off);
	return $new(ZipPath, $($cast($ZipFileSystem, getFileSystem())), result, true);
}

int32_t ZipPath::getNameCount() {
	initOffsets();
	return $nc(this->offsets)->length;
}

ZipPath* ZipPath::getName(int32_t index) {
	initOffsets();
	if (index < 0 || index >= $nc(this->offsets)->length) {
		$throwNew($IllegalArgumentException);
	}
	int32_t begin = $nc(this->offsets)->get(index);
	int32_t len = 0;
	if (index == ($nc(this->offsets)->length - 1)) {
		len = $nc(this->path)->length - begin;
	} else {
		len = $nc(this->offsets)->get(index + 1) - begin - 1;
	}
	$var($bytes, result, $new($bytes, len));
	$System::arraycopy(this->path, begin, result, 0, len);
	return $new(ZipPath, this->zfs, result);
}

ZipPath* ZipPath::subpath(int32_t beginIndex, int32_t endIndex) {
	initOffsets();
	if (beginIndex < 0 || beginIndex >= $nc(this->offsets)->length || endIndex > $nc(this->offsets)->length || beginIndex >= endIndex) {
		$throwNew($IllegalArgumentException);
	}
	int32_t begin = $nc(this->offsets)->get(beginIndex);
	int32_t len = 0;
	if (endIndex == $nc(this->offsets)->length) {
		len = $nc(this->path)->length - begin;
	} else {
		len = $nc(this->offsets)->get(endIndex) - begin - 1;
	}
	$var($bytes, result, $new($bytes, len));
	$System::arraycopy(this->path, begin, result, 0, len);
	return $new(ZipPath, this->zfs, result);
}

ZipPath* ZipPath::toRealPath($LinkOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var(ZipPath, realPath, nullptr);
	$var($bytes, resolved, getResolvedPath());
	if (resolved == this->path) {
		$assign(realPath, this);
	} else {
		$assign(realPath, $new(ZipPath, this->zfs, resolved, true));
		$set(realPath, resolved, resolved);
	}
	$nc(realPath)->checkAccess($$new($AccessModeArray, 0));
	return realPath;
}

bool ZipPath::isHidden() {
	return false;
}

ZipPath* ZipPath::toAbsolutePath() {
	if (isAbsolute()) {
		return this;
	} else {
		$var($bytes, tmp, $new($bytes, $nc(this->path)->length + 1));
		$System::arraycopy(this->path, 0, tmp, 1, $nc(this->path)->length);
		tmp->set(0, (int8_t)u'/');
		return $new(ZipPath, this->zfs, tmp, true);
	}
}

$URI* ZipPath::toUri() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, var$0, $$str({$(decodeUri($($nc($($nc($($nc(this->zfs)->getZipFile()))->toUri()))->toString()))), "!"_s}));
		return $new($URI, "jar"_s, $$concat(var$0, $($nc(this->zfs)->getString($nc($(toAbsolutePath()))->path))), nullptr);
	} catch ($Exception& ex) {
		$throwNew($AssertionError, $of(ex));
	}
	$shouldNotReachHere();
}

bool ZipPath::equalsNameAt(ZipPath* other, int32_t index) {
	int32_t mbegin = $nc(this->offsets)->get(index);
	int32_t mlen = 0;
	if (index == ($nc(this->offsets)->length - 1)) {
		mlen = $nc(this->path)->length - mbegin;
	} else {
		mlen = $nc(this->offsets)->get(index + 1) - mbegin - 1;
	}
	int32_t obegin = $nc($nc(other)->offsets)->get(index);
	int32_t olen = 0;
	if (index == ($nc(other->offsets)->length - 1)) {
		olen = $nc(other->path)->length - obegin;
	} else {
		olen = $nc(other->offsets)->get(index + 1) - obegin - 1;
	}
	if (mlen != olen) {
		return false;
	}
	int32_t n = 0;
	while (n < mlen) {
		if ($nc(this->path)->get(mbegin + n) != $nc(other->path)->get(obegin + n)) {
			return false;
		}
		++n;
	}
	return true;
}

$Path* ZipPath::relativize($Path* other) {
	$useLocalCurrentObjectStackCache();
	$var(ZipPath, o, checkPath(other));
	if ($nc(o)->equals(this)) {
		return $new(ZipPath, this->zfs, $$new($bytes, 0), true);
	}
	if ($nc(this->path)->length == 0) {
		return o;
	}
	bool var$0 = this->zfs != $nc(o)->zfs;
	if (!var$0) {
		bool var$1 = this->isAbsolute();
		var$0 = var$1 != $nc(o)->isAbsolute();
	}
	if (var$0) {
		$throwNew($IllegalArgumentException);
	}
	if ($nc(this->path)->length == 1 && $nc(this->path)->get(0) == u'/') {
		return $new(ZipPath, this->zfs, $($Arrays::copyOfRange($nc(o)->path, 1, $nc(o->path)->length)), true);
	}
	int32_t mc = this->getNameCount();
	int32_t oc = $nc(o)->getNameCount();
	int32_t n = $Math::min(mc, oc);
	int32_t i = 0;
	while (i < n) {
		if (!equalsNameAt(o, i)) {
			break;
		}
		++i;
	}
	int32_t dotdots = mc - i;
	int32_t len = dotdots * 3 - 1;
	if (i < oc) {
		len += ($nc(o->path)->length - $nc(o->offsets)->get(i) + 1);
	}
	$var($bytes, result, $new($bytes, len));
	int32_t pos = 0;
	while (dotdots > 0) {
		result->set(pos++, (int8_t)u'.');
		result->set(pos++, (int8_t)u'.');
		if (pos < len) {
			result->set(pos++, (int8_t)u'/');
		}
		--dotdots;
	}
	if (i < oc) {
		$System::arraycopy(o->path, $nc(o->offsets)->get(i), result, pos, $nc(o->path)->length - $nc(o->offsets)->get(i));
	}
	return $new(ZipPath, this->zfs, result);
}

$FileSystem* ZipPath::getFileSystem() {
	return this->zfs;
}

bool ZipPath::isAbsolute() {
	return $nc(this->path)->length > 0 && $nc(this->path)->get(0) == u'/';
}

ZipPath* ZipPath::resolve($Path* other) {
	$var(ZipPath, o, checkPath(other));
	if ($nc($nc(o)->path)->length == 0) {
		return this;
	}
	if ($nc(o)->isAbsolute() || $nc(this->path)->length == 0) {
		return o;
	}
	return resolve($nc(o)->path);
}

ZipPath* ZipPath::resolve($bytes* opath) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, resolved, nullptr);
	$var($bytes, tpath, this->path);
	int32_t tlen = $nc(tpath)->length;
	int32_t olen = $nc(opath)->length;
	if ($nc(this->path)->get(tlen - 1) == u'/') {
		$assign(resolved, $new($bytes, tlen + olen));
		$System::arraycopy(tpath, 0, resolved, 0, tlen);
		$System::arraycopy(opath, 0, resolved, tlen, olen);
	} else {
		$assign(resolved, $new($bytes, tlen + 1 + olen));
		$System::arraycopy(tpath, 0, resolved, 0, tlen);
		resolved->set(tlen, (int8_t)u'/');
		$System::arraycopy(opath, 0, resolved, tlen + 1, olen);
	}
	return $new(ZipPath, this->zfs, resolved, true);
}

$Path* ZipPath::resolveSibling($Path* other) {
	$Objects::requireNonNull($of(other), "other"_s);
	$var($Path, parent, getParent());
	return (parent == nullptr) ? other : $nc(parent)->resolve(other);
}

bool ZipPath::startsWith($Path* other) {
	$Objects::requireNonNull($of(other), "other"_s);
	if (!($instanceOf(ZipPath, other))) {
		return false;
	}
	$var(ZipPath, o, $cast(ZipPath, other));
	bool var$0 = $nc(o)->isAbsolute();
	if (var$0 != this->isAbsolute() || $nc($nc(o)->path)->length > $nc(this->path)->length) {
		return false;
	}
	int32_t olast = $nc($nc(o)->path)->length;
	for (int32_t i = 0; i < olast; ++i) {
		if ($nc(o->path)->get(i) != $nc(this->path)->get(i)) {
			return false;
		}
	}
	--olast;
	return $nc(o->path)->length == $nc(this->path)->length || $nc(o->path)->get(olast) == u'/' || $nc(this->path)->get(olast + 1) == u'/';
}

bool ZipPath::endsWith($Path* other) {
	$Objects::requireNonNull($of(other), "other"_s);
	if (!($instanceOf(ZipPath, other))) {
		return false;
	}
	$var(ZipPath, o, $cast(ZipPath, other));
	int32_t olast = $nc($nc(o)->path)->length - 1;
	if (olast > 0 && $nc(o->path)->get(olast) == u'/') {
		--olast;
	}
	int32_t last = $nc(this->path)->length - 1;
	if (last > 0 && $nc(this->path)->get(last) == u'/') {
		--last;
	}
	if (olast == -1) {
		return last == -1;
	}
	bool var$0 = o->isAbsolute();
	if ((var$0 && (!this->isAbsolute() || olast != last)) || (last < olast)) {
		return false;
	}
	for (; olast >= 0; --olast, --last) {
		if ($nc(o->path)->get(olast) != $nc(this->path)->get(last)) {
			return false;
		}
	}
	return $nc(o->path)->get(olast + 1) == u'/' || last == -1 || $nc(this->path)->get(last) == u'/';
}

ZipPath* ZipPath::resolve($String* other) {
	$var($bytes, opath, normalize(other));
	if ($nc(opath)->length == 0) {
		return this;
	}
	if ($nc(opath)->get(0) == u'/' || $nc(this->path)->length == 0) {
		return $new(ZipPath, this->zfs, opath, true);
	}
	return resolve(opath);
}

$Path* ZipPath::resolveSibling($String* other) {
	$useLocalCurrentObjectStackCache();
	return resolveSibling($($nc(this->zfs)->getPath(other, $$new($StringArray, 0))));
}

bool ZipPath::startsWith($String* other) {
	$useLocalCurrentObjectStackCache();
	return startsWith($($nc(this->zfs)->getPath(other, $$new($StringArray, 0))));
}

bool ZipPath::endsWith($String* other) {
	$useLocalCurrentObjectStackCache();
	return endsWith($($nc(this->zfs)->getPath(other, $$new($StringArray, 0))));
}

$Path* ZipPath::normalize() {
	$var($bytes, resolved, getResolved());
	if (resolved == this->path) {
		return this;
	}
	return $new(ZipPath, this->zfs, resolved, true);
}

ZipPath* ZipPath::checkPath($Path* path) {
	$Objects::requireNonNull($of(path), "path"_s);
	if (!($instanceOf(ZipPath, path))) {
		$throwNew($ProviderMismatchException);
	}
	return $cast(ZipPath, path);
}

void ZipPath::initOffsets() {
	if (this->offsets == nullptr) {
		int32_t count = 0;
		int32_t index = 0;
		count = 0;
		index = 0;
		if ($nc(this->path)->length == 0) {
			count = 1;
		} else {
			while (index < $nc(this->path)->length) {
				int8_t c = $nc(this->path)->get(index++);
				if (c != u'/') {
					++count;
					while (index < $nc(this->path)->length && $nc(this->path)->get(index) != u'/') {
						++index;
					}
				}
			}
		}
		$var($ints, result, $new($ints, count));
		count = 0;
		index = 0;
		while (index < $nc(this->path)->length) {
			int8_t c = $nc(this->path)->get(index);
			if (c == u'/') {
				++index;
			} else {
				result->set(count++, index++);
				while (index < $nc(this->path)->length && $nc(this->path)->get(index) != u'/') {
					++index;
				}
			}
		}
		$synchronized(this) {
			if (this->offsets == nullptr) {
				$set(this, offsets, result);
			}
		}
	}
}

$bytes* ZipPath::getResolvedPath() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, r, this->resolved);
	if (r == nullptr) {
		if (isAbsolute()) {
			$assign(r, getResolved());
		} else {
			$assign(r, $nc($(toAbsolutePath()))->getResolvedPath());
		}
		$set(this, resolved, r);
	}
	return this->resolved;
}

$bytes* ZipPath::normalize($bytes* path) {
	int32_t len = $nc(path)->length;
	if (len == 0) {
		return path;
	}
	int8_t prevC = (int8_t)0;
	for (int32_t i = 0; i < len; ++i) {
		int8_t c = path->get(i);
		if (c == u'\\' || c == u'\0') {
			return normalize(path, i);
		}
		if (c == (int8_t)u'/' && prevC == u'/') {
			return normalize(path, i - 1);
		}
		prevC = c;
	}
	if (len > 1 && prevC == u'/') {
		return $Arrays::copyOf(path, len - 1);
	}
	return path;
}

$bytes* ZipPath::normalize($bytes* path, int32_t off) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, to, $new($bytes, $nc(path)->length));
	int32_t n = 0;
	while (n < off) {
		to->set(n, path->get(n));
		++n;
	}
	int32_t m = n;
	int8_t prevC = (int8_t)0;
	while (n < path->length) {
		int8_t c = path->get(n++);
		if (c == (int8_t)u'\\') {
			c = (int8_t)u'/';
		}
		if (c == (int8_t)u'/' && prevC == (int8_t)u'/') {
			continue;
		}
		if (c == u'\0') {
			$throwNew($InvalidPathException, $($nc(this->zfs)->getString(path)), "Path: nul character not allowed"_s);
		}
		to->set(m++, c);
		prevC = c;
	}
	if (m > 1 && to->get(m - 1) == u'/') {
		--m;
	}
	return (m == to->length) ? to : $Arrays::copyOf(to, m);
}

$bytes* ZipPath::normalize($String* path$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, path, path$renamed);
	if ($nc($nc(this->zfs)->zc)->isUTF8()) {
		return normalize($($nc(this->zfs)->getBytes(path)));
	}
	int32_t len = $nc(path)->length();
	if (len == 0) {
		return $new($bytes, 0);
	}
	char16_t prevC = (char16_t)0;
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = path->charAt(i);
		if (c == u'\\' || c == u'\0') {
			return normalize(path, i, len);
		}
		if (c == u'/' && prevC == u'/') {
			return normalize(path, i - 1, len);
		}
		prevC = c;
	}
	if (len > 1 && prevC == u'/') {
		$assign(path, path->substring(0, len - 1));
	}
	return $nc(this->zfs)->getBytes(path);
}

$bytes* ZipPath::normalize($String* path, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, to, $new($StringBuilder, len));
	to->append(static_cast<$CharSequence*>(path), 0, off);
	char16_t prevC = (char16_t)0;
	while (off < len) {
		char16_t c = $nc(path)->charAt(off++);
		if (c == u'\\') {
			c = u'/';
		}
		if (c == u'/' && prevC == u'/') {
			continue;
		}
		if (c == u'\0') {
			$throwNew($InvalidPathException, path, "Path: nul character not allowed"_s);
		}
		to->append(c);
		prevC = c;
	}
	len = to->length();
	if (len > 1 && prevC == u'/') {
		to->delete$(len - 1, len);
	}
	return $nc(this->zfs)->getBytes($(to->toString()));
}

$bytes* ZipPath::getResolved() {
	for (int32_t i = 0; i < $nc(this->path)->length; ++i) {
		if ($nc(this->path)->get(i) == (int8_t)u'.' && (i + 1 == $nc(this->path)->length || $nc(this->path)->get(i + 1) == u'/')) {
			return resolve0();
		}
	}
	return this->path;
}

$bytes* ZipPath::resolve0() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, to, $new($bytes, $nc(this->path)->length));
	int32_t nc = getNameCount();
	$var($ints, lastM, $new($ints, nc));
	int32_t lastMOff = -1;
	int32_t m = 0;
	for (int32_t i = 0; i < nc; ++i) {
		int32_t n = $nc(this->offsets)->get(i);
		int32_t len = (i == $nc(this->offsets)->length - 1) ? ($nc(this->path)->length - n) : ($nc(this->offsets)->get(i + 1) - n - 1);
		if (len == 1 && $nc(this->path)->get(n) == (int8_t)u'.') {
			if (m == 0 && $nc(this->path)->get(0) == u'/') {
				to->set(m++, (int8_t)u'/');
			}
			continue;
		}
		if (len == 2 && $nc(this->path)->get(n) == u'.' && $nc(this->path)->get(n + 1) == u'.') {
			if (lastMOff >= 0) {
				m = lastM->get(lastMOff--);
				continue;
			}
			if ($nc(this->path)->get(0) == u'/') {
				if (m == 0) {
					to->set(m++, (int8_t)u'/');
				}
			} else {
				if (m != 0 && to->get(m - 1) != u'/') {
					to->set(m++, (int8_t)u'/');
				}
				while (len-- > 0) {
					to->set(m++, $nc(this->path)->get(n++));
				}
			}
			continue;
		}
		if (m == 0 && $nc(this->path)->get(0) == u'/' || m != 0 && to->get(m - 1) != u'/') {
			to->set(m++, (int8_t)u'/');
		}
		lastM->set(++lastMOff, m);
		while (len-- > 0) {
			to->set(m++, $nc(this->path)->get(n++));
		}
	}
	if (m > 1 && to->get(m - 1) == u'/') {
		--m;
	}
	return (m == to->length) ? to : $Arrays::copyOf(to, m);
}

$String* ZipPath::toString() {
	return $nc(this->zfs)->getString(this->path);
}

int32_t ZipPath::hashCode() {
	int32_t h = this->hashcode;
	if (h == 0) {
		this->hashcode = (h = $Arrays::hashCode(this->path));
	}
	return h;
}

bool ZipPath::equals(Object$* obj) {
	return $instanceOf(ZipPath, obj) && this->zfs == $nc(($cast(ZipPath, obj)))->zfs && compareTo($cast($Path, obj)) == 0;
}

int32_t ZipPath::compareTo($Path* other) {
	$var(ZipPath, o, checkPath(other));
	int32_t len1 = $nc(this->path)->length;
	int32_t len2 = $nc($nc(o)->path)->length;
	int32_t n = $Math::min(len1, len2);
	int32_t k = 0;
	while (k < n) {
		int32_t c1 = (int32_t)($nc(this->path)->get(k) & (uint32_t)255);
		int32_t c2 = (int32_t)($nc(o->path)->get(k) & (uint32_t)255);
		if (c1 != c2) {
			return c1 - c2;
		}
		++k;
	}
	return len1 - len2;
}

$WatchKey* ZipPath::register$($WatchService* watcher, $WatchEvent$KindArray* events, $WatchEvent$ModifierArray* modifiers) {
	if (watcher == nullptr || events == nullptr || modifiers == nullptr) {
		$throwNew($NullPointerException);
	}
	$throwNew($ProviderMismatchException);
	$shouldNotReachHere();
}

$WatchKey* ZipPath::register$($WatchService* watcher, $WatchEvent$KindArray* events) {
	return register$(watcher, events, $$new($WatchEvent$ModifierArray, 0));
}

$File* ZipPath::toFile() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Iterator* ZipPath::iterator() {
	return $new($ZipPath$1, this);
}

$FileAttributeView* ZipPath::getFileAttributeView($Class* type) {
	if (type == nullptr) {
		$throwNew($NullPointerException);
	}
	$load($BasicFileAttributeView);
	if (type == $BasicFileAttributeView::class$) {
		return static_cast<$FileAttributeView*>($new($ZipFileAttributeView, this, false));
	}
	$load($ZipFileAttributeView);
	if (type == $ZipFileAttributeView::class$) {
		return static_cast<$FileAttributeView*>($new($ZipFileAttributeView, this, true));
	}
	if ($nc(this->zfs)->supportPosix) {
		$load($PosixFileAttributeView);
		if (type == $PosixFileAttributeView::class$) {
			return static_cast<$FileAttributeView*>(static_cast<$BasicFileAttributeView*>(static_cast<$ZipFileAttributeView*>($new($ZipPosixFileAttributeView, this, false))));
		}
		$load($FileOwnerAttributeView);
		if (type == $FileOwnerAttributeView::class$) {
			return static_cast<$FileAttributeView*>(static_cast<$BasicFileAttributeView*>(static_cast<$ZipFileAttributeView*>($new($ZipPosixFileAttributeView, this, true))));
		}
	}
	$throwNew($UnsupportedOperationException, $$str({"view <"_s, type, "> is not supported"_s}));
}

$ZipFileAttributeView* ZipPath::getFileAttributeView($String* type) {
	if (type == nullptr) {
		$throwNew($NullPointerException);
	}
	if ("basic"_s->equals(type)) {
		return $new($ZipFileAttributeView, this, false);
	}
	if ("zip"_s->equals(type)) {
		return $new($ZipFileAttributeView, this, true);
	}
	if ($nc(this->zfs)->supportPosix) {
		if ("posix"_s->equals(type)) {
			return $new($ZipPosixFileAttributeView, this, false);
		}
		if ("owner"_s->equals(type)) {
			return $new($ZipPosixFileAttributeView, this, true);
		}
	}
	$throwNew($UnsupportedOperationException, $$str({"view <"_s, type, "> is not supported"_s}));
}

void ZipPath::createDirectory($FileAttributeArray* attrs) {
	$nc(this->zfs)->createDirectory($(getResolvedPath()), attrs);
}

$InputStream* ZipPath::newInputStream($OpenOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	if ($nc(options)->length > 0) {
		{
			$var($OpenOptionArray, arr$, options);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($OpenOption, opt, arr$->get(i$));
				{
					$init($StandardOpenOption);
					if (!$equals(opt, $StandardOpenOption::READ)) {
						$throwNew($UnsupportedOperationException, $$str({"\'"_s, opt, "\' not allowed"_s}));
					}
				}
			}
		}
	}
	return $nc(this->zfs)->newInputStream($(getResolvedPath()));
}

$DirectoryStream* ZipPath::newDirectoryStream($DirectoryStream$Filter* filter) {
	return $new($ZipDirectoryStream, this, filter);
}

void ZipPath::delete$() {
	$nc(this->zfs)->deleteFile($(getResolvedPath()), true);
}

void ZipPath::deleteIfExists() {
	$nc(this->zfs)->deleteFile($(getResolvedPath()), false);
}

$ZipFileAttributes* ZipPath::readAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($ZipFileAttributes, zfas, $nc(this->zfs)->getFileAttributes($(getResolvedPath())));
	if (zfas == nullptr) {
		$throwNew($NoSuchFileException, $(toString()));
	}
	return zfas;
}

$BasicFileAttributes* ZipPath::readAttributes($Class* type) {
	$useLocalCurrentObjectStackCache();
	$load($BasicFileAttributes);
	$load($ZipFileAttributes);
	if (type == $BasicFileAttributes::class$ || type == $ZipFileAttributes::class$) {
		return static_cast<$BasicFileAttributes*>(readAttributes());
	}
	$load($PosixFileAttributes);
	if (type == $PosixFileAttributes::class$ && $nc(this->zfs)->supportPosix) {
		return static_cast<$BasicFileAttributes*>(readAttributes());
	}
	$throwNew($UnsupportedOperationException, $$str({"Attributes of type "_s, $($nc(type)->getName()), " not supported"_s}));
}

void ZipPath::setAttribute($String* attribute, Object$* value, $LinkOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($String, type, nullptr);
	$var($String, attr, nullptr);
	int32_t colonPos = $nc(attribute)->indexOf((int32_t)u':');
	if (colonPos == -1) {
		$assign(type, "basic"_s);
		$assign(attr, attribute);
	} else {
		$assign(type, attribute->substring(0, colonPos++));
		$assign(attr, attribute->substring(colonPos));
	}
	$nc($(getFileAttributeView(type)))->setAttribute(attr, value);
}

void ZipPath::setTimes($FileTime* mtime, $FileTime* atime, $FileTime* ctime) {
	$nc(this->zfs)->setTimes($(getResolvedPath()), mtime, atime, ctime);
}

void ZipPath::setOwner($UserPrincipal* owner) {
	$nc(this->zfs)->setOwner($(getResolvedPath()), owner);
}

void ZipPath::setPermissions($Set* perms) {
	$nc(this->zfs)->setPermissions($(getResolvedPath()), perms);
}

void ZipPath::setGroup($GroupPrincipal* group) {
	$nc(this->zfs)->setGroup($(getResolvedPath()), group);
}

$Map* ZipPath::readAttributes($String* attributes, $LinkOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($String, view, nullptr);
	$var($String, attrs, nullptr);
	int32_t colonPos = $nc(attributes)->indexOf((int32_t)u':');
	if (colonPos == -1) {
		$assign(view, "basic"_s);
		$assign(attrs, attributes);
	} else {
		$assign(view, attributes->substring(0, colonPos++));
		$assign(attrs, attributes->substring(colonPos));
	}
	return $nc($(getFileAttributeView(view)))->readAttributes(attrs);
}

$FileStore* ZipPath::getFileStore() {
	if (exists()) {
		return $nc(this->zfs)->getFileStore(this);
	}
	$throwNew($NoSuchFileException, $($nc(this->zfs)->getString(this->path)));
}

bool ZipPath::isSameFile($Path* other) {
	$useLocalCurrentObjectStackCache();
	if (this->equals(other)) {
		return true;
	}
	bool var$0 = other == nullptr;
	if (!var$0) {
		var$0 = !$equals($cast($ZipFileSystem, this->getFileSystem()), $nc(other)->getFileSystem());
	}
	if (var$0) {
		return false;
	}
	this->checkAccess($$new($AccessModeArray, 0));
	$nc(($cast(ZipPath, other)))->checkAccess($$new($AccessModeArray, 0));
	$var($bytes, var$1, this->getResolvedPath());
	return $Arrays::equals(var$1, $(($cast(ZipPath, other))->getResolvedPath()));
}

$SeekableByteChannel* ZipPath::newByteChannel($Set* options, $FileAttributeArray* attrs) {
	return $nc(this->zfs)->newByteChannel($(getResolvedPath()), options, attrs);
}

$FileChannel* ZipPath::newFileChannel($Set* options, $FileAttributeArray* attrs) {
	return $nc(this->zfs)->newFileChannel($(getResolvedPath()), options, attrs);
}

void ZipPath::checkAccess($AccessModeArray* modes) {
	$useLocalCurrentObjectStackCache();
	bool w = false;
	bool x = false;
	{
		$var($AccessModeArray, arr$, modes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$AccessMode* mode = arr$->get(i$);
			{
				$init($ZipPath$2);
				switch ($nc($ZipPath$2::$SwitchMap$java$nio$file$AccessMode)->get($nc((mode))->ordinal())) {
				case 1:
					{
						break;
					}
				case 2:
					{
						w = true;
						break;
					}
				case 3:
					{
						x = true;
						break;
					}
				default:
					{
						$throwNew($UnsupportedOperationException);
					}
				}
			}
		}
	}
	$nc(this->zfs)->checkAccess($(getResolvedPath()));
	if ((w && $nc(this->zfs)->isReadOnly()) || x) {
		$throwNew($AccessDeniedException, $(toString()));
	}
}

bool ZipPath::exists() {
	return $nc(this->zfs)->exists($(getResolvedPath()));
}

$OutputStream* ZipPath::newOutputStream($OpenOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	if ($nc(options)->length == 0) {
		$init($StandardOpenOption);
		return $nc(this->zfs)->newOutputStream($(getResolvedPath()), $$new($OpenOptionArray, {
			static_cast<$OpenOption*>($StandardOpenOption::CREATE),
			static_cast<$OpenOption*>($StandardOpenOption::TRUNCATE_EXISTING),
			static_cast<$OpenOption*>($StandardOpenOption::WRITE)
		}));
	}
	return $nc(this->zfs)->newOutputStream($(getResolvedPath()), options);
}

void ZipPath::move(ZipPath* target, $CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($Path, var$0, $nc(this->zfs)->getZipFile());
	if ($Files::isSameFile(var$0, $($nc($nc(target)->zfs)->getZipFile()))) {
		$var($bytes, var$1, getResolvedPath());
		$nc(this->zfs)->copyFile(true, var$1, $($nc(target)->getResolvedPath()), options);
	} else {
		copyToTarget(target, options);
		delete$();
	}
}

void ZipPath::copy(ZipPath* target, $CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($Path, var$0, $nc(this->zfs)->getZipFile());
	if ($Files::isSameFile(var$0, $($nc($nc(target)->zfs)->getZipFile()))) {
		$var($bytes, var$1, getResolvedPath());
		$nc(this->zfs)->copyFile(false, var$1, $($nc(target)->getResolvedPath()), options);
	} else {
		copyToTarget(target, options);
	}
}

void ZipPath::copyToTarget(ZipPath* target, $CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	bool replaceExisting = false;
	bool copyAttrs = false;
	{
		$var($CopyOptionArray, arr$, options);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($CopyOption, opt, arr$->get(i$));
			{
				$init($StandardCopyOption);
				if ($equals(opt, $StandardCopyOption::REPLACE_EXISTING)) {
					replaceExisting = true;
				} else {
					if ($equals(opt, $StandardCopyOption::COPY_ATTRIBUTES)) {
						copyAttrs = true;
					}
				}
			}
		}
	}
	$var($ZipFileAttributes, zfas, readAttributes());
	bool exists = false;
	if (replaceExisting) {
		try {
			$nc(target)->deleteIfExists();
			exists = false;
		} catch ($DirectoryNotEmptyException& x) {
			exists = true;
		}
	} else {
		exists = $nc(target)->exists();
	}
	if (exists) {
		$throwNew($FileAlreadyExistsException, $($nc(target)->toString()));
	}
	if ($nc(zfas)->isDirectory()) {
		$nc(target)->createDirectory($$new($FileAttributeArray, 0));
	} else {
		{
			$var($InputStream, is, $nc(this->zfs)->newInputStream($(getResolvedPath())));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($OutputStream, os, $nc(target)->newOutputStream($$new($OpenOptionArray, 0)));
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									$nc(is)->transferTo(os);
								} catch ($Throwable& t$) {
									if (os != nullptr) {
										try {
											os->close();
										} catch ($Throwable& x2) {
											t$->addSuppressed(x2);
										}
									}
									$throw(t$);
								}
							} catch ($Throwable& var$2) {
								$assign(var$1, var$2);
							} /*finally*/ {
								if (os != nullptr) {
									os->close();
								}
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					} catch ($Throwable& t$) {
						if (is != nullptr) {
							try {
								is->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} /*finally*/ {
					if (is != nullptr) {
						is->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
	if (copyAttrs) {
		$load($ZipFileAttributeView);
		$var($ZipFileAttributeView, view, $cast($ZipFileAttributeView, $nc(target)->getFileAttributeView($ZipFileAttributeView::class$)));
		try {
			$var($FileTime, var$4, $nc(zfas)->lastModifiedTime());
			$var($FileTime, var$5, zfas->lastAccessTime());
			$nc(view)->setTimes(var$4, var$5, $(zfas->creationTime()));
			view->setPermissions($cast($Set, $($nc($($nc(zfas)->storedPermissions()))->orElse(nullptr))));
		} catch ($IOException& x) {
			try {
				target->delete$();
			} catch ($IOException& ignore) {
			}
			$throw(x);
		}
	}
}

int32_t ZipPath::decode(char16_t c) {
	$init(ZipPath);
	if ((c >= u'0') && (c <= u'9')) {
		return c - u'0';
	}
	if ((c >= u'a') && (c <= u'f')) {
		return c - u'a' + 10;
	}
	if ((c >= u'A') && (c <= u'F')) {
		return c - u'A' + 10;
	}
	if (!ZipPath::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
	return -1;
}

$String* ZipPath::decodeUri($String* s) {
	$init(ZipPath);
	$useLocalCurrentObjectStackCache();
	if (s == nullptr) {
		return nullptr;
	}
	int32_t n = $nc(s)->length();
	if (n == 0) {
		return s;
	}
	if (s->indexOf((int32_t)u'%') < 0) {
		return s;
	}
	$var($StringBuilder, sb, $new($StringBuilder, n));
	$var($bytes, bb, $new($bytes, n));
	bool betweenBrackets = false;
	for (int32_t i = 0; i < n;) {
		char16_t c = s->charAt(i);
		if (c == u'[') {
			betweenBrackets = true;
		} else if (betweenBrackets && c == u']') {
			betweenBrackets = false;
		}
		if (c != u'%' || betweenBrackets) {
			sb->append(c);
			++i;
			continue;
		}
		int32_t nb = 0;
		while (c == u'%') {
			if (!ZipPath::$assertionsDisabled && !(n - i >= 2)) {
				$throwNew($AssertionError);
			}
			int32_t var$0 = (((int32_t)(decode(s->charAt(++i)) & (uint32_t)15)) << 4);
			bb->set(nb++, (int8_t)(var$0 | ((int32_t)(decode(s->charAt(++i)) & (uint32_t)15))));
			if (++i >= n) {
				break;
			}
			c = s->charAt(i);
		}
		$init($StandardCharsets);
		sb->append($$new($String, bb, 0, nb, $StandardCharsets::UTF_8));
	}
	return sb->toString();
}

int32_t ZipPath::compareTo(Object$* other) {
	return this->compareTo($cast($Path, other));
}

void clinit$ZipPath($Class* class$) {
	ZipPath::$assertionsDisabled = !ZipPath::class$->desiredAssertionStatus();
}

ZipPath::ZipPath() {
}

$Class* ZipPath::load$($String* name, bool initialize) {
	$loadClass(ZipPath, name, initialize, &_ZipPath_ClassInfo_, clinit$ZipPath, allocate$ZipPath);
	return class$;
}

$Class* ZipPath::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk