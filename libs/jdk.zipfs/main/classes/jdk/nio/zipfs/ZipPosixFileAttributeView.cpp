#include <jdk/nio/zipfs/ZipPosixFileAttributeView.h>

#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/nio/file/attribute/PosixFileAttributes.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/util/Set.h>
#include <jdk/nio/zipfs/ZipFileAttributeView$AttrID.h>
#include <jdk/nio/zipfs/ZipFileAttributeView.h>
#include <jdk/nio/zipfs/ZipFileAttributes.h>
#include <jdk/nio/zipfs/ZipPath.h>
#include <jdk/nio/zipfs/ZipPosixFileAttributeView$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $PosixFileAttributeView = ::java::nio::file::attribute::PosixFileAttributeView;
using $PosixFileAttributes = ::java::nio::file::attribute::PosixFileAttributes;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $Set = ::java::util::Set;
using $ZipFileAttributeView = ::jdk::nio::zipfs::ZipFileAttributeView;
using $ZipFileAttributeView$AttrID = ::jdk::nio::zipfs::ZipFileAttributeView$AttrID;
using $ZipFileAttributes = ::jdk::nio::zipfs::ZipFileAttributes;
using $ZipPath = ::jdk::nio::zipfs::ZipPath;
using $ZipPosixFileAttributeView$1 = ::jdk::nio::zipfs::ZipPosixFileAttributeView$1;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipPosixFileAttributeView_FieldInfo_[] = {
	{"isOwnerView", "Z", nullptr, $PRIVATE | $FINAL, $field(ZipPosixFileAttributeView, isOwnerView)},
	{}
};

$MethodInfo _ZipPosixFileAttributeView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljdk/nio/zipfs/ZipPath;Z)V", nullptr, 0, $method(static_cast<void(ZipPosixFileAttributeView::*)($ZipPath*,bool)>(&ZipPosixFileAttributeView::init$))},
	{"attribute", "(Ljdk/nio/zipfs/ZipFileAttributeView$AttrID;Ljdk/nio/zipfs/ZipFileAttributes;)Ljava/lang/Object;", nullptr, 0},
	{"getOwner", "()Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readAttributes", "()Ljava/nio/file/attribute/PosixFileAttributes;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setGroup", "(Ljava/nio/file/attribute/GroupPrincipal;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setOwner", "(Ljava/nio/file/attribute/UserPrincipal;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*setTimes", "(Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;Ljava/nio/file/attribute/FileTime;)V", nullptr, $PUBLIC},
	{"*setPermissions", "(Ljava/util/Set;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ZipPosixFileAttributeView_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipPosixFileAttributeView$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ZipPosixFileAttributeView_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipPosixFileAttributeView",
	"jdk.nio.zipfs.ZipFileAttributeView",
	"java.nio.file.attribute.PosixFileAttributeView",
	_ZipPosixFileAttributeView_FieldInfo_,
	_ZipPosixFileAttributeView_MethodInfo_,
	nullptr,
	nullptr,
	_ZipPosixFileAttributeView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipPosixFileAttributeView$1"
};

$Object* allocate$ZipPosixFileAttributeView($Class* clazz) {
	return $of($alloc(ZipPosixFileAttributeView));
}

void ZipPosixFileAttributeView::setTimes($FileTime* lastModifiedTime, $FileTime* lastAccessTime, $FileTime* createTime) {
	this->$ZipFileAttributeView::setTimes(lastModifiedTime, lastAccessTime, createTime);
}

void ZipPosixFileAttributeView::setPermissions($Set* perms) {
	this->$ZipFileAttributeView::setPermissions(perms);
}

int32_t ZipPosixFileAttributeView::hashCode() {
	 return this->$ZipFileAttributeView::hashCode();
}

bool ZipPosixFileAttributeView::equals(Object$* arg0) {
	 return this->$ZipFileAttributeView::equals(arg0);
}

$Object* ZipPosixFileAttributeView::clone() {
	 return this->$ZipFileAttributeView::clone();
}

$String* ZipPosixFileAttributeView::toString() {
	 return this->$ZipFileAttributeView::toString();
}

void ZipPosixFileAttributeView::finalize() {
	this->$ZipFileAttributeView::finalize();
}

void ZipPosixFileAttributeView::init$($ZipPath* path, bool owner) {
	$ZipFileAttributeView::init$(path, true);
	this->isOwnerView = owner;
}

$String* ZipPosixFileAttributeView::name() {
	return this->isOwnerView ? "owner"_s : "posix"_s;
}

$BasicFileAttributes* ZipPosixFileAttributeView::readAttributes() {
	return $cast($PosixFileAttributes, $nc(this->path)->readAttributes());
}

$UserPrincipal* ZipPosixFileAttributeView::getOwner() {
	return $nc($($cast($PosixFileAttributes, readAttributes())))->owner();
}

void ZipPosixFileAttributeView::setOwner($UserPrincipal* owner) {
	$nc(this->path)->setOwner(owner);
}

void ZipPosixFileAttributeView::setGroup($GroupPrincipal* group) {
	$nc(this->path)->setGroup(group);
}

$Object* ZipPosixFileAttributeView::attribute($ZipFileAttributeView$AttrID* id, $ZipFileAttributes* zfas) {
	$var($PosixFileAttributes, pzfas, $cast($PosixFileAttributes, zfas));
	$init($ZipPosixFileAttributeView$1);
	switch ($nc($ZipPosixFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->get($nc((id))->ordinal())) {
	case 1:
		{
			return $of($nc(pzfas)->owner());
		}
	case 2:
		{
			return $of($nc(pzfas)->group());
		}
	case 3:
		{
			if (!this->isOwnerView) {
				return $of($nc(pzfas)->permissions());
			} else {
				return $of($ZipFileAttributeView::attribute(id, zfas));
			}
		}
	default:
		{
			return $of($ZipFileAttributeView::attribute(id, zfas));
		}
	}
}

ZipPosixFileAttributeView::ZipPosixFileAttributeView() {
}

$Class* ZipPosixFileAttributeView::load$($String* name, bool initialize) {
	$loadClass(ZipPosixFileAttributeView, name, initialize, &_ZipPosixFileAttributeView_ClassInfo_, allocate$ZipPosixFileAttributeView);
	return class$;
}

$Class* ZipPosixFileAttributeView::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk