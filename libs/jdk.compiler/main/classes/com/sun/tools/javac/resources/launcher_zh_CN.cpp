#include <com/sun/tools/javac/resources/launcher_zh_CN.h>
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

void launcher_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_zh_CN::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"launcher.err.cant.access.main.method"_s,
			u"无法访问类 {0} 中的 main 方法"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.cant.find.class"_s,
			u"找不到类：{0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.cant.find.main.method"_s,
			u"在类 {0} 中找不到 main(String[]) 方法"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.cant.read.file"_s,
			u"读取源文件 {0} 时出错：{1}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.compilation.failed"_s,
			u"编译失败"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.enable.preview.requires.source"_s,
			u"--enable-preview 必须与 --source 一起使用"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.file.not.found"_s,
			u"找不到源文件：{0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.invalid.filename"_s,
			u"源文件的路径无效：{0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.invalid.value.for.source"_s,
			u"--source 选项的值无效：{0}\n"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.main.not.public.static"_s,
			u"\'\'main\'\' 方法未声明 \'\'public static\'\'"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.main.not.void"_s,
			u"未使用返回类型 \'\'void\'\' 声明 \'\'main\'\' 方法"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.no.args"_s,
			u"无源文件的路径"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.no.class"_s,
			u"在源文件中未声明类"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.no.value.for.option"_s,
			u"没有为选项 {0} 指定值"_s
		}),
		$$new($ObjectArray, {
			"launcher.error"_s,
			u"错误: "_s
		})
	});
}

launcher_zh_CN::launcher_zh_CN() {
}

$Class* launcher_zh_CN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(launcher_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(launcher_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.resources.launcher_zh_CN",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(launcher_zh_CN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(launcher_zh_CN);
	});
	return class$;
}

$Class* launcher_zh_CN::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com