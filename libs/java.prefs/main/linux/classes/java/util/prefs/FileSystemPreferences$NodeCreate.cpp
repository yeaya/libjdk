#include <java/util/prefs/FileSystemPreferences$NodeCreate.h>
#include <java/util/prefs/FileSystemPreferences$Change.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;
using $FileSystemPreferences$Change = ::java::util::prefs::FileSystemPreferences$Change;

namespace java {
	namespace util {
		namespace prefs {

void FileSystemPreferences$NodeCreate::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
	$FileSystemPreferences$Change::init$(this$0);
}

void FileSystemPreferences$NodeCreate::replay() {
}

FileSystemPreferences$NodeCreate::FileSystemPreferences$NodeCreate() {
}

$Class* FileSystemPreferences$NodeCreate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$NodeCreate, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, $PRIVATE, $method(FileSystemPreferences$NodeCreate, init$, void, $FileSystemPreferences*)},
		{"replay", "()V", nullptr, 0, $virtualMethod(FileSystemPreferences$NodeCreate, replay, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.FileSystemPreferences$NodeCreate", "java.util.prefs.FileSystemPreferences", "NodeCreate", $PRIVATE},
		{"java.util.prefs.FileSystemPreferences$Change", "java.util.prefs.FileSystemPreferences", "Change", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.FileSystemPreferences$NodeCreate",
		"java.util.prefs.FileSystemPreferences$Change",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.prefs.FileSystemPreferences"
	};
	$loadClass(FileSystemPreferences$NodeCreate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemPreferences$NodeCreate);
	});
	return class$;
}

$Class* FileSystemPreferences$NodeCreate::class$ = nullptr;

		} // prefs
	} // util
} // java