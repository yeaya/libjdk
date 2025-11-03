#include <jdk/nio/zipfs/ZipFileSystem$PosixEntry.h>

#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/util/Collection.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jdk/nio/zipfs/ZipFileSystem$Entry.h>
#include <jdk/nio/zipfs/ZipFileSystem$IndexNode.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jcpp.h>

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $PosixFileAttributes = ::java::nio::file::attribute::PosixFileAttributes;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $Collection = ::java::util::Collection;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipFileSystem$Entry = ::jdk::nio::zipfs::ZipFileSystem$Entry;
using $ZipFileSystem$IndexNode = ::jdk::nio::zipfs::ZipFileSystem$IndexNode;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileSystem$PosixEntry_FieldInfo_[] = {
	{"this$0", "Ljdk/nio/zipfs/ZipFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFileSystem$PosixEntry, this$0)},
	{"owner", "Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PRIVATE, $field(ZipFileSystem$PosixEntry, owner$)},
	{"group", "Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PRIVATE, $field(ZipFileSystem$PosixEntry, group$)},
	{}
};

$MethodInfo _ZipFileSystem$PosixEntry_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*fileKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;[BZI)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$PosixEntry::*)($ZipFileSystem*,$bytes*,bool,int32_t)>(&ZipFileSystem$PosixEntry::init$))},
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;[BIZI[Ljava/nio/file/attribute/FileAttribute;)V", "([BIZI[Ljava/nio/file/attribute/FileAttribute<*>;)V", $TRANSIENT, $method(static_cast<void(ZipFileSystem$PosixEntry::*)($ZipFileSystem*,$bytes*,int32_t,bool,int32_t,$FileAttributeArray*)>(&ZipFileSystem$PosixEntry::init$))},
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;[BLjava/nio/file/Path;I[Ljava/nio/file/attribute/FileAttribute;)V", "([BLjava/nio/file/Path;I[Ljava/nio/file/attribute/FileAttribute<*>;)V", $TRANSIENT, $method(static_cast<void(ZipFileSystem$PosixEntry::*)($ZipFileSystem*,$bytes*,$Path*,int32_t,$FileAttributeArray*)>(&ZipFileSystem$PosixEntry::init$))},
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljdk/nio/zipfs/ZipFileSystem$PosixEntry;II)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$PosixEntry::*)($ZipFileSystem*,ZipFileSystem$PosixEntry*,int32_t,int32_t)>(&ZipFileSystem$PosixEntry::init$))},
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljdk/nio/zipfs/ZipFileSystem$PosixEntry;I)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$PosixEntry::*)($ZipFileSystem*,ZipFileSystem$PosixEntry*,int32_t)>(&ZipFileSystem$PosixEntry::init$))},
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljdk/nio/zipfs/ZipFileSystem;Ljdk/nio/zipfs/ZipFileSystem$IndexNode;)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$PosixEntry::*)($ZipFileSystem*,$ZipFileSystem*,$ZipFileSystem$IndexNode*)>(&ZipFileSystem$PosixEntry::init$)), "java.io.IOException"},
	{"group", "()Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PUBLIC},
	{"*isDirectory", "()Z", nullptr, $PUBLIC},
	{"*isOther", "()Z", nullptr, $PUBLIC},
	{"*isRegularFile", "()Z", nullptr, $PUBLIC},
	{"*isSymbolicLink", "()Z", nullptr, $PUBLIC},
	{"*lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"*lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"owner", "()Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC},
	{"permissions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*size", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ZipFileSystem$PosixEntry_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$PosixEntry", "jdk.nio.zipfs.ZipFileSystem", "PosixEntry", $FINAL},
	{"jdk.nio.zipfs.ZipFileSystem$Entry", "jdk.nio.zipfs.ZipFileSystem", "Entry", $STATIC},
	{}
};

$ClassInfo _ZipFileSystem$PosixEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem$PosixEntry",
	"jdk.nio.zipfs.ZipFileSystem$Entry",
	"java.nio.file.attribute.PosixFileAttributes",
	_ZipFileSystem$PosixEntry_FieldInfo_,
	_ZipFileSystem$PosixEntry_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFileSystem$PosixEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem"
};

$Object* allocate$ZipFileSystem$PosixEntry($Class* clazz) {
	return $of($alloc(ZipFileSystem$PosixEntry));
}

$String* ZipFileSystem$PosixEntry::toString() {
	 return this->$ZipFileSystem$Entry::toString();
}

$FileTime* ZipFileSystem$PosixEntry::creationTime() {
	 return this->$ZipFileSystem$Entry::creationTime();
}

bool ZipFileSystem$PosixEntry::isDirectory() {
	 return this->$ZipFileSystem$Entry::isDirectory();
}

bool ZipFileSystem$PosixEntry::isOther() {
	 return this->$ZipFileSystem$Entry::isOther();
}

bool ZipFileSystem$PosixEntry::isRegularFile() {
	 return this->$ZipFileSystem$Entry::isRegularFile();
}

$FileTime* ZipFileSystem$PosixEntry::lastAccessTime() {
	 return this->$ZipFileSystem$Entry::lastAccessTime();
}

$FileTime* ZipFileSystem$PosixEntry::lastModifiedTime() {
	 return this->$ZipFileSystem$Entry::lastModifiedTime();
}

int64_t ZipFileSystem$PosixEntry::size() {
	 return this->$ZipFileSystem$Entry::size();
}

bool ZipFileSystem$PosixEntry::isSymbolicLink() {
	 return this->$ZipFileSystem$Entry::isSymbolicLink();
}

$Object* ZipFileSystem$PosixEntry::fileKey() {
	 return this->$ZipFileSystem$Entry::fileKey();
}

bool ZipFileSystem$PosixEntry::equals(Object$* other) {
	 return this->$ZipFileSystem$Entry::equals(other);
}

int32_t ZipFileSystem$PosixEntry::hashCode() {
	 return this->$ZipFileSystem$Entry::hashCode();
}

$Object* ZipFileSystem$PosixEntry::clone() {
	 return this->$ZipFileSystem$Entry::clone();
}

void ZipFileSystem$PosixEntry::finalize() {
	this->$ZipFileSystem$Entry::finalize();
}

void ZipFileSystem$PosixEntry::init$($ZipFileSystem* this$0, $bytes* name, bool isdir, int32_t method) {
	$set(this, this$0, this$0);
	$ZipFileSystem$Entry::init$(name, isdir, method);
	$set(this, owner$, this->this$0->defaultOwner);
	$set(this, group$, this->this$0->defaultGroup);
}

void ZipFileSystem$PosixEntry::init$($ZipFileSystem* this$0, $bytes* name, int32_t type, bool isdir, int32_t method, $FileAttributeArray* attrs) {
	$set(this, this$0, this$0);
	$ZipFileSystem$Entry::init$(name, type, isdir, method, attrs);
	$set(this, owner$, this->this$0->defaultOwner);
	$set(this, group$, this->this$0->defaultGroup);
}

void ZipFileSystem$PosixEntry::init$($ZipFileSystem* this$0, $bytes* name, $Path* file, int32_t type, $FileAttributeArray* attrs) {
	$set(this, this$0, this$0);
	$ZipFileSystem$Entry::init$(name, file, type, attrs);
	$set(this, owner$, this->this$0->defaultOwner);
	$set(this, group$, this->this$0->defaultGroup);
}

void ZipFileSystem$PosixEntry::init$($ZipFileSystem* this$0, ZipFileSystem$PosixEntry* e, int32_t type, int32_t compressionMethod) {
	$set(this, this$0, this$0);
	$ZipFileSystem$Entry::init$(static_cast<$ZipFileSystem$Entry*>(e), type);
	$set(this, owner$, this->this$0->defaultOwner);
	$set(this, group$, this->this$0->defaultGroup);
	this->method$ = compressionMethod;
}

void ZipFileSystem$PosixEntry::init$($ZipFileSystem* this$0, ZipFileSystem$PosixEntry* e, int32_t type) {
	$set(this, this$0, this$0);
	$ZipFileSystem$Entry::init$(static_cast<$ZipFileSystem$Entry*>(e), type);
	$set(this, owner$, this->this$0->defaultOwner);
	$set(this, group$, this->this$0->defaultGroup);
	$set(this, owner$, $nc(e)->owner$);
	$set(this, group$, e->group$);
}

void ZipFileSystem$PosixEntry::init$($ZipFileSystem* this$0, $ZipFileSystem* zipfs, $ZipFileSystem$IndexNode* inode) {
	$set(this, this$0, this$0);
	$ZipFileSystem$Entry::init$(zipfs, inode);
	$set(this, owner$, this->this$0->defaultOwner);
	$set(this, group$, this->this$0->defaultGroup);
}

$UserPrincipal* ZipFileSystem$PosixEntry::owner() {
	return this->owner$;
}

$GroupPrincipal* ZipFileSystem$PosixEntry::group() {
	return this->group$;
}

$Set* ZipFileSystem$PosixEntry::permissions() {
	$useLocalCurrentObjectStackCache();
	return $cast($Set, $nc($(storedPermissions()))->orElse($($Set::copyOf(this->this$0->defaultPermissions))));
}

ZipFileSystem$PosixEntry::ZipFileSystem$PosixEntry() {
}

$Class* ZipFileSystem$PosixEntry::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$PosixEntry, name, initialize, &_ZipFileSystem$PosixEntry_ClassInfo_, allocate$ZipFileSystem$PosixEntry);
	return class$;
}

$Class* ZipFileSystem$PosixEntry::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk