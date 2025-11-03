#include <jdk/nio/zipfs/ZipFileSystemProvider.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/nio/channels/AsynchronousFileChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/file/AccessMode.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystemAlreadyExistsException.h>
#include <java/nio/file/FileSystemNotFoundException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/ProviderMismatchException.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/zip/ZipException.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jdk/nio/zipfs/ZipPath.h>
#include <jcpp.h>

using $AccessModeArray = $Array<::java::nio::file::AccessMode>;
using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $AsynchronousFileChannel = ::java::nio::channels::AsynchronousFileChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $FileStore = ::java::nio::file::FileStore;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystemAlreadyExistsException = ::java::nio::file::FileSystemAlreadyExistsException;
using $FileSystemNotFoundException = ::java::nio::file::FileSystemNotFoundException;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $ProviderMismatchException = ::java::nio::file::ProviderMismatchException;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileAttributeView = ::java::nio::file::attribute::FileAttributeView;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $ZipException = ::java::util::zip::ZipException;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipPath = ::jdk::nio::zipfs::ZipPath;

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0 : public $PrivilegedExceptionAction {
	$class(ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Path* rec$) {
		$set(this, rec$, rec$);
	}
	virtual $Object* run() override {
		 return $of(ZipFileSystemProvider::lambda$removeFileSystem$0(rec$));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0>());
	}
	$Path* rec$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0::fieldInfos[2] = {
	{"rec$", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0, rec$)},
	{}
};
$MethodInfo ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0::*)($Path*)>(&ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0::class$ = nullptr;

$FieldInfo _ZipFileSystemProvider_FieldInfo_[] = {
	{"filesystems", "Ljava/util/Map;", "Ljava/util/Map<Ljava/nio/file/Path;Ljdk/nio/zipfs/ZipFileSystem;>;", $PRIVATE | $FINAL, $field(ZipFileSystemProvider, filesystems)},
	{}
};

$MethodInfo _ZipFileSystemProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystemProvider::*)()>(&ZipFileSystemProvider::init$))},
	{"checkAccess", "(Ljava/nio/file/Path;[Ljava/nio/file/AccessMode;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"copy", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"createDirectory", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute<*>;)V", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"delete", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"ensureFile", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ZipFileSystemProvider::*)($Path*)>(&ZipFileSystemProvider::ensureFile))},
	{"getFileAttributeView", "(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;", "<V::Ljava/nio/file/attribute/FileAttributeView;>(Ljava/nio/file/Path;Ljava/lang/Class<TV;>;[Ljava/nio/file/LinkOption;)TV;", $PUBLIC | $TRANSIENT},
	{"getFileStore", "(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileSystem", "(Ljava/net/URI;)Ljava/nio/file/FileSystem;", nullptr, $PUBLIC},
	{"getPath", "(Ljava/net/URI;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getScheme", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getZipFileSystem", "(Ljava/nio/file/Path;Ljava/util/Map;)Ljdk/nio/zipfs/ZipFileSystem;", "(Ljava/nio/file/Path;Ljava/util/Map<Ljava/lang/String;*>;)Ljdk/nio/zipfs/ZipFileSystem;", $PRIVATE, $method(static_cast<$ZipFileSystem*(ZipFileSystemProvider::*)($Path*,$Map*)>(&ZipFileSystemProvider::getZipFileSystem)), "java.io.IOException"},
	{"isHidden", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"isSameFile", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"lambda$removeFileSystem$0", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Path*(*)($Path*)>(&ZipFileSystemProvider::lambda$removeFileSystem$0)), "java.lang.Exception"},
	{"move", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"newAsynchronousFileChannel", "(Ljava/nio/file/Path;Ljava/util/Set;Ljava/util/concurrent/ExecutorService;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/AsynchronousFileChannel;", "(Ljava/nio/file/Path;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;Ljava/util/concurrent/ExecutorService;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/AsynchronousFileChannel;", $PUBLIC | $TRANSIENT},
	{"newByteChannel", "(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;", "(Ljava/nio/file/Path;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/SeekableByteChannel;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"newDirectoryStream", "(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;", "(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"newFileChannel", "(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;", "(Ljava/nio/file/Path;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/FileChannel;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"newFileSystem", "(Ljava/net/URI;Ljava/util/Map;)Ljava/nio/file/FileSystem;", "(Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;*>;)Ljava/nio/file/FileSystem;", $PUBLIC, nullptr, "java.io.IOException"},
	{"newFileSystem", "(Ljava/nio/file/Path;Ljava/util/Map;)Ljava/nio/file/FileSystem;", "(Ljava/nio/file/Path;Ljava/util/Map<Ljava/lang/String;*>;)Ljava/nio/file/FileSystem;", $PUBLIC, nullptr, "java.io.IOException"},
	{"newInputStream", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/InputStream;", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"newOutputStream", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"readAttributes", "(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;", "<A::Ljava/nio/file/attribute/BasicFileAttributes;>(Ljava/nio/file/Path;Ljava/lang/Class<TA;>;[Ljava/nio/file/LinkOption;)TA;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"readAttributes", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"readSymbolicLink", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"removeFileSystem", "(Ljava/nio/file/Path;Ljdk/nio/zipfs/ZipFileSystem;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"setAttribute", "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"toZipPath", "(Ljava/nio/file/Path;)Ljdk/nio/zipfs/ZipPath;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ZipPath*(*)($Path*)>(&ZipFileSystemProvider::toZipPath))},
	{"uriToPath", "(Ljava/net/URI;)Ljava/nio/file/Path;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ZipFileSystemProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystemProvider",
	"java.nio.file.spi.FileSystemProvider",
	nullptr,
	_ZipFileSystemProvider_FieldInfo_,
	_ZipFileSystemProvider_MethodInfo_
};

$Object* allocate$ZipFileSystemProvider($Class* clazz) {
	return $of($alloc(ZipFileSystemProvider));
}

void ZipFileSystemProvider::init$() {
	$FileSystemProvider::init$();
	$set(this, filesystems, $new($HashMap));
}

$String* ZipFileSystemProvider::getScheme() {
	return "jar"_s;
}

$Path* ZipFileSystemProvider::uriToPath($URI* uri) {
	$useLocalCurrentObjectStackCache();
	$var($String, scheme, $nc(uri)->getScheme());
	if ((scheme == nullptr) || !$nc(scheme)->equalsIgnoreCase($(getScheme()))) {
		$throwNew($IllegalArgumentException, $$str({"URI scheme is not \'"_s, $(getScheme()), "\'"_s}));
	}
	try {
		$var($String, spec, uri->getRawSchemeSpecificPart());
		int32_t sep = $nc(spec)->indexOf("!/"_s);
		if (sep != -1) {
			$assign(spec, spec->substring(0, sep));
		}
		return $nc($($Paths::get($$new($URI, spec))))->toAbsolutePath();
	} catch ($URISyntaxException& e) {
		$throwNew($IllegalArgumentException, $(e->getMessage()), e);
	}
	$shouldNotReachHere();
}

bool ZipFileSystemProvider::ensureFile($Path* path) {
	$useLocalCurrentObjectStackCache();
	try {
		$load($BasicFileAttributes);
		$var($BasicFileAttributes, attrs, $Files::readAttributes(path, $BasicFileAttributes::class$, $$new($LinkOptionArray, 0)));
		if (!$nc(attrs)->isRegularFile()) {
			$throwNew($UnsupportedOperationException);
		}
		return true;
	} catch ($IOException& ioe) {
		return false;
	}
	$shouldNotReachHere();
}

$FileSystem* ZipFileSystemProvider::newFileSystem($URI* uri, $Map* env) {
	$useLocalCurrentObjectStackCache();
	$var($Path, path, uriToPath(uri));
	$synchronized(this->filesystems) {
		$var($Path, realPath, nullptr);
		if (ensureFile(path)) {
			$assign(realPath, $nc(path)->toRealPath($$new($LinkOptionArray, 0)));
			if ($nc(this->filesystems)->containsKey(realPath)) {
				$throwNew($FileSystemAlreadyExistsException);
			}
		}
		$var($ZipFileSystem, zipfs, getZipFileSystem(path, env));
		if (realPath == nullptr) {
			$assign(realPath, $nc(path)->toRealPath($$new($LinkOptionArray, 0)));
		}
		$nc(this->filesystems)->put(realPath, zipfs);
		return zipfs;
	}
}

$FileSystem* ZipFileSystemProvider::newFileSystem($Path* path, $Map* env) {
	ensureFile(path);
	return getZipFileSystem(path, env);
}

$ZipFileSystem* ZipFileSystemProvider::getZipFileSystem($Path* path, $Map* env) {
	try {
		return $new($ZipFileSystem, this, path, env);
	} catch ($ZipException& ze) {
		$var($String, pname, $nc(path)->toString());
		bool var$0 = $nc(pname)->endsWith(".zip"_s);
		if (var$0 || $nc(pname)->endsWith(".jar"_s)) {
			$throw(ze);
		}
		$throwNew($UnsupportedOperationException);
	}
	$shouldNotReachHere();
}

$Path* ZipFileSystemProvider::getPath($URI* uri) {
	$useLocalCurrentObjectStackCache();
	$var($String, spec, $nc(uri)->getSchemeSpecificPart());
	int32_t sep = $nc(spec)->indexOf("!/"_s);
	if (sep == -1) {
		$throwNew($IllegalArgumentException, $$str({"URI: "_s, uri, " does not contain path info ex. jar:file:/c:/foo.zip!/BAR"_s}));
	}
	return $nc($(getFileSystem(uri)))->getPath($(spec->substring(sep + 1)), $$new($StringArray, 0));
}

$FileSystem* ZipFileSystemProvider::getFileSystem($URI* uri) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->filesystems) {
		$var($ZipFileSystem, zipfs, nullptr);
		try {
			$assign(zipfs, $cast($ZipFileSystem, $nc(this->filesystems)->get($($nc($(uriToPath(uri)))->toRealPath($$new($LinkOptionArray, 0))))));
		} catch ($IOException& x) {
		}
		if (zipfs == nullptr) {
			$throwNew($FileSystemNotFoundException);
		}
		return zipfs;
	}
}

$ZipPath* ZipFileSystemProvider::toZipPath($Path* path) {
	$init(ZipFileSystemProvider);
	if (path == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($ZipPath, path))) {
		$throwNew($ProviderMismatchException);
	}
	return $cast($ZipPath, path);
}

void ZipFileSystemProvider::checkAccess($Path* path, $AccessModeArray* modes) {
	$nc($(toZipPath(path)))->checkAccess(modes);
}

void ZipFileSystemProvider::copy($Path* src, $Path* target, $CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$nc($(toZipPath(src)))->copy($(toZipPath(target)), options);
}

void ZipFileSystemProvider::createDirectory($Path* path, $FileAttributeArray* attrs) {
	$nc($(toZipPath(path)))->createDirectory(attrs);
}

void ZipFileSystemProvider::delete$($Path* path) {
	$nc($(toZipPath(path)))->delete$();
}

$FileAttributeView* ZipFileSystemProvider::getFileAttributeView($Path* path, $Class* type, $LinkOptionArray* options) {
	return $nc($(toZipPath(path)))->getFileAttributeView(type);
}

$FileStore* ZipFileSystemProvider::getFileStore($Path* path) {
	return $nc($(toZipPath(path)))->getFileStore();
}

bool ZipFileSystemProvider::isHidden($Path* path) {
	return $nc($(toZipPath(path)))->isHidden();
}

bool ZipFileSystemProvider::isSameFile($Path* path, $Path* other) {
	return $nc($(toZipPath(path)))->isSameFile(other);
}

void ZipFileSystemProvider::move($Path* src, $Path* target, $CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$nc($(toZipPath(src)))->move($(toZipPath(target)), options);
}

$AsynchronousFileChannel* ZipFileSystemProvider::newAsynchronousFileChannel($Path* path, $Set* options, $ExecutorService* exec, $FileAttributeArray* attrs) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$SeekableByteChannel* ZipFileSystemProvider::newByteChannel($Path* path, $Set* options, $FileAttributeArray* attrs) {
	return $nc($(toZipPath(path)))->newByteChannel(options, attrs);
}

$DirectoryStream* ZipFileSystemProvider::newDirectoryStream($Path* path, $DirectoryStream$Filter* filter) {
	return $nc($(toZipPath(path)))->newDirectoryStream(filter);
}

$FileChannel* ZipFileSystemProvider::newFileChannel($Path* path, $Set* options, $FileAttributeArray* attrs) {
	return $nc($(toZipPath(path)))->newFileChannel(options, attrs);
}

$InputStream* ZipFileSystemProvider::newInputStream($Path* path, $OpenOptionArray* options) {
	return $nc($(toZipPath(path)))->newInputStream(options);
}

$OutputStream* ZipFileSystemProvider::newOutputStream($Path* path, $OpenOptionArray* options) {
	return $nc($(toZipPath(path)))->newOutputStream(options);
}

$BasicFileAttributes* ZipFileSystemProvider::readAttributes($Path* path, $Class* type, $LinkOptionArray* options) {
	return $nc($(toZipPath(path)))->readAttributes(type);
}

$Map* ZipFileSystemProvider::readAttributes($Path* path, $String* attributes, $LinkOptionArray* options) {
	return $nc($(toZipPath(path)))->readAttributes(attributes, options);
}

$Path* ZipFileSystemProvider::readSymbolicLink($Path* link) {
	$throwNew($UnsupportedOperationException, "Not supported."_s);
	$shouldNotReachHere();
}

void ZipFileSystemProvider::setAttribute($Path* path, $String* attribute, Object$* value, $LinkOptionArray* options) {
	$nc($(toZipPath(path)))->setAttribute(attribute, value, options);
}

void ZipFileSystemProvider::removeFileSystem($Path* zfpath$renamed, $ZipFileSystem* zfs) {
	$useLocalCurrentObjectStackCache();
	$var($Path, zfpath, zfpath$renamed);
	$beforeCallerSensitive();
	$synchronized(this->filesystems) {
		$var($Path, tempPath, zfpath);
		$var($PrivilegedExceptionAction, action, static_cast<$PrivilegedExceptionAction*>($new(ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0, static_cast<$Path*>($nc(tempPath)))));
		try {
			$assign(zfpath, $cast($Path, $AccessController::doPrivileged(action)));
		} catch ($PrivilegedActionException& e) {
			$throw($cast($IOException, $(e->getException())));
		}
		if ($equals($nc(this->filesystems)->get(zfpath), zfs)) {
			$nc(this->filesystems)->remove(zfpath);
		}
	}
}

$Path* ZipFileSystemProvider::lambda$removeFileSystem$0($Path* rec$) {
	$init(ZipFileSystemProvider);
	return $nc(rec$)->toRealPath($$new($LinkOptionArray, 0));
}

ZipFileSystemProvider::ZipFileSystemProvider() {
}

$Class* ZipFileSystemProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0::classInfo$.name)) {
			return ZipFileSystemProvider$$Lambda$lambda$removeFileSystem$0::load$(name, initialize);
		}
	}
	$loadClass(ZipFileSystemProvider, name, initialize, &_ZipFileSystemProvider_ClassInfo_, allocate$ZipFileSystemProvider);
	return class$;
}

$Class* ZipFileSystemProvider::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk