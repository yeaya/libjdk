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

void serialver_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serialver_ja::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ClassNotFound"_s,
			u"クラス{0}が見つかりません。"_s
		}),
		$$new($ObjectArray, {
			"NotSerializable"_s,
			u"クラス{0}は直列化できません。"_s
		}),
		$$new($ObjectArray, {
			"error.missing.classpath"_s,
			u"-classpathオプションの引数が見つかりません"_s
		}),
		$$new($ObjectArray, {
			"error.parsing.classpath"_s,
			u"クラスパス{0}の解析エラーです。"_s
		}),
		$$new($ObjectArray, {
			"invalid.flag"_s,
			u"無効なフラグ{0}。"_s
		}),
		$$new($ObjectArray, {
			"usage"_s,
			u"使用方法: serialver [-classpath classpath] [classname...]"_s
		})
	});
}

serialver_ja::serialver_ja() {
}

$Class* serialver_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serialver_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serialver_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.tools.serialver.resources.serialver_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serialver_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serialver_ja);
	});
	return class$;
}

$Class* serialver_ja::class$ = nullptr;

			} // resources
		} // serialver
	} // tools
} // sun