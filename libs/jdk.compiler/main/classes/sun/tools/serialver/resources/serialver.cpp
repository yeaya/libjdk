#include <sun/tools/serialver/resources/serialver.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace tools {
		namespace serialver {
			namespace resources {

void serialver::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serialver::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ClassNotFound"_s,
			"Class {0} not found."_s
		}),
		$$new($ObjectArray, {
			"NotSerializable"_s,
			"Class {0} is not Serializable."_s
		}),
		$$new($ObjectArray, {
			"error.missing.classpath"_s,
			"Missing argument for -classpath option"_s
		}),
		$$new($ObjectArray, {
			"error.parsing.classpath"_s,
			"Error parsing classpath {0}."_s
		}),
		$$new($ObjectArray, {
			"invalid.flag"_s,
			"Invalid flag {0}."_s
		}),
		$$new($ObjectArray, {
			"usage"_s,
			"use: serialver [-classpath classpath] [classname...]"_s
		})
	});
}

serialver::serialver() {
}

$Class* serialver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serialver, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serialver, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.tools.serialver.resources.serialver",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serialver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serialver);
	});
	return class$;
}

$Class* serialver::class$ = nullptr;

			} // resources
		} // serialver
	} // tools
} // sun