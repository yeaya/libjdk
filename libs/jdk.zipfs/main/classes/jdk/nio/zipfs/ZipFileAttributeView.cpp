#include <jdk/nio/zipfs/ZipFileAttributeView.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
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
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ZipFileAttributeView$1 = ::jdk::nio::zipfs::ZipFileAttributeView$1;
using $ZipFileAttributeView$AttrID = ::jdk::nio::zipfs::ZipFileAttributeView$AttrID;
using $ZipFileAttributes = ::jdk::nio::zipfs::ZipFileAttributes;
using $ZipPath = ::jdk::nio::zipfs::ZipPath;

namespace jdk {
	namespace nio {
		namespace zipfs {

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
	$useLocalObjectStack();
	$var($ZipFileAttributes, zfas, $cast($ZipFileAttributes, readAttributes()));
	$var($LinkedHashMap, map, $new($LinkedHashMap));
	if ("*"_s->equals(attributes)) {
		$var($ZipFileAttributeView$AttrIDArray, arr$, $ZipFileAttributeView$AttrID::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$ZipFileAttributeView$AttrID* id = arr$->get(i$);
			try {
				$var($Object, var$0, $nc(id)->name());
				map->put(var$0, $(attribute(id, zfas)));
			} catch ($IllegalArgumentException& x) {
			}
		}
	} else {
		$var($StringArray, as, $nc(attributes)->split(","_s));
		{
			$var($StringArray, arr$, as);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, a, arr$->get(i$));
				try {
					map->put(a, $(attribute($($ZipFileAttributeView$AttrID::valueOf(a)), zfas)));
				} catch ($IllegalArgumentException& x) {
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
		return $of($Long::valueOf($nc(zfas)->size()));
	case 2:
		return $nc(zfas)->creationTime();
	case 3:
		return $nc(zfas)->lastAccessTime();
	case 4:
		return $nc(zfas)->lastModifiedTime();
	case 5:
		return $of($Boolean::valueOf($nc(zfas)->isDirectory()));
	case 6:
		return $of($Boolean::valueOf($nc(zfas)->isRegularFile()));
	case 7:
		return $of($Boolean::valueOf($nc(zfas)->isSymbolicLink()));
	case 8:
		return $of($Boolean::valueOf($nc(zfas)->isOther()));
	case 9:
		return $nc(zfas)->fileKey();
	case 10:
		if (this->isZipView) {
			return $of($Long::valueOf($nc(zfas)->compressedSize()));
		}
		break;
	case 11:
		if (this->isZipView) {
			return $of($Long::valueOf($nc(zfas)->crc()));
		}
		break;
	case 12:
		if (this->isZipView) {
			return $of($Integer::valueOf($nc(zfas)->method()));
		}
		break;
	case 13:
		if (this->isZipView) {
			return $$nc($nc(zfas)->storedPermissions())->orElse(nullptr);
		}
		break;
	default:
		break;
	}
	return nullptr;
}

ZipFileAttributeView::ZipFileAttributeView() {
}

$Class* ZipFileAttributeView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"path", "Ljdk/nio/zipfs/ZipPath;", nullptr, $FINAL, $field(ZipFileAttributeView, path)},
		{"isZipView", "Z", nullptr, $PRIVATE | $FINAL, $field(ZipFileAttributeView, isZipView)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/nio/zipfs/ZipPath;Z)V", nullptr, 0, $method(ZipFileAttributeView, init$, void, $ZipPath*, bool)},
		{"attribute", "(Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;Ljdk/nio/zipfs/ZipFileAttributes;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(ZipFileAttributeView, attribute, $Object*, $ZipFileAttributeView$AttrID*, $ZipFileAttributes*)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ZipFileAttributeView, name, $String*)},
		{"readAttributes", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PUBLIC, $virtualMethod(ZipFileAttributeView, readAttributes, $BasicFileAttributes*), "java.io.IOException"},
		{"readAttributes", "(Ljava/lang/String;)Ljava/util/Map;", "(Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", 0, $virtualMethod(ZipFileAttributeView, readAttributes, $Map*, $String*), "java.io.IOException"},
		{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(ZipFileAttributeView, setAttribute, void, $String*, Object$*), "java.io.IOException"},
		{"setPermissions", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;)V", $PUBLIC, $virtualMethod(ZipFileAttributeView, setPermissions, void, $Set*), "java.io.IOException"},
		{"setTimes", "(Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, $PUBLIC, $virtualMethod(ZipFileAttributeView, setTimes, void, $FileTime*, $FileTime*, $FileTime*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.nio.zipfs.ZipFileAttributeView$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"jdk.nio.zipfs.ZipFileAttributeView$AttrID", "jdk.nio.zipfs.ZipFileAttributeView", "AttrID", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.nio.zipfs.ZipFileAttributeView",
		"java.lang.Object",
		"java.nio.file.attribute.BasicFileAttributeView",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.nio.zipfs.ZipFileAttributeView$1,jdk.nio.zipfs.ZipFileAttributeView$AttrID"
	};
	$loadClass(ZipFileAttributeView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFileAttributeView);
	});
	return class$;
}

$Class* ZipFileAttributeView::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk