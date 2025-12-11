#include <jdk/nio/zipfs/ZipFileAttributeView$AttrID.h>

#include <java/lang/Enum.h>
#include <jdk/nio/zipfs/ZipFileAttributeView.h>
#include <jcpp.h>

using $ZipFileAttributeView$AttrIDArray = $Array<::jdk::nio::zipfs::ZipFileAttributeView$AttrID>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileAttributeView$AttrID_FieldInfo_[] = {
	{"size", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, size)},
	{"creationTime", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, creationTime)},
	{"lastAccessTime", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, lastAccessTime)},
	{"lastModifiedTime", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, lastModifiedTime)},
	{"isDirectory", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, isDirectory)},
	{"isRegularFile", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, isRegularFile)},
	{"isSymbolicLink", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, isSymbolicLink)},
	{"isOther", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, isOther)},
	{"fileKey", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, fileKey)},
	{"compressedSize", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, compressedSize)},
	{"crc", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, crc)},
	{"method", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, method)},
	{"owner", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, owner)},
	{"group", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, group)},
	{"permissions", "Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZipFileAttributeView$AttrID, permissions)},
	{"$VALUES", "[Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ZipFileAttributeView$AttrID, $VALUES)},
	{}
};

$MethodInfo _ZipFileAttributeView$AttrID_MethodInfo_[] = {
	{"$values", "()[Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ZipFileAttributeView$AttrIDArray*(*)()>(&ZipFileAttributeView$AttrID::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ZipFileAttributeView$AttrID::*)($String*,int32_t)>(&ZipFileAttributeView$AttrID::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ZipFileAttributeView$AttrID*(*)($String*)>(&ZipFileAttributeView$AttrID::valueOf))},
	{"values", "()[Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ZipFileAttributeView$AttrIDArray*(*)()>(&ZipFileAttributeView$AttrID::values))},
	{}
};

$InnerClassInfo _ZipFileAttributeView$AttrID_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileAttributeView$AttrID", "jdk.nio.zipfs.ZipFileAttributeView", "AttrID", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ZipFileAttributeView$AttrID_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"jdk.nio.zipfs.ZipFileAttributeView$AttrID",
	"java.lang.Enum",
	nullptr,
	_ZipFileAttributeView$AttrID_FieldInfo_,
	_ZipFileAttributeView$AttrID_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;>;",
	nullptr,
	_ZipFileAttributeView$AttrID_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileAttributeView"
};

$Object* allocate$ZipFileAttributeView$AttrID($Class* clazz) {
	return $of($alloc(ZipFileAttributeView$AttrID));
}

ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::size = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::creationTime = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::lastAccessTime = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::lastModifiedTime = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::isDirectory = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::isRegularFile = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::isSymbolicLink = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::isOther = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::fileKey = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::compressedSize = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::crc = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::method = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::owner = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::group = nullptr;
ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::permissions = nullptr;
$ZipFileAttributeView$AttrIDArray* ZipFileAttributeView$AttrID::$VALUES = nullptr;

$ZipFileAttributeView$AttrIDArray* ZipFileAttributeView$AttrID::$values() {
	$init(ZipFileAttributeView$AttrID);
	return $new($ZipFileAttributeView$AttrIDArray, {
		ZipFileAttributeView$AttrID::size,
		ZipFileAttributeView$AttrID::creationTime,
		ZipFileAttributeView$AttrID::lastAccessTime,
		ZipFileAttributeView$AttrID::lastModifiedTime,
		ZipFileAttributeView$AttrID::isDirectory,
		ZipFileAttributeView$AttrID::isRegularFile,
		ZipFileAttributeView$AttrID::isSymbolicLink,
		ZipFileAttributeView$AttrID::isOther,
		ZipFileAttributeView$AttrID::fileKey,
		ZipFileAttributeView$AttrID::compressedSize,
		ZipFileAttributeView$AttrID::crc,
		ZipFileAttributeView$AttrID::method,
		ZipFileAttributeView$AttrID::owner,
		ZipFileAttributeView$AttrID::group,
		ZipFileAttributeView$AttrID::permissions
	});
}

$ZipFileAttributeView$AttrIDArray* ZipFileAttributeView$AttrID::values() {
	$init(ZipFileAttributeView$AttrID);
	return $cast($ZipFileAttributeView$AttrIDArray, ZipFileAttributeView$AttrID::$VALUES->clone());
}

ZipFileAttributeView$AttrID* ZipFileAttributeView$AttrID::valueOf($String* name) {
	$init(ZipFileAttributeView$AttrID);
	return $cast(ZipFileAttributeView$AttrID, $Enum::valueOf(ZipFileAttributeView$AttrID::class$, name));
}

void ZipFileAttributeView$AttrID::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ZipFileAttributeView$AttrID($Class* class$) {
	$assignStatic(ZipFileAttributeView$AttrID::size, $new(ZipFileAttributeView$AttrID, "size"_s, 0));
	$assignStatic(ZipFileAttributeView$AttrID::creationTime, $new(ZipFileAttributeView$AttrID, "creationTime"_s, 1));
	$assignStatic(ZipFileAttributeView$AttrID::lastAccessTime, $new(ZipFileAttributeView$AttrID, "lastAccessTime"_s, 2));
	$assignStatic(ZipFileAttributeView$AttrID::lastModifiedTime, $new(ZipFileAttributeView$AttrID, "lastModifiedTime"_s, 3));
	$assignStatic(ZipFileAttributeView$AttrID::isDirectory, $new(ZipFileAttributeView$AttrID, "isDirectory"_s, 4));
	$assignStatic(ZipFileAttributeView$AttrID::isRegularFile, $new(ZipFileAttributeView$AttrID, "isRegularFile"_s, 5));
	$assignStatic(ZipFileAttributeView$AttrID::isSymbolicLink, $new(ZipFileAttributeView$AttrID, "isSymbolicLink"_s, 6));
	$assignStatic(ZipFileAttributeView$AttrID::isOther, $new(ZipFileAttributeView$AttrID, "isOther"_s, 7));
	$assignStatic(ZipFileAttributeView$AttrID::fileKey, $new(ZipFileAttributeView$AttrID, "fileKey"_s, 8));
	$assignStatic(ZipFileAttributeView$AttrID::compressedSize, $new(ZipFileAttributeView$AttrID, "compressedSize"_s, 9));
	$assignStatic(ZipFileAttributeView$AttrID::crc, $new(ZipFileAttributeView$AttrID, "crc"_s, 10));
	$assignStatic(ZipFileAttributeView$AttrID::method, $new(ZipFileAttributeView$AttrID, "method"_s, 11));
	$assignStatic(ZipFileAttributeView$AttrID::owner, $new(ZipFileAttributeView$AttrID, "owner"_s, 12));
	$assignStatic(ZipFileAttributeView$AttrID::group, $new(ZipFileAttributeView$AttrID, "group"_s, 13));
	$assignStatic(ZipFileAttributeView$AttrID::permissions, $new(ZipFileAttributeView$AttrID, "permissions"_s, 14));
	$assignStatic(ZipFileAttributeView$AttrID::$VALUES, ZipFileAttributeView$AttrID::$values());
}

ZipFileAttributeView$AttrID::ZipFileAttributeView$AttrID() {
}

$Class* ZipFileAttributeView$AttrID::load$($String* name, bool initialize) {
	$loadClass(ZipFileAttributeView$AttrID, name, initialize, &_ZipFileAttributeView$AttrID_ClassInfo_, clinit$ZipFileAttributeView$AttrID, allocate$ZipFileAttributeView$AttrID);
	return class$;
}

$Class* ZipFileAttributeView$AttrID::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk