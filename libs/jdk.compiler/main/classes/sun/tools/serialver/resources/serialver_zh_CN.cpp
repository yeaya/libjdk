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

void serialver_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serialver_zh_CN::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ClassNotFound"_s,
			u"找不到类{0}。"_s
		}),
		$$new($ObjectArray, {
			"NotSerializable"_s,
			u"类{0}无法序列化。"_s
		}),
		$$new($ObjectArray, {
			"error.missing.classpath"_s,
			u"缺少 -classpath 选项的参数"_s
		}),
		$$new($ObjectArray, {
			"error.parsing.classpath"_s,
			u"对类路径 {0} 进行语法分析时出错。"_s
		}),
		$$new($ObjectArray, {
			"invalid.flag"_s,
			u"无效标记{0}。"_s
		}),
		$$new($ObjectArray, {
			"usage"_s,
			u"用法: serialver [-classpath classpath] [classname...]"_s
		})
	});
}

serialver_zh_CN::serialver_zh_CN() {
}

$Class* serialver_zh_CN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serialver_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serialver_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.tools.serialver.resources.serialver_zh_CN",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serialver_zh_CN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serialver_zh_CN);
	});
	return class$;
}

$Class* serialver_zh_CN::class$ = nullptr;

			} // resources
		} // serialver
	} // tools
} // sun