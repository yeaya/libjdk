#include <sun/tools/jar/Main$1.h>

#include <java/util/HashSet.h>
#include <java/util/zip/ZipEntry.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashSet = ::java::util::HashSet;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

$FieldInfo _Main$1_FieldInfo_[] = {
	{"this$0", "Lsun/tools/jar/Main;", nullptr, $FINAL | $SYNTHETIC, $field(Main$1, this$0)},
	{}
};

$MethodInfo _Main$1_MethodInfo_[] = {
	{"<init>", "(Lsun/tools/jar/Main;)V", nullptr, 0, $method(static_cast<void(Main$1::*)($Main*)>(&Main$1::init$))},
	{"add", "(Ljava/util/zip/ZipEntry;)Z", nullptr, $PUBLIC},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Main$1_EnclosingMethodInfo_ = {
	"sun.tools.jar.Main",
	"newDirSet",
	"()Ljava/util/Set;"
};

$InnerClassInfo _Main$1_InnerClassesInfo_[] = {
	{"sun.tools.jar.Main$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.Main$1",
	"java.util.HashSet",
	nullptr,
	_Main$1_FieldInfo_,
	_Main$1_MethodInfo_,
	"Ljava/util/HashSet<Ljava/util/zip/ZipEntry;>;",
	&_Main$1_EnclosingMethodInfo_,
	_Main$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.Main"
};

$Object* allocate$Main$1($Class* clazz) {
	return $of($alloc(Main$1));
}

void Main$1::init$($Main* this$0) {
	$set(this, this$0, this$0);
	$HashSet::init$();
}

bool Main$1::add($ZipEntry* e) {
	$init($Main);
	return ((e == nullptr || $Main::useExtractionTime) ? false : $HashSet::add(e));
}

bool Main$1::add(Object$* e) {
	return this->add($cast($ZipEntry, e));
}

Main$1::Main$1() {
}

$Class* Main$1::load$($String* name, bool initialize) {
	$loadClass(Main$1, name, initialize, &_Main$1_ClassInfo_, allocate$Main$1);
	return class$;
}

$Class* Main$1::class$ = nullptr;

		} // jar
	} // tools
} // sun