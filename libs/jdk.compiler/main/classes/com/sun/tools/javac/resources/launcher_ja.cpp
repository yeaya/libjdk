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

void launcher_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher_ja::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"launcher.err.cant.access.main.method"_s,
			u"クラスのメイン・メソッドにアクセスできません: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.cant.find.class"_s,
			u"クラスが見つかりません: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.cant.find.main.method"_s,
			u"クラスにmain(String[])メソッドが見つかりません: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.cant.read.file"_s,
			u"ソース・ファイル{0}の読取りエラー: {1}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.compilation.failed"_s,
			u"コンパイルが失敗しました"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.enable.preview.requires.source"_s,
			u"--enable-previewは--sourceとともに使用する必要があります"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.file.not.found"_s,
			u"ソース・ファイルが見つかりません: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.invalid.filename"_s,
			u"ソース・ファイルの無効なパス: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.invalid.value.for.source"_s,
			u"--sourceオプションの値が無効です: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.main.not.public.static"_s,
			u"\'\'main\'メソッドが\'\'public static\'\'として宣言されていません"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.main.not.void"_s,
			u"\'\'main\'メソッドが戻り型\'\'void\'\'で宣言されていません"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.no.args"_s,
			u"ソース・ファイルのパスがありません"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.no.class"_s,
			u"ソース・ファイルで宣言されたクラスがありません"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.no.value.for.option"_s,
			u"オプションに値が指定されていません: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.error"_s,
			u"エラー: "_s
		})
	});
}

launcher_ja::launcher_ja() {
}

$Class* launcher_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(launcher_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(launcher_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.resources.launcher_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(launcher_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(launcher_ja);
	});
	return class$;
}

$Class* launcher_ja::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com