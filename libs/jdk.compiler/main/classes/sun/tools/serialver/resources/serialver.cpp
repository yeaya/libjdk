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

$MethodInfo _serialver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(serialver, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serialver, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _serialver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.serialver.resources.serialver",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serialver_MethodInfo_
};

$Object* allocate$serialver($Class* clazz) {
	return $of($alloc(serialver));
}

void serialver::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serialver::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ClassNotFound"_s),
			$of("Class {0} not found."_s)
		}),
		$$new($ObjectArray, {
			$of("NotSerializable"_s),
			$of("Class {0} is not Serializable."_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.classpath"_s),
			$of("Missing argument for -classpath option"_s)
		}),
		$$new($ObjectArray, {
			$of("error.parsing.classpath"_s),
			$of("Error parsing classpath {0}."_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.flag"_s),
			$of("Invalid flag {0}."_s)
		}),
		$$new($ObjectArray, {
			$of("usage"_s),
			$of("use: serialver [-classpath classpath] [classname...]"_s)
		})
	});
}

serialver::serialver() {
}

$Class* serialver::load$($String* name, bool initialize) {
	$loadClass(serialver, name, initialize, &_serialver_ClassInfo_, allocate$serialver);
	return class$;
}

$Class* serialver::class$ = nullptr;

			} // resources
		} // serialver
	} // tools
} // sun