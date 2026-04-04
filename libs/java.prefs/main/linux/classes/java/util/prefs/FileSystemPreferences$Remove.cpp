#include <java/util/prefs/FileSystemPreferences$Remove.h>
#include <java/util/Map.h>
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

void FileSystemPreferences$Remove::init$($FileSystemPreferences* this$0, $String* key) {
	$set(this, this$0, this$0);
	$FileSystemPreferences$Change::init$(this$0);
	$set(this, key, key);
}

void FileSystemPreferences$Remove::replay() {
	$nc(this->this$0->prefsCache)->remove(this->key);
}

FileSystemPreferences$Remove::FileSystemPreferences$Remove() {
}

$Class* FileSystemPreferences$Remove::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$Remove, this$0)},
		{"key", "Ljava/lang/String;", nullptr, 0, $field(FileSystemPreferences$Remove, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/prefs/FileSystemPreferences;Ljava/lang/String;)V", nullptr, 0, $method(FileSystemPreferences$Remove, init$, void, $FileSystemPreferences*, $String*)},
		{"replay", "()V", nullptr, 0, $virtualMethod(FileSystemPreferences$Remove, replay, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.FileSystemPreferences$Remove", "java.util.prefs.FileSystemPreferences", "Remove", $PRIVATE},
		{"java.util.prefs.FileSystemPreferences$Change", "java.util.prefs.FileSystemPreferences", "Change", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.FileSystemPreferences$Remove",
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
	$loadClass(FileSystemPreferences$Remove, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemPreferences$Remove);
	});
	return class$;
}

$Class* FileSystemPreferences$Remove::class$ = nullptr;

		} // prefs
	} // util
} // java