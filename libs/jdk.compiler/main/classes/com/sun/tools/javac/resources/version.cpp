#include <com/sun/tools/javac/resources/version.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

void version::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* version::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"full"_s,
			"17-internal+0-adhoc.yeaya.jdk-jdk-17-35"_s
		}),
		$$new($ObjectArray, {
			"jdk"_s,
			"17"_s
		}),
		$$new($ObjectArray, {
			"release"_s,
			"17-internal"_s
		})
	});
}

version::version() {
}

$Class* version::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(version, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(version, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.resources.version",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(version, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(version);
	});
	return class$;
}

$Class* version::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com