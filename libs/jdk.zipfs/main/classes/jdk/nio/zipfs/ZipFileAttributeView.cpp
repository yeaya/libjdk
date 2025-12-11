#include <jdk/nio/zipfs/ZipFileAttributeView.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jdk/nio/zipfs/ZipFileAttributeView$1.h>
#include <jdk/nio/zipfs/ZipFileAttributeView$AttrID.h>
#include <jdk/nio/zipfs/ZipFileAttributes.h>
#include <jdk/nio/zipfs/ZipPath.h>
#include <jcpp.h>

using $ZipFileAttributeView$AttrIDArray = $Array<::jdk::nio::zipfs::ZipFileAttributeView$AttrID>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $ZipFileAttributeView$1 = ::jdk::nio::zipfs::ZipFileAttributeView$1;
using $ZipFileAttributeView$AttrID = ::jdk::nio::zipfs::ZipFileAttributeView$AttrID;
using $ZipFileAttributes = ::jdk::nio::zipfs::ZipFileAttributes;
using $ZipPath = ::jdk::nio::zipfs::ZipPath;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileAttributeView_FieldInfo_[] = {
	{"path", "Ljdk/nio/zipfs/ZipPath;", nullptr, $FINAL, $field(ZipFileAttributeView, path)},
	{"isZipView", "Z", nullptr, $PRIVATE | $FINAL, $field(ZipFileAttributeView, isZipView)},
	{}
};

$MethodInfo _ZipFileAttributeView_MethodInfo_[] = {
	{"<init>", "(Ljdk/nio/zipfs/ZipPath;Z)V", nullptr, 0, $method(static_cast<void(ZipFileAttributeView::*)($ZipPath*,bool)>(&ZipFileAttributeView::init$))},
	{"attribute", "(Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;Ljdk/nio/zipfs/ZipFileAttributes;)Ljava/lang/Object;", nullptr, 0},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readAttributes", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readAttributes", "(Ljava/lang/String;)Ljava/util/Map;", "(Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", 0, nullptr, "java.io.IOException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"setPermissions", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"setTimes", "(Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ZipFileAttributeView_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileAttributeView$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"jdk.nio.zipfs.ZipFileAttributeView$AttrID", "jdk.nio.zipfs.ZipFileAttributeView", "AttrID", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ZipFileAttributeView_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileAttributeView",
	"java.lang.Object",
	"java.nio.file.attribute.BasicFileAttributeView",
	_ZipFileAttributeView_FieldInfo_,
	_ZipFileAttributeView_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFileAttributeView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileAttributeView$1,jdk.nio.zipfs.ZipFileAttributeView$AttrID"
};

$Object* allocate$ZipFileAttributeView($Class* clazz) {
	return $of($alloc(ZipFileAttributeView));
}

void ZipFileAttributeView::init$($ZipPath* path, bool isZipView) {
	$set(this, path, path);
	this->isZipView = isZipView;
}

$String* ZipFileAttributeView::name() {
	return this->isZipView ? "zip"_s : "basic"_s;
}

$BasicFileAttributes* ZipFileAttributeView::readAttributes() {
	return $nc(this->path)->readAttributes();
}

void ZipFileAttributeView::setTimes($FileTime* lastModifiedTime, $FileTime* lastAccessTime, $FileTime* createTime) {
	$nc(this->path)->setTimes(lastModifiedTime, lastAccessTime, createTime);
}

void ZipFileAttributeView::setPermissions($Set* perms) {
	$nc(this->path)->setPermissions(perms);
}

void ZipFileAttributeView::setAttribute($String* attribute, Object$* value) {
	try {
		$init($ZipFileAttributeView$AttrID);
		if ($ZipFileAttributeView$AttrID::valueOf(attribute) == $ZipFileAttributeView$AttrID::lastModifiedTime) {
			setTimes($cast($FileTime, value), nullptr, nullptr);
		}
		if ($ZipFileAttributeView$AttrID::valueOf(attribute) == $ZipFileAttributeView$AttrID::lastAccessTime) {
			setTimes(nullptr, $cast($FileTime, value), nullptr);
		}
		if ($ZipFileAttributeView$AttrID::valueOf(attribute) == $ZipFileAttributeView$AttrID::creationTime) {
			setTimes(nullptr, nullptr, $cast($FileTime, value));
		}
		if ($ZipFileAttributeView$AttrID::valueOf(attribute) == $ZipFileAttributeView$AttrID::permissions) {
			setPermissions($cast($Set, value));
		}
	} catch ($IllegalArgumentException& x) {
		$throwNew($UnsupportedOperationException, $$str({"\'"_s, attribute, "\' is unknown or read-only attribute"_s}));
	}
}

$Map* ZipFileAttributeView::readAttributes($String* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($ZipFileAttributes, zfas, $cast($ZipFileAttributes, readAttributes()));
	$var($LinkedHashMap, map, $new($LinkedHashMap));
	if ("*"_s->equals(attributes)) {
		{
			$var($ZipFileAttributeView$AttrIDArray, arr$, $ZipFileAttributeView$AttrID::values());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$ZipFileAttributeView$AttrID* id = arr$->get(i$);
				{
					try {
						$var($Object, var$0, $of($nc(id)->name()));
						map->put(var$0, $(attribute(id, zfas)));
					} catch ($IllegalArgumentException& x) {
					}
				}
			}
		}
	} else {
		$var($StringArray, as, $nc(attributes)->split(","_s));
		{
			$var($StringArray, arr$, as);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, a, arr$->get(i$));
				{
					try {
						map->put(a, $(attribute($($ZipFileAttributeView$AttrID::valueOf(a)), zfas)));
					} catch ($IllegalArgumentException& x) {
					}
				}
			}
		}
	}
	return map;
}

$Object* ZipFileAttributeView::attribute($ZipFileAttributeView$AttrID* id, $ZipFileAttributes* zfas) {
	$init($ZipFileAttributeView$1);
	switch ($nc($ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->get($nc((id))->ordinal())) {
	case 1:
		{
			return $of($Long::valueOf($nc(zfas)->size()));
		}
	case 2:
		{
			return $of($nc(zfas)->creationTime());
		}
	case 3:
		{
			return $of($nc(zfas)->lastAccessTime());
		}
	case 4:
		{
			return $of($nc(zfas)->lastModifiedTime());
		}
	case 5:
		{
			return $of($Boolean::valueOf($nc(zfas)->isDirectory()));
		}
	case 6:
		{
			return $of($Boolean::valueOf($nc(zfas)->isRegularFile()));
		}
	case 7:
		{
			return $of($Boolean::valueOf($nc(zfas)->isSymbolicLink()));
		}
	case 8:
		{
			return $of($Boolean::valueOf($nc(zfas)->isOther()));
		}
	case 9:
		{
			return $of($nc(zfas)->fileKey());
		}
	case 10:
		{
			if (this->isZipView) {
				return $of($Long::valueOf($nc(zfas)->compressedSize()));
			}
			break;
		}
	case 11:
		{
			if (this->isZipView) {
				return $of($Long::valueOf($nc(zfas)->crc()));
			}
			break;
		}
	case 12:
		{
			if (this->isZipView) {
				return $of($Integer::valueOf($nc(zfas)->method()));
			}
			break;
		}
	case 13:
		{
			if (this->isZipView) {
				return $of($nc($($nc(zfas)->storedPermissions()))->orElse(nullptr));
			}
			break;
		}
	default:
		{
			break;
		}
	}
	return $of(nullptr);
}

ZipFileAttributeView::ZipFileAttributeView() {
}

$Class* ZipFileAttributeView::load$($String* name, bool initialize) {
	$loadClass(ZipFileAttributeView, name, initialize, &_ZipFileAttributeView_ClassInfo_, allocate$ZipFileAttributeView);
	return class$;
}

$Class* ZipFileAttributeView::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk