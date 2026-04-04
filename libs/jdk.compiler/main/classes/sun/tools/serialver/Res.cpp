#include <sun/tools/serialver/Res.h>
#include <java/lang/Error.h>
#include <java/text/MessageFormat.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace sun {
	namespace tools {
		namespace serialver {

$ResourceBundle* Res::messageRB = nullptr;

void Res::init$() {
}

void Res::initResource() {
	$load(Res);
	$beforeCallerSensitive();
	try {
		$init(Res);
		$assignStatic(Res::messageRB, $ResourceBundle::getBundle("sun.tools.serialver.resources.serialver"_s));
	} catch ($MissingResourceException& e) {
		$throwNew($Error, "Fatal: Resource for serialver is missing"_s);
	}
}

$String* Res::getText($String* key) {
	return getText(key, ($String*)nullptr);
}

$String* Res::getText($String* key, $String* a1) {
	return getText(key, a1, nullptr);
}

$String* Res::getText($String* key, $String* a1, $String* a2) {
	return getText(key, a1, a2, nullptr);
}

$String* Res::getText($String* key, $String* a1, $String* a2, $String* a3) {
	$useLocalObjectStack();
	$init(Res);
	if (Res::messageRB == nullptr) {
		initResource();
	}
	try {
		$var($String, message, $nc(Res::messageRB)->getString(key));
		return $MessageFormat::format(message, $$new($ObjectArray, {
			a1,
			a2,
			a3
		}));
	} catch ($MissingResourceException& e) {
		$throwNew($Error, $$str({"Fatal: Resource for serialver is broken. There is no "_s, key, " key in resource."_s}));
	}
	$shouldNotReachHere();
}

Res::Res() {
}

$Class* Res::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"messageRB", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(Res, messageRB)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Res, init$, void)},
		{"getText", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Res, getText, $String*, $String*)},
		{"getText", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Res, getText, $String*, $String*, $String*)},
		{"getText", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Res, getText, $String*, $String*, $String*, $String*)},
		{"getText", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Res, getText, $String*, $String*, $String*, $String*, $String*)},
		{"initResource", "()V", nullptr, $STATIC, $staticMethod(Res, initResource, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.tools.serialver.Res",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Res, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Res);
	});
	return class$;
}

$Class* Res::class$ = nullptr;

		} // serialver
	} // tools
} // sun