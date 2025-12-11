#include <jdk/nio/zipfs/ZipFileSystem$Entry.h>

#include <java/io/OutputStream.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/Appendable.h>
#include <java/lang/Math.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/nio/file/attribute/PosixFilePermission.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Formatter.h>
#include <java/util/HashSet.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/zip/ZipException.h>
#include <jdk/nio/zipfs/ZipConstants.h>
#include <jdk/nio/zipfs/ZipFileSystem$IndexNode.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jdk/nio/zipfs/ZipUtils.h>
#include <jcpp.h>

#undef CEN
#undef COPY
#undef EXTSIG
#undef FILECH
#undef NEW

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $PosixFilePermissionArray = $Array<::java::nio::file::attribute::PosixFilePermission>;
using $OutputStream = ::java::io::OutputStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Appendable = ::java::lang::Appendable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $PosixFilePermission = ::java::nio::file::attribute::PosixFilePermission;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Formatter = ::java::util::Formatter;
using $HashSet = ::java::util::HashSet;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $ZipException = ::java::util::zip::ZipException;
using $ZipConstants = ::jdk::nio::zipfs::ZipConstants;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipFileSystem$IndexNode = ::jdk::nio::zipfs::ZipFileSystem$IndexNode;
using $ZipUtils = ::jdk::nio::zipfs::ZipUtils;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileSystem$Entry_FieldInfo_[] = {
	{"CEN", "I", nullptr, $STATIC | $FINAL, $constField(ZipFileSystem$Entry, CEN)},
	{"NEW", "I", nullptr, $STATIC | $FINAL, $constField(ZipFileSystem$Entry, NEW)},
	{"FILECH", "I", nullptr, $STATIC | $FINAL, $constField(ZipFileSystem$Entry, FILECH)},
	{"COPY", "I", nullptr, $STATIC | $FINAL, $constField(ZipFileSystem$Entry, COPY)},
	{"bytes", "[B", nullptr, 0, $field(ZipFileSystem$Entry, bytes)},
	{"file", "Ljava/nio/file/Path;", nullptr, 0, $field(ZipFileSystem$Entry, file)},
	{"type", "I", nullptr, 0, $field(ZipFileSystem$Entry, type)},
	{"version", "I", nullptr, 0, $field(ZipFileSystem$Entry, version$)},
	{"flag", "I", nullptr, 0, $field(ZipFileSystem$Entry, flag)},
	{"posixPerms", "I", nullptr, 0, $field(ZipFileSystem$Entry, posixPerms)},
	{"method", "I", nullptr, 0, $field(ZipFileSystem$Entry, method$)},
	{"mtime", "J", nullptr, 0, $field(ZipFileSystem$Entry, mtime)},
	{"atime", "J", nullptr, 0, $field(ZipFileSystem$Entry, atime)},
	{"ctime", "J", nullptr, 0, $field(ZipFileSystem$Entry, ctime)},
	{"crc", "J", nullptr, 0, $field(ZipFileSystem$Entry, crc$)},
	{"csize", "J", nullptr, 0, $field(ZipFileSystem$Entry, csize)},
	{"size", "J", nullptr, 0, $field(ZipFileSystem$Entry, size$)},
	{"extra", "[B", nullptr, 0, $field(ZipFileSystem$Entry, extra$)},
	{"locoff", "J", nullptr, 0, $field(ZipFileSystem$Entry, locoff)},
	{"comment", "[B", nullptr, 0, $field(ZipFileSystem$Entry, comment$)},
	{}
};

$MethodInfo _ZipFileSystem$Entry_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "([BZI)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$Entry::*)($bytes*,bool,int32_t)>(&ZipFileSystem$Entry::init$))},
	{"<init>", "([BIZI[Ljava/nio/file/attribute/FileAttribute;)V", "([BIZI[Ljava/nio/file/attribute/FileAttribute<*>;)V", $TRANSIENT, $method(static_cast<void(ZipFileSystem$Entry::*)($bytes*,int32_t,bool,int32_t,$FileAttributeArray*)>(&ZipFileSystem$Entry::init$))},
	{"<init>", "([BLjava/nio/file/Path;I[Ljava/nio/file/attribute/FileAttribute;)V", "([BLjava/nio/file/Path;I[Ljava/nio/file/attribute/FileAttribute<*>;)V", $TRANSIENT, $method(static_cast<void(ZipFileSystem$Entry::*)($bytes*,$Path*,int32_t,$FileAttributeArray*)>(&ZipFileSystem$Entry::init$))},
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem$Entry;II)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$Entry::*)(ZipFileSystem$Entry*,int32_t,int32_t)>(&ZipFileSystem$Entry::init$))},
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem$Entry;I)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$Entry::*)(ZipFileSystem$Entry*,int32_t)>(&ZipFileSystem$Entry::init$))},
	{"<init>", "(Ljdk/nio/zipfs/ZipFileSystem;Ljdk/nio/zipfs/ZipFileSystem$IndexNode;)V", nullptr, 0, $method(static_cast<void(ZipFileSystem$Entry::*)($ZipFileSystem*,$ZipFileSystem$IndexNode*)>(&ZipFileSystem$Entry::init$)), "java.io.IOException"},
	{"comment", "()[B", nullptr, $PUBLIC},
	{"compressedSize", "()J", nullptr, $PUBLIC},
	{"crc", "()J", nullptr, $PUBLIC},
	{"creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"extra", "()[B", nullptr, $PUBLIC},
	{"fileKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isDirectory", "()Z", nullptr, $PUBLIC},
	{"isOther", "()Z", nullptr, $PUBLIC},
	{"isRegularFile", "()Z", nullptr, $PUBLIC},
	{"isSymbolicLink", "()Z", nullptr, $PUBLIC},
	{"lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"method", "()I", nullptr, $PUBLIC},
	{"readCEN", "(Ljdk/nio/zipfs/ZipFileSystem;Ljdk/nio/zipfs/ZipFileSystem$IndexNode;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem$Entry::*)($ZipFileSystem*,$ZipFileSystem$IndexNode*)>(&ZipFileSystem$Entry::readCEN)), "java.io.IOException"},
	{"readExtra", "(Ljdk/nio/zipfs/ZipFileSystem;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem$Entry::*)($ZipFileSystem*)>(&ZipFileSystem$Entry::readExtra)), "java.io.IOException"},
	{"readLocEXTT", "(Ljdk/nio/zipfs/ZipFileSystem;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipFileSystem$Entry::*)($ZipFileSystem*)>(&ZipFileSystem$Entry::readLocEXTT)), "java.io.IOException"},
	{"size", "()J", nullptr, $PUBLIC},
	{"storedPermissions", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"version", "(Z)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ZipFileSystem$Entry::*)(bool)>(&ZipFileSystem$Entry::version)), "java.util.zip.ZipException"},
	{"versionMadeBy", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ZipFileSystem$Entry::*)(int32_t)>(&ZipFileSystem$Entry::versionMadeBy))},
	{"writeCEN", "(Ljava/io/OutputStream;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ZipFileSystem$Entry::*)($OutputStream*)>(&ZipFileSystem$Entry::writeCEN)), "java.io.IOException"},
	{"writeEXT", "(Ljava/io/OutputStream;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ZipFileSystem$Entry::*)($OutputStream*)>(&ZipFileSystem$Entry::writeEXT)), "java.io.IOException"},
	{"writeLOC", "(Ljava/io/OutputStream;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ZipFileSystem$Entry::*)($OutputStream*)>(&ZipFileSystem$Entry::writeLOC)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ZipFileSystem$Entry_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$Entry", "jdk.nio.zipfs.ZipFileSystem", "Entry", $STATIC},
	{"jdk.nio.zipfs.ZipFileSystem$IndexNode", "jdk.nio.zipfs.ZipFileSystem", "IndexNode", $STATIC},
	{}
};

$ClassInfo _ZipFileSystem$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem$Entry",
	"jdk.nio.zipfs.ZipFileSystem$IndexNode",
	"jdk.nio.zipfs.ZipFileAttributes",
	_ZipFileSystem$Entry_FieldInfo_,
	_ZipFileSystem$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFileSystem$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem"
};

$Object* allocate$ZipFileSystem$Entry($Class* clazz) {
	return $of($alloc(ZipFileSystem$Entry));
}

bool ZipFileSystem$Entry::equals(Object$* other) {
	 return this->$ZipFileSystem$IndexNode::equals(other);
}

int32_t ZipFileSystem$Entry::hashCode() {
	 return this->$ZipFileSystem$IndexNode::hashCode();
}

$Object* ZipFileSystem$Entry::clone() {
	 return this->$ZipFileSystem$IndexNode::clone();
}

void ZipFileSystem$Entry::finalize() {
	this->$ZipFileSystem$IndexNode::finalize();
}

void ZipFileSystem$Entry::init$($bytes* name, bool isdir, int32_t method) {
	$ZipFileSystem$IndexNode::init$();
	this->type = ZipFileSystem$Entry::CEN;
	this->posixPerms = -1;
	this->method$ = -1;
	this->mtime = -1;
	this->atime = -1;
	this->ctime = -1;
	this->crc$ = -1;
	this->csize = -1;
	this->size$ = -1;
	this->name(name);
	this->isdir = isdir;
	this->mtime = (this->ctime = (this->atime = $System::currentTimeMillis()));
	this->crc$ = 0;
	this->size$ = 0;
	this->csize = 0;
	this->method$ = method;
}

void ZipFileSystem$Entry::init$($bytes* name, int32_t type, bool isdir, int32_t method, $FileAttributeArray* attrs) {
	$useLocalCurrentObjectStackCache();
	ZipFileSystem$Entry::init$(name, isdir, method);
	this->type = type;
	{
		$var($FileAttributeArray, arr$, attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($FileAttribute, attr, arr$->get(i$));
			{
				$var($String, attrName, $nc(attr)->name());
				if ($nc(attrName)->equals("posix:permissions"_s)) {
					this->posixPerms = $ZipUtils::permsToFlags($cast($Set, $(attr->value())));
				}
			}
		}
	}
}

void ZipFileSystem$Entry::init$($bytes* name, $Path* file, int32_t type, $FileAttributeArray* attrs) {
	ZipFileSystem$Entry::init$(name, type, false, 0, attrs);
	$set(this, file, file);
}

void ZipFileSystem$Entry::init$(ZipFileSystem$Entry* e, int32_t type, int32_t compressionMethod) {
	ZipFileSystem$Entry::init$(e, type);
	this->method$ = compressionMethod;
}

void ZipFileSystem$Entry::init$(ZipFileSystem$Entry* e, int32_t type) {
	$ZipFileSystem$IndexNode::init$();
	this->type = ZipFileSystem$Entry::CEN;
	this->posixPerms = -1;
	this->method$ = -1;
	this->mtime = -1;
	this->atime = -1;
	this->ctime = -1;
	this->crc$ = -1;
	this->csize = -1;
	this->size$ = -1;
	name($nc(e)->name$);
	this->isdir = $nc(e)->isdir;
	this->version$ = e->version$;
	this->ctime = e->ctime;
	this->atime = e->atime;
	this->mtime = e->mtime;
	this->crc$ = e->crc$;
	this->size$ = e->size$;
	this->csize = e->csize;
	this->method$ = e->method$;
	$set(this, extra$, e->extra$);
	this->locoff = e->locoff;
	$set(this, comment$, e->comment$);
	this->posixPerms = e->posixPerms;
	this->type = type;
}

void ZipFileSystem$Entry::init$($ZipFileSystem* zipfs, $ZipFileSystem$IndexNode* inode) {
	$ZipFileSystem$IndexNode::init$();
	this->type = ZipFileSystem$Entry::CEN;
	this->posixPerms = -1;
	this->method$ = -1;
	this->mtime = -1;
	this->atime = -1;
	this->ctime = -1;
	this->crc$ = -1;
	this->csize = -1;
	this->size$ = -1;
	readCEN(zipfs, inode);
}

int32_t ZipFileSystem$Entry::version(bool zip64) {
	if (zip64) {
		return 45;
	}
	if (this->method$ == 8) {
		return 20;
	} else if (this->method$ == 0) {
		return 10;
	}
	$throwNew($ZipException, "unsupported compression method"_s);
}

int32_t ZipFileSystem$Entry::versionMadeBy(int32_t version) {
	return (this->posixPerms < 0) ? version : 768 | ((int32_t)(version & (uint32_t)255));
}

void ZipFileSystem$Entry::readCEN($ZipFileSystem* zipfs, $ZipFileSystem$IndexNode* inode) {
	$var($bytes, cen, $nc(zipfs)->cen);
	int32_t pos = $nc(inode)->pos;
	if (!$ZipConstants::cenSigAt(cen, pos)) {
		$throwNew($ZipException, "invalid CEN header (bad signature)"_s);
	}
	this->version$ = $ZipConstants::CENVER(cen, pos);
	this->flag = $ZipConstants::CENFLG(cen, pos);
	this->method$ = $ZipConstants::CENHOW(cen, pos);
	this->mtime = $ZipUtils::dosToJavaTime($ZipConstants::CENTIM(cen, pos));
	this->crc$ = $ZipConstants::CENCRC(cen, pos);
	this->csize = $ZipConstants::CENSIZ(cen, pos);
	this->size$ = $ZipConstants::CENLEN(cen, pos);
	int32_t nlen = $ZipConstants::CENNAM(cen, pos);
	int32_t elen = $ZipConstants::CENEXT(cen, pos);
	int32_t clen = $ZipConstants::CENCOM(cen, pos);
	if ($ZipConstants::CENVEM_FA(cen, pos) == 3) {
		this->posixPerms = (int32_t)($ZipConstants::CENATX_PERMS(cen, pos) & (uint32_t)4095);
	}
	this->locoff = $ZipConstants::CENOFF(cen, pos);
	pos += 46;
	$set(this, name$, inode->name$);
	this->isdir = inode->isdir;
	this->hashcode = inode->hashcode;
	pos += nlen;
	if (elen > 0) {
		$set(this, extra$, $Arrays::copyOfRange(cen, pos, pos + elen));
		pos += elen;
		readExtra(zipfs);
	}
	if (clen > 0) {
		$set(this, comment$, $Arrays::copyOfRange(cen, pos, pos + clen));
	}
}

int32_t ZipFileSystem$Entry::writeCEN($OutputStream* os) {
	int64_t csize0 = this->csize;
	int64_t size0 = this->size$;
	int64_t locoff0 = this->locoff;
	int32_t elen64 = 0;
	int32_t elenNTFS = 0;
	int32_t elenEXTT = 0;
	bool foundExtraTime = false;
	$var($bytes, zname, this->isdir ? $ZipUtils::toDirectoryPath(this->name$) : this->name$);
	int32_t nlen = (zname != nullptr) ? $nc(zname)->length - 1 : 0;
	int32_t elen = (this->extra$ != nullptr) ? $nc(this->extra$)->length : 0;
	int32_t eoff = 0;
	int32_t clen = (this->comment$ != nullptr) ? $nc(this->comment$)->length : 0;
	if (this->csize >= (int64_t)0x00000000FFFFFFFF) {
		csize0 = 0x00000000FFFFFFFF;
		elen64 += 8;
	}
	if (this->size$ >= (int64_t)0x00000000FFFFFFFF) {
		size0 = 0x00000000FFFFFFFF;
		elen64 += 8;
	}
	if (this->locoff >= (int64_t)0x00000000FFFFFFFF) {
		locoff0 = 0x00000000FFFFFFFF;
		elen64 += 8;
	}
	if (elen64 != 0) {
		elen64 += 4;
	}
	bool zip64 = (elen64 != 0);
	int32_t version0 = version(zip64);
	while (eoff + 4 < elen) {
		int32_t tag = $ZipConstants::SH(this->extra$, eoff);
		int32_t sz = $ZipConstants::SH(this->extra$, eoff + 2);
		if (tag == 21589 || tag == 10) {
			foundExtraTime = true;
		}
		eoff += (4 + sz);
	}
	if (!foundExtraTime) {
		$init($ZipFileSystem);
		if ($ZipFileSystem::isWindows) {
			elenNTFS = 36;
		} else {
			elenEXTT = 9;
		}
	}
	$init($ZipConstants);
	$ZipUtils::writeInt(os, $ZipConstants::CENSIG$);
	$ZipUtils::writeShort(os, versionMadeBy(version0));
	$ZipUtils::writeShort(os, version0);
	$ZipUtils::writeShort(os, this->flag);
	$ZipUtils::writeShort(os, this->method$);
	$ZipUtils::writeInt(os, (int32_t)$ZipUtils::javaToDosTime(this->mtime));
	$ZipUtils::writeInt(os, this->crc$);
	$ZipUtils::writeInt(os, csize0);
	$ZipUtils::writeInt(os, size0);
	$ZipUtils::writeShort(os, nlen);
	$ZipUtils::writeShort(os, elen + elen64 + elenNTFS + elenEXTT);
	if (this->comment$ != nullptr) {
		$ZipUtils::writeShort(os, $Math::min(clen, 0x0000FFFF));
	} else {
		$ZipUtils::writeShort(os, 0);
	}
	$ZipUtils::writeShort(os, 0);
	$ZipUtils::writeShort(os, 0);
	$ZipUtils::writeInt(os, this->posixPerms > 0 ? this->posixPerms << 16 : 0);
	$ZipUtils::writeInt(os, locoff0);
	$ZipUtils::writeBytes(os, zname, 1, nlen);
	if (zip64) {
		$ZipUtils::writeShort(os, 1);
		$ZipUtils::writeShort(os, elen64 - 4);
		if (size0 == (int64_t)0x00000000FFFFFFFF) {
			$ZipUtils::writeLong(os, this->size$);
		}
		if (csize0 == (int64_t)0x00000000FFFFFFFF) {
			$ZipUtils::writeLong(os, this->csize);
		}
		if (locoff0 == (int64_t)0x00000000FFFFFFFF) {
			$ZipUtils::writeLong(os, this->locoff);
		}
	}
	if (elenNTFS != 0) {
		$ZipUtils::writeShort(os, 10);
		$ZipUtils::writeShort(os, elenNTFS - 4);
		$ZipUtils::writeInt(os, 0);
		$ZipUtils::writeShort(os, 1);
		$ZipUtils::writeShort(os, 24);
		$ZipUtils::writeLong(os, $ZipUtils::javaToWinTime(this->mtime));
		$ZipUtils::writeLong(os, $ZipUtils::javaToWinTime(this->atime));
		$ZipUtils::writeLong(os, $ZipUtils::javaToWinTime(this->ctime));
	}
	if (elenEXTT != 0) {
		$ZipUtils::writeShort(os, 21589);
		$ZipUtils::writeShort(os, elenEXTT - 4);
		if (this->ctime == -1) {
			$nc(os)->write(3);
		} else {
			$nc(os)->write(7);
		}
		$ZipUtils::writeInt(os, $ZipUtils::javaToUnixTime(this->mtime));
	}
	if (this->extra$ != nullptr) {
		$ZipUtils::writeBytes(os, this->extra$);
	}
	if (this->comment$ != nullptr) {
		$ZipUtils::writeBytes(os, this->comment$);
	}
	return 46 + nlen + elen + clen + elen64 + elenNTFS + elenEXTT;
}

int32_t ZipFileSystem$Entry::writeLOC($OutputStream* os) {
	$var($bytes, zname, this->isdir ? $ZipUtils::toDirectoryPath(this->name$) : this->name$);
	int32_t nlen = (zname != nullptr) ? $nc(zname)->length - 1 : 0;
	int32_t elen = (this->extra$ != nullptr) ? $nc(this->extra$)->length : 0;
	bool foundExtraTime = false;
	int32_t eoff = 0;
	int32_t elen64 = 0;
	bool zip64 = false;
	int32_t elenEXTT = 0;
	int32_t elenNTFS = 0;
	$init($ZipConstants);
	$ZipUtils::writeInt(os, $ZipConstants::LOCSIG$);
	if (((int32_t)(this->flag & (uint32_t)8)) != 0) {
		$ZipUtils::writeShort(os, version(false));
		$ZipUtils::writeShort(os, this->flag);
		$ZipUtils::writeShort(os, this->method$);
		$ZipUtils::writeInt(os, (int32_t)$ZipUtils::javaToDosTime(this->mtime));
		$ZipUtils::writeInt(os, 0);
		$ZipUtils::writeInt(os, 0);
		$ZipUtils::writeInt(os, 0);
	} else {
		if (this->csize >= (int64_t)0x00000000FFFFFFFF || this->size$ >= (int64_t)0x00000000FFFFFFFF) {
			elen64 = 20;
			zip64 = true;
		}
		$ZipUtils::writeShort(os, version(zip64));
		$ZipUtils::writeShort(os, this->flag);
		$ZipUtils::writeShort(os, this->method$);
		$ZipUtils::writeInt(os, (int32_t)$ZipUtils::javaToDosTime(this->mtime));
		$ZipUtils::writeInt(os, this->crc$);
		if (zip64) {
			$ZipUtils::writeInt(os, 0x00000000FFFFFFFF);
			$ZipUtils::writeInt(os, 0x00000000FFFFFFFF);
		} else {
			$ZipUtils::writeInt(os, this->csize);
			$ZipUtils::writeInt(os, this->size$);
		}
	}
	while (eoff + 4 < elen) {
		int32_t tag = $ZipConstants::SH(this->extra$, eoff);
		int32_t sz = $ZipConstants::SH(this->extra$, eoff + 2);
		if (tag == 21589 || tag == 10) {
			foundExtraTime = true;
		}
		eoff += (4 + sz);
	}
	if (!foundExtraTime) {
		$init($ZipFileSystem);
		if ($ZipFileSystem::isWindows) {
			elenNTFS = 36;
		} else {
			elenEXTT = 9;
			if (this->atime != -1) {
				elenEXTT += 4;
			}
			if (this->ctime != -1) {
				elenEXTT += 4;
			}
		}
	}
	$ZipUtils::writeShort(os, nlen);
	$ZipUtils::writeShort(os, elen + elen64 + elenNTFS + elenEXTT);
	$ZipUtils::writeBytes(os, zname, 1, nlen);
	if (zip64) {
		$ZipUtils::writeShort(os, 1);
		$ZipUtils::writeShort(os, 16);
		$ZipUtils::writeLong(os, this->size$);
		$ZipUtils::writeLong(os, this->csize);
	}
	if (elenNTFS != 0) {
		$ZipUtils::writeShort(os, 10);
		$ZipUtils::writeShort(os, elenNTFS - 4);
		$ZipUtils::writeInt(os, 0);
		$ZipUtils::writeShort(os, 1);
		$ZipUtils::writeShort(os, 24);
		$ZipUtils::writeLong(os, $ZipUtils::javaToWinTime(this->mtime));
		$ZipUtils::writeLong(os, $ZipUtils::javaToWinTime(this->atime));
		$ZipUtils::writeLong(os, $ZipUtils::javaToWinTime(this->ctime));
	}
	if (elenEXTT != 0) {
		$ZipUtils::writeShort(os, 21589);
		$ZipUtils::writeShort(os, elenEXTT - 4);
		int32_t fbyte = 1;
		if (this->atime != -1) {
			fbyte |= 2;
		}
		if (this->ctime != -1) {
			fbyte |= 4;
		}
		$nc(os)->write(fbyte);
		$ZipUtils::writeInt(os, $ZipUtils::javaToUnixTime(this->mtime));
		if (this->atime != -1) {
			$ZipUtils::writeInt(os, $ZipUtils::javaToUnixTime(this->atime));
		}
		if (this->ctime != -1) {
			$ZipUtils::writeInt(os, $ZipUtils::javaToUnixTime(this->ctime));
		}
	}
	if (this->extra$ != nullptr) {
		$ZipUtils::writeBytes(os, this->extra$);
	}
	return 30 + nlen + elen + elen64 + elenNTFS + elenEXTT;
}

int32_t ZipFileSystem$Entry::writeEXT($OutputStream* os) {
	$init($ZipConstants);
	$ZipUtils::writeInt(os, $ZipConstants::EXTSIG);
	$ZipUtils::writeInt(os, this->crc$);
	if (this->csize >= (int64_t)0x00000000FFFFFFFF || this->size$ >= (int64_t)0x00000000FFFFFFFF) {
		$ZipUtils::writeLong(os, this->csize);
		$ZipUtils::writeLong(os, this->size$);
		return 24;
	} else {
		$ZipUtils::writeInt(os, this->csize);
		$ZipUtils::writeInt(os, this->size$);
		return 16;
	}
}

void ZipFileSystem$Entry::readExtra($ZipFileSystem* zipfs) {
	if (this->extra$ == nullptr) {
		return;
	}
	int32_t elen = $nc(this->extra$)->length;
	int32_t off = 0;
	int32_t newOff = 0;
	bool hasZip64LocOffset = false;
	while (off + 4 < elen) {
		int32_t pos = off;
		int32_t tag = $ZipConstants::SH(this->extra$, pos);
		int32_t sz = $ZipConstants::SH(this->extra$, pos + 2);
		pos += 4;
		if (pos + sz > elen) {
			break;
		}
		switch (tag) {
		case 1:
			{
				if (this->size$ == (int64_t)0x00000000FFFFFFFF) {
					if (pos + 8 > elen) {
						break;
					}
					this->size$ = $ZipConstants::LL(this->extra$, pos);
					pos += 8;
				}
				if (this->csize == (int64_t)0x00000000FFFFFFFF) {
					if (pos + 8 > elen) {
						break;
					}
					this->csize = $ZipConstants::LL(this->extra$, pos);
					pos += 8;
				}
				if (this->locoff == (int64_t)0x00000000FFFFFFFF) {
					if (pos + 8 > elen) {
						break;
					}
					this->locoff = $ZipConstants::LL(this->extra$, pos);
				}
				break;
			}
		case 10:
			{
				if (sz < 32) {
					break;
				}
				pos += 4;
				if ($ZipConstants::SH(this->extra$, pos) != 1) {
					break;
				}
				if ($ZipConstants::SH(this->extra$, pos + 2) != 24) {
					break;
				}
				this->mtime = $ZipUtils::winToJavaTime($ZipConstants::LL(this->extra$, pos + 4));
				this->atime = $ZipUtils::winToJavaTime($ZipConstants::LL(this->extra$, pos + 12));
				this->ctime = $ZipUtils::winToJavaTime($ZipConstants::LL(this->extra$, pos + 20));
				break;
			}
		case 21589:
			{
				if ($nc(zipfs)->noExtt) {
					if (sz == 5) {
						this->mtime = $ZipUtils::unixToJavaTime($ZipConstants::LG(this->extra$, pos + 1));
					}
					break;
				}
				if (this->locoff != (int64_t)0x00000000FFFFFFFF) {
					readLocEXTT(zipfs);
				} else {
					hasZip64LocOffset = true;
				}
				break;
			}
		default:
			{
				$System::arraycopy(this->extra$, off, this->extra$, newOff, sz + 4);
				newOff += (sz + 4);
			}
		}
		off += (sz + 4);
	}
	if (hasZip64LocOffset) {
		readLocEXTT(zipfs);
	}
	if (newOff != 0 && newOff != $nc(this->extra$)->length) {
		$set(this, extra$, $Arrays::copyOf(this->extra$, newOff));
	} else {
		$set(this, extra$, nullptr);
	}
}

void ZipFileSystem$Entry::readLocEXTT($ZipFileSystem* zipfs) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, buf, $new($bytes, 30));
	if ($nc(zipfs)->readFullyAt(buf, 0, buf->length, this->locoff) != buf->length) {
		$throwNew($ZipException, "loc: reading failed"_s);
	}
	if (!$ZipConstants::locSigAt(buf, 0)) {
		$throwNew($ZipException, $$str({"R"_s, $($Long::toString($ZipConstants::getSig(buf, 0), 16))}));
	}
	int32_t locElen = $ZipConstants::LOCEXT(buf);
	if (locElen < 9) {
		return;
	}
	int32_t locNlen = $ZipConstants::LOCNAM(buf);
	$assign(buf, $new($bytes, locElen));
	if ($nc(zipfs)->readFullyAt(buf, 0, buf->length, this->locoff + 30 + locNlen) != buf->length) {
		$throwNew($ZipException, "loc extra: reading failed"_s);
	}
	int32_t locPos = 0;
	while (locPos + 4 < buf->length) {
		int32_t locTag = $ZipConstants::SH(buf, locPos);
		int32_t locSZ = $ZipConstants::SH(buf, locPos + 2);
		locPos += 4;
		if (locTag != 21589) {
			locPos += locSZ;
			continue;
		}
		int32_t end = locPos + locSZ - 4;
		int32_t flag = $ZipConstants::CH(buf, locPos++);
		if (((int32_t)(flag & (uint32_t)1)) != 0 && locPos <= end) {
			this->mtime = $ZipUtils::unixToJavaTime($ZipConstants::LG(buf, locPos));
			locPos += 4;
		}
		if (((int32_t)(flag & (uint32_t)2)) != 0 && locPos <= end) {
			this->atime = $ZipUtils::unixToJavaTime($ZipConstants::LG(buf, locPos));
			locPos += 4;
		}
		if (((int32_t)(flag & (uint32_t)4)) != 0 && locPos <= end) {
			this->ctime = $ZipUtils::unixToJavaTime($ZipConstants::LG(buf, locPos));
		}
		break;
	}
}

$String* ZipFileSystem$Entry::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, 1024));
	$var($Formatter, fm, $new($Formatter, static_cast<$Appendable*>(sb)));
	fm->format("    name            : %s%n"_s, $$new($ObjectArray, {$of($$new($String, this->name$))}));
	fm->format("    creationTime    : %tc%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($nc($(creationTime()))->toMillis())))}));
	fm->format("    lastAccessTime  : %tc%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($nc($(lastAccessTime()))->toMillis())))}));
	fm->format("    lastModifiedTime: %tc%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($nc($(lastModifiedTime()))->toMillis())))}));
	fm->format("    isRegularFile   : %b%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(isRegularFile())))}));
	fm->format("    isDirectory     : %b%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(isDirectory())))}));
	fm->format("    isSymbolicLink  : %b%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(isSymbolicLink())))}));
	fm->format("    isOther         : %b%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(isOther())))}));
	fm->format("    fileKey         : %s%n"_s, $$new($ObjectArray, {$(fileKey())}));
	fm->format("    size            : %d%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(size())))}));
	fm->format("    compressedSize  : %d%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(compressedSize())))}));
	fm->format("    crc             : %x%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(crc())))}));
	fm->format("    method          : %d%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(method())))}));
	$var($Set, permissions, $cast($Set, $nc($(storedPermissions()))->orElse(nullptr)));
	if (permissions != nullptr) {
		fm->format("    permissions     : %s%n"_s, $$new($ObjectArray, {$of(permissions)}));
	}
	fm->close();
	return sb->toString();
}

$FileTime* ZipFileSystem$Entry::creationTime() {
	return $FileTime::fromMillis(this->ctime == -1 ? this->mtime : this->ctime);
}

bool ZipFileSystem$Entry::isDirectory() {
	return isDir();
}

bool ZipFileSystem$Entry::isOther() {
	return false;
}

bool ZipFileSystem$Entry::isRegularFile() {
	return !isDir();
}

$FileTime* ZipFileSystem$Entry::lastAccessTime() {
	return $FileTime::fromMillis(this->atime == -1 ? this->mtime : this->atime);
}

$FileTime* ZipFileSystem$Entry::lastModifiedTime() {
	return $FileTime::fromMillis(this->mtime);
}

int64_t ZipFileSystem$Entry::size() {
	return this->size$;
}

bool ZipFileSystem$Entry::isSymbolicLink() {
	return false;
}

$Object* ZipFileSystem$Entry::fileKey() {
	return $of(nullptr);
}

int64_t ZipFileSystem$Entry::compressedSize() {
	return this->csize;
}

int64_t ZipFileSystem$Entry::crc() {
	return this->crc$;
}

int32_t ZipFileSystem$Entry::method() {
	return this->method$;
}

$bytes* ZipFileSystem$Entry::extra() {
	if (this->extra$ != nullptr) {
		return $Arrays::copyOf(this->extra$, $nc(this->extra$)->length);
	}
	return nullptr;
}

$bytes* ZipFileSystem$Entry::comment() {
	if (this->comment$ != nullptr) {
		return $Arrays::copyOf(this->comment$, $nc(this->comment$)->length);
	}
	return nullptr;
}

$Optional* ZipFileSystem$Entry::storedPermissions() {
	$useLocalCurrentObjectStackCache();
	$var($Set, perms, nullptr);
	if (this->posixPerms != -1) {
		$assign(perms, $new($HashSet, $($PosixFilePermission::values())->length));
		{
			$var($PosixFilePermissionArray, arr$, $PosixFilePermission::values());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$PosixFilePermission* perm = arr$->get(i$);
				{
					if (((int32_t)(this->posixPerms & (uint32_t)$ZipUtils::permToFlag(perm))) != 0) {
						perms->add(perm);
					}
				}
			}
		}
	}
	return $Optional::ofNullable(perms);
}

ZipFileSystem$Entry::ZipFileSystem$Entry() {
}

$Class* ZipFileSystem$Entry::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$Entry, name, initialize, &_ZipFileSystem$Entry_ClassInfo_, allocate$ZipFileSystem$Entry);
	return class$;
}

$Class* ZipFileSystem$Entry::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk