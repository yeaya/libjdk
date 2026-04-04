#include <java/util/logging/FileHandler$1.h>
#include <java/util/logging/FileHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileHandler = ::java::util::logging::FileHandler;

namespace java {
	namespace util {
		namespace logging {

void FileHandler$1::init$($FileHandler* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileHandler$1::run() {
	this->this$0->rotate();
	return nullptr;
}

FileHandler$1::FileHandler$1() {
}

$Class* FileHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/logging/FileHandler;", nullptr, $FINAL | $SYNTHETIC, $field(FileHandler$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/FileHandler;)V", nullptr, 0, $method(FileHandler$1, init$, void, $FileHandler*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FileHandler$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.logging.FileHandler",
		"publish",
		"(Ljava/util/logging/LogRecord;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.FileHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.FileHandler$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.FileHandler"
	};
	$loadClass(FileHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileHandler$1);
	});
	return class$;
}

$Class* FileHandler$1::class$ = nullptr;

		} // logging
	} // util
} // java