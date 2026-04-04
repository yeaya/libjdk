#include <java/util/logging/FileHandler$InitializationErrorManager.h>
#include <java/util/logging/ErrorManager.h>
#include <java/util/logging/FileHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorManager = ::java::util::logging::ErrorManager;

namespace java {
	namespace util {
		namespace logging {

void FileHandler$InitializationErrorManager::init$() {
	$ErrorManager::init$();
}

void FileHandler$InitializationErrorManager::error($String* msg, $Exception* ex, int32_t code) {
	$set(this, lastException, ex);
}

FileHandler$InitializationErrorManager::FileHandler$InitializationErrorManager() {
}

$Class* FileHandler$InitializationErrorManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lastException", "Ljava/lang/Exception;", nullptr, 0, $field(FileHandler$InitializationErrorManager, lastException)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(FileHandler$InitializationErrorManager, init$, void)},
		{"error", "(Ljava/lang/String;Ljava/lang/Exception;I)V", nullptr, $PUBLIC, $virtualMethod(FileHandler$InitializationErrorManager, error, void, $String*, $Exception*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.FileHandler$InitializationErrorManager", "java.util.logging.FileHandler", "InitializationErrorManager", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.FileHandler$InitializationErrorManager",
		"java.util.logging.ErrorManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.FileHandler"
	};
	$loadClass(FileHandler$InitializationErrorManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileHandler$InitializationErrorManager);
	});
	return class$;
}

$Class* FileHandler$InitializationErrorManager::class$ = nullptr;

		} // logging
	} // util
} // java