#include <java/util/prefs/BackingStoreException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace prefs {

void BackingStoreException::init$($String* s) {
	$Exception::init$(s);
}

void BackingStoreException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

BackingStoreException::BackingStoreException() {
}

BackingStoreException::BackingStoreException(const BackingStoreException& e) : $Exception(e) {
}

void BackingStoreException::throw$() {
	throw *this;
}

$Class* BackingStoreException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BackingStoreException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BackingStoreException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(BackingStoreException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.prefs.BackingStoreException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BackingStoreException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BackingStoreException);
	});
	return class$;
}

$Class* BackingStoreException::class$ = nullptr;

		} // prefs
	} // util
} // java