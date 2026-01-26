#include <com/sun/tools/javac/resources/launcher_ja.h>

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

$MethodInfo _launcher_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(launcher_ja, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(launcher_ja, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _launcher_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.launcher_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_launcher_ja_MethodInfo_
};

$Object* allocate$launcher_ja($Class* clazz) {
	return $of($alloc(launcher_ja));
}

void launcher_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("launcher.err.cant.access.main.method"_s),
			$of(u"クラスのメイン・メソッドにアクセスできません: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.find.class"_s),
			$of(u"クラスが見つかりません: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.find.main.method"_s),
			$of(u"クラスにmain(String[])メソッドが見つかりません: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.cant.read.file"_s),
			$of(u"ソース・ファイル{0}の読取りエラー: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.compilation.failed"_s),
			$of(u"コンパイルが失敗しました"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.enable.preview.requires.source"_s),
			$of(u"--enable-previewは--sourceとともに使用する必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.file.not.found"_s),
			$of(u"ソース・ファイルが見つかりません: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.invalid.filename"_s),
			$of(u"ソース・ファイルの無効なパス: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.invalid.value.for.source"_s),
			$of(u"--sourceオプションの値が無効です: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.main.not.public.static"_s),
			$of(u"\'\'main\'メソッドが\'\'public static\'\'として宣言されていません"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.main.not.void"_s),
			$of(u"\'\'main\'メソッドが戻り型\'\'void\'\'で宣言されていません"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.args"_s),
			$of(u"ソース・ファイルのパスがありません"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.class"_s),
			$of(u"ソース・ファイルで宣言されたクラスがありません"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.err.no.value.for.option"_s),
			$of(u"オプションに値が指定されていません: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("launcher.error"_s),
			$of(u"エラー: "_s)
		})
	});
}

launcher_ja::launcher_ja() {
}

$Class* launcher_ja::load$($String* name, bool initialize) {
	$loadClass(launcher_ja, name, initialize, &_launcher_ja_ClassInfo_, allocate$launcher_ja);
	return class$;
}

$Class* launcher_ja::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com