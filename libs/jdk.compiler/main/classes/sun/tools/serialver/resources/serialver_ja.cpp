#include <sun/tools/serialver/resources/serialver_ja.h>

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

$MethodInfo _serialver_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serialver_ja::*)()>(&serialver_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serialver_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.serialver.resources.serialver_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serialver_ja_MethodInfo_
};

$Object* allocate$serialver_ja($Class* clazz) {
	return $of($alloc(serialver_ja));
}

void serialver_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serialver_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ClassNotFound"_s),
			$of(u"\u30af\u30e9\u30b9{0}\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("NotSerializable"_s),
			$of(u"\u30af\u30e9\u30b9{0}\u306f\u76f4\u5217\u5316\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.classpath"_s),
			$of(u"-classpath\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u5f15\u6570\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("error.parsing.classpath"_s),
			$of(u"\u30af\u30e9\u30b9\u30d1\u30b9{0}\u306e\u89e3\u6790\u30a8\u30e9\u30fc\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.flag"_s),
			$of(u"\u7121\u52b9\u306a\u30d5\u30e9\u30b0{0}\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("usage"_s),
			$of(u"\u4f7f\u7528\u65b9\u6cd5: serialver [-classpath classpath] [classname...]"_s)
		})
	});
}

serialver_ja::serialver_ja() {
}

$Class* serialver_ja::load$($String* name, bool initialize) {
	$loadClass(serialver_ja, name, initialize, &_serialver_ja_ClassInfo_, allocate$serialver_ja);
	return class$;
}

$Class* serialver_ja::class$ = nullptr;

			} // resources
		} // serialver
	} // tools
} // sun