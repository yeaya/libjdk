#include <com/apple/eio/FileManager$1.h>
#include <com/apple/eio/FileManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eio {

void FileManager$1::init$() {
}

$Object* FileManager$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("osx"_s);
	return nullptr;
}

FileManager$1::FileManager$1() {
}

$Class* FileManager$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileManager$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(FileManager$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.eio.FileManager",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eio.FileManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.eio.FileManager$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.eio.FileManager"
	};
	$loadClass(FileManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileManager$1);
	});
	return class$;
}

$Class* FileManager$1::class$ = nullptr;

		} // eio
	} // apple
} // com