#include <java/util/prefs/FileSystemPreferences$9.h>
#include <java/io/File.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/FileSystemPreferences$NodeCreate.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;

namespace java {
	namespace util {
		namespace prefs {

void FileSystemPreferences$9::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileSystemPreferences$9::run() {
	$useLocalObjectStack();
	if ($nc(this->this$0->changeLog)->contains(this->this$0->nodeCreate)) {
		this->this$0->changeLog->remove(this->this$0->nodeCreate);
		$set(this->this$0, nodeCreate, nullptr);
		return nullptr;
	}
	if (!$nc(this->this$0->dir)->exists()) {
		return nullptr;
	}
	$nc(this->this$0->prefsFile)->delete$();
	$nc(this->this$0->tmpFile)->delete$();
	$var($FileArray, junk, this->this$0->dir->listFiles());
	if ($nc(junk)->length != 0) {
		$$nc($FileSystemPreferences::getLogger())->warning($$str({"Found extraneous files when removing node: "_s, $($Arrays::asList(junk))}));
		for (int32_t i = 0; i < junk->length; ++i) {
			$nc(junk->get(i))->delete$();
		}
	}
	if (!this->this$0->dir->delete$()) {
		$throwNew($BackingStoreException, $$str({"Couldn\'t delete dir: "_s, this->this$0->dir}));
	}
	return nullptr;
}

FileSystemPreferences$9::FileSystemPreferences$9() {
}

$Class* FileSystemPreferences$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$9, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, 0, $method(FileSystemPreferences$9, init$, void, $FileSystemPreferences*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(FileSystemPreferences$9, run, $Object*), "java.util.prefs.BackingStoreException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.prefs.FileSystemPreferences",
		"removeNodeSpi",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.prefs.FileSystemPreferences$9", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.prefs.FileSystemPreferences$9",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.prefs.FileSystemPreferences"
	};
	$loadClass(FileSystemPreferences$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemPreferences$9);
	});
	return class$;
}

$Class* FileSystemPreferences$9::class$ = nullptr;

		} // prefs
	} // util
} // java