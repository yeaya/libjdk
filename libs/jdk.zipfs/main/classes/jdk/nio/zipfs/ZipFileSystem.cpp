#include <jdk/nio/zipfs/ZipFileSystem.h>

#include <java/io/BufferedOutputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runtime$Version.h>
#include <java/lang/Runtime.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/file/AccessMode.h>
#include <java/nio/file/ClosedFileSystemException.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/DirectoryNotEmptyException.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/FileAlreadyExistsException.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystemException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/NoSuchFileException.h>
#include <java/nio/file/NotDirectoryException.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <java/nio/file/ReadOnlyFileSystemException.h>
#include <java/nio/file/StandardCopyOption.h>
#include <java/nio/file/StandardOpenOption.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/nio/file/attribute/PosixFileAttributeView.h>
#include <java/nio/file/attribute/PosixFileAttributes.h>
#include <java/nio/file/attribute/PosixFilePermission.h>
#include <java/nio/file/attribute/PosixFilePermissions.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/nio/file/attribute/UserPrincipalLookupService.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/security/AccessController.h>
#include <java/security/Principal.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/jar/Attributes$Name.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/Manifest.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/zip/Deflater.h>
#include <java/util/zip/DeflaterOutputStream.h>
#include <java/util/zip/Inflater.h>
#include <java/util/zip/InflaterInputStream.h>
#include <java/util/zip/ZipException.h>
#include <jdk/nio/zipfs/ByteArrayChannel.h>
#include <jdk/nio/zipfs/ZipCoder.h>
#include <jdk/nio/zipfs/ZipConstants.h>
#include <jdk/nio/zipfs/ZipFileAttributes.h>
#include <jdk/nio/zipfs/ZipFileStore.h>
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
#include <jdk/nio/zipfs/ZipPath.h>
#include <jdk/nio/zipfs/ZipUtils.h>
#include <jcpp.h>

#undef APPEND
#undef CEN
#undef COMPRESSION_METHOD_DEFLATED
#undef COMPRESSION_METHOD_STORED
#undef COPY
#undef COPY_ATTRIBUTES
#undef CREATE
#undef CREATE_NEW
#undef DEFAULT_COMPRESSION
#undef DEFAULT_PERMISSIONS
#undef FILECH
#undef GLOB_SYNTAX
#undef LOOKUPKEY
#undef MAX_FLATER
#undef MULTI_RELEASE
#undef NEW
#undef PROPERTY_COMPRESSION_METHOD
#undef PROPERTY_DEFAULT_GROUP
#undef PROPERTY_DEFAULT_OWNER
#undef PROPERTY_DEFAULT_PERMISSIONS
#undef PROPERTY_MULTI_RELEASE
#undef PROPERTY_POSIX
#undef PROPERTY_RELEASE_VERSION
#undef READ
#undef REGEX_SYNTAX
#undef REPLACE_EXISTING
#undef ROOTPATH
#undef TRUE
#undef TRUNCATE_EXISTING
#undef WRITE

using $AccessModeArray = $Array<::java::nio::file::AccessMode>;
using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ZipFileSystem$IndexNodeArray = $Array<::jdk::nio::zipfs::ZipFileSystem$IndexNode>;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runtime = ::java::lang::Runtime;
using $Runtime$Version = ::java::lang::Runtime$Version;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $AccessMode = ::java::nio::file::AccessMode;
using $ClosedFileSystemException = ::java::nio::file::ClosedFileSystemException;
using $CopyOption = ::java::nio::file::CopyOption;
using $DirectoryNotEmptyException = ::java::nio::file::DirectoryNotEmptyException;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $FileAlreadyExistsException = ::java::nio::file::FileAlreadyExistsException;
using $FileStore = ::java::nio::file::FileStore;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystemException = ::java::nio::file::FileSystemException;
using $Files = ::java::nio::file::Files;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $NotDirectoryException = ::java::nio::file::NotDirectoryException;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;
using $ReadOnlyFileSystemException = ::java::nio::file::ReadOnlyFileSystemException;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;
using $WatchService = ::java::nio::file::WatchService;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $PosixFileAttributeView = ::java::nio::file::attribute::PosixFileAttributeView;
using $PosixFileAttributes = ::java::nio::file::attribute::PosixFileAttributes;
using $PosixFilePermission = ::java::nio::file::attribute::PosixFilePermission;
using $PosixFilePermissions = ::java::nio::file::attribute::PosixFilePermissions;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $UserPrincipalLookupService = ::java::nio::file::attribute::UserPrincipalLookupService;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $AccessController = ::java::security::AccessController;
using $Principal = ::java::security::Principal;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReadWriteLock = ::java::util::concurrent::locks::ReadWriteLock;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Attributes = ::java::util::jar::Attributes;
using $Attributes$Name = ::java::util::jar::Attributes$Name;
using $Manifest = ::java::util::jar::Manifest;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Deflater = ::java::util::zip::Deflater;
using $DeflaterOutputStream = ::java::util::zip::DeflaterOutputStream;
using $Inflater = ::java::util::zip::Inflater;
using $InflaterInputStream = ::java::util::zip::InflaterInputStream;
using $ZipException = ::java::util::zip::ZipException;
using $ByteArrayChannel = ::jdk::nio::zipfs::ByteArrayChannel;
using $ZipCoder = ::jdk::nio::zipfs::ZipCoder;
using $ZipConstants = ::jdk::nio::zipfs::ZipConstants;
using $ZipFileAttributes = ::jdk::nio::zipfs::ZipFileAttributes;
using $ZipFileStore = ::jdk::nio::zipfs::ZipFileStore;
using $ZipFileSystem$1 = ::jdk::nio::zipfs::ZipFileSystem$1;
using $ZipFileSystem$2 = ::jdk::nio::zipfs::ZipFileSystem$2;
using $ZipFileSystem$DeflatingEntryOutputStream = ::jdk::nio::zipfs::ZipFileSystem$DeflatingEntryOutputStream;
using $ZipFileSystem$END = ::jdk::nio::zipfs::ZipFileSystem$END;
using $ZipFileSystem$Entry = ::jdk::nio::zipfs::ZipFileSystem$Entry;
using $ZipFileSystem$EntryInputStream = ::jdk::nio::zipfs::ZipFileSystem$EntryInputStream;
using $ZipFileSystem$EntryOutputChannel = ::jdk::nio::zipfs::ZipFileSystem$EntryOutputChannel;
using $ZipFileSystem$EntryOutputStream = ::jdk::nio::zipfs::ZipFileSystem$EntryOutputStream;
using $ZipFileSystem$EntryOutputStreamCRC32 = ::jdk::nio::zipfs::ZipFileSystem$EntryOutputStreamCRC32;
using $ZipFileSystem$EntryOutputStreamDef = ::jdk::nio::zipfs::ZipFileSystem$EntryOutputStreamDef;
using $ZipFileSystem$IndexNode = ::jdk::nio::zipfs::ZipFileSystem$IndexNode;
using $ZipFileSystem$ParentLookup = ::jdk::nio::zipfs::ZipFileSystem$ParentLookup;
using $ZipFileSystem$PosixEntry = ::jdk::nio::zipfs::ZipFileSystem$PosixEntry;
using $ZipFileSystemProvider = ::jdk::nio::zipfs::ZipFileSystemProvider;
using $ZipPath = ::jdk::nio::zipfs::ZipPath;
using $ZipUtils = ::jdk::nio::zipfs::ZipUtils;

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileSystem$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(ZipFileSystem$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(ZipFileSystem::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ZipFileSystem$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$static$0::*)()>(&ZipFileSystem$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$static$0::class$ = nullptr;

class ZipFileSystem$$Lambda$lambda$new$1$1 : public $PrivilegedAction {
	$class(ZipFileSystem$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Path* zfpath) {
		$set(this, zfpath, zfpath);
	}
	virtual $Object* run() override {
		 return $of(ZipFileSystem::lambda$new$1(zfpath));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$new$1$1>());
	}
	$Path* zfpath = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystem$$Lambda$lambda$new$1$1::fieldInfos[2] = {
	{"zfpath", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$new$1$1, zfpath)},
	{}
};
$MethodInfo ZipFileSystem$$Lambda$lambda$new$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$new$1$1::*)($Path*)>(&ZipFileSystem$$Lambda$lambda$new$1$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$new$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$new$1$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$new$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$new$1$1::class$ = nullptr;

class ZipFileSystem$$Lambda$lambda$initOwner$2$2 : public $PrivilegedExceptionAction {
	$class(ZipFileSystem$$Lambda$lambda$initOwner$2$2, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Path* zfpath) {
		$set(this, zfpath, zfpath);
	}
	virtual $Object* run() override {
		 return $of(ZipFileSystem::lambda$initOwner$2(zfpath));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$initOwner$2$2>());
	}
	$Path* zfpath = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystem$$Lambda$lambda$initOwner$2$2::fieldInfos[2] = {
	{"zfpath", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$initOwner$2$2, zfpath)},
	{}
};
$MethodInfo ZipFileSystem$$Lambda$lambda$initOwner$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$initOwner$2$2::*)($Path*)>(&ZipFileSystem$$Lambda$lambda$initOwner$2$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$initOwner$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$initOwner$2$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$initOwner$2$2::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$initOwner$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$initOwner$2$2::class$ = nullptr;

class ZipFileSystem$$Lambda$lambda$initOwner$3$3 : public $PrivilegedAction {
	$class(ZipFileSystem$$Lambda$lambda$initOwner$3$3, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(ZipFileSystem::lambda$initOwner$3());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$initOwner$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ZipFileSystem$$Lambda$lambda$initOwner$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$initOwner$3$3::*)()>(&ZipFileSystem$$Lambda$lambda$initOwner$3$3::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$initOwner$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$initOwner$3$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$initOwner$3$3::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$initOwner$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$initOwner$3$3::class$ = nullptr;

class ZipFileSystem$$Lambda$lambda$initOwner$4$4 : public $UserPrincipal {
	$class(ZipFileSystem$$Lambda$lambda$initOwner$4$4, $NO_CLASS_INIT, $UserPrincipal)
public:
	void init$($String* userName) {
		$set(this, userName, userName);
	}
	virtual $String* getName() override {
		 return ZipFileSystem::lambda$initOwner$4(userName);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$initOwner$4$4>());
	}
	$String* userName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystem$$Lambda$lambda$initOwner$4$4::fieldInfos[2] = {
	{"userName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$initOwner$4$4, userName)},
	{}
};
$MethodInfo ZipFileSystem$$Lambda$lambda$initOwner$4$4::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$initOwner$4$4::*)($String*)>(&ZipFileSystem$$Lambda$lambda$initOwner$4$4::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$initOwner$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$initOwner$4$4",
	"java.lang.Object",
	"java.nio.file.attribute.UserPrincipal",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$initOwner$4$4::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$initOwner$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$initOwner$4$4::class$ = nullptr;

class ZipFileSystem$$Lambda$lambda$initOwner$5$5 : public $GroupPrincipal {
	$class(ZipFileSystem$$Lambda$lambda$initOwner$5$5, $NO_CLASS_INIT, $GroupPrincipal)
public:
	void init$(Object$* o) {
		$set(this, o, o);
	}
	virtual $String* getName() override {
		 return ZipFileSystem::lambda$initOwner$5(o);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$initOwner$5$5>());
	}
	$Object* o = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystem$$Lambda$lambda$initOwner$5$5::fieldInfos[2] = {
	{"o", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$initOwner$5$5, o)},
	{}
};
$MethodInfo ZipFileSystem$$Lambda$lambda$initOwner$5$5::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$initOwner$5$5::*)(Object$*)>(&ZipFileSystem$$Lambda$lambda$initOwner$5$5::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$initOwner$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$initOwner$5$5",
	"java.lang.Object",
	"java.nio.file.attribute.GroupPrincipal",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$initOwner$5$5::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$initOwner$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$initOwner$5$5::class$ = nullptr;

class ZipFileSystem$$Lambda$getName$6 : public $GroupPrincipal {
	$class(ZipFileSystem$$Lambda$getName$6, $NO_CLASS_INIT, $GroupPrincipal)
public:
	void init$($Principal* inst) {
		$set(this, inst$, inst);
	}
	virtual $String* getName() override {
		 return $nc(inst$)->getName();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$getName$6>());
	}
	$Principal* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystem$$Lambda$getName$6::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$getName$6, inst$)},
	{}
};
$MethodInfo ZipFileSystem$$Lambda$getName$6::methodInfos[3] = {
	{"<init>", "(Ljava/security/Principal;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$getName$6::*)($Principal*)>(&ZipFileSystem$$Lambda$getName$6::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$getName$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$getName$6",
	"java.lang.Object",
	"java.nio.file.attribute.GroupPrincipal",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$getName$6::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$getName$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$getName$6::class$ = nullptr;

class ZipFileSystem$$Lambda$lambda$initGroup$6$7 : public $PrivilegedExceptionAction {
	$class(ZipFileSystem$$Lambda$lambda$initGroup$6$7, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($PosixFileAttributeView* zfpv) {
		$set(this, zfpv, zfpv);
	}
	virtual $Object* run() override {
		 return $of(ZipFileSystem::lambda$initGroup$6(zfpv));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$initGroup$6$7>());
	}
	$PosixFileAttributeView* zfpv = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystem$$Lambda$lambda$initGroup$6$7::fieldInfos[2] = {
	{"zfpv", "Ljava/nio/file/attribute/PosixFileAttributeView;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$initGroup$6$7, zfpv)},
	{}
};
$MethodInfo ZipFileSystem$$Lambda$lambda$initGroup$6$7::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/attribute/PosixFileAttributeView;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$initGroup$6$7::*)($PosixFileAttributeView*)>(&ZipFileSystem$$Lambda$lambda$initGroup$6$7::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$initGroup$6$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$initGroup$6$7",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$initGroup$6$7::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$initGroup$6$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$initGroup$6$7::class$ = nullptr;

class ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8 : public $PathMatcher {
	$class(ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8, $NO_CLASS_INIT, $PathMatcher)
public:
	void init$($Pattern* pattern) {
		$set(this, pattern, pattern);
	}
	virtual bool matches($Path* path) override {
		 return ZipFileSystem::lambda$getPathMatcher$8(pattern, path);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8>());
	}
	$Pattern* pattern = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8::fieldInfos[2] = {
	{"pattern", "Ljava/util/regex/Pattern;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8, pattern)},
	{}
};
$MethodInfo ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8::methodInfos[3] = {
	{"<init>", "(Ljava/util/regex/Pattern;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8::*)($Pattern*)>(&ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8::init$))},
	{"matches", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8",
	"java.lang.Object",
	"java.nio.file.PathMatcher",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8::class$ = nullptr;

class ZipFileSystem$$Lambda$lambda$close$9$9 : public $PrivilegedExceptionAction {
	$class(ZipFileSystem$$Lambda$lambda$close$9$9, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$(ZipFileSystem* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$close$9());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$close$9$9>());
	}
	ZipFileSystem* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystem$$Lambda$lambda$close$9$9::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$close$9$9, inst$)},
	{}
};
$MethodInfo ZipFileSystem$$Lambda$lambda$close$9$9::methodInfos[3] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$close$9$9::*)(ZipFileSystem*)>(&ZipFileSystem$$Lambda$lambda$close$9$9::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$close$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$close$9$9",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$close$9$9::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$close$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$close$9$9::class$ = nullptr;

class ZipFileSystem$$Lambda$lambda$close$10$10 : public $PrivilegedExceptionAction {
	$class(ZipFileSystem$$Lambda$lambda$close$10$10, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Path* p) {
		$set(this, p, p);
	}
	virtual $Object* run() override {
		 return $of(ZipFileSystem::lambda$close$10(p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$close$10$10>());
	}
	$Path* p = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystem$$Lambda$lambda$close$10$10::fieldInfos[2] = {
	{"p", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$close$10$10, p)},
	{}
};
$MethodInfo ZipFileSystem$$Lambda$lambda$close$10$10::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$close$10$10::*)($Path*)>(&ZipFileSystem$$Lambda$lambda$close$10$10::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$close$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$close$10$10",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$close$10$10::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$close$10$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$close$10$10::class$ = nullptr;

class ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11 : public $Consumer {
	$class(ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ZipFileSystem* inst, $HashMap* aliasMap) {
		$set(this, inst$, inst);
		$set(this, aliasMap, aliasMap);
	}
	virtual void accept(Object$* versionNode) override {
		$nc(inst$)->lambda$createVersionedLinks$12(aliasMap, $cast($ZipFileSystem$IndexNode, versionNode));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11>());
	}
	ZipFileSystem* inst$ = nullptr;
	$HashMap* aliasMap = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11, inst$)},
	{"aliasMap", "Ljava/util/HashMap;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11, aliasMap)},
	{}
};
$MethodInfo ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11::methodInfos[3] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljava/util/HashMap;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11::*)(ZipFileSystem*,$HashMap*)>(&ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11::class$ = nullptr;

class ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12 : public $Function {
	$class(ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12, $NO_CLASS_INIT, $Function)
public:
	void init$($HashMap* aliasMap) {
		$set(this, aliasMap, aliasMap);
	}
	virtual $Object* apply(Object$* path) override {
		 return $of(ZipFileSystem::lambda$createVersionedLinks$13(aliasMap, $cast($bytes, path)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12>());
	}
	$HashMap* aliasMap = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12::fieldInfos[2] = {
	{"aliasMap", "Ljava/util/HashMap;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12, aliasMap)},
	{}
};
$MethodInfo ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12::methodInfos[3] = {
	{"<init>", "(Ljava/util/HashMap;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12::*)($HashMap*)>(&ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12::class$ = nullptr;

class ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13 : public $Consumer {
	$class(ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13, $NO_CLASS_INIT, $Consumer)
public:
	void init$(ZipFileSystem* inst, $HashMap* aliasMap, $ZipFileSystem$IndexNode* versionNode) {
		$set(this, inst$, inst);
		$set(this, aliasMap, aliasMap);
		$set(this, versionNode, versionNode);
	}
	virtual void accept(Object$* entryNode) override {
		$nc(inst$)->lambda$createVersionedLinks$11(aliasMap, versionNode, $cast($ZipFileSystem$IndexNode, entryNode));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13>());
	}
	ZipFileSystem* inst$ = nullptr;
	$HashMap* aliasMap = nullptr;
	$ZipFileSystem$IndexNode* versionNode = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13, inst$)},
	{"aliasMap", "Ljava/util/HashMap;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13, aliasMap)},
	{"versionNode", "Ljdk/nio/zipfs/ZipFileSystem$IndexNode;", nullptr, $PUBLIC, $field(ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13, versionNode)},
	{}
};
$MethodInfo ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13::methodInfos[3] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljava/util/HashMap;Ljdk/nio/zipfs/ZipFileSystem$IndexNode;)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13::*)(ZipFileSystem*,$HashMap*,$ZipFileSystem$IndexNode*)>(&ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.nio.zipfs.ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13::class$ = nullptr;

$FieldInfo _ZipFileSystem_FieldInfo_[] = {
	{"isWindows", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, isWindows)},
	{"ROOTPATH", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, ROOTPATH)},
	{"PROPERTY_POSIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, PROPERTY_POSIX)},
	{"PROPERTY_DEFAULT_OWNER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, PROPERTY_DEFAULT_OWNER)},
	{"PROPERTY_DEFAULT_GROUP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, PROPERTY_DEFAULT_GROUP)},
	{"PROPERTY_DEFAULT_PERMISSIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, PROPERTY_DEFAULT_PERMISSIONS)},
	{"PROPERTY_RELEASE_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, PROPERTY_RELEASE_VERSION)},
	{"PROPERTY_MULTI_RELEASE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, PROPERTY_MULTI_RELEASE)},
	{"DEFAULT_PERMISSIONS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, DEFAULT_PERMISSIONS)},
	{"PROPERTY_COMPRESSION_METHOD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, PROPERTY_COMPRESSION_METHOD)},
	{"COMPRESSION_METHOD_DEFLATED", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, COMPRESSION_METHOD_DEFLATED)},
	{"COMPRESSION_METHOD_STORED", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, COMPRESSION_METHOD_STORED)},
	{"provider", "Ljdk/nio/zipfs/ZipFileSystemProvider;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, provider$)},
	{"zfpath", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, zfpath)},
	{"zc", "Ljdk/nio/zipfs/ZipCoder;", nullptr, $FINAL, $field(ZipFileSystem, zc)},
	{"rootdir", "Ljdk/nio/zipfs/ZipPath;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, rootdir)},
	{"readOnly", "Z", nullptr, $PRIVATE, $field(ZipFileSystem, readOnly)},
	{"zfsDefaultTimeStamp", "J", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, zfsDefaultTimeStamp)},
	{"noExtt", "Z", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, noExtt)},
	{"useTempFile", "Z", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, useTempFile)},
	{"forceEnd64", "Z", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, forceEnd64)},
	{"defaultCompressionMethod", "I", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, defaultCompressionMethod)},
	{"entryLookup", "Ljava/util/function/Function;", "Ljava/util/function/Function<[B[B>;", $PRIVATE, $field(ZipFileSystem, entryLookup)},
	{"supportPosix", "Z", nullptr, $FINAL, $field(ZipFileSystem, supportPosix)},
	{"defaultOwner", "Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, defaultOwner)},
	{"defaultGroup", "Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, defaultGroup)},
	{"defaultPermissions", "Ljava/util/Set;", "Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;", $PRIVATE | $FINAL, $field(ZipFileSystem, defaultPermissions)},
	{"supportedFileAttributeViews", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ZipFileSystem, supportedFileAttributeViews$)},
	{"GLOB_SYNTAX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, GLOB_SYNTAX)},
	{"REGEX_SYNTAX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipFileSystem, REGEX_SYNTAX)},
	{"streams", "Ljava/util/Set;", "Ljava/util/Set<Ljava/io/InputStream;>;", $PRIVATE, $field(ZipFileSystem, streams)},
	{"tmppaths", "Ljava/util/Set;", "Ljava/util/Set<Ljava/nio/file/Path;>;", $PRIVATE | $FINAL, $field(ZipFileSystem, tmppaths)},
	{"isOpen", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ZipFileSystem, isOpen$)},
	{"ch", "Ljava/nio/channels/SeekableByteChannel;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, ch)},
	{"cen", "[B", nullptr, $FINAL, $field(ZipFileSystem, cen)},
	{"end", "Ljdk/nio/zipfs/ZipFileSystem$END;", nullptr, $PRIVATE, $field(ZipFileSystem, end)},
	{"locpos", "J", nullptr, $PRIVATE, $field(ZipFileSystem, locpos)},
	{"rwlock", "Ljava/util/concurrent/locks/ReadWriteLock;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, rwlock)},
	{"inodes", "Ljava/util/LinkedHashMap;", "Ljava/util/LinkedHashMap<Ljdk/nio/zipfs/ZipFileSystem$IndexNode;Ljdk/nio/zipfs/ZipFileSystem$IndexNode;>;", $PRIVATE, $field(ZipFileSystem, inodes)},
	{"hasUpdate", "Z", nullptr, $PRIVATE, $field(ZipFileSystem, hasUpdate)},
	{"LOOKUPKEY", "Ljdk/nio/zipfs/ZipFileSystem$IndexNode;", nullptr, $PRIVATE | $FINAL, $field(ZipFileSystem, LOOKUPKEY)},
	{"MAX_FLATER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZipFileSystem, MAX_FLATER)},
	{"inflaters", "Ljava/util/List;", "Ljava/util/List<Ljava/util/zip/Inflater;>;", $PRIVATE | $FINAL, $field(ZipFileSystem, inflaters)},
	{"deflaters", "Ljava/util/List;", "Ljava/util/List<Ljava/util/zip/Deflater;>;", $PRIVATE | $FINAL, $field(ZipFileSystem, deflaters)},
	{}
};

$MethodInfo _ZipFileSystem_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystemProvider;Ljava/nio/file/Path;Ljava/util/Map;)V", "(Ljdk/nio/zipfs/ZipFileSystemProvider;Ljava/nio/file/Path;Ljava/util/Map<Ljava/lang/String;*>;)V", 0, $method(static_cast<void(ZipFileSystem::*)($ZipFileSystemProvider*,$Path*,$Map*)>(&ZipFileSystem::init$)), "java.io.IOException"},
	{"beginRead", "()V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)()>(&ZipFileSystem::beginRead))},
	{"beginWrite", "()V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)()>(&ZipFileSystem::beginWrite))},
	{"buildNodeTree", "()V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)()>(&ZipFileSystem::buildNodeTree))},
	{"checkAccess", "([B)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"checkEncoding", "([B)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ZipFileSystem::*)($bytes*)>(&ZipFileSystem::checkEncoding)), "java.util.zip.ZipException"},
	{"checkOptions", "(Ljava/util/Set;)V", "(Ljava/util/Set<+Ljava/nio/file/OpenOption;>;)V", $PRIVATE, $method(static_cast<void(ZipFileSystem::*)($Set*)>(&ZipFileSystem::checkOptions))},
	{"checkParents", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)($bytes*)>(&ZipFileSystem::checkParents)), "java.io.IOException"},
	{"checkUTF8", "([B)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ZipFileSystem::*)($bytes*)>(&ZipFileSystem::checkUTF8)), "java.util.zip.ZipException"},
	{"checkWritable", "()V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)()>(&ZipFileSystem::checkWritable))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"copyFile", "(Z[B[B[Ljava/nio/file/CopyOption;)V", nullptr, $TRANSIENT, nullptr, "java.io.IOException"},
	{"copyLOCEntry", "(Ljdk/nio/zipfs/ZipFileSystem$Entry;ZLjava/io/OutputStream;J[B)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ZipFileSystem::*)($ZipFileSystem$Entry*,bool,$OutputStream*,int64_t,$bytes*)>(&ZipFileSystem::copyLOCEntry)), "java.io.IOException"},
	{"createDirectory", "([B[Ljava/nio/file/attribute/FileAttribute;)V", "([B[Ljava/nio/file/attribute/FileAttribute<*>;)V", $TRANSIENT, nullptr, "java.io.IOException"},
	{"createTempFileInSameDirectoryAs", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(static_cast<$Path*(ZipFileSystem::*)($Path*)>(&ZipFileSystem::createTempFileInSameDirectoryAs)), "java.io.IOException"},
	{"createVersionedLinks", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)(int32_t)>(&ZipFileSystem::createVersionedLinks))},
	{"deleteFile", "([BZ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"endRead", "()V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)()>(&ZipFileSystem::endRead))},
	{"endWrite", "()V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)()>(&ZipFileSystem::endWrite))},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)()>(&ZipFileSystem::ensureOpen))},
	{"exists", "([B)Z", nullptr, 0},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"findEND", "()Ljdk/nio/zipfs/ZipFileSystem$END;", nullptr, $PRIVATE, $method(static_cast<$ZipFileSystem$END*(ZipFileSystem::*)()>(&ZipFileSystem::findEND)), "java.io.IOException"},
	{"getBytes", "(Ljava/lang/String;)[B", nullptr, $FINAL, $method(static_cast<$bytes*(ZipFileSystem::*)($String*)>(&ZipFileSystem::getBytes))},
	{"getDefaultCompressionMethod", "(Ljava/util/Map;)I", "(Ljava/util/Map<Ljava/lang/String;*>;)I", $PRIVATE, $method(static_cast<int32_t(ZipFileSystem::*)($Map*)>(&ZipFileSystem::getDefaultCompressionMethod))},
	{"getDeflater", "()Ljava/util/zip/Deflater;", nullptr, $PRIVATE, $method(static_cast<$Deflater*(ZipFileSystem::*)()>(&ZipFileSystem::getDeflater))},
	{"getEntry", "([B)Ljdk/nio/zipfs/ZipFileSystem$Entry;", nullptr, $PRIVATE, $method(static_cast<$ZipFileSystem$Entry*(ZipFileSystem::*)($bytes*)>(&ZipFileSystem::getEntry)), "java.io.IOException"},
	{"getFileAttributes", "([B)Ljdk/nio/zipfs/ZipFileAttributes;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getFileStore", "(Ljdk/nio/zipfs/ZipPath;)Ljava/nio/file/FileStore;", nullptr, 0},
	{"getFileStores", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/FileStore;>;", $PUBLIC},
	{"getInflater", "()Ljava/util/zip/Inflater;", nullptr, $PRIVATE, $method(static_cast<$Inflater*(ZipFileSystem::*)()>(&ZipFileSystem::getInflater))},
	{"getInode", "([B)Ljdk/nio/zipfs/ZipFileSystem$IndexNode;", nullptr, $PRIVATE, $method(static_cast<$ZipFileSystem$IndexNode*(ZipFileSystem::*)($bytes*)>(&ZipFileSystem::getInode))},
	{"getInputStream", "(Ljdk/nio/zipfs/ZipFileSystem$Entry;)Ljava/io/InputStream;", nullptr, $PRIVATE, $method(static_cast<$InputStream*(ZipFileSystem::*)($ZipFileSystem$Entry*)>(&ZipFileSystem::getInputStream)), "java.io.IOException"},
	{"getOrCreateInode", "([BZ)Ljdk/nio/zipfs/ZipFileSystem$IndexNode;", nullptr, $PRIVATE, $method(static_cast<$ZipFileSystem$IndexNode*(ZipFileSystem::*)($bytes*,bool)>(&ZipFileSystem::getOrCreateInode))},
	{"getOutputStream", "(Ljdk/nio/zipfs/ZipFileSystem$Entry;)Ljava/io/OutputStream;", nullptr, $PRIVATE, $method(static_cast<$OutputStream*(ZipFileSystem::*)($ZipFileSystem$Entry*)>(&ZipFileSystem::getOutputStream)), "java.io.IOException"},
	{"getParent", "([B)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&ZipFileSystem::getParent))},
	{"getParentOff", "([B)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*)>(&ZipFileSystem::getParentOff))},
	{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljdk/nio/zipfs/ZipPath;", nullptr, $PUBLIC | $TRANSIENT},
	{"getPathMatcher", "(Ljava/lang/String;)Ljava/nio/file/PathMatcher;", nullptr, $PUBLIC},
	{"getPosixAttributes", "(Ljava/nio/file/Path;)Ljava/nio/file/attribute/PosixFileAttributes;", nullptr, $PRIVATE, $method(static_cast<$PosixFileAttributes*(ZipFileSystem::*)($Path*)>(&ZipFileSystem::getPosixAttributes)), "java.io.IOException"},
	{"getRootDir", "()Ljdk/nio/zipfs/ZipPath;", nullptr, 0},
	{"getRootDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/Path;>;", $PUBLIC},
	{"getRootName", "(Ljdk/nio/zipfs/ZipFileSystem$IndexNode;Ljdk/nio/zipfs/ZipFileSystem$IndexNode;)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(ZipFileSystem::*)($ZipFileSystem$IndexNode*,$ZipFileSystem$IndexNode*)>(&ZipFileSystem::getRootName))},
	{"getSeparator", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getString", "([B)Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(ZipFileSystem::*)($bytes*)>(&ZipFileSystem::getString))},
	{"getTempPathForEntry", "([B)Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(static_cast<$Path*(ZipFileSystem::*)($bytes*)>(&ZipFileSystem::getTempPathForEntry)), "java.io.IOException"},
	{"getUserPrincipalLookupService", "()Ljava/nio/file/attribute/UserPrincipalLookupService;", nullptr, $PUBLIC},
	{"getVersion", "(Ljdk/nio/zipfs/ZipFileSystem$IndexNode;Ljdk/nio/zipfs/ZipFileSystem$IndexNode;)Ljava/lang/Integer;", nullptr, $PRIVATE, $method(static_cast<$Integer*(ZipFileSystem::*)($ZipFileSystem$IndexNode*,$ZipFileSystem$IndexNode*)>(&ZipFileSystem::getVersion))},
	{"getVersionMap", "(ILjdk/nio/zipfs/ZipFileSystem$IndexNode;)Ljava/util/TreeMap;", "(ILjdk/nio/zipfs/ZipFileSystem$IndexNode;)Ljava/util/TreeMap<Ljava/lang/Integer;Ljdk/nio/zipfs/ZipFileSystem$IndexNode;>;", $PRIVATE, $method(static_cast<$TreeMap*(ZipFileSystem::*)(int32_t,$ZipFileSystem$IndexNode*)>(&ZipFileSystem::getVersionMap))},
	{"getZipFile", "()Ljava/nio/file/Path;", nullptr, 0},
	{"initCEN", "()[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(ZipFileSystem::*)()>(&ZipFileSystem::initCEN)), "java.io.IOException"},
	{"initGroup", "(Ljava/nio/file/Path;Ljava/util/Map;)Ljava/nio/file/attribute/GroupPrincipal;", "(Ljava/nio/file/Path;Ljava/util/Map<Ljava/lang/String;*>;)Ljava/nio/file/attribute/GroupPrincipal;", $PRIVATE, $method(static_cast<$GroupPrincipal*(ZipFileSystem::*)($Path*,$Map*)>(&ZipFileSystem::initGroup)), "java.io.IOException"},
	{"initOwner", "(Ljava/nio/file/Path;Ljava/util/Map;)Ljava/nio/file/attribute/UserPrincipal;", "(Ljava/nio/file/Path;Ljava/util/Map<Ljava/lang/String;*>;)Ljava/nio/file/attribute/UserPrincipal;", $PRIVATE, $method(static_cast<$UserPrincipal*(ZipFileSystem::*)($Path*,$Map*)>(&ZipFileSystem::initOwner)), "java.io.IOException"},
	{"initPermissions", "(Ljava/util/Map;)Ljava/util/Set;", "(Ljava/util/Map<Ljava/lang/String;*>;)Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;", $PRIVATE, $method(static_cast<$Set*(ZipFileSystem::*)($Map*)>(&ZipFileSystem::initPermissions))},
	{"initializeReleaseVersion", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;*>;)V", $PRIVATE, $method(static_cast<void(ZipFileSystem::*)($Map*)>(&ZipFileSystem::initializeReleaseVersion)), "java.io.IOException"},
	{"isDirectory", "([B)Z", nullptr, 0},
	{"isMultiReleaseJar", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ZipFileSystem::*)()>(&ZipFileSystem::isMultiReleaseJar)), "java.io.IOException"},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"isTrue", "(Ljava/util/Map;Ljava/lang/String;)Z", "(Ljava/util/Map<Ljava/lang/String;*>;Ljava/lang/String;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Map*,$String*)>(&ZipFileSystem::isTrue))},
	{"iteratorOf", "(Ljdk/nio/zipfs/ZipPath;Ljava/nio/file/DirectoryStream$Filter;)Ljava/util/Iterator;", "(Ljdk/nio/zipfs/ZipPath;Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)Ljava/util/Iterator<Ljava/nio/file/Path;>;", 0, nullptr, "java.io.IOException"},
	{"lambda$close$10", "(Ljava/nio/file/Path;)Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)($Path*)>(&ZipFileSystem::lambda$close$10)), "java.lang.Exception"},
	{"lambda$close$9", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Void*(ZipFileSystem::*)()>(&ZipFileSystem::lambda$close$9)), "java.lang.Exception"},
	{"lambda$createVersionedLinks$11", "(Ljava/util/HashMap;Ljdk/nio/zipfs/ZipFileSystem$IndexNode;Ljdk/nio/zipfs/ZipFileSystem$IndexNode;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ZipFileSystem::*)($HashMap*,$ZipFileSystem$IndexNode*,$ZipFileSystem$IndexNode*)>(&ZipFileSystem::lambda$createVersionedLinks$11))},
	{"lambda$createVersionedLinks$12", "(Ljava/util/HashMap;Ljdk/nio/zipfs/ZipFileSystem$IndexNode;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ZipFileSystem::*)($HashMap*,$ZipFileSystem$IndexNode*)>(&ZipFileSystem::lambda$createVersionedLinks$12))},
	{"lambda$createVersionedLinks$13", "(Ljava/util/HashMap;[B)[B", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$bytes*(*)($HashMap*,$bytes*)>(&ZipFileSystem::lambda$createVersionedLinks$13))},
	{"lambda$getPathMatcher$8", "(Ljava/util/regex/Pattern;Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Pattern*,$Path*)>(&ZipFileSystem::lambda$getPathMatcher$8))},
	{"lambda$initGroup$6", "(Ljava/nio/file/attribute/PosixFileAttributeView;)Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GroupPrincipal*(*)($PosixFileAttributeView*)>(&ZipFileSystem::lambda$initGroup$6)), "java.lang.Exception"},
	{"lambda$initOwner$2", "(Ljava/nio/file/Path;)Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$UserPrincipal*(*)($Path*)>(&ZipFileSystem::lambda$initOwner$2)), "java.lang.Exception"},
	{"lambda$initOwner$3", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&ZipFileSystem::lambda$initOwner$3))},
	{"lambda$initOwner$4", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&ZipFileSystem::lambda$initOwner$4))},
	{"lambda$initOwner$5", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)(Object$*)>(&ZipFileSystem::lambda$initOwner$5))},
	{"lambda$new$1", "(Ljava/nio/file/Path;)Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)($Path*)>(&ZipFileSystem::lambda$new$1))},
	{"lambda$static$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)()>(&ZipFileSystem::lambda$static$0))},
	{"makeParentDirs", "(Ljdk/nio/zipfs/ZipFileSystem$IndexNode;Ljdk/nio/zipfs/ZipFileSystem$IndexNode;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)($ZipFileSystem$IndexNode*,$ZipFileSystem$IndexNode*)>(&ZipFileSystem::makeParentDirs))},
	{"newByteChannel", "([BLjava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;", "([BLjava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/SeekableByteChannel;", $TRANSIENT, nullptr, "java.io.IOException"},
	{"newFileChannel", "([BLjava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;", "([BLjava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/FileChannel;", $TRANSIENT, nullptr, "java.io.IOException"},
	{"newInputStream", "([B)Ljava/io/InputStream;", nullptr, 0, nullptr, "java.io.IOException"},
	{"newOutputStream", "([B[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;", nullptr, $TRANSIENT, nullptr, "java.io.IOException"},
	{"newWatchService", "()Ljava/nio/file/WatchService;", nullptr, $PUBLIC},
	{"provider", "()Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PUBLIC},
	{"readFullyAt", "([BIJJ)J", nullptr, $FINAL, $method(static_cast<int64_t(ZipFileSystem::*)($bytes*,int32_t,int64_t,int64_t)>(&ZipFileSystem::readFullyAt)), "java.io.IOException"},
	{"readFullyAt", "(Ljava/nio/ByteBuffer;J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ZipFileSystem::*)($ByteBuffer*,int64_t)>(&ZipFileSystem::readFullyAt)), "java.io.IOException"},
	{"releaseDeflater", "(Ljava/util/zip/Deflater;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)($Deflater*)>(&ZipFileSystem::releaseDeflater))},
	{"releaseInflater", "(Ljava/util/zip/Inflater;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)($Inflater*)>(&ZipFileSystem::releaseInflater))},
	{"removeFromTree", "(Ljdk/nio/zipfs/ZipFileSystem$IndexNode;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)($ZipFileSystem$IndexNode*)>(&ZipFileSystem::removeFromTree))},
	{"removeTempPathForEntry", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)($Path*)>(&ZipFileSystem::removeTempPathForEntry)), "java.io.IOException"},
	{"setGroup", "([BLjava/nio/file/attribute/GroupPrincipal;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"setOwner", "([BLjava/nio/file/attribute/UserPrincipal;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"setPermissions", "([BLjava/util/Set;)V", "([BLjava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;)V", 0, nullptr, "java.io.IOException"},
	{"setReadOnly", "()V", nullptr, 0},
	{"setTimes", "([BLjava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"supportedFileAttributeViews", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"sync", "()V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)()>(&ZipFileSystem::sync)), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(Ljdk/nio/zipfs/ZipFileSystem$Entry;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)($ZipFileSystem$Entry*)>(&ZipFileSystem::update))},
	{"updateDelete", "(Ljdk/nio/zipfs/ZipFileSystem$IndexNode;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)($ZipFileSystem$IndexNode*)>(&ZipFileSystem::updateDelete))},
	{"walk", "(Ljdk/nio/zipfs/ZipFileSystem$IndexNode;Ljava/util/function/Consumer;)V", "(Ljdk/nio/zipfs/ZipFileSystem$IndexNode;Ljava/util/function/Consumer<Ljdk/nio/zipfs/ZipFileSystem$IndexNode;>;)V", $PRIVATE, $method(static_cast<void(ZipFileSystem::*)($ZipFileSystem$IndexNode*,$Consumer*)>(&ZipFileSystem::walk))},
	{"writeEntry", "(Ljdk/nio/zipfs/ZipFileSystem$Entry;Ljava/io/OutputStream;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ZipFileSystem::*)($ZipFileSystem$Entry*,$OutputStream*)>(&ZipFileSystem::writeEntry)), "java.io.IOException"},
	{"writeTo", "(Ljdk/nio/zipfs/ZipFileSystem$Entry;Ljava/io/OutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem::*)($ZipFileSystem$Entry*,$OutputStream*)>(&ZipFileSystem::writeTo)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ZipFileSystem_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$ParentLookup", "jdk.nio.zipfs.ZipFileSystem", "ParentLookup", $STATIC},
	{"jdk.nio.zipfs.ZipFileSystem$PosixEntry", "jdk.nio.zipfs.ZipFileSystem", "PosixEntry", $FINAL},
	{"jdk.nio.zipfs.ZipFileSystem$Entry", "jdk.nio.zipfs.ZipFileSystem", "Entry", $STATIC},
	{"jdk.nio.zipfs.ZipFileSystem$IndexNode", "jdk.nio.zipfs.ZipFileSystem", "IndexNode", $STATIC},
	{"jdk.nio.zipfs.ZipFileSystem$END", "jdk.nio.zipfs.ZipFileSystem", "END", $STATIC},
	{"jdk.nio.zipfs.ZipFileSystem$EntryInputStream", "jdk.nio.zipfs.ZipFileSystem", "EntryInputStream", $PRIVATE},
	{"jdk.nio.zipfs.ZipFileSystem$EntryOutputStreamDef", "jdk.nio.zipfs.ZipFileSystem", "EntryOutputStreamDef", $PRIVATE},
	{"jdk.nio.zipfs.ZipFileSystem$EntryOutputStreamCRC32", "jdk.nio.zipfs.ZipFileSystem", "EntryOutputStreamCRC32", $PRIVATE},
	{"jdk.nio.zipfs.ZipFileSystem$DeflatingEntryOutputStream", "jdk.nio.zipfs.ZipFileSystem", "DeflatingEntryOutputStream", $PRIVATE},
	{"jdk.nio.zipfs.ZipFileSystem$EntryOutputStream", "jdk.nio.zipfs.ZipFileSystem", "EntryOutputStream", $PRIVATE},
	{"jdk.nio.zipfs.ZipFileSystem$EntryOutputChannel", "jdk.nio.zipfs.ZipFileSystem", "EntryOutputChannel", $PRIVATE},
	{"jdk.nio.zipfs.ZipFileSystem$2", nullptr, nullptr, 0},
	{"jdk.nio.zipfs.ZipFileSystem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ZipFileSystem_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem",
	"java.nio.file.FileSystem",
	nullptr,
	_ZipFileSystem_FieldInfo_,
	_ZipFileSystem_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFileSystem_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem$ParentLookup,jdk.nio.zipfs.ZipFileSystem$PosixEntry,jdk.nio.zipfs.ZipFileSystem$Entry,jdk.nio.zipfs.ZipFileSystem$IndexNode,jdk.nio.zipfs.ZipFileSystem$END,jdk.nio.zipfs.ZipFileSystem$EntryInputStream,jdk.nio.zipfs.ZipFileSystem$EntryOutputStreamDef,jdk.nio.zipfs.ZipFileSystem$EntryOutputStreamCRC32,jdk.nio.zipfs.ZipFileSystem$DeflatingEntryOutputStream,jdk.nio.zipfs.ZipFileSystem$EntryOutputStream,jdk.nio.zipfs.ZipFileSystem$EntryOutputChannel,jdk.nio.zipfs.ZipFileSystem$2,jdk.nio.zipfs.ZipFileSystem$1"
};

$Object* allocate$ZipFileSystem($Class* clazz) {
	return $of($alloc(ZipFileSystem));
}

bool ZipFileSystem::isWindows = false;
$bytes* ZipFileSystem::ROOTPATH = nullptr;
$String* ZipFileSystem::PROPERTY_POSIX = nullptr;
$String* ZipFileSystem::PROPERTY_DEFAULT_OWNER = nullptr;
$String* ZipFileSystem::PROPERTY_DEFAULT_GROUP = nullptr;
$String* ZipFileSystem::PROPERTY_DEFAULT_PERMISSIONS = nullptr;
$String* ZipFileSystem::PROPERTY_RELEASE_VERSION = nullptr;
$String* ZipFileSystem::PROPERTY_MULTI_RELEASE = nullptr;
$Set* ZipFileSystem::DEFAULT_PERMISSIONS = nullptr;
$String* ZipFileSystem::PROPERTY_COMPRESSION_METHOD = nullptr;
$String* ZipFileSystem::COMPRESSION_METHOD_DEFLATED = nullptr;
$String* ZipFileSystem::COMPRESSION_METHOD_STORED = nullptr;
$String* ZipFileSystem::GLOB_SYNTAX = nullptr;
$String* ZipFileSystem::REGEX_SYNTAX = nullptr;

void ZipFileSystem::init$($ZipFileSystemProvider* provider, $Path* zfpath, $Map* env) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$FileSystem::init$();
	this->zfsDefaultTimeStamp = $System::currentTimeMillis();
	$set(this, entryLookup, $Function::identity());
	$set(this, streams, $Collections::synchronizedSet($$new($HashSet)));
	$set(this, tmppaths, $Collections::synchronizedSet($$new($HashSet)));
	this->isOpen$ = true;
	$set(this, rwlock, $new($ReentrantReadWriteLock));
	this->hasUpdate = false;
	$set(this, LOOKUPKEY, $new($ZipFileSystem$IndexNode, ($bytes*)nullptr, -1));
	$set(this, inflaters, $new($ArrayList));
	$set(this, deflaters, $new($ArrayList));
	$var($String, nameEncoding, $nc(env)->containsKey("encoding"_s) ? $cast($String, $nc(env)->get("encoding"_s)) : "UTF-8"_s);
	this->noExtt = "false"_s->equals($(env->get("zipinfo-time"_s)));
	this->useTempFile = isTrue(env, "useTempFile"_s);
	this->forceEnd64 = isTrue(env, "forceZIP64End"_s);
	this->defaultCompressionMethod = getDefaultCompressionMethod(env);
	this->supportPosix = isTrue(env, ZipFileSystem::PROPERTY_POSIX);
	$set(this, defaultOwner, initOwner(zfpath, env));
	$set(this, defaultGroup, initGroup(zfpath, env));
	$set(this, defaultPermissions, initPermissions(env));
	$set(this, supportedFileAttributeViews$, this->supportPosix ? $Set::of("basic"_s, "posix"_s, "zip"_s) : $Set::of("basic"_s, "zip"_s));
	if ($Files::notExists(zfpath, $$new($LinkOptionArray, 0))) {
		if (isTrue(env, "create"_s)) {
			{
				$init($StandardOpenOption);
				$var($OutputStream, os, $Files::newOutputStream(zfpath, $$new($OpenOptionArray, {
					static_cast<$OpenOption*>($StandardOpenOption::CREATE_NEW),
					static_cast<$OpenOption*>($StandardOpenOption::WRITE)
				})));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							$$new($ZipFileSystem$END)->write(os, 0, this->forceEnd64);
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
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						if (os != nullptr) {
							os->close();
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		} else {
			$throwNew($NoSuchFileException, $($nc(zfpath)->toString()));
		}
	}
	$init($AccessMode);
	$nc($($nc($($nc(zfpath)->getFileSystem()))->provider()))->checkAccess(zfpath, $$new($AccessModeArray, {$AccessMode::READ}));
	bool writeable = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(ZipFileSystem$$Lambda$lambda$new$1$1, zfpath)))))))->booleanValue();
	this->readOnly = !writeable;
	$set(this, zc, $ZipCoder::get(nameEncoding));
	$set(this, rootdir, $new($ZipPath, this, $$new($bytes, {(int8_t)u'/'})));
	$init($StandardOpenOption);
	$set(this, ch, $Files::newByteChannel(zfpath, $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::READ)})));
	try {
		$set(this, cen, initCEN());
	} catch ($IOException& x) {
		try {
			$nc(this->ch)->close();
		} catch ($IOException& xx) {
			x->addSuppressed(xx);
		}
		$throw(x);
	}
	$set(this, provider$, provider);
	$set(this, zfpath, zfpath);
	initializeReleaseVersion(env);
}

int32_t ZipFileSystem::getDefaultCompressionMethod($Map* env) {
	$useLocalCurrentObjectStackCache();
	int32_t result = isTrue(env, "noCompression"_s) ? 0 : 8;
	if ($nc(env)->containsKey(ZipFileSystem::PROPERTY_COMPRESSION_METHOD)) {
		$var($Object, compressionMethod, env->get(ZipFileSystem::PROPERTY_COMPRESSION_METHOD));
		if (compressionMethod != nullptr) {
			if ($instanceOf($String, compressionMethod)) {
				{
					$var($String, s9138$, $nc(($cast($String, compressionMethod)))->toUpperCase());
					int32_t tmp9138$ = -1;
					switch (s9138$->hashCode()) {
					case (int32_t)0x926717A3:
						{
							if (s9138$->equals("STORED"_s)) {
								tmp9138$ = 0;
							}
							break;
						}
					case 0x559EE999:
						{
							if (s9138$->equals("DEFLATED"_s)) {
								tmp9138$ = 1;
							}
							break;
						}
					}
					switch (tmp9138$) {
					case 0:
						{
							result = 0;
							break;
						}
					case 1:
						{
							result = 8;
							break;
						}
					default:
						{
							$throwNew($IllegalArgumentException, $($String::format("The value for the %s property must be %s or %s"_s, $$new($ObjectArray, {
								$of(ZipFileSystem::PROPERTY_COMPRESSION_METHOD),
								$of(ZipFileSystem::COMPRESSION_METHOD_STORED),
								$of(ZipFileSystem::COMPRESSION_METHOD_DEFLATED)
							}))));
						}
					}
				}
			} else {
				$throwNew($IllegalArgumentException, $($String::format("The Object type for the %s property must be a String"_s, $$new($ObjectArray, {$of(ZipFileSystem::PROPERTY_COMPRESSION_METHOD)}))));
			}
		} else {
			$throwNew($IllegalArgumentException, $($String::format("The value for the %s property must be %s or %s"_s, $$new($ObjectArray, {
				$of(ZipFileSystem::PROPERTY_COMPRESSION_METHOD),
				$of(ZipFileSystem::COMPRESSION_METHOD_STORED),
				$of(ZipFileSystem::COMPRESSION_METHOD_DEFLATED)
			}))));
		}
	}
	return result;
}

bool ZipFileSystem::isTrue($Map* env, $String* name) {
	$init(ZipFileSystem);
	$useLocalCurrentObjectStackCache();
	bool var$0 = "true"_s->equals($($nc(env)->get(name)));
	$init($Boolean);
	return var$0 || $nc($Boolean::TRUE)->equals($($nc(env)->get(name)));
}

$UserPrincipal* ZipFileSystem::initOwner($Path* zfpath, $Map* env) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Object, o, $nc(env)->get(ZipFileSystem::PROPERTY_DEFAULT_OWNER));
	if (o == nullptr) {
		try {
			$var($PrivilegedExceptionAction, pa, static_cast<$PrivilegedExceptionAction*>($new(ZipFileSystem$$Lambda$lambda$initOwner$2$2, zfpath)));
			return $cast($UserPrincipal, $AccessController::doPrivileged(pa));
		} catch ($UnsupportedOperationException& e) {
			if ($instanceOf($UnsupportedOperationException, e) || $instanceOf($NoSuchFileException, $(e->getCause()))) {
				$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(ZipFileSystem$$Lambda$lambda$initOwner$3$3)));
				$var($String, userName, $cast($String, $AccessController::doPrivileged(pa)));
				return static_cast<$UserPrincipal*>($new(ZipFileSystem$$Lambda$lambda$initOwner$4$4, userName));
			} else {
				$throwNew($IOException, static_cast<$Throwable*>(e));
			}
		} catch ($PrivilegedActionException& e) {
			if ($instanceOf($UnsupportedOperationException, e) || $instanceOf($NoSuchFileException, $(e->getCause()))) {
				$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(ZipFileSystem$$Lambda$lambda$initOwner$3$3)));
				$var($String, userName, $cast($String, $AccessController::doPrivileged(pa)));
				return static_cast<$UserPrincipal*>($new(ZipFileSystem$$Lambda$lambda$initOwner$4$4, userName));
			} else {
				$throwNew($IOException, static_cast<$Throwable*>(e));
			}
		}
	}
	if ($instanceOf($String, o)) {
		if ($nc(($cast($String, o)))->isEmpty()) {
			$throwNew($IllegalArgumentException, $$str({"Value for property "_s, ZipFileSystem::PROPERTY_DEFAULT_OWNER, " must not be empty."_s}));
		}
		return static_cast<$UserPrincipal*>($new(ZipFileSystem$$Lambda$lambda$initOwner$5$5, o));
	}
	if ($instanceOf($UserPrincipal, o)) {
		return $cast($UserPrincipal, o);
	}
	$load($UserPrincipal);
	$throwNew($IllegalArgumentException, $$str({"Value for property "_s, ZipFileSystem::PROPERTY_DEFAULT_OWNER, " must be of type "_s, $String::class$, " or "_s, $UserPrincipal::class$}));
}

$GroupPrincipal* ZipFileSystem::initGroup($Path* zfpath, $Map* env) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Object, o, $nc(env)->get(ZipFileSystem::PROPERTY_DEFAULT_GROUP));
	if (o == nullptr) {
		try {
			$load($PosixFileAttributeView);
			$var($PosixFileAttributeView, zfpv, $cast($PosixFileAttributeView, $Files::getFileAttributeView(zfpath, $PosixFileAttributeView::class$, $$new($LinkOptionArray, 0))));
			if (zfpv == nullptr) {
				return static_cast<$GroupPrincipal*>($new(ZipFileSystem$$Lambda$getName$6, static_cast<$UserPrincipal*>($nc(this->defaultOwner))));
			}
			$var($PrivilegedExceptionAction, pa, static_cast<$PrivilegedExceptionAction*>($new(ZipFileSystem$$Lambda$lambda$initGroup$6$7, zfpv)));
			return $cast($GroupPrincipal, $AccessController::doPrivileged(pa));
		} catch ($UnsupportedOperationException& e) {
			if ($instanceOf($UnsupportedOperationException, e) || $instanceOf($NoSuchFileException, $(e->getCause()))) {
				return static_cast<$GroupPrincipal*>($new(ZipFileSystem$$Lambda$getName$6, static_cast<$UserPrincipal*>($nc(this->defaultOwner))));
			} else {
				$throwNew($IOException, static_cast<$Throwable*>(e));
			}
		} catch ($PrivilegedActionException& e) {
			if ($instanceOf($UnsupportedOperationException, e) || $instanceOf($NoSuchFileException, $(e->getCause()))) {
				return static_cast<$GroupPrincipal*>($new(ZipFileSystem$$Lambda$getName$6, static_cast<$UserPrincipal*>($nc(this->defaultOwner))));
			} else {
				$throwNew($IOException, static_cast<$Throwable*>(e));
			}
		}
	}
	if ($instanceOf($String, o)) {
		if ($nc(($cast($String, o)))->isEmpty()) {
			$throwNew($IllegalArgumentException, $$str({"Value for property "_s, ZipFileSystem::PROPERTY_DEFAULT_GROUP, " must not be empty."_s}));
		}
		return static_cast<$GroupPrincipal*>($new(ZipFileSystem$$Lambda$lambda$initOwner$5$5, o));
	}
	if ($instanceOf($GroupPrincipal, o)) {
		return $cast($GroupPrincipal, o);
	}
	$load($GroupPrincipal);
	$throwNew($IllegalArgumentException, $$str({"Value for property "_s, ZipFileSystem::PROPERTY_DEFAULT_GROUP, " must be of type "_s, $String::class$, " or "_s, $GroupPrincipal::class$}));
}

$Set* ZipFileSystem::initPermissions($Map* env) {
	$useLocalCurrentObjectStackCache();
	$var($Object, o, $nc(env)->get(ZipFileSystem::PROPERTY_DEFAULT_PERMISSIONS));
	if (o == nullptr) {
		return ZipFileSystem::DEFAULT_PERMISSIONS;
	}
	if ($instanceOf($String, o)) {
		return $PosixFilePermissions::fromString($cast($String, o));
	}
	if (!($instanceOf($Set, o))) {
		$load($Set);
		$throwNew($IllegalArgumentException, $$str({"Value for property "_s, ZipFileSystem::PROPERTY_DEFAULT_PERMISSIONS, " must be of type "_s, $String::class$, " or "_s, $Set::class$}));
	}
	$var($Set, perms, $new($HashSet));
	{
		$var($Iterator, i$, $nc(($cast($Set, o)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o2, i$->next());
			{
				if ($instanceOf($PosixFilePermission, o2)) {
					perms->add($cast($PosixFilePermission, o2));
				} else {
					$load($PosixFilePermission);
					$throwNew($IllegalArgumentException, $$str({ZipFileSystem::PROPERTY_DEFAULT_PERMISSIONS, " must only contain objects of type "_s, $PosixFilePermission::class$}));
				}
			}
		}
	}
	return perms;
}

$FileSystemProvider* ZipFileSystem::provider() {
	return this->provider$;
}

$String* ZipFileSystem::getSeparator() {
	return "/"_s;
}

bool ZipFileSystem::isOpen() {
	return this->isOpen$;
}

bool ZipFileSystem::isReadOnly() {
	return this->readOnly;
}

void ZipFileSystem::checkWritable() {
	if (this->readOnly) {
		$throwNew($ReadOnlyFileSystemException);
	}
}

void ZipFileSystem::setReadOnly() {
	this->readOnly = true;
}

$Iterable* ZipFileSystem::getRootDirectories() {
	return $List::of($of(this->rootdir));
}

$ZipPath* ZipFileSystem::getRootDir() {
	return this->rootdir;
}

$Path* ZipFileSystem::getPath($String* first, $StringArray* more) {
	$useLocalCurrentObjectStackCache();
	if ($nc(more)->length == 0) {
		return $new($ZipPath, this, first);
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(first);
	{
		$var($StringArray, arr$, more);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, path, arr$->get(i$));
			{
				if ($nc(path)->length() > 0) {
					if (sb->length() > 0) {
						sb->append(u'/');
					}
					sb->append(path);
				}
			}
		}
	}
	return $new($ZipPath, this, $(sb->toString()));
}

$UserPrincipalLookupService* ZipFileSystem::getUserPrincipalLookupService() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$WatchService* ZipFileSystem::newWatchService() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$FileStore* ZipFileSystem::getFileStore($ZipPath* path) {
	return $new($ZipFileStore, path);
}

$Iterable* ZipFileSystem::getFileStores() {
	return $List::of($of($$new($ZipFileStore, this->rootdir)));
}

$Set* ZipFileSystem::supportedFileAttributeViews() {
	return this->supportedFileAttributeViews$;
}

$String* ZipFileSystem::toString() {
	return $nc(this->zfpath)->toString();
}

$Path* ZipFileSystem::getZipFile() {
	return this->zfpath;
}

$PathMatcher* ZipFileSystem::getPathMatcher($String* syntaxAndInput) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(syntaxAndInput)->indexOf((int32_t)u':');
	if (pos <= 0 || pos == syntaxAndInput->length()) {
		$throwNew($IllegalArgumentException);
	}
	$var($String, syntax, syntaxAndInput->substring(0, pos));
	$var($String, input, syntaxAndInput->substring(pos + 1));
	$var($String, expr, nullptr);
	if (syntax->equalsIgnoreCase(ZipFileSystem::GLOB_SYNTAX)) {
		$assign(expr, $ZipUtils::toRegexPattern(input));
	} else if (syntax->equalsIgnoreCase(ZipFileSystem::REGEX_SYNTAX)) {
		$assign(expr, input);
	} else {
		$throwNew($UnsupportedOperationException, $$str({"Syntax \'"_s, syntax, "\' not recognized"_s}));
	}
	$var($Pattern, pattern, $Pattern::compile(expr));
	return static_cast<$PathMatcher*>($new(ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8, pattern));
}

void ZipFileSystem::close() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (!this->isOpen$) {
				return$1 = true;
				goto $finally;
			}
			this->isOpen$ = false;
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
	if (!$nc(this->streams)->isEmpty()) {
		$var($Set, copy, $new($HashSet, static_cast<$Collection*>(this->streams)));
		{
			$var($Iterator, i$, copy->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($InputStream, is, $cast($InputStream, i$->next()));
				$nc(is)->close();
			}
		}
	}
	beginWrite();
	{
		$var($Throwable, var$3, nullptr);
		try {
			try {
				$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new(ZipFileSystem$$Lambda$lambda$close$9$9, this)));
				$nc(this->ch)->close();
			} catch ($PrivilegedActionException& e) {
				$throw($cast($IOException, $(e->getException())));
			}
		} catch ($Throwable& var$4) {
			$assign(var$3, var$4);
		} /*finally*/ {
			endWrite();
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
	}
	$synchronized(this->inflaters) {
		{
			$var($Iterator, i$, $nc(this->inflaters)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Inflater, inf, $cast($Inflater, i$->next()));
				$nc(inf)->end();
			}
		}
	}
	$synchronized(this->deflaters) {
		{
			$var($Iterator, i$, $nc(this->deflaters)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Deflater, def, $cast($Deflater, i$->next()));
				$nc(def)->end();
			}
		}
	}
	beginWrite();
	{
		$var($Throwable, var$5, nullptr);
		try {
			$set(this, inodes, nullptr);
		} catch ($Throwable& var$6) {
			$assign(var$5, var$6);
		} /*finally*/ {
			endWrite();
		}
		if (var$5 != nullptr) {
			$throw(var$5);
		}
	}
	$var($IOException, ioe, nullptr);
	$synchronized(this->tmppaths) {
		{
			$var($Iterator, i$, $nc(this->tmppaths)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Path, p, $cast($Path, i$->next()));
				{
					try {
						$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new(ZipFileSystem$$Lambda$lambda$close$10$10, p)));
					} catch ($PrivilegedActionException& e) {
						$var($IOException, x, $cast($IOException, e->getException()));
						if (ioe == nullptr) {
							$assign(ioe, x);
						} else {
							$nc(ioe)->addSuppressed(x);
						}
					}
				}
			}
		}
	}
	$nc(this->provider$)->removeFileSystem(this->zfpath, this);
	if (ioe != nullptr) {
		$throw(ioe);
	}
}

$ZipFileAttributes* ZipFileSystem::getFileAttributes($bytes* path) {
	$useLocalCurrentObjectStackCache();
	beginRead();
	{
		$var($Throwable, var$0, nullptr);
		$var($ZipFileAttributes, var$2, nullptr);
		bool return$1 = false;
		try {
			ensureOpen();
			$var($ZipFileSystem$IndexNode, inode, getInode(path));
			if (inode == nullptr) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			} else if ($instanceOf($ZipFileSystem$Entry, inode)) {
				$assign(var$2, $cast($ZipFileSystem$Entry, inode));
				return$1 = true;
				goto $finally;
			} else if ($nc(inode)->pos == -1) {
				$var($ZipFileSystem$Entry, e, this->supportPosix ? static_cast<$ZipFileSystem$Entry*>($new($ZipFileSystem$PosixEntry, this, inode->name$, inode->isdir, 0)) : $new($ZipFileSystem$Entry, inode->name$, inode->isdir, 0));
				$nc(e)->mtime = (e->atime = (e->ctime = this->zfsDefaultTimeStamp));
				$assign(var$2, e);
				return$1 = true;
				goto $finally;
			} else {
				$assign(var$2, this->supportPosix ? static_cast<$ZipFileAttributes*>($new($ZipFileSystem$PosixEntry, this, this, inode)) : static_cast<$ZipFileAttributes*>($new($ZipFileSystem$Entry, this, inode)));
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endRead();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ZipFileSystem::checkAccess($bytes* path) {
	$useLocalCurrentObjectStackCache();
	beginRead();
	{
		$var($Throwable, var$0, nullptr);
		try {
			ensureOpen();
			if (getInode(path) == nullptr) {
				$throwNew($NoSuchFileException, $(toString()));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			endRead();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ZipFileSystem::setTimes($bytes* path, $FileTime* mtime, $FileTime* atime, $FileTime* ctime) {
	$useLocalCurrentObjectStackCache();
	checkWritable();
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		try {
			ensureOpen();
			$var($ZipFileSystem$Entry, e, getEntry(path));
			if (e == nullptr) {
				$throwNew($NoSuchFileException, $(getString(path)));
			}
			if ($nc(e)->type == $ZipFileSystem$Entry::CEN) {
				e->type = $ZipFileSystem$Entry::COPY;
			}
			if (mtime != nullptr) {
				$nc(e)->mtime = mtime->toMillis();
			}
			if (atime != nullptr) {
				$nc(e)->atime = atime->toMillis();
			}
			if (ctime != nullptr) {
				$nc(e)->ctime = ctime->toMillis();
			}
			update(e);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ZipFileSystem::setOwner($bytes* path, $UserPrincipal* owner) {
	$useLocalCurrentObjectStackCache();
	checkWritable();
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		try {
			ensureOpen();
			$var($ZipFileSystem$Entry, e, getEntry(path));
			if (e == nullptr) {
				$throwNew($NoSuchFileException, $(getString(path)));
			}
			if ($instanceOf($ZipFileSystem$PosixEntry, e)) {
				$set($nc($cast($ZipFileSystem$PosixEntry, e)), owner$, owner);
				update(e);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ZipFileSystem::setGroup($bytes* path, $GroupPrincipal* group) {
	$useLocalCurrentObjectStackCache();
	checkWritable();
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		try {
			ensureOpen();
			$var($ZipFileSystem$Entry, e, getEntry(path));
			if (e == nullptr) {
				$throwNew($NoSuchFileException, $(getString(path)));
			}
			if ($instanceOf($ZipFileSystem$PosixEntry, e)) {
				$set($nc($cast($ZipFileSystem$PosixEntry, e)), group$, group);
				update(e);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ZipFileSystem::setPermissions($bytes* path, $Set* perms) {
	$useLocalCurrentObjectStackCache();
	checkWritable();
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		try {
			ensureOpen();
			$var($ZipFileSystem$Entry, e, getEntry(path));
			if (e == nullptr) {
				$throwNew($NoSuchFileException, $(getString(path)));
			}
			if ($nc(e)->type == $ZipFileSystem$Entry::CEN) {
				e->type = $ZipFileSystem$Entry::COPY;
			}
			$nc(e)->posixPerms = perms == nullptr ? -1 : $ZipUtils::permsToFlags(perms);
			update(e);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool ZipFileSystem::exists($bytes* path) {
	beginRead();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			ensureOpen();
			var$2 = getInode(path) != nullptr;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endRead();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ZipFileSystem::isDirectory($bytes* path) {
	$useLocalCurrentObjectStackCache();
	beginRead();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$var($ZipFileSystem$IndexNode, n, getInode(path));
			var$2 = n != nullptr && n->isDir();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endRead();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Iterator* ZipFileSystem::iteratorOf($ZipPath* dir, $DirectoryStream$Filter* filter) {
	$useLocalCurrentObjectStackCache();
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		$var($Iterator, var$2, nullptr);
		bool return$1 = false;
		try {
			ensureOpen();
			$var($bytes, path, $nc(dir)->getResolvedPath());
			$var($ZipFileSystem$IndexNode, inode, getInode(path));
			if (inode == nullptr) {
				$throwNew($NotDirectoryException, $(getString(path)));
			}
			$var($List, list, $new($ArrayList));
			$var($ZipFileSystem$IndexNode, child, $nc(inode)->child);
			while (child != nullptr) {
				$var($ZipPath, childPath, $new($ZipPath, this, child->name$, true));
				$var($ZipPath, childFileName, childPath->getFileName());
				$var($ZipPath, zpath, dir->resolve(static_cast<$Path*>(childFileName)));
				if (filter == nullptr || $nc(filter)->accept(zpath)) {
					list->add(zpath);
				}
				$assign(child, child->sibling);
			}
			$assign(var$2, list->iterator());
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ZipFileSystem::createDirectory($bytes* dir, $FileAttributeArray* attrs) {
	$useLocalCurrentObjectStackCache();
	checkWritable();
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		try {
			ensureOpen();
			if ($nc(dir)->length == 0 || exists(dir)) {
				$throwNew($FileAlreadyExistsException, $(getString(dir)));
			}
			checkParents(dir);
			$var($ZipFileSystem$Entry, e, this->supportPosix ? static_cast<$ZipFileSystem$Entry*>($new($ZipFileSystem$PosixEntry, this, dir, $ZipFileSystem$Entry::NEW, true, 0, attrs)) : $new($ZipFileSystem$Entry, dir, $ZipFileSystem$Entry::NEW, true, 0, attrs));
			update(e);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ZipFileSystem::copyFile(bool deletesrc, $bytes* src, $bytes* dst, $CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	checkWritable();
	if ($Arrays::equals(src, dst)) {
		return;
	}
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			ensureOpen();
			$var($ZipFileSystem$Entry, eSrc, getEntry(src));
			if (eSrc == nullptr) {
				$throwNew($NoSuchFileException, $(getString(src)));
			}
			if ($nc(eSrc)->isDir()) {
				createDirectory(dst, $$new($FileAttributeArray, 0));
				return$1 = true;
				goto $finally;
			}
			bool hasReplace = false;
			bool hasCopyAttrs = false;
			{
				$var($CopyOptionArray, arr$, options);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($CopyOption, opt, arr$->get(i$));
					{
						$init($StandardCopyOption);
						if ($equals(opt, $StandardCopyOption::REPLACE_EXISTING)) {
							hasReplace = true;
						} else {
							if ($equals(opt, $StandardCopyOption::COPY_ATTRIBUTES)) {
								hasCopyAttrs = true;
							}
						}
					}
				}
			}
			$var($ZipFileSystem$Entry, eDst, getEntry(dst));
			if (eDst != nullptr) {
				if (!hasReplace) {
					$throwNew($FileAlreadyExistsException, $(getString(dst)));
				}
			} else {
				checkParents(dst);
			}
			$var($ZipFileSystem$Entry, u, this->supportPosix ? static_cast<$ZipFileSystem$Entry*>($new($ZipFileSystem$PosixEntry, this, $cast($ZipFileSystem$PosixEntry, eSrc), $ZipFileSystem$Entry::COPY)) : $new($ZipFileSystem$Entry, eSrc, $ZipFileSystem$Entry::COPY));
			$nc(u)->name(dst);
			if ($nc(eSrc)->type == $ZipFileSystem$Entry::NEW || $nc(eSrc)->type == $ZipFileSystem$Entry::FILECH) {
				u->type = eSrc->type;
				if (deletesrc) {
					$set(u, bytes, eSrc->bytes);
					$set(u, file, eSrc->file);
				} else if (eSrc->bytes != nullptr) {
					$set(u, bytes, $Arrays::copyOf(eSrc->bytes, $nc(eSrc->bytes)->length));
				} else if (eSrc->file != nullptr) {
					$set(u, file, getTempPathForEntry(nullptr));
					$init($StandardCopyOption);
					$Files::copy(eSrc->file, u->file, $$new($CopyOptionArray, {static_cast<$CopyOption*>($StandardCopyOption::REPLACE_EXISTING)}));
				}
			} else if (eSrc->type == $ZipFileSystem$Entry::CEN && eSrc->method$ != this->defaultCompressionMethod) {
				{
					$var($InputStream, in, newInputStream(src));
					{
						$var($Throwable, var$2, nullptr);
						try {
							try {
								$init($StandardOpenOption);
								$var($OutputStream, out, newOutputStream(dst, $$new($OpenOptionArray, {
									static_cast<$OpenOption*>($StandardOpenOption::CREATE),
									static_cast<$OpenOption*>($StandardOpenOption::TRUNCATE_EXISTING),
									static_cast<$OpenOption*>($StandardOpenOption::WRITE)
								})));
								{
									$var($Throwable, var$3, nullptr);
									try {
										try {
											$nc(in)->transferTo(out);
										} catch ($Throwable& t$) {
											if (out != nullptr) {
												try {
													out->close();
												} catch ($Throwable& x2) {
													t$->addSuppressed(x2);
												}
											}
											$throw(t$);
										}
									} catch ($Throwable& var$4) {
										$assign(var$3, var$4);
									} /*finally*/ {
										if (out != nullptr) {
											out->close();
										}
									}
									if (var$3 != nullptr) {
										$throw(var$3);
									}
								}
							} catch ($Throwable& t$) {
								if (in != nullptr) {
									try {
										in->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
								}
								$throw(t$);
							}
						} catch ($Throwable& var$5) {
							$assign(var$2, var$5);
						} /*finally*/ {
							if (in != nullptr) {
								in->close();
							}
						}
						if (var$2 != nullptr) {
							$throw(var$2);
						}
					}
				}
				$assign(u, getEntry(dst));
			}
			if (!hasCopyAttrs) {
				u->mtime = (u->atime = (u->ctime = $System::currentTimeMillis()));
			}
			update(u);
			if (deletesrc) {
				updateDelete(eSrc);
			}
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} $finally: {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

$OutputStream* ZipFileSystem::newOutputStream($bytes* path, $OpenOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	checkWritable();
	bool hasCreateNew = false;
	bool hasCreate = false;
	bool hasAppend = false;
	bool hasTruncate = false;
	{
		$var($OpenOptionArray, arr$, options);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($OpenOption, opt, arr$->get(i$));
			{
				$init($StandardOpenOption);
				if ($equals(opt, $StandardOpenOption::READ)) {
					$throwNew($IllegalArgumentException, "READ not allowed"_s);
				}
				if ($equals(opt, $StandardOpenOption::CREATE_NEW)) {
					hasCreateNew = true;
				}
				if ($equals(opt, $StandardOpenOption::CREATE)) {
					hasCreate = true;
				}
				if ($equals(opt, $StandardOpenOption::APPEND)) {
					hasAppend = true;
				}
				if ($equals(opt, $StandardOpenOption::TRUNCATE_EXISTING)) {
					hasTruncate = true;
				}
			}
		}
	}
	if (hasAppend && hasTruncate) {
		$throwNew($IllegalArgumentException, "APPEND + TRUNCATE_EXISTING not allowed"_s);
	}
	beginRead();
	{
		$var($Throwable, var$0, nullptr);
		$var($OutputStream, var$2, nullptr);
		bool return$1 = false;
		try {
			ensureOpen();
			$var($ZipFileSystem$Entry, e, getEntry(path));
			if (e != nullptr) {
				if (e->isDir() || hasCreateNew) {
					$throwNew($FileAlreadyExistsException, $(getString(path)));
				}
				if (hasAppend) {
					$var($OutputStream, os, getOutputStream($$new($ZipFileSystem$Entry, e, $ZipFileSystem$Entry::NEW)));
					{
						$var($InputStream, is, getInputStream(e));
						{
							$var($Throwable, var$3, nullptr);
							try {
								try {
									$nc(is)->transferTo(os);
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
							} catch ($Throwable& var$4) {
								$assign(var$3, var$4);
							} /*finally*/ {
								if (is != nullptr) {
									is->close();
								}
							}
							if (var$3 != nullptr) {
								$throw(var$3);
							}
						}
					}
					$assign(var$2, os);
					return$1 = true;
					goto $finally;
				}
				$assign(var$2, getOutputStream(this->supportPosix ? static_cast<$ZipFileSystem$Entry*>($$new($ZipFileSystem$PosixEntry, this, $cast($ZipFileSystem$PosixEntry, e), $ZipFileSystem$Entry::NEW, this->defaultCompressionMethod)) : $$new($ZipFileSystem$Entry, e, $ZipFileSystem$Entry::NEW, this->defaultCompressionMethod)));
				return$1 = true;
				goto $finally;
			} else {
				if (!hasCreate && !hasCreateNew) {
					$throwNew($NoSuchFileException, $(getString(path)));
				}
				checkParents(path);
				$assign(var$2, getOutputStream(this->supportPosix ? static_cast<$ZipFileSystem$Entry*>($$new($ZipFileSystem$PosixEntry, this, path, $ZipFileSystem$Entry::NEW, false, this->defaultCompressionMethod, $$new($FileAttributeArray, 0))) : $$new($ZipFileSystem$Entry, path, $ZipFileSystem$Entry::NEW, false, this->defaultCompressionMethod, $$new($FileAttributeArray, 0))));
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			endRead();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$InputStream* ZipFileSystem::newInputStream($bytes* path) {
	$useLocalCurrentObjectStackCache();
	beginRead();
	{
		$var($Throwable, var$0, nullptr);
		$var($InputStream, var$2, nullptr);
		bool return$1 = false;
		try {
			ensureOpen();
			$var($ZipFileSystem$Entry, e, getEntry(path));
			if (e == nullptr) {
				$throwNew($NoSuchFileException, $(getString(path)));
			}
			if ($nc(e)->isDir()) {
				$throwNew($FileSystemException, $(getString(path)), "is a directory"_s, nullptr);
			}
			$assign(var$2, getInputStream(e));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endRead();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ZipFileSystem::checkOptions($Set* options) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(options)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($OpenOption, option, $cast($OpenOption, i$->next()));
			{
				if (option == nullptr) {
					$throwNew($NullPointerException);
				}
				if (!($instanceOf($StandardOpenOption, option))) {
					$throwNew($IllegalArgumentException);
				}
			}
		}
	}
	$init($StandardOpenOption);
	bool var$0 = options->contains($StandardOpenOption::APPEND);
	if (var$0 && options->contains($StandardOpenOption::TRUNCATE_EXISTING)) {
		$throwNew($IllegalArgumentException, "APPEND + TRUNCATE_EXISTING not allowed"_s);
	}
}

$SeekableByteChannel* ZipFileSystem::newByteChannel($bytes* path, $Set* options, $FileAttributeArray* attrs) {
	$useLocalCurrentObjectStackCache();
	checkOptions(options);
	$init($StandardOpenOption);
	bool var$0 = $nc(options)->contains($StandardOpenOption::WRITE);
	if (var$0 || $nc(options)->contains($StandardOpenOption::APPEND)) {
		checkWritable();
		beginRead();
		ensureOpen();
		{
			$var($Throwable, var$1, nullptr);
			$var($SeekableByteChannel, var$3, nullptr);
			bool return$2 = false;
			try {
				$var($ZipFileSystem$Entry, e, getEntry(path));
				if (e != nullptr) {
					bool var$4 = e->isDir();
					if (var$4 || options->contains($StandardOpenOption::CREATE_NEW)) {
						$throwNew($FileAlreadyExistsException, $(getString(path)));
					}
					$var($SeekableByteChannel, sbc, $new($ZipFileSystem$EntryOutputChannel, this, this->supportPosix ? static_cast<$ZipFileSystem$Entry*>($$new($ZipFileSystem$PosixEntry, this, $cast($ZipFileSystem$PosixEntry, e), $ZipFileSystem$Entry::NEW)) : $$new($ZipFileSystem$Entry, e, $ZipFileSystem$Entry::NEW)));
					if (options->contains($StandardOpenOption::APPEND)) {
						{
							$var($InputStream, is, getInputStream(e));
							{
								$var($Throwable, var$5, nullptr);
								try {
									try {
										$var($bytes, buf, $new($bytes, 8192));
										$var($ByteBuffer, bb, $ByteBuffer::wrap(buf));
										int32_t n = 0;
										while ((n = $nc(is)->read(buf)) != -1) {
											$nc(bb)->position(0);
											bb->limit(n);
											sbc->write(bb);
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
								} catch ($Throwable& var$6) {
									$assign(var$5, var$6);
								} /*finally*/ {
									if (is != nullptr) {
										is->close();
									}
								}
								if (var$5 != nullptr) {
									$throw(var$5);
								}
							}
						}
					}
					$assign(var$3, sbc);
					return$2 = true;
					goto $finally;
				}
				bool var$7 = !options->contains($StandardOpenOption::CREATE);
				if (var$7 && !options->contains($StandardOpenOption::CREATE_NEW)) {
					$throwNew($NoSuchFileException, $(getString(path)));
				}
				checkParents(path);
				$assign(var$3, $new($ZipFileSystem$EntryOutputChannel, this, this->supportPosix ? static_cast<$ZipFileSystem$Entry*>($$new($ZipFileSystem$PosixEntry, this, path, $ZipFileSystem$Entry::NEW, false, this->defaultCompressionMethod, attrs)) : $$new($ZipFileSystem$Entry, path, $ZipFileSystem$Entry::NEW, false, this->defaultCompressionMethod, attrs)));
				return$2 = true;
				goto $finally;
			} catch ($Throwable& var$8) {
				$assign(var$1, var$8);
			} $finally: {
				endRead();
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
			if (return$2) {
				return var$3;
			}
		}
	} else {
		beginRead();
		{
			$var($Throwable, var$9, nullptr);
			$var($SeekableByteChannel, var$11, nullptr);
			bool return$10 = false;
			try {
				ensureOpen();
				$var($ZipFileSystem$Entry, e, getEntry(path));
				if (e == nullptr || $nc(e)->isDir()) {
					$throwNew($NoSuchFileException, $(getString(path)));
				}
				{
					$var($InputStream, is, getInputStream(e));
					{
						$var($Throwable, var$12, nullptr);
						$var($SeekableByteChannel, var$14, nullptr);
						bool return$13 = false;
						try {
							try {
								$assign(var$14, $new($ByteArrayChannel, $($nc(is)->readAllBytes()), true));
								return$13 = true;
								goto $finally3;
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
						} catch ($Throwable& var$15) {
							$assign(var$12, var$15);
						} $finally3: {
							if (is != nullptr) {
								is->close();
							}
						}
						if (var$12 != nullptr) {
							$throw(var$12);
						}
						if (return$13) {
							$assign(var$11, var$14);
							return$10 = true;
							goto $finally2;
						}
					}
				}
			} catch ($Throwable& var$16) {
				$assign(var$9, var$16);
			} $finally2: {
				endRead();
			}
			if (var$9 != nullptr) {
				$throw(var$9);
			}
			if (return$10) {
				return var$11;
			}
		}
	}
	$shouldNotReachHere();
}

$FileChannel* ZipFileSystem::newFileChannel($bytes* path, $Set* options$renamed, $FileAttributeArray* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($Set, options, options$renamed);
	checkOptions(options);
	$init($StandardOpenOption);
	bool var$0 = $nc(options)->contains($StandardOpenOption::WRITE);
	bool forWrite = (var$0 || $nc(options)->contains($StandardOpenOption::APPEND));
	beginRead();
	{
		$var($Throwable, var$1, nullptr);
		$var($FileChannel, var$3, nullptr);
		bool return$2 = false;
		try {
			ensureOpen();
			$var($ZipFileSystem$Entry, e, getEntry(path));
			if (forWrite) {
				checkWritable();
				if (e == nullptr) {
					bool var$4 = !options->contains($StandardOpenOption::CREATE);
					if (var$4 && !options->contains($StandardOpenOption::CREATE_NEW)) {
						$throwNew($NoSuchFileException, $(getString(path)));
					}
				} else {
					if (options->contains($StandardOpenOption::CREATE_NEW)) {
						$throwNew($FileAlreadyExistsException, $(getString(path)));
					}
					if ($nc(e)->isDir()) {
						$throwNew($FileAlreadyExistsException, $$str({"directory <"_s, $(getString(path)), "> exists"_s}));
					}
				}
				$assign(options, $new($HashSet, static_cast<$Collection*>(options)));
				options->remove($StandardOpenOption::CREATE_NEW);
			} else if (e == nullptr || $nc(e)->isDir()) {
				$throwNew($NoSuchFileException, $(getString(path)));
			}
			bool isFCH = (e != nullptr && e->type == $ZipFileSystem$Entry::FILECH);
			$var($Path, tmpfile, isFCH ? e->file : getTempPathForEntry(path));
			$var($FileChannel, fch, $nc($($nc($($nc(tmpfile)->getFileSystem()))->provider()))->newFileChannel(tmpfile, options, attrs));
			$var($ZipFileSystem$Entry, u, isFCH ? e : (this->supportPosix ? static_cast<$ZipFileSystem$Entry*>($new($ZipFileSystem$PosixEntry, this, path, tmpfile, $ZipFileSystem$Entry::FILECH, attrs)) : $new($ZipFileSystem$Entry, path, tmpfile, $ZipFileSystem$Entry::FILECH, attrs)));
			if (forWrite) {
				$nc(u)->flag = 8;
				u->method$ = this->defaultCompressionMethod;
			}
			$assign(var$3, $new($ZipFileSystem$1, this, fch, forWrite, u, isFCH, tmpfile));
			return$2 = true;
			goto $finally;
		} catch ($Throwable& var$5) {
			$assign(var$1, var$5);
		} $finally: {
			endRead();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
		if (return$2) {
			return var$3;
		}
	}
	$shouldNotReachHere();
}

$Path* ZipFileSystem::getTempPathForEntry($bytes* path) {
	$useLocalCurrentObjectStackCache();
	$var($Path, tmpPath, createTempFileInSameDirectoryAs(this->zfpath));
	if (path != nullptr) {
		$var($ZipFileSystem$Entry, e, getEntry(path));
		if (e != nullptr) {
			{
				$var($InputStream, is, newInputStream(path));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							$init($StandardCopyOption);
							$Files::copy(is, tmpPath, $$new($CopyOptionArray, {static_cast<$CopyOption*>($StandardCopyOption::REPLACE_EXISTING)}));
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
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
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
	}
	return tmpPath;
}

void ZipFileSystem::removeTempPathForEntry($Path* path) {
	$Files::delete$(path);
	$nc(this->tmppaths)->remove(path);
}

void ZipFileSystem::checkParents($bytes* path$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, path, path$renamed);
	beginRead();
	{
		$var($Throwable, var$0, nullptr);
		try {
			while (true) {
				bool var$1 = ($assign(path, getParent(path))) != nullptr;
				if (!(var$1 && path != ZipFileSystem::ROOTPATH)) {
					break;
				}
				{
					if (!$nc(this->inodes)->containsKey($($ZipFileSystem$IndexNode::keyOf(path)))) {
						$throwNew($NoSuchFileException, $(getString(path)));
					}
				}
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			endRead();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$bytes* ZipFileSystem::getParent($bytes* path) {
	$init(ZipFileSystem);
	int32_t off = getParentOff(path);
	if (off <= 1) {
		return ZipFileSystem::ROOTPATH;
	}
	return $Arrays::copyOf(path, off);
}

int32_t ZipFileSystem::getParentOff($bytes* path) {
	$init(ZipFileSystem);
	int32_t off = $nc(path)->length - 1;
	if (off > 0 && path->get(off) == u'/') {
		--off;
	}
	while (off > 0 && path->get(off) != u'/') {
		--off;
	}
	return off;
}

void ZipFileSystem::beginWrite() {
	$nc($($nc(this->rwlock)->writeLock()))->lock();
}

void ZipFileSystem::endWrite() {
	$nc($($nc(this->rwlock)->writeLock()))->unlock();
}

void ZipFileSystem::beginRead() {
	$nc($($nc(this->rwlock)->readLock()))->lock();
}

void ZipFileSystem::endRead() {
	$nc($($nc(this->rwlock)->readLock()))->unlock();
}

$bytes* ZipFileSystem::getBytes($String* name) {
	return $nc(this->zc)->getBytes(name);
}

$String* ZipFileSystem::getString($bytes* name) {
	return $nc(this->zc)->toString(name);
}

void ZipFileSystem::finalize() {
	close();
}

int64_t ZipFileSystem::readFullyAt($bytes* buf, int32_t off, int64_t len, int64_t pos) {
	$var($ByteBuffer, bb, $ByteBuffer::wrap(buf));
	$nc(bb)->position(off);
	bb->limit((int32_t)(off + len));
	return readFullyAt(bb, pos);
}

int64_t ZipFileSystem::readFullyAt($ByteBuffer* bb, int64_t pos) {
	$useLocalCurrentObjectStackCache();
	{
		$var($FileChannel, fch, nullptr);
		$var($SeekableByteChannel, patt47066$temp, this->ch);
		bool var$0 = $instanceOf($FileChannel, patt47066$temp);
		if (var$0) {
			$assign(fch, $cast($FileChannel, patt47066$temp));
			var$0 = true;
		}
		if (var$0) {
			return $nc(fch)->read(bb, pos);
		} else {
			$synchronized(this->ch) {
				return $nc($($nc(this->ch)->position(pos)))->read(bb);
			}
		}
	}
}

$ZipFileSystem$END* ZipFileSystem::findEND() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, buf, $new($bytes, 128));
	int64_t ziplen = $nc(this->ch)->size();
	int64_t minHDR = (ziplen - (int64_t)65557) > 0 ? ziplen - (int64_t)65557 : (int64_t)0;
	int64_t minPos = minHDR - (buf->length - 22);
	for (int64_t pos = ziplen - buf->length; pos >= minPos; pos -= (buf->length - 22)) {
		int32_t off = 0;
		if (pos < 0) {
			off = (int32_t)-pos;
			$Arrays::fill(buf, 0, off, (int8_t)0);
		}
		int32_t len = buf->length - off;
		if (readFullyAt(buf, off, len, pos + off) != len) {
			$throwNew($ZipException, "zip END header not found"_s);
		}
		for (int32_t i = buf->length - 22; i >= 0; --i) {
			if (buf->get(i) == (int8_t)u'P' && buf->get(i + 1) == (int8_t)u'K' && buf->get(i + 2) == (int8_t)(char16_t)0x5 && buf->get(i + 3) == (int8_t)(char16_t)0x6 && (pos + i + 22 + $ZipConstants::ENDCOM(buf, i) == ziplen)) {
				$assign(buf, $Arrays::copyOfRange(buf, i, i + 22));
				$var($ZipFileSystem$END, end, $new($ZipFileSystem$END));
				end->centot = $ZipConstants::ENDTOT(buf);
				end->cenlen = $ZipConstants::ENDSIZ(buf);
				end->cenoff = $ZipConstants::ENDOFF(buf);
				end->endpos = pos + i;
				$var($bytes, loc64, $new($bytes, 20));
				bool var$0 = end->endpos < 20 || readFullyAt(loc64, 0, loc64->length, end->endpos - 20) != loc64->length;
				if (var$0 || !$ZipConstants::locator64SigAt(loc64, 0)) {
					return end;
				}
				int64_t end64pos = $ZipConstants::ZIP64_LOCOFF(loc64);
				$var($bytes, end64buf, $new($bytes, 56));
				bool var$1 = readFullyAt(end64buf, 0, end64buf->length, end64pos) != end64buf->length;
				if (var$1 || !$ZipConstants::end64SigAt(end64buf, 0)) {
					return end;
				}
				int64_t cenlen64 = $ZipConstants::ZIP64_ENDSIZ(end64buf);
				int64_t cenoff64 = $ZipConstants::ZIP64_ENDOFF(end64buf);
				int64_t centot64 = $ZipConstants::ZIP64_ENDTOT(end64buf);
				if (cenlen64 != end->cenlen && end->cenlen != (int64_t)0x00000000FFFFFFFF || cenoff64 != end->cenoff && end->cenoff != (int64_t)0x00000000FFFFFFFF || centot64 != end->centot && end->centot != 0x0000FFFF) {
					return end;
				}
				end->cenlen = cenlen64;
				end->cenoff = cenoff64;
				end->centot = (int32_t)centot64;
				end->endpos = end64pos;
				return end;
			}
		}
	}
	$throwNew($ZipException, "zip END header not found"_s);
}

void ZipFileSystem::makeParentDirs($ZipFileSystem$IndexNode* node$renamed, $ZipFileSystem$IndexNode* root) {
	$useLocalCurrentObjectStackCache();
	$var($ZipFileSystem$IndexNode, node, node$renamed);
	$var($ZipFileSystem$IndexNode, parent, nullptr);
	$var($ZipFileSystem$ParentLookup, lookup, $new($ZipFileSystem$ParentLookup));
	while (true) {
		int32_t off = getParentOff($nc(node)->name$);
		if (off <= 1) {
			$set($nc(node), sibling, $nc(root)->child);
			$set(root, child, node);
			break;
		}
		$assign(lookup, $nc(lookup)->as($nc(node)->name$, off));
		if ($nc(this->inodes)->containsKey(lookup)) {
			$assign(parent, $cast($ZipFileSystem$IndexNode, $nc(this->inodes)->get(lookup)));
			$set($nc(node), sibling, $nc(parent)->child);
			$set(parent, child, node);
			break;
		}
		$assign(parent, $new($ZipFileSystem$IndexNode, $($Arrays::copyOf($nc(node)->name$, off)), true));
		$nc(this->inodes)->put(parent, parent);
		$set($nc(node), sibling, parent->child);
		$set(parent, child, node);
		$assign(node, parent);
	}
}

void ZipFileSystem::buildNodeTree() {
	$useLocalCurrentObjectStackCache();
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ZipFileSystem$IndexNode, root, $cast($ZipFileSystem$IndexNode, $nc(this->inodes)->remove($($nc(this->LOOKUPKEY)->as(ZipFileSystem::ROOTPATH)))));
			if (root == nullptr) {
				$assign(root, $new($ZipFileSystem$IndexNode, ZipFileSystem::ROOTPATH, true));
			}
			$var($ZipFileSystem$IndexNodeArray, nodes, $fcast($ZipFileSystem$IndexNodeArray, $nc($($nc(this->inodes)->values()))->toArray($$new($ZipFileSystem$IndexNodeArray, 0))));
			$nc(this->inodes)->put(root, root);
			{
				$var($ZipFileSystem$IndexNodeArray, arr$, nodes);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($ZipFileSystem$IndexNode, node, arr$->get(i$));
					{
						makeParentDirs(node, root);
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ZipFileSystem::removeFromTree($ZipFileSystem$IndexNode* inode) {
	$useLocalCurrentObjectStackCache();
	$var($ZipFileSystem$IndexNode, parent, $cast($ZipFileSystem$IndexNode, $nc(this->inodes)->get($($nc(this->LOOKUPKEY)->as($(getParent($nc(inode)->name$)))))));
	$var($ZipFileSystem$IndexNode, child, $nc(parent)->child);
	if ($nc(child)->equals(inode)) {
		$set(parent, child, child->sibling);
	} else {
		$var($ZipFileSystem$IndexNode, last, child);
		while (($assign(child, $nc(child)->sibling)) != nullptr) {
			if (child->equals(inode)) {
				$set(last, sibling, child->sibling);
				break;
			} else {
				$assign(last, child);
			}
		}
	}
}

void ZipFileSystem::initializeReleaseVersion($Map* env) {
	$useLocalCurrentObjectStackCache();
	$var($Object, o, $nc(env)->containsKey(ZipFileSystem::PROPERTY_RELEASE_VERSION) ? $nc(env)->get(ZipFileSystem::PROPERTY_RELEASE_VERSION) : env->get(ZipFileSystem::PROPERTY_MULTI_RELEASE));
	if (o != nullptr && isMultiReleaseJar()) {
		int32_t version = 0;
		if ($instanceOf($String, o)) {
			$var($String, s, $cast($String, o));
			if (s->equals("runtime"_s)) {
				version = $nc($($Runtime::version()))->feature();
			} else if (s->matches("^[1-9][0-9]*$"_s)) {
				version = $nc($($Runtime$Version::parse(s)))->feature();
			} else {
				$throwNew($IllegalArgumentException, "Invalid runtime version"_s);
			}
		} else if ($instanceOf($Integer, o)) {
			version = $nc($($Runtime$Version::parse($($nc(($cast($Integer, o)))->toString()))))->feature();
		} else if ($instanceOf($Runtime$Version, o)) {
			version = $nc(($cast($Runtime$Version, o)))->feature();
		} else {
			$throwNew($IllegalArgumentException, "env parameter must be String, Integer, or Version"_s);
		}
		createVersionedLinks(version < 0 ? 0 : version);
		setReadOnly();
	}
}

bool ZipFileSystem::isMultiReleaseJar() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InputStream, is, newInputStream($(getBytes("/META-INF/MANIFEST.MF"_s))));
		{
			$var($Throwable, var$0, nullptr);
			bool var$2 = false;
			bool return$1 = false;
			try {
				try {
					$init($Attributes$Name);
					$var($String, multiRelease, $nc($($$new($Manifest, is)->getMainAttributes()))->getValue($Attributes$Name::MULTI_RELEASE));
					var$2 = "true"_s->equalsIgnoreCase(multiRelease);
					return$1 = true;
					goto $finally;
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
			} $finally: {
				if (is != nullptr) {
					is->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($NoSuchFileException& x) {
		return false;
	}
	$shouldNotReachHere();
}

void ZipFileSystem::createVersionedLinks(int32_t version) {
	$useLocalCurrentObjectStackCache();
	$var($ZipFileSystem$IndexNode, verdir, getInode($(getBytes("/META-INF/versions"_s))));
	if (verdir == nullptr) {
		return;
	}
	$var($HashMap, aliasMap, $new($HashMap));
	$nc($($nc($(getVersionMap(version, verdir)))->values()))->forEach(static_cast<$Consumer*>($$new(ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11, this, aliasMap)));
	$set(this, entryLookup, static_cast<$Function*>($new(ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12, aliasMap)));
}

$TreeMap* ZipFileSystem::getVersionMap(int32_t version, $ZipFileSystem$IndexNode* metaInfVersions) {
	$useLocalCurrentObjectStackCache();
	$var($TreeMap, map, $new($TreeMap));
	$var($ZipFileSystem$IndexNode, child, $nc(metaInfVersions)->child);
	while (child != nullptr) {
		$var($Integer, key, getVersion(child, metaInfVersions));
		if (key != nullptr && key->intValue() <= version) {
			map->put(key, child);
		}
		$assign(child, child->sibling);
	}
	return map;
}

$Integer* ZipFileSystem::getVersion($ZipFileSystem$IndexNode* inode, $ZipFileSystem$IndexNode* metaInfVersions) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, fullName, $nc(inode)->name$);
		return $Integer::valueOf($Integer::parseInt($(getString($($Arrays::copyOfRange(fullName, $nc($nc(metaInfVersions)->name$)->length + 1, $nc(fullName)->length))))));
	} catch ($NumberFormatException& x) {
		return nullptr;
	}
	$shouldNotReachHere();
}

void ZipFileSystem::walk($ZipFileSystem$IndexNode* inode, $Consumer* consumer) {
	if (inode == nullptr) {
		return;
	}
	if ($nc(inode)->isDir()) {
		walk(inode->child, consumer);
	} else {
		$nc(consumer)->accept(inode);
	}
	walk($nc(inode)->sibling, consumer);
}

$bytes* ZipFileSystem::getRootName($ZipFileSystem$IndexNode* inode, $ZipFileSystem$IndexNode* prefix) {
	$var($bytes, fullName, $nc(inode)->name$);
	return $Arrays::copyOfRange(fullName, $nc($nc(prefix)->name$)->length, $nc(fullName)->length);
}

$bytes* ZipFileSystem::initCEN() {
	$useLocalCurrentObjectStackCache();
	$set(this, end, findEND());
	if ($nc(this->end)->endpos == 0) {
		$set(this, inodes, $new($LinkedHashMap, 10));
		this->locpos = 0;
		buildNodeTree();
		return nullptr;
	}
	if ($nc(this->end)->cenlen > $nc(this->end)->endpos) {
		$throwNew($ZipException, "invalid END header (bad central directory size)"_s);
	}
	int64_t cenpos = $nc(this->end)->endpos - $nc(this->end)->cenlen;
	this->locpos = cenpos - $nc(this->end)->cenoff;
	if (this->locpos < 0) {
		$throwNew($ZipException, "invalid END header (bad central directory offset)"_s);
	}
	$var($bytes, cen, $new($bytes, (int32_t)($nc(this->end)->cenlen + 22)));
	if (readFullyAt(cen, 0, cen->length, cenpos) != $nc(this->end)->cenlen + 22) {
		$throwNew($ZipException, "read CEN tables failed"_s);
	}
	$set(this, inodes, $new($LinkedHashMap, $nc(this->end)->centot + 1));
	int32_t pos = 0;
	int32_t limit = cen->length - 22;
	while (pos < limit) {
		if (!$ZipConstants::cenSigAt(cen, pos)) {
			$throwNew($ZipException, "invalid CEN header (bad signature)"_s);
		}
		int32_t method = $ZipConstants::CENHOW(cen, pos);
		int32_t nlen = $ZipConstants::CENNAM(cen, pos);
		int32_t elen = $ZipConstants::CENEXT(cen, pos);
		int32_t clen = $ZipConstants::CENCOM(cen, pos);
		int32_t flag = $ZipConstants::CENFLG(cen, pos);
		if (((int32_t)(flag & (uint32_t)1)) != 0) {
			$throwNew($ZipException, "invalid CEN header (encrypted entry)"_s);
		}
		if (method != 0 && method != 8) {
			$throwNew($ZipException, $$str({"invalid CEN header (unsupported compression method: "_s, $$str(method), ")"_s}));
		}
		if (pos + 46 + nlen > limit) {
			$throwNew($ZipException, "invalid CEN header (bad header size)"_s);
		}
		$var($ZipFileSystem$IndexNode, inode, $new($ZipFileSystem$IndexNode, cen, pos, nlen));
		$nc(this->inodes)->put(inode, inode);
		if ($nc(this->zc)->isUTF8() || ((int32_t)(flag & (uint32_t)2048)) != 0) {
			checkUTF8(inode->name$);
		} else {
			checkEncoding(inode->name$);
		}
		pos += (46 + nlen + elen + clen);
	}
	if (pos + 22 != cen->length) {
		$throwNew($ZipException, "invalid CEN header (bad header size)"_s);
	}
	buildNodeTree();
	return cen;
}

void ZipFileSystem::checkUTF8($bytes* a) {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t end = $nc(a)->length;
		int32_t pos = 0;
		while (pos < end) {
			if (a->get(pos) < 0) {
				$nc(this->zc)->toString($($Arrays::copyOfRange(a, pos, a->length)));
				break;
			}
			++pos;
		}
	} catch ($Exception& e) {
		$throwNew($ZipException, "invalid CEN header (bad entry name)"_s);
	}
}

void ZipFileSystem::checkEncoding($bytes* a) {
	try {
		$nc(this->zc)->toString(a);
	} catch ($Exception& e) {
		$throwNew($ZipException, "invalid CEN header (bad entry name)"_s);
	}
}

void ZipFileSystem::ensureOpen() {
	if (!this->isOpen$) {
		$throwNew($ClosedFileSystemException);
	}
}

$Path* ZipFileSystem::createTempFileInSameDirectoryAs($Path* path) {
	$useLocalCurrentObjectStackCache();
	$var($Path, parent, $nc($($nc(path)->toAbsolutePath()))->getParent());
	$var($Path, dir, (parent == nullptr) ? $nc($(path->getFileSystem()))->getPath("."_s, $$new($StringArray, 0)) : parent);
	$var($Path, tmpPath, $Files::createTempFile(dir, "zipfstmp"_s, nullptr, $$new($FileAttributeArray, 0)));
	$nc(this->tmppaths)->add(tmpPath);
	return tmpPath;
}

void ZipFileSystem::updateDelete($ZipFileSystem$IndexNode* inode) {
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		try {
			removeFromTree(inode);
			$nc(this->inodes)->remove(inode);
			this->hasUpdate = true;
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ZipFileSystem::update($ZipFileSystem$Entry* e) {
	$useLocalCurrentObjectStackCache();
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ZipFileSystem$IndexNode, old, $cast($ZipFileSystem$IndexNode, $nc(this->inodes)->put(e, e)));
			if (old != nullptr) {
				removeFromTree(old);
			}
			if ($nc(e)->type == $ZipFileSystem$Entry::NEW || $nc(e)->type == $ZipFileSystem$Entry::FILECH || $nc(e)->type == $ZipFileSystem$Entry::COPY) {
				$var($ZipFileSystem$IndexNode, parent, $cast($ZipFileSystem$IndexNode, $nc(this->inodes)->get($($nc(this->LOOKUPKEY)->as($(getParent(e->name$)))))));
				$set(e, sibling, $nc(parent)->child);
				$set(parent, child, e);
			}
			this->hasUpdate = true;
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int64_t ZipFileSystem::copyLOCEntry($ZipFileSystem$Entry* e, bool updateHeader, $OutputStream* os, int64_t written, $bytes* buf) {
	int64_t locoff = $nc(e)->locoff;
	e->locoff = written;
	int64_t size = 0;
	if (((int32_t)(e->flag & (uint32_t)8)) != 0) {
		if (e->size$ >= (int64_t)0x00000000FFFFFFFF || e->csize >= (int64_t)0x00000000FFFFFFFF) {
			size = 24;
		} else {
			size = 16;
		}
	}
	if (readFullyAt(buf, 0, 30 + 1, locoff) != 30 + 1) {
		$throwNew($ZipException, "loc: reading failed"_s);
	}
	if (updateHeader || $ZipConstants::LOCNAM(buf) > 0 && $nc(buf)->get(30) == u'/') {
		int32_t var$0 = 30 + $ZipConstants::LOCNAM(buf);
		locoff += var$0 + $ZipConstants::LOCEXT(buf);
		size += e->csize;
		written = e->writeLOC(os) + size;
	} else {
		$nc(os)->write(buf, 0, 30);
		locoff += 30;
		int32_t var$1 = $ZipConstants::LOCNAM(buf);
		size += var$1 + $ZipConstants::LOCEXT(buf) + e->csize;
		written = 30 + size;
	}
	int32_t n = 0;
	while (size > 0 && (n = (int32_t)readFullyAt(buf, 0, $nc(buf)->length, locoff)) != -1) {
		if (size < n) {
			n = (int32_t)size;
		}
		$nc(os)->write(buf, 0, n);
		size -= n;
		locoff += n;
	}
	return written;
}

int64_t ZipFileSystem::writeEntry($ZipFileSystem$Entry* e, $OutputStream* os) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->bytes == nullptr && e->file == nullptr) {
		return 0;
	}
	int64_t written = 0;
	if ($nc(e)->method$ != 0 && e->csize > 0 && (e->crc$ != 0 || $nc(e)->size$ == 0)) {
		writeTo(e, os);
	} else {
		{
			$var($OutputStream, os2, (e->method$ == 0) ? static_cast<$OutputStream*>($new($ZipFileSystem$EntryOutputStreamCRC32, this, e, os)) : static_cast<$OutputStream*>($new($ZipFileSystem$EntryOutputStreamDef, this, e, os)));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						writeTo(e, os2);
					} catch ($Throwable& t$) {
						if (os2 != nullptr) {
							try {
								os2->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (os2 != nullptr) {
						os2->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
	written += $nc(e)->csize;
	if (((int32_t)(e->flag & (uint32_t)8)) != 0) {
		written += e->writeEXT(os);
	}
	return written;
}

void ZipFileSystem::writeTo($ZipFileSystem$Entry* e, $OutputStream* os) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->bytes != nullptr) {
		$nc(os)->write(e->bytes, 0, $nc(e->bytes)->length);
	} else if (e->file != nullptr) {
		if (e->type == $ZipFileSystem$Entry::NEW || e->type == $ZipFileSystem$Entry::FILECH) {
			{
				$var($InputStream, is, $Files::newInputStream(e->file, $$new($OpenOptionArray, 0)));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							$nc(is)->transferTo(os);
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
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
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
		$Files::delete$(e->file);
		$nc(this->tmppaths)->remove(e->file);
	}
}

void ZipFileSystem::sync() {
	$useLocalCurrentObjectStackCache();
	if (!this->hasUpdate) {
		return;
	}
	$var($PosixFileAttributes, attrs, getPosixAttributes(this->zfpath));
	$var($Path, tmpFile, createTempFileInSameDirectoryAs(this->zfpath));
	{
		$init($StandardOpenOption);
		$var($OutputStream, os, $new($BufferedOutputStream, $($Files::newOutputStream(tmpFile, $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::WRITE)})))));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($ArrayList, elist, $new($ArrayList, $nc(this->inodes)->size()));
					int64_t written = 0;
					$var($bytes, buf, nullptr);
					$var($ZipFileSystem$Entry, e, nullptr);
					$var($ZipFileSystem$IndexNode, manifestInode, $cast($ZipFileSystem$IndexNode, $nc(this->inodes)->get($($ZipFileSystem$IndexNode::keyOf($(getBytes("/META-INF/MANIFEST.MF"_s)))))));
					$var($Iterator, inodeIterator, $nc($($nc(this->inodes)->values()))->iterator());
					bool manifestProcessed = false;
					while ($nc(inodeIterator)->hasNext()) {
						$var($ZipFileSystem$IndexNode, inode, nullptr);
						if (manifestInode == nullptr) {
							$assign(inode, $cast($ZipFileSystem$IndexNode, inodeIterator->next()));
						} else if (manifestProcessed) {
							$assign(inode, $cast($ZipFileSystem$IndexNode, inodeIterator->next()));
							if (inode == manifestInode) {
								continue;
							}
						} else {
							$assign(inode, manifestInode);
							manifestProcessed = true;
						}
						if ($instanceOf($ZipFileSystem$Entry, inode)) {
							$assign(e, $cast($ZipFileSystem$Entry, inode));
							try {
								if ($nc(e)->type == $ZipFileSystem$Entry::COPY) {
									if (buf == nullptr) {
										$assign(buf, $new($bytes, 8192));
									}
									written += copyLOCEntry(e, true, os, written, buf);
								} else {
									e->locoff = written;
									written += e->writeLOC(os);
									written += writeEntry(e, os);
								}
								elist->add(e);
							} catch ($IOException& x) {
								x->printStackTrace();
							}
						} else {
							if ($nc(inode)->pos == -1) {
								continue;
							}
							if ($nc($nc(inode)->name$)->length == 1 && $nc(inode->name$)->get(0) == u'/') {
								continue;
							}
							$assign(e, this->supportPosix ? static_cast<$ZipFileSystem$Entry*>($new($ZipFileSystem$PosixEntry, this, this, inode)) : $new($ZipFileSystem$Entry, this, inode));
							try {
								if (buf == nullptr) {
									$assign(buf, $new($bytes, 8192));
								}
								written += copyLOCEntry(e, false, os, written, buf);
								elist->add(e);
							} catch ($IOException& x) {
								x->printStackTrace();
							}
						}
					}
					$nc(this->end)->cenoff = written;
					{
						$var($Iterator, i$, elist->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($ZipFileSystem$Entry, entry, $cast($ZipFileSystem$Entry, i$->next()));
							{
								written += $nc(entry)->writeCEN(os);
							}
						}
					}
					$nc(this->end)->centot = elist->size();
					$nc(this->end)->cenlen = written - $nc(this->end)->cenoff;
					$nc(this->end)->write(os, written, this->forceEnd64);
				} catch ($Throwable& t$) {
					try {
						os->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				os->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$nc(this->ch)->close();
	$Files::delete$(this->zfpath);
	if (attrs != nullptr) {
		$Files::setPosixFilePermissions(tmpFile, $(attrs->permissions()));
	}
	$init($StandardCopyOption);
	$Files::move(tmpFile, this->zfpath, $$new($CopyOptionArray, {static_cast<$CopyOption*>($StandardCopyOption::REPLACE_EXISTING)}));
	this->hasUpdate = false;
}

$PosixFileAttributes* ZipFileSystem::getPosixAttributes($Path* path) {
	$useLocalCurrentObjectStackCache();
	try {
		$load($PosixFileAttributeView);
		$var($PosixFileAttributeView, view, $cast($PosixFileAttributeView, $Files::getFileAttributeView(path, $PosixFileAttributeView::class$, $$new($LinkOptionArray, 0))));
		if (view == nullptr) {
			return nullptr;
		}
		return $cast($PosixFileAttributes, $nc(view)->readAttributes());
	} catch ($UnsupportedOperationException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$ZipFileSystem$IndexNode* ZipFileSystem::getInode($bytes* path) {
	$useLocalCurrentObjectStackCache();
	return $cast($ZipFileSystem$IndexNode, $nc(this->inodes)->get($($ZipFileSystem$IndexNode::keyOf($cast($bytes, $Objects::requireNonNull($cast($bytes, $($nc(this->entryLookup)->apply(path))), "path"_s))))));
}

$ZipFileSystem$IndexNode* ZipFileSystem::getOrCreateInode($bytes* path, bool isdir) {
	$useLocalCurrentObjectStackCache();
	$var($ZipFileSystem$IndexNode, node, getInode(path));
	if (node != nullptr) {
		return node;
	}
	$assign(node, $new($ZipFileSystem$IndexNode, path, isdir));
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		$var($ZipFileSystem$IndexNode, var$2, nullptr);
		bool return$1 = false;
		try {
			makeParentDirs(node, $cast($ZipFileSystem$IndexNode, $Objects::requireNonNull($cast($ZipFileSystem$IndexNode, $($nc(this->inodes)->get($($ZipFileSystem$IndexNode::keyOf(ZipFileSystem::ROOTPATH))))), "no root node found"_s)));
			$assign(var$2, node);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ZipFileSystem$Entry* ZipFileSystem::getEntry($bytes* path) {
	$var($ZipFileSystem$IndexNode, inode, getInode(path));
	if ($instanceOf($ZipFileSystem$Entry, inode)) {
		return $cast($ZipFileSystem$Entry, inode);
	}
	if (inode == nullptr || $nc(inode)->pos == -1) {
		return nullptr;
	}
	return this->supportPosix ? static_cast<$ZipFileSystem$Entry*>($new($ZipFileSystem$PosixEntry, this, this, inode)) : $new($ZipFileSystem$Entry, this, inode);
}

void ZipFileSystem::deleteFile($bytes* path, bool failIfNotExists) {
	$useLocalCurrentObjectStackCache();
	checkWritable();
	$var($ZipFileSystem$IndexNode, inode, getInode(path));
	if (inode == nullptr) {
		if (path != nullptr && path->length == 0) {
			$throwNew($ZipException, "root directory </> cannot be deleted"_s);
		}
		if (failIfNotExists) {
			$throwNew($NoSuchFileException, $(getString(path)));
		}
	} else {
		if ($nc(inode)->isDir() && inode->child != nullptr) {
			$throwNew($DirectoryNotEmptyException, $(getString(path)));
		}
		updateDelete(inode);
	}
}

$OutputStream* ZipFileSystem::getOutputStream($ZipFileSystem$Entry* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->mtime == -1) {
		e->mtime = $System::currentTimeMillis();
	}
	if ($nc(e)->method$ == -1) {
		e->method$ = this->defaultCompressionMethod;
	}
	$nc(e)->flag = 8;
	if ($nc(this->zc)->isUTF8()) {
		e->flag |= 2048;
	}
	$var($OutputStream, os, nullptr);
	if (this->useTempFile) {
		$set(e, file, getTempPathForEntry(nullptr));
		$init($StandardOpenOption);
		$assign(os, $Files::newOutputStream(e->file, $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::WRITE)})));
	} else {
		$assign(os, $new($ByteArrayOutputStream, (e->size$ > 0) ? (int32_t)e->size$ : 8192));
	}
	if (e->method$ == 8) {
		return $new($ZipFileSystem$DeflatingEntryOutputStream, this, e, os);
	} else {
		return $new($ZipFileSystem$EntryOutputStream, this, e, os);
	}
}

$InputStream* ZipFileSystem::getInputStream($ZipFileSystem$Entry* e) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, eis, nullptr);
	if ($nc(e)->type == $ZipFileSystem$Entry::NEW) {
		if (e->bytes != nullptr) {
			$assign(eis, $new($ByteArrayInputStream, e->bytes));
		} else if (e->file != nullptr) {
			$assign(eis, $Files::newInputStream(e->file, $$new($OpenOptionArray, 0)));
		} else {
			$throwNew($ZipException, "update entry data is missing"_s);
		}
	} else if (e->type == $ZipFileSystem$Entry::FILECH) {
		$assign(eis, $Files::newInputStream(e->file, $$new($OpenOptionArray, 0)));
		return eis;
	} else {
		$assign(eis, $new($ZipFileSystem$EntryInputStream, this, e));
	}
	if ($nc(e)->method$ == 8) {
		int64_t bufSize = e->size$ + 2;
		if (bufSize > 0x00010000) {
			bufSize = 8192;
		}
		int64_t size = e->size$;
		$assign(eis, $new($ZipFileSystem$2, this, eis, $(getInflater()), (int32_t)bufSize, size));
	} else if (e->method$ == 0) {
	} else {
		$throwNew($ZipException, "invalid compression method"_s);
	}
	$nc(this->streams)->add(eis);
	return eis;
}

$Inflater* ZipFileSystem::getInflater() {
	$synchronized(this->inflaters) {
		int32_t size = $nc(this->inflaters)->size();
		if (size > 0) {
			return $cast($Inflater, $nc(this->inflaters)->remove(size - 1));
		} else {
			return $new($Inflater, true);
		}
	}
}

void ZipFileSystem::releaseInflater($Inflater* inf) {
	$synchronized(this->inflaters) {
		if ($nc(this->inflaters)->size() < ZipFileSystem::MAX_FLATER) {
			$nc(inf)->reset();
			$nc(this->inflaters)->add(inf);
		} else {
			$nc(inf)->end();
		}
	}
}

$Deflater* ZipFileSystem::getDeflater() {
	$synchronized(this->deflaters) {
		int32_t size = $nc(this->deflaters)->size();
		if (size > 0) {
			return $cast($Deflater, $nc(this->deflaters)->remove(size - 1));
		} else {
			return $new($Deflater, $Deflater::DEFAULT_COMPRESSION, true);
		}
	}
}

void ZipFileSystem::releaseDeflater($Deflater* def) {
	$synchronized(this->deflaters) {
		if ($nc(this->deflaters)->size() < ZipFileSystem::MAX_FLATER) {
			$nc(def)->reset();
			$nc(this->deflaters)->add(def);
		} else {
			$nc(def)->end();
		}
	}
}

$bytes* ZipFileSystem::lambda$createVersionedLinks$13($HashMap* aliasMap, $bytes* path) {
	$init(ZipFileSystem);
	$useLocalCurrentObjectStackCache();
	$var($bytes, entry, $cast($bytes, $nc(aliasMap)->get($($ZipFileSystem$IndexNode::keyOf(path)))));
	return entry == nullptr ? path : entry;
}

void ZipFileSystem::lambda$createVersionedLinks$12($HashMap* aliasMap, $ZipFileSystem$IndexNode* versionNode) {
	walk($nc(versionNode)->child, static_cast<$Consumer*>($$new(ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13, this, aliasMap, versionNode)));
}

void ZipFileSystem::lambda$createVersionedLinks$11($HashMap* aliasMap, $ZipFileSystem$IndexNode* versionNode, $ZipFileSystem$IndexNode* entryNode) {
	$useLocalCurrentObjectStackCache();
	$nc(aliasMap)->put($(getOrCreateInode($(getRootName(entryNode, versionNode)), $nc(entryNode)->isdir)), $nc(entryNode)->name$);
}

$Boolean* ZipFileSystem::lambda$close$10($Path* p) {
	$init(ZipFileSystem);
	return $Boolean::valueOf($Files::deleteIfExists(p));
}

$Void* ZipFileSystem::lambda$close$9() {
	sync();
	return nullptr;
}

bool ZipFileSystem::lambda$getPathMatcher$8($Pattern* pattern, $Path* path) {
	$init(ZipFileSystem);
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(pattern)->matcher($($nc(path)->toString()))))->matches();
}

$GroupPrincipal* ZipFileSystem::lambda$initGroup$6($PosixFileAttributeView* zfpv) {
	$init(ZipFileSystem);
	return $nc($($cast($PosixFileAttributes, $nc(zfpv)->readAttributes())))->group();
}

$String* ZipFileSystem::lambda$initOwner$5(Object$* o) {
	$init(ZipFileSystem);
	return $cast($String, o);
}

$String* ZipFileSystem::lambda$initOwner$4($String* userName) {
	$init(ZipFileSystem);
	return userName;
}

$String* ZipFileSystem::lambda$initOwner$3() {
	$init(ZipFileSystem);
	return $System::getProperty("user.name"_s);
}

$UserPrincipal* ZipFileSystem::lambda$initOwner$2($Path* zfpath) {
	$init(ZipFileSystem);
	return $Files::getOwner(zfpath, $$new($LinkOptionArray, 0));
}

$Boolean* ZipFileSystem::lambda$new$1($Path* zfpath) {
	$init(ZipFileSystem);
	return $Boolean::valueOf($Files::isWritable(zfpath));
}

$Boolean* ZipFileSystem::lambda$static$0() {
	$init(ZipFileSystem);
	return $Boolean::valueOf($nc($($System::getProperty("os.name"_s)))->startsWith("Windows"_s));
}

void clinit$ZipFileSystem($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ZipFileSystem::PROPERTY_POSIX, "enablePosixFileAttributes"_s);
	$assignStatic(ZipFileSystem::PROPERTY_DEFAULT_OWNER, "defaultOwner"_s);
	$assignStatic(ZipFileSystem::PROPERTY_DEFAULT_GROUP, "defaultGroup"_s);
	$assignStatic(ZipFileSystem::PROPERTY_DEFAULT_PERMISSIONS, "defaultPermissions"_s);
	$assignStatic(ZipFileSystem::PROPERTY_RELEASE_VERSION, "releaseVersion"_s);
	$assignStatic(ZipFileSystem::PROPERTY_MULTI_RELEASE, "multi-release"_s);
	$assignStatic(ZipFileSystem::PROPERTY_COMPRESSION_METHOD, "compressionMethod"_s);
	$assignStatic(ZipFileSystem::COMPRESSION_METHOD_DEFLATED, "DEFLATED"_s);
	$assignStatic(ZipFileSystem::COMPRESSION_METHOD_STORED, "STORED"_s);
	$assignStatic(ZipFileSystem::GLOB_SYNTAX, "glob"_s);
	$assignStatic(ZipFileSystem::REGEX_SYNTAX, "regex"_s);
	$beforeCallerSensitive();
	ZipFileSystem::isWindows = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(ZipFileSystem$$Lambda$lambda$static$0)))))))->booleanValue();
	$assignStatic(ZipFileSystem::ROOTPATH, $new($bytes, {(int8_t)u'/'}));
	$assignStatic(ZipFileSystem::DEFAULT_PERMISSIONS, $PosixFilePermissions::fromString("rwxrwxrwx"_s));
}

ZipFileSystem::ZipFileSystem() {
}

$Class* ZipFileSystem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ZipFileSystem$$Lambda$lambda$static$0::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$lambda$new$1$1::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$lambda$initOwner$2$2::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$initOwner$2$2::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$lambda$initOwner$3$3::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$initOwner$3$3::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$lambda$initOwner$4$4::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$initOwner$4$4::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$lambda$initOwner$5$5::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$initOwner$5$5::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$getName$6::classInfo$.name)) {
			return ZipFileSystem$$Lambda$getName$6::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$lambda$initGroup$6$7::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$initGroup$6$7::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$getPathMatcher$8$8::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$lambda$close$9$9::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$close$9$9::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$lambda$close$10$10::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$close$10$10::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$createVersionedLinks$12$11::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$createVersionedLinks$13$12::load$(name, initialize);
		}
		if (name->equals(ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13::classInfo$.name)) {
			return ZipFileSystem$$Lambda$lambda$createVersionedLinks$11$13::load$(name, initialize);
		}
	}
	$loadClass(ZipFileSystem, name, initialize, &_ZipFileSystem_ClassInfo_, clinit$ZipFileSystem, allocate$ZipFileSystem);
	return class$;
}

$Class* ZipFileSystem::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk