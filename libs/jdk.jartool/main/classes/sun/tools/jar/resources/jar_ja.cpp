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

$MethodInfo _jar_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(jar_ja, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar_ja, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _jar_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_ja_MethodInfo_
};

$Object* allocate$jar_ja($Class* clazz) {
	return $of($alloc(jar_ja));
}

void jar_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of(u"フラグ\'c\'ではマニフェストまたは入力ファイルの指定が必要です。"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"\'-d, --describe-module\'オプションでは入力ファイルの指定は不要です"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"\'e\'フラグと\'Main-Class\'属性を持つマニフェストは同時に\n指定できません。"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of(u"ファイル引数の解析中にエラーが発生しました"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"オプション-{ctxuid}のうちの1つを指定する必要があります。"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"不正な理由: {0}、非推奨、削除予定の非推奨または実験的のいずれかである必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"フラグ\'u\'ではマニフェストか\'e\'フラグ、または入力ファイルの指定が必要です。"_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of(u"{0}を開くことができません"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"ディレクトリ{0}を作成できませんでした"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"一時ファイルを作成できませんでした"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"モジュール{0}依存性のハッシュでモジュール{1}がモジュール・パスに見つかりません"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"不正なオプション: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of(u"{0}の処理中に不正な長さがありました"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"モジュール・ディスクリプタ属性{0}が無効です"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"オプション{0}には引数が必要です。"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of(u"サービス・プロバイダが見つかりません: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of(u"モジュール・ディスクリプタが見つかりません"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of(u"--module-versionまたは--hash-modulesのいずれかでmodule-info.classがありません"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of(u"複数の\'cuxtid\'オプションを指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"リリースの操作ディスクリプタはありません: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of(u"ルート・モジュールのディスクリプタがありません。--releaseを指定してください"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0}というファイルまたはディレクトリはありません"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"リリース{1}で予期しないバージョニング済エントリ{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"リリース{0}は有効ではありません"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"リリース{0}は有効ではありません。9以上である必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"次のモジュール・ディスクリプタを導出できません: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"予期しないモジュール・ディスクリプタ{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"認識されないオプション: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of(u"エントリ名が不正です: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"エントリ: {0}には、以前のバージョンとは異なるAPIを持つクラスが含まれます"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"エントリ名: {0}が短すぎます。ディレクトリではありません"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"エントリ: {0}には、以前のバージョンと互換性のないクラス・バージョンが含まれます"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"バージョニングされたディレクトリのmodule-info.classに異なる\"exports\"が含まれています"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: バージョニングされたディレクトリのmodule-info.classに異なる\"main-class\"が含まれています"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"バージョニングされたディレクトリのmodule-info.classに正しくない名前が含まれています"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"バージョニング・ディレクトリのmodule-info.classに異なる\"opens\"が含まれています"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"バージョニングされたディレクトリのmodule-info.classに異なる\"provides\"が含まれています"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"バージョニングされたディレクトリのmodule-info.classに追加の\"requires\"が含まれています"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"バージョニングされたディレクトリのmodule-info.classに欠落している\"requires\"が含まれています"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"バージョニング・ディレクトリのmodule-info.classに追加の\"requires transitive\"が含まれています"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: バージョニングされたディレクトリのmodule-info.classに異なる\"version\"が含まれています"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"エントリ: {0}は、分離型のネストされたクラスです"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of(u"{0}を検証できません: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"無効なマルチリリースjarファイル{0}が削除されました"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"エントリ: {0}には、内部名{1}を持つクラスが含まれますが、名前が一致しません"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"エントリ: {0}には、ベース・エントリに存在しない新しいpublicクラスが含まれます"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"エントリ名: {0}にバージョン番号がありません"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of(u"既存jarファイルの書込み中にエラーが発生しました"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" どのモードでも有効な操作修飾子:\n\n  -C DIR                     指定のディレクトリに変更し、次のファイルを\n                             取り込みます"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f、--file=FILE            アーカイブ・ファイル名。省略した場合、stdinまたは\n                             stdoutのいずれかが操作に基づいて使用されます\n      --release VERSION      次のすべてのファイルをjarのバージョニングされたディレクトリ\n                             (つまり、META-INF/versions/VERSION/)に配置します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v、--verbose              標準出力に詳細な出力を生成します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" 作成モードでのみ有効な操作修飾子:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            新しいjarアーカイブの作成後、含まれる情報を\n                             正規化します。このオプションは非推奨であり、\n                             今後のJDKリリースで削除される予定です"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" 作成または更新モードでのみ有効な操作修飾子:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  モジュールのデフォルトのルート設定から除外します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN モジュラjarの作成時または非モジュラjarの更新時に\n                             指定のパターンに一致し、直接または間接的に\n                             依存しているモジュールのハッシュを\n                             計算および記録します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" 作成、更新および索引生成モードでのみ有効な操作修飾子:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          格納のみ。ZIP圧縮を使用しません"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e、--main-class=CLASSNAME モジュラまたは実行可能なjarアーカイブに\n                             バンドルされたスタンドアロン・アプリケーションの\n                             アプリケーション・エントリ・ポイント"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m、--manifest=FILE        指定のマニフェスト・ファイルからマニフェスト情報を\n                             取り込みます"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p、--module-path          ハッシュを生成するモジュール依存性\n                             の場所"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    モジュラjarの作成時または非モジュラjarの更新時の\n                             モジュール・バージョン"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M、--no-manifest          エントリのマニフェスト・ファイルを作成しません"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     モジュールが解決されている場合は、警告を発行する\n                             ツールのヒント。非推奨、削除予定の非推奨または\n                             実験的のいずれか"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" メイン操作モード:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of(u"  -c、--create               アーカイブを作成します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of(u"  -d, --describe-module      モジュール・ディスクリプタまたは自動モジュール名を出力します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of(u"  -x、--extract              指定の(またはすべての)ファイルをアーカイブから抽出します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i,、--generate-index=FILE  指定のjarアーカイブの索引情報を\n                             生成します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t、--list                 アーカイブの内容を一覧表示します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of(u"  -u、--update               既存のjarアーカイブを更新します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(u" その他のオプション:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -?、-h、--help[:compat]        これ(オプションで互換性)をhelpに指定します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           追加オプションのヘルプを提供します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of(u"      --version              プログラム・バージョンを出力します"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" モジュール・ディスクリプタ\'module-info.class\'が指定のディレクトリのルートまたは\n jarアーカイブ自体のルートにある場合、アーカイブはモジュラjarです。\n 次の操作は、モジュラjarの作成時または既存の非モジュラjarの更新時に\n のみ有効です:  \'--module-version\'、\n \'--hash-modules\'および\'--module-path\'。\n\n ロング・オプションへの必須またはオプションの引数は、対応するショート・オプション\n に対しても必須またはオプションになります。"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"使用方法: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njarはクラスおよびリソースのアーカイブを作成し、アーカイブから個々のクラスまたは\nリソースを操作または復元できます。\n\n 例:\n # 2つのクラス・ファイルを含むclasses.jarというアーカイブを作成する:\n jar --create --file classes.jar Foo.class Bar.class\n # foo/のすべてのファイルを含む、既存のマニフェストを使用したアーカイブを作成する:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # モジュラjarアーカイブを作成する。モジュール・ディスクリプタはclasses/module-info.classに\n # ある:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # 既存の非モジュラjarをモジュラjarに更新する:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # 複数リリースjarを作成し、一部のファイルをMETA-INF/versions/9ディレクトリに配置する:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\njarコマンドを短縮または簡略化するには、個別のテキスト・ファイルで引数を指定し、\n記号(@)を接頭辞として使用してjarコマンドに渡します。\n\n 例:\n # 追加オプションおよびクラス・ファイルのリストをファイルclasses.listから読込みます\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of(u"使用方法: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"詳細は、`jar --help\'を実行してください。"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of(u"マニフェストが追加されました"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of(u"module-infoが追加されました: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of(u"{0}を追加中です"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"モジュール・ディスクリプタが見つかりません。自動モジュールが導出されました。"_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of(u"  {0}が作成されました"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of(u"({0}%収縮されました)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of(u"{0}が抽出されました"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of(u"エントリ{0}を無視します"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(u" {0}が展開されました"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of(u"(入={0})(出={1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of(u"(0%格納されました)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of(u"マニフェストが更新されました"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of(u"module-infoが更新されました: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"互換性インタフェース: \n使用方法: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files] ...\nオプション:\n    -c アーカイブを新規作成する\n    -t アーカイブの内容を一覧表示する\n    -x 指定の(またはすべての)ファイルをアーカイブから抽出する\n    -u 既存アーカイブを更新する\n    -v 標準出力に詳細な出力を生成する\n    -f アーカイブ・ファイル名を指定する\n    -m 指定のマニフェスト・ファイルからマニフェスト情報を取り込む\n    -e 実行可能jarファイルにバンドルされたスタンドアロン・アプリケーションの\n        エントリ・ポイントを指定する\n    -0 格納のみ。ZIP圧縮を使用しない\n    -P ファイル名の先頭の\'/\' (絶対パス)および\"..\" (親ディレクトリ)コンポーネントを保持する\n    -M エントリのマニフェスト・ファイルを作成しない\n    -i 指定のjarファイルの索引情報を生成する\n    -C 指定のディレクトリに変更し、次のファイルを取り込む\nファイルがディレクトリの場合は再帰的に処理されます。\nマニフェスト・ファイル名、アーカイブ・ファイル名およびエントリ・ポイント名は、\nフラグ\'m\'、\'f\'、\'e\'の指定と同じ順番で指定する必要があります。\n\n例1: 2つのクラス・ファイルをアーカイブclasses.jarに保存する:\n     jar cvf classes.jar Foo.class Bar.class\n例2: 既存のマニフェスト・ファイル\'mymanifest\'を使用し、foo/ディレクトリの\n     全ファイルを\'classes.jar\'にアーカイブする:\n     jar cvfm classes.jar mymanifest -C foo/ . \n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.flag.is.deprecated"_s),
			$of(u"警告: {0}オプションは非推奨であり、今後のJDKリリースで削除される予定です。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"予期しないバージョニング済エントリ{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"警告 : エントリ{0}は、隠しパッケージ内のpublicクラスです。\nクラスパスにこのjarを配置すると、互換性のない\npublicインタフェースが生成されます"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"警告 : エントリ{0}には、jarにすでに存在する\nエントリと同じクラスが含まれます"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of(u"警告 : エントリ{0}、同じ名前を持つ複数のリソース"_s)
		})
	});
}

jar_ja::jar_ja() {
}

$Class* jar_ja::load$($String* name, bool initialize) {
	$loadClass(jar_ja, name, initialize, &_jar_ja_ClassInfo_, allocate$jar_ja);
	return class$;
}

$Class* jar_ja::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun