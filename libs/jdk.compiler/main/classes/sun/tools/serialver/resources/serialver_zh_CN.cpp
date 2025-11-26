#include <sun/tools/serialver/resources/serialver_zh_CN.h>

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

$MethodInfo _serialver_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serialver_zh_CN::*)()>(&serialver_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serialver_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.serialver.resources.serialver_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serialver_zh_CN_MethodInfo_
};

$Object* allocate$serialver_zh_CN($Class* clazz) {
	return $of($alloc(serialver_zh_CN));
}

void serialver_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serialver_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ClassNotFound"_s),
			$of(u"\u627e\u4e0d\u5230\u7c7b{0}\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("NotSerializable"_s),
			$of(u"\u7c7b{0}\u65e0\u6cd5\u5e8f\u5217\u5316\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.classpath"_s),
			$of(u"\u7f3a\u5c11 -classpath \u9009\u9879\u7684\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("error.parsing.classpath"_s),
			$of(u"\u5bf9\u7c7b\u8def\u5f84 {0} \u8fdb\u884c\u8bed\u6cd5\u5206\u6790\u65f6\u51fa\u9519\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.flag"_s),
			$of(u"\u65e0\u6548\u6807\u8bb0{0}\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("usage"_s),
			$of(u"\u7528\u6cd5: serialver [-classpath classpath] [classname...]"_s)
		})
	});
}

serialver_zh_CN::serialver_zh_CN() {
}

$Class* serialver_zh_CN::load$($String* name, bool initialize) {
	$loadClass(serialver_zh_CN, name, initialize, &_serialver_zh_CN_ClassInfo_, allocate$serialver_zh_CN);
	return class$;
}

$Class* serialver_zh_CN::class$ = nullptr;

			} // resources
		} // serialver
	} // tools
} // sun