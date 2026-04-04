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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/tools/jar/Main;", nullptr, $FINAL | $SYNTHETIC, $field(Main$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/tools/jar/Main;)V", nullptr, 0, $method(Main$1, init$, void, $Main*)},
		{"add", "(Ljava/util/zip/ZipEntry;)Z", nullptr, $PUBLIC, $virtualMethod(Main$1, add, bool, $ZipEntry*)},
		{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Main$1, add, bool, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.tools.jar.Main",
		"newDirSet",
		"()Ljava/util/Set;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.Main$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.tools.jar.Main$1",
		"java.util.HashSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/HashSet<Ljava/util/zip/ZipEntry;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.tools.jar.Main"
	};
	$loadClass(Main$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Main$1));
	});
	return class$;
}

$Class* Main$1::class$ = nullptr;

		} // jar
	} // tools
} // sun