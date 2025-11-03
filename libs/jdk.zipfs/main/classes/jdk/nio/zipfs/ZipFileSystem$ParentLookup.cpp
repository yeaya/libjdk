#include <jdk/nio/zipfs/ZipFileSystem$ParentLookup.h>

#include <java/util/Arrays.h>
#include <jdk/nio/zipfs/ZipFileSystem$IndexNode.h>
#include <jdk/nio/zipfs/ZipFileSystem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $ZipFileSystem = ::jdk::nio::zipfs::ZipFileSystem;
using $ZipFileSystem$IndexNode = ::jdk::nio::zipfs::ZipFileSystem$IndexNode;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileSystem$ParentLookup_FieldInfo_[] = {
	{"len", "I", nullptr, 0, $field(ZipFileSystem$ParentLookup, len)},
	{}
};

$MethodInfo _ZipFileSystem$ParentLookup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ZipFileSystem$ParentLookup::*)()>(&ZipFileSystem$ParentLookup::init$))},
	{"as", "([BI)Ljdk/nio/zipfs/ZipFileSystem$ParentLookup;", nullptr, $FINAL, $method(static_cast<ZipFileSystem$ParentLookup*(ZipFileSystem$ParentLookup::*)($bytes*,int32_t)>(&ZipFileSystem$ParentLookup::as))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"name", "([BI)V", nullptr, 0},
	{}
};

$InnerClassInfo _ZipFileSystem$ParentLookup_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileSystem$ParentLookup", "jdk.nio.zipfs.ZipFileSystem", "ParentLookup", $STATIC},
	{"jdk.nio.zipfs.ZipFileSystem$IndexNode", "jdk.nio.zipfs.ZipFileSystem", "IndexNode", $STATIC},
	{}
};

$ClassInfo _ZipFileSystem$ParentLookup_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipFileSystem$ParentLookup",
	"jdk.nio.zipfs.ZipFileSystem$IndexNode",
	nullptr,
	_ZipFileSystem$ParentLookup_FieldInfo_,
	_ZipFileSystem$ParentLookup_MethodInfo_,
	nullptr,
	nullptr,
	_ZipFileSystem$ParentLookup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileSystem"
};

$Object* allocate$ZipFileSystem$ParentLookup($Class* clazz) {
	return $of($alloc(ZipFileSystem$ParentLookup));
}

void ZipFileSystem$ParentLookup::init$() {
	$ZipFileSystem$IndexNode::init$();
}

ZipFileSystem$ParentLookup* ZipFileSystem$ParentLookup::as($bytes* name, int32_t len) {
	this->name(name, len);
	return this;
}

void ZipFileSystem$ParentLookup::name($bytes* name, int32_t len) {
	$set(this, name$, name);
	this->len = len;
	int32_t result = 1;
	for (int32_t i = 0; i < len; ++i) {
		result = 31 * result + $nc(name)->get(i);
	}
	this->hashcode = result;
}

bool ZipFileSystem$ParentLookup::equals(Object$* other) {
	if (!($instanceOf($ZipFileSystem$IndexNode, other))) {
		return false;
	}
	$var($bytes, oname, $nc(($cast($ZipFileSystem$IndexNode, other)))->name$);
	return $Arrays::equals(this->$ZipFileSystem$IndexNode::name$, 0, this->len, oname, 0, $nc(oname)->length);
}

ZipFileSystem$ParentLookup::ZipFileSystem$ParentLookup() {
}

$Class* ZipFileSystem$ParentLookup::load$($String* name, bool initialize) {
	$loadClass(ZipFileSystem$ParentLookup, name, initialize, &_ZipFileSystem$ParentLookup_ClassInfo_, allocate$ZipFileSystem$ParentLookup);
	return class$;
}

$Class* ZipFileSystem$ParentLookup::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk