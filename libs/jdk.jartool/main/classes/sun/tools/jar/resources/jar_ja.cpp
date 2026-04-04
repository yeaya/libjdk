#include <sun/tools/jar/resources/jar_ja.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace tools {
		namespace jar {
			namespace resources {

void jar_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_ja::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"error.bad.cflag"_s,
			u"フラグ\'c\'ではマニフェストまたは入力ファイルの指定が必要です。"_s
		}),
		$$new($ObjectArray, {
			"error.bad.dflag"_s,
			u"\'-d, --describe-module\'オプションでは入力ファイルの指定は不要です"_s
		}),
		$$new($ObjectArray, {
			"error.bad.eflag"_s,
			u"\'e\'フラグと\'Main-Class\'属性を持つマニフェストは同時に\n指定できません。"_s
		}),
		$$new($ObjectArray, {
			"error.bad.file.arg"_s,
			u"ファイル引数の解析中にエラーが発生しました"_s
		}),
		$$new($ObjectArray, {
			"error.bad.option"_s,
			u"オプション-{ctxuid}のうちの1つを指定する必要があります。"_s
		}),
		$$new($ObjectArray, {
			"error.bad.reason"_s,
			u"不正な理由: {0}、非推奨、削除予定の非推奨または実験的のいずれかである必要があります"_s
		}),
		$$new($ObjectArray, {
			"error.bad.uflag"_s,
			u"フラグ\'u\'ではマニフェストか\'e\'フラグ、または入力ファイルの指定が必要です。"_s
		}),
		$$new($ObjectArray, {
			"error.cant.open"_s,
			u"{0}を開くことができません"_s
		}),
		$$new($ObjectArray, {
			"error.create.dir"_s,
			u"ディレクトリ{0}を作成できませんでした"_s
		}),
		$$new($ObjectArray, {
			"error.create.tempfile"_s,
			u"一時ファイルを作成できませんでした"_s
		}),
		$$new($ObjectArray, {
			"error.hash.dep"_s,
			u"モジュール{0}依存性のハッシュでモジュール{1}がモジュール・パスに見つかりません"_s
		}),
		$$new($ObjectArray, {
			"error.illegal.option"_s,
			u"不正なオプション: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.incorrect.length"_s,
			u"{0}の処理中に不正な長さがありました"_s
		}),
		$$new($ObjectArray, {
			"error.invalid.versioned.module.attribute"_s,
			u"モジュール・ディスクリプタ属性{0}が無効です"_s
		}),
		$$new($ObjectArray, {
			"error.missing.arg"_s,
			u"オプション{0}には引数が必要です。"_s
		}),
		$$new($ObjectArray, {
			"error.missing.provider"_s,
			u"サービス・プロバイダが見つかりません: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.module.descriptor.not.found"_s,
			u"モジュール・ディスクリプタが見つかりません"_s
		}),
		$$new($ObjectArray, {
			"error.module.options.without.info"_s,
			u"--module-versionまたは--hash-modulesのいずれかでmodule-info.classがありません"_s
		}),
		$$new($ObjectArray, {
			"error.multiple.main.operations"_s,
			u"複数の\'cuxtid\'オプションを指定できません"_s
		}),
		$$new($ObjectArray, {
			"error.no.operative.descriptor"_s,
			u"リリースの操作ディスクリプタはありません: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.no.root.descriptor"_s,
			u"ルート・モジュールのディスクリプタがありません。--releaseを指定してください"_s
		}),
		$$new($ObjectArray, {
			"error.nosuch.fileordir"_s,
			u"{0}というファイルまたはディレクトリはありません"_s
		}),
		$$new($ObjectArray, {
			"error.release.unexpected.versioned.entry"_s,
			u"リリース{1}で予期しないバージョニング済エントリ{0}"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.notnumber"_s,
			u"リリース{0}は有効ではありません"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.toosmall"_s,
			u"リリース{0}は有効ではありません。9以上である必要があります"_s
		}),
		$$new($ObjectArray, {
			"error.unable.derive.automodule"_s,
			u"次のモジュール・ディスクリプタを導出できません: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.unexpected.module-info"_s,
			u"予期しないモジュール・ディスクリプタ{0}"_s
		}),
		$$new($ObjectArray, {
			"error.unrecognized.option"_s,
			u"認識されないオプション: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.bad.entry.name"_s,
			u"エントリ名が不正です: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.different.api"_s,
			u"エントリ: {0}には、以前のバージョンとは異なるAPIを持つクラスが含まれます"_s
		}),
		$$new($ObjectArray, {
			"error.validator.entryname.tooshort"_s,
			u"エントリ名: {0}が短すぎます。ディレクトリではありません"_s
		}),
		$$new($ObjectArray, {
			"error.validator.incompatible.class.version"_s,
			u"エントリ: {0}には、以前のバージョンと互換性のないクラス・バージョンが含まれます"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.exports.notequal"_s,
			u"バージョニングされたディレクトリのmodule-info.classに異なる\"exports\"が含まれています"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.manclass.notequal"_s,
			u"{0}: バージョニングされたディレクトリのmodule-info.classに異なる\"main-class\"が含まれています"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.name.notequal"_s,
			u"バージョニングされたディレクトリのmodule-info.classに正しくない名前が含まれています"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.opens.notequal"_s,
			u"バージョニング・ディレクトリのmodule-info.classに異なる\"opens\"が含まれています"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.provides.notequal"_s,
			u"バージョニングされたディレクトリのmodule-info.classに異なる\"provides\"が含まれています"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.added"_s,
			u"バージョニングされたディレクトリのmodule-info.classに追加の\"requires\"が含まれています"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.dropped"_s,
			u"バージョニングされたディレクトリのmodule-info.classに欠落している\"requires\"が含まれています"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.transitive"_s,
			u"バージョニング・ディレクトリのmodule-info.classに追加の\"requires transitive\"が含まれています"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.version.notequal"_s,
			u"{0}: バージョニングされたディレクトリのmodule-info.classに異なる\"version\"が含まれています"_s
		}),
		$$new($ObjectArray, {
			"error.validator.isolated.nested.class"_s,
			u"エントリ: {0}は、分離型のネストされたクラスです"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.exception"_s,
			u"{0}を検証できません: {1}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.invalid"_s,
			u"無効なマルチリリースjarファイル{0}が削除されました"_s
		}),
		$$new($ObjectArray, {
			"error.validator.names.mismatch"_s,
			u"エントリ: {0}には、内部名{1}を持つクラスが含まれますが、名前が一致しません"_s
		}),
		$$new($ObjectArray, {
			"error.validator.new.public.class"_s,
			u"エントリ: {0}には、ベース・エントリに存在しない新しいpublicクラスが含まれます"_s
		}),
		$$new($ObjectArray, {
			"error.validator.version.notnumber"_s,
			u"エントリ名: {0}にバージョン番号がありません"_s
		}),
		$$new($ObjectArray, {
			"error.write.file"_s,
			u"既存jarファイルの書込み中にエラーが発生しました"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any"_s,
			u" どのモードでも有効な操作修飾子:\n\n  -C DIR                     指定のディレクトリに変更し、次のファイルを\n                             取り込みます"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.file"_s,
			u"  -f、--file=FILE            アーカイブ・ファイル名。省略した場合、stdinまたは\n                             stdoutのいずれかが操作に基づいて使用されます\n      --release VERSION      次のすべてのファイルをjarのバージョニングされたディレクトリ\n                             (つまり、META-INF/versions/VERSION/)に配置します"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.verbose"_s,
			u"  -v、--verbose              標準出力に詳細な出力を生成します"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create"_s,
			u" 作成モードでのみ有効な操作修飾子:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.normalize"_s,
			u"  -n, --normalize            新しいjarアーカイブの作成後、含まれる情報を\n                             正規化します。このオプションは非推奨であり、\n                             今後のJDKリリースで削除される予定です"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update"_s,
			u" 作成または更新モードでのみ有効な操作修飾子:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.do-not-resolve-by-default"_s,
			u"      --do-not-resolve-by-default  モジュールのデフォルトのルート設定から除外します"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.hash-modules"_s,
			u"      --hash-modules=PATTERN モジュラjarの作成時または非モジュラjarの更新時に\n                             指定のパターンに一致し、直接または間接的に\n                             依存しているモジュールのハッシュを\n                             計算および記録します"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index"_s,
			u" 作成、更新および索引生成モードでのみ有効な操作修飾子:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index.no-compress"_s,
			u"  -0, --no-compress          格納のみ。ZIP圧縮を使用しません"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.main-class"_s,
			u"  -e、--main-class=CLASSNAME モジュラまたは実行可能なjarアーカイブに\n                             バンドルされたスタンドアロン・アプリケーションの\n                             アプリケーション・エントリ・ポイント"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.manifest"_s,
			u"  -m、--manifest=FILE        指定のマニフェスト・ファイルからマニフェスト情報を\n                             取り込みます"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-path"_s,
			u"  -p、--module-path          ハッシュを生成するモジュール依存性\n                             の場所"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-version"_s,
			u"      --module-version=VERSION    モジュラjarの作成時または非モジュラjarの更新時の\n                             モジュール・バージョン"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.no-manifest"_s,
			u"  -M、--no-manifest          エントリのマニフェスト・ファイルを作成しません"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.warn-if-resolved"_s,
			u"      --warn-if-resolved     モジュールが解決されている場合は、警告を発行する\n                             ツールのヒント。非推奨、削除予定の非推奨または\n                             実験的のいずれか"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main"_s,
			u" メイン操作モード:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.create"_s,
			u"  -c、--create               アーカイブを作成します"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.describe-module"_s,
			u"  -d, --describe-module      モジュール・ディスクリプタまたは自動モジュール名を出力します"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.extract"_s,
			u"  -x、--extract              指定の(またはすべての)ファイルをアーカイブから抽出します"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.generate-index"_s,
			u"  -i,、--generate-index=FILE  指定のjarアーカイブの索引情報を\n                             生成します"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.list"_s,
			u"  -t、--list                 アーカイブの内容を一覧表示します"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.update"_s,
			u"  -u、--update               既存のjarアーカイブを更新します"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other"_s,
			u" その他のオプション:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help"_s,
			u"  -?、-h、--help[:compat]        これ(オプションで互換性)をhelpに指定します"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help-extra"_s,
			u"      --help-extra           追加オプションのヘルプを提供します"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.version"_s,
			u"      --version              プログラム・バージョンを出力します"_s
		}),
		$$new($ObjectArray, {
			"main.help.postopt"_s,
			u" モジュール・ディスクリプタ\'module-info.class\'が指定のディレクトリのルートまたは\n jarアーカイブ自体のルートにある場合、アーカイブはモジュラjarです。\n 次の操作は、モジュラjarの作成時または既存の非モジュラjarの更新時に\n のみ有効です:  \'--module-version\'、\n \'--hash-modules\'および\'--module-path\'。\n\n ロング・オプションへの必須またはオプションの引数は、対応するショート・オプション\n に対しても必須またはオプションになります。"_s
		}),
		$$new($ObjectArray, {
			"main.help.preopt"_s,
			u"使用方法: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njarはクラスおよびリソースのアーカイブを作成し、アーカイブから個々のクラスまたは\nリソースを操作または復元できます。\n\n 例:\n # 2つのクラス・ファイルを含むclasses.jarというアーカイブを作成する:\n jar --create --file classes.jar Foo.class Bar.class\n # foo/のすべてのファイルを含む、既存のマニフェストを使用したアーカイブを作成する:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # モジュラjarアーカイブを作成する。モジュール・ディスクリプタはclasses/module-info.classに\n # ある:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # 既存の非モジュラjarをモジュラjarに更新する:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # 複数リリースjarを作成し、一部のファイルをMETA-INF/versions/9ディレクトリに配置する:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\njarコマンドを短縮または簡略化するには、個別のテキスト・ファイルで引数を指定し、\n記号(@)を接頭辞として使用してjarコマンドに渡します。\n\n 例:\n # 追加オプションおよびクラス・ファイルのリストをファイルclasses.listから読込みます\n jar --create --file my.jar @classes.list\n"_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary"_s,
			u"使用方法: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary.try"_s,
			u"詳細は、`jar --help\'を実行してください。"_s
		}),
		$$new($ObjectArray, {
			"out.added.manifest"_s,
			u"マニフェストが追加されました"_s
		}),
		$$new($ObjectArray, {
			"out.added.module-info"_s,
			u"module-infoが追加されました: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.adding"_s,
			u"{0}を追加中です"_s
		}),
		$$new($ObjectArray, {
			"out.automodule"_s,
			u"モジュール・ディスクリプタが見つかりません。自動モジュールが導出されました。"_s
		}),
		$$new($ObjectArray, {
			"out.create"_s,
			u"  {0}が作成されました"_s
		}),
		$$new($ObjectArray, {
			"out.deflated"_s,
			u"({0}%収縮されました)"_s
		}),
		$$new($ObjectArray, {
			"out.extracted"_s,
			u"{0}が抽出されました"_s
		}),
		$$new($ObjectArray, {
			"out.ignore.entry"_s,
			u"エントリ{0}を無視します"_s
		}),
		$$new($ObjectArray, {
			"out.inflated"_s,
			u" {0}が展開されました"_s
		}),
		$$new($ObjectArray, {
			"out.size"_s,
			u"(入={0})(出={1})"_s
		}),
		$$new($ObjectArray, {
			"out.stored"_s,
			u"(0%格納されました)"_s
		}),
		$$new($ObjectArray, {
			"out.update.manifest"_s,
			u"マニフェストが更新されました"_s
		}),
		$$new($ObjectArray, {
			"out.update.module-info"_s,
			u"module-infoが更新されました: {0}"_s
		}),
		$$new($ObjectArray, {
			"usage.compat"_s,
			u"互換性インタフェース: \n使用方法: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files] ...\nオプション:\n    -c アーカイブを新規作成する\n    -t アーカイブの内容を一覧表示する\n    -x 指定の(またはすべての)ファイルをアーカイブから抽出する\n    -u 既存アーカイブを更新する\n    -v 標準出力に詳細な出力を生成する\n    -f アーカイブ・ファイル名を指定する\n    -m 指定のマニフェスト・ファイルからマニフェスト情報を取り込む\n    -e 実行可能jarファイルにバンドルされたスタンドアロン・アプリケーションの\n        エントリ・ポイントを指定する\n    -0 格納のみ。ZIP圧縮を使用しない\n    -P ファイル名の先頭の\'/\' (絶対パス)および\"..\" (親ディレクトリ)コンポーネントを保持する\n    -M エントリのマニフェスト・ファイルを作成しない\n    -i 指定のjarファイルの索引情報を生成する\n    -C 指定のディレクトリに変更し、次のファイルを取り込む\nファイルがディレクトリの場合は再帰的に処理されます。\nマニフェスト・ファイル名、アーカイブ・ファイル名およびエントリ・ポイント名は、\nフラグ\'m\'、\'f\'、\'e\'の指定と同じ順番で指定する必要があります。\n\n例1: 2つのクラス・ファイルをアーカイブclasses.jarに保存する:\n     jar cvf classes.jar Foo.class Bar.class\n例2: 既存のマニフェスト・ファイル\'mymanifest\'を使用し、foo/ディレクトリの\n     全ファイルを\'classes.jar\'にアーカイブする:\n     jar cvfm classes.jar mymanifest -C foo/ . \n"_s
		}),
		$$new($ObjectArray, {
			"warn.flag.is.deprecated"_s,
			u"警告: {0}オプションは非推奨であり、今後のJDKリリースで削除される予定です。\n"_s
		}),
		$$new($ObjectArray, {
			"warn.release.unexpected.versioned.entry"_s,
			u"予期しないバージョニング済エントリ{0}"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.concealed.public.class"_s,
			u"警告 : エントリ{0}は、隠しパッケージ内のpublicクラスです。\nクラスパスにこのjarを配置すると、互換性のない\npublicインタフェースが生成されます"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.identical.entry"_s,
			u"警告 : エントリ{0}には、jarにすでに存在する\nエントリと同じクラスが含まれます"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.resources.with.same.name"_s,
			u"警告 : エントリ{0}、同じ名前を持つ複数のリソース"_s
		})
	});
}

jar_ja::jar_ja() {
}

$Class* jar_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(jar_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.tools.jar.resources.jar_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(jar_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(jar_ja);
	});
	return class$;
}

$Class* jar_ja::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun