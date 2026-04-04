#include <java/util/prefs/InvalidPreferencesFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace prefs {

void InvalidPreferencesFormatException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

void InvalidPreferencesFormatException::init$($String* message) {
	$Exception::init$(message);
}

void InvalidPreferencesFormatException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

InvalidPreferencesFormatException::InvalidPreferencesFormatException() {
}

InvalidPreferencesFormatException::InvalidPreferencesFormatException(const InvalidPreferencesFormatException& e) : $Exception(e) {
}

void InvalidPreferencesFormatException::throw$() {
	throw *this;
}

$Class* InvalidPreferencesFormatException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidPreferencesFormatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InvalidPreferencesFormatException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidPreferencesFormatException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InvalidPreferencesFormatException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.prefs.InvalidPreferencesFormatException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidPreferencesFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidPreferencesFormatException);
	});
	return class$;
}

$Class* InvalidPreferencesFormatException::class$ = nullptr;

		} // prefs
	} // util
} // java