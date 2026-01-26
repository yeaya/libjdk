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
	{"<init>", "()V", nullptr, $PUBLIC, $method(serialver_ja, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serialver_ja, getContents, $ObjectArray2*)},
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
			$of(u"クラス{0}が見つかりません。"_s)
		}),
		$$new($ObjectArray, {
			$of("NotSerializable"_s),
			$of(u"クラス{0}は直列化できません。"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.classpath"_s),
			$of(u"-classpathオプションの引数が見つかりません"_s)
		}),
		$$new($ObjectArray, {
			$of("error.parsing.classpath"_s),
			$of(u"クラスパス{0}の解析エラーです。"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.flag"_s),
			$of(u"無効なフラグ{0}。"_s)
		}),
		$$new($ObjectArray, {
			$of("usage"_s),
			$of(u"使用方法: serialver [-classpath classpath] [classname...]"_s)
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