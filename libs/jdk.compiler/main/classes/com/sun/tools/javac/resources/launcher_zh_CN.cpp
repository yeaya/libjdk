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

$MethodInfo _launcher_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(launcher_zh_CN::*)()>(&launcher_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _launcher_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.launcher_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_zh_CN_MethodInfo_
};

$Object* allocate$launcher_zh_CN($Class* clazz) {
	return $of($alloc(launcher_zh_CN));
}

void launcher_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("launcher.err.cant.access.main.method"_s),
			$of(u"无法访问类 {0} 中的 main 方法"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.find.class"_s),
			$of(u"找不到类：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.find.main.method"_s),
			$of(u"在类 {0} 中找不到 main(String[]) 方法"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.read.file"_s),
			$of(u"读取源文件 {0} 时出错：{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.compilation.failed"_s),
			$of(u"编译失败"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.enable.preview.requires.source"_s),
			$of(u"--enable-preview 必须与 --source 一起使用"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.file.not.found"_s),
			$of(u"找不到源文件：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.invalid.filename"_s),
			$of(u"源文件的路径无效：{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.invalid.value.for.source"_s),
			$of(u"--source 选项的值无效：{0}\n"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.main.not.public.static"_s),
			$of(u"\'\'main\'\' 方法未声明 \'\'public static\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.main.not.void"_s),
			$of(u"未使用返回类型 \'\'void\'\' 声明 \'\'main\'\' 方法"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.args"_s),
			$of(u"无源文件的路径"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.class"_s),
			$of(u"在源文件中未声明类"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.value.for.option"_s),
			$of(u"没有为选项 {0} 指定值"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.error"_s),
			$of(u"错误: "_s)
		})
	});
}

launcher_zh_CN::launcher_zh_CN() {
}

$Class* launcher_zh_CN::load$($String* name, bool initialize) {
	$loadClass(launcher_zh_CN, name, initialize, &_launcher_zh_CN_ClassInfo_, allocate$launcher_zh_CN);
	return class$;
}

$Class* launcher_zh_CN::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com