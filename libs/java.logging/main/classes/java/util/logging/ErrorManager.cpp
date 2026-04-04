#include <java/util/logging/ErrorManager.h>
#include <jcpp.h>

#undef CLOSE_FAILURE
#undef FLUSH_FAILURE
#undef FORMAT_FAILURE
#undef GENERIC_FAILURE
#undef OPEN_FAILURE
#undef WRITE_FAILURE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace logging {

void ErrorManager::init$() {
	this->reported = false;
}

void ErrorManager::error($String* msg, $Exception* ex, int32_t code) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->reported) {
			return;
		}
		this->reported = true;
		$var($String, text, $str({"java.util.logging.ErrorManager: "_s, $$str(code)}));
		if (msg != nullptr) {
			$assign(text, $str({text, ": "_s, msg}));
		}
		$nc($System::err)->println(text);
		if (ex != nullptr) {
			ex->printStackTrace();
		}
	}
}

ErrorManager::ErrorManager() {
}

$Class* ErrorManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"reported", "Z", nullptr, $PRIVATE, $field(ErrorManager, reported)},
		{"GENERIC_FAILURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ErrorManager, GENERIC_FAILURE)},
		{"WRITE_FAILURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ErrorManager, WRITE_FAILURE)},
		{"FLUSH_FAILURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ErrorManager, FLUSH_FAILURE)},
		{"CLOSE_FAILURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ErrorManager, CLOSE_FAILURE)},
		{"OPEN_FAILURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ErrorManager, OPEN_FAILURE)},
		{"FORMAT_FAILURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ErrorManager, FORMAT_FAILURE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorManager, init$, void)},
		{"error", "(Ljava/lang/String;Ljava/lang/Exception;I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ErrorManager, error, void, $String*, $Exception*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.logging.ErrorManager",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ErrorManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorManager);
	});
	return class$;
}

$Class* ErrorManager::class$ = nullptr;

		} // logging
	} // util
} // java