#include <com/sun/tools/javac/resources/javac_ja.h>

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

$MethodInfo _javac_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(javac_ja, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(javac_ja, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _javac_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.javac_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_javac_ja_MethodInfo_
};

$Object* allocate$javac_ja($Class* clazz) {
	return $of($alloc(javac_ja));
}

void javac_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* javac_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("javac.fullVersion"_s),
			$of(u"{0}フル・バージョン\"{1}\""_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.bug"_s),
			$of(u"コンパイラで例外が発生しました({0})。Bug Database (http://bugs.java.com)で重複がないかをご確認のうえ、Java bugレポート・ページ(http://bugreport.java.com)でJavaコンパイラに対するbugの登録をお願いいたします。レポートには、そのプログラム、下記の診断内容、およびJavaコンパイラに渡したパラメータを含めてください。ご協力ありがとうございます。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.io"_s),
			$of(u"\n\n入出力エラーが発生しました。\n詳細は次のスタックトレースで調査してください。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.parameters.output"_s),
			$of(u"javacパラメータを次の場所に出力しています: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.parameters.output.error"_s),
			$of(u"javacパラメータを{0}に出力しようとしたときにエラーが発生しました。パラメータが続きます:"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.plugin.uncaught.exception"_s),
			$of(u"\n\nプラグインで捕捉されない例外がスローされました。\n詳細は次のスタック・トレースで調査してください。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.proc.annotation.uncaught.exception"_s),
			$of(u"\n\n注釈処理で捕捉されない例外がスローされました。\n詳細は次のスタックトレースで調査してください。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.resource"_s),
			$of(u"\n\nシステム・リソースが不足しています。\n詳細は次のスタックトレースで調査してください。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage"_s),
			$of(u"使用方法: {0} <options> <source files>\n使用可能なオプションのリストについては、--helpを使用します"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage.header"_s),
			$of(u"使用方法: {0} <options> <source files>\n使用可能なオプションには次のものがあります。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.msg.usage.nonstandard.footer"_s),
			$of(u"この追加オプションは予告なしに変更されることがあります。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.A"_s),
			$of(u"注釈プロセッサに渡されるオプション"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.AT"_s),
			$of(u"ファイルからの読取りオプションおよびファイル名"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.J"_s),
			$of(u"<flag>を実行システムに直接渡す"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Werror"_s),
			$of(u"警告が発生した場合にコンパイルを終了する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.X"_s),
			$of(u"追加オプションのヘルプを出力します"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xbootclasspath.a"_s),
			$of(u"ブートストラップ・クラス・パスに追加する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xbootclasspath.p"_s),
			$of(u"ブートストラップ・クラス・パスの先頭に付加する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint"_s),
			$of(u"javadocコメントの問題に関する推奨チェックを有効にします"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.custom"_s),
			$of(u"javadocコメントの問題に関する特定のチェックを有効または無効にします。\n        ここで、<group>はaccessibility、html、missing、referenceまたはsyntaxのいずれかで、\n        <access>はpublic、protected、packageまたはprivateのいずれかです。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.package.args"_s),
			$of("[-]<packages>(,[-]<package>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.package.desc"_s),
			$of(u"特定のパッケージのチェックを有効または無効にします。各<package>は、\nパッケージの修飾された名前、またはパッケージ名の接頭辞の後に\'\'.*\'\'を指定\n(指定したパッケージのすべてのサブパッケージに拡張)したものです。各<package>の前に\n\'-\'を指定すると、指定した1つ以上のパッケージに関するチェックを無効にできます。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xdoclint.subopts"_s),
			$of("(all|none|[-]<group>)[/<access>]"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint"_s),
			$of(u"推奨の警告を有効にする"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.all"_s),
			$of(u"すべての警告を有効にします"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.custom"_s),
			$of(u"有効または無効にする警告(カンマ区切り)。\n        指定した警告を無効にするには、キーの前に\'-\'を指定します。\n        サポートされているキーは次のとおりです:"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.auxiliaryclass"_s),
			$of(u"ソース・ファイルで非表示になっているが他のファイルから使用されている補助クラスについて警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.cast"_s),
			$of(u"不要なキャストの使用について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.classfile"_s),
			$of(u"クラス・ファイルの内容に関連した問題について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.dep-ann"_s),
			$of(u"JavaDocで非推奨としてマークされているが@非推奨の注釈を使用していない項目について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.deprecation"_s),
			$of(u"非推奨項目の使用について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.divzero"_s),
			$of(u"定整数0で除算されることについて警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.empty"_s),
			$of(u"if以降が空の文であることについて警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.exports"_s),
			$of(u"モジュールのエクスポートに関する問題について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.fallthrough"_s),
			$of(u"switch文の1つのcaseから次へのフォール・スルーについて警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.finally"_s),
			$of(u"正常に完了しないfinally節について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.missing-explicit-ctor"_s),
			$of(u"エクスポートされたパッケージのpublicおよびprotectedのクラスに明示的なコンストラクタがないことを警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.module"_s),
			$of(u"モジュール・システム関連の問題について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.opens"_s),
			$of(u"モジュールのオープンに関する問題について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.options"_s),
			$of(u"コマンド行オプションの使用に関する問題について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.overloads"_s),
			$of(u"メソッドのオーバーロードに関する問題について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.overrides"_s),
			$of(u"メソッドのオーバーライドに関する問題について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.path"_s),
			$of(u"コマンド行の無効なパス要素について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.preview"_s),
			$of(u"プレビュー言語機能の使用について警告します"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.processing"_s),
			$of(u"注釈処理に関する問題について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.rawtypes"_s),
			$of(u"raw型の使用について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.removal"_s),
			$of(u"削除用にマークされたAPIの使用について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.requires-automatic"_s),
			$of(u"requires句内の自動モジュールの使用について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.requires-transitive-automatic"_s),
			$of(u"requires transitive内の自動モジュールについて警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.serial"_s),
			$of(u"シリアル・バージョンIDを指定しない直列化可能なクラスについて警告します。 \n                             また、直列化可能要素からpublic以外のメンバーへのアクセスについて警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.static"_s),
			$of(u"インスタンスを使用したstaticメンバーへのアクセスについて警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.synchronization"_s),
			$of(u"値ベース・クラスのインスタンスでの同期の試行について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.text-blocks"_s),
			$of(u"テキスト・ブロック・インデント内の一貫性のない空白文字について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.try"_s),
			$of(u"tryブロック(try-with-resourcesなど)の使用に関する問題について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.unchecked"_s),
			$of(u"無検査操作について警告します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.desc.varargs"_s),
			$of(u"安全ではない可能性がある可変引数メソッドについて警告します"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xlint.none"_s),
			$of(u"すべての警告を無効にします"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.Xstdout"_s),
			$of(u"標準出力をリダイレクトする"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addExports"_s),
			$of(u"<other-module>がALL-UNNAMEDである場合、その定義モジュールから、追加モジュールまたは\n        すべての名前のないモジュールにエクスポート済とみなされるようにパッケージを指定します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addReads"_s),
			$of(u"指定のモジュールで必須とみなされるように追加モジュールを指定します。\n        名前のないモジュールを必要とする場合、<other-module>はALL-UNNAMEDにします。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.addmods"_s),
			$of(u"初期モジュールに加えて解決するルート・モジュール、または<module>が\n        ALL-MODULE-PATHである場合はモジュール・パスのすべてのモジュール。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.Xlint"_s),
			$of("<key>(,<key>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.addExports"_s),
			$of("<module>/<package>=<other-module>(,<other-module>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.addReads"_s),
			$of("<module>=<other-module>(,<other-module>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.addmods"_s),
			$of("<module>(,<module>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.class"_s),
			$of("<class>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.class.list"_s),
			$of("<class1>[,<class2>,<class3>...]"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.default.module.for.created.files"_s),
			$of("<module-name>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.directory"_s),
			$of("<directory>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.dirs"_s),
			$of("<dirs>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.encoding"_s),
			$of("<encoding>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.file"_s),
			$of("<filename>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.flag"_s),
			$of("<flag>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.jdk"_s),
			$of("<jdk>|none"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.key.equals.value"_s),
			$of("key[=value]"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.limitmods"_s),
			$of("<module>(,<module>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.m"_s),
			$of("<module>(,<module>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.module.version"_s),
			$of(u"<バージョン>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.mspath"_s),
			$of("<module-source-path>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.multi-release"_s),
			$of("<release>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.number"_s),
			$of("<number>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.patch"_s),
			$of("<module>=<file>(:<file>)*"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.path"_s),
			$of("<path>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.pathname"_s),
			$of("<pathname>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.plugin"_s),
			$of("\"name args\""_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.profile"_s),
			$of("<profile>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.arg.release"_s),
			$of("<release>"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.bootclasspath"_s),
			$of(u"ブートストラップ・クラス・パスの位置をオーバーライドする"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.classpath"_s),
			$of(u"ユーザー・クラス・ファイルおよび注釈プロセッサを検索する位置を指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.d"_s),
			$of(u"生成されたクラス・ファイルを格納する位置を指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.default.module.for.created.files"_s),
			$of(u"何も指定されていないか、推定型の場合、注釈プロセッサによって作成されるファイルのターゲット・モジュールをフォールバックします。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.deprecation"_s),
			$of(u"推奨されないAPIが使用されているソースの位置を出力する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.diags"_s),
			$of(u"診断モードの選択"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.doclint.format"_s),
			$of(u"ドキュメント・コメントの形式を指定します"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.encoding"_s),
			$of(u"ソース・ファイルが使用する文字エンコーディングを指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.endorseddirs"_s),
			$of(u"推奨規格パスの位置をオーバーライドする"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.extdirs"_s),
			$of(u"インストール済み拡張機能の位置をオーバーライドする"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g"_s),
			$of(u"すべてのデバッグ情報を生成する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g.lines.vars.source"_s),
			$of(u"いくつかのデバッグ情報のみを生成する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.g.none"_s),
			$of(u"デバッグ情報を生成しない"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.headerDest"_s),
			$of(u"生成されたネイティブ・ヘッダー・ファイルを格納する場所を指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.help"_s),
			$of(u"このヘルプ・メッセージを出力します"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.implicit"_s),
			$of(u"暗黙的に参照されるファイルについてクラス・ファイルを生成するかどうかを指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.inherit_runtime_environment"_s),
			$of(u"実行時環境からモジュール・システム構成オプションを継承します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.limitmods"_s),
			$of(u"参照可能なモジュールの領域を制限します"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.m"_s),
			$of(u"指定したモジュールのみコンパイルし、タイムスタンプを確認する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.maxerrs"_s),
			$of(u"出力するエラーの最大数を設定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.maxwarns"_s),
			$of(u"出力する警告の最大数を設定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.module.version"_s),
			$of(u"コンパイルするモジュールのバージョンを指定します"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.modulepath"_s),
			$of(u"アプリケーション・モジュールを検索する位置を指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.modulesourcepath"_s),
			$of(u"複数モジュールの入力ソース・ファイルを検索する位置を指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.moreinfo"_s),
			$of(u"型変数の拡張情報を出力する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.multi-release"_s),
			$of(u"マルチリリースjarの使用するリリースを指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.nogj"_s),
			$of(u"言語の汎用性を受け付けない"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.nowarn"_s),
			$of(u"警告を発生させない"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.parameters"_s),
			$of(u"メソッド・パラメータにリフレクション用のメタデータを生成します"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.patch"_s),
			$of(u"JARファイルまたはディレクトリのクラスおよびリソースでモジュールを\n        オーバーライドまたは拡張します"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.pkginfo"_s),
			$of(u"package-infoファイルの処理を指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.plugin"_s),
			$of(u"実行されるプラグインの名前とオプション引数"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.prefer"_s),
			$of(u"暗黙的にコンパイルされるクラスについて、ソース・ファイルとクラス・ファイルの両方が見つかった際どちらを読み込むか指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.preview"_s),
			$of(u"プレビュー言語機能を有効にします。-sourceまたは--releaseとともに使用されます。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.print"_s),
			$of(u"指定した型のテキスト表示を出力する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printProcessorInfo"_s),
			$of(u"プロセッサが処理を依頼される注釈についての情報を印刷する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printRounds"_s),
			$of(u"注釈処理の往復についての情報を印刷する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.printsearch"_s),
			$of(u"クラス・ファイルの検索位置情報を出力する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.proc.none.only"_s),
			$of(u"注釈処理やコンパイルを実行するかどうかを制御します。"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processor"_s),
			$of(u"実行する注釈プロセッサの名前。デフォルトの検出処理をバイパス"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processormodulepath"_s),
			$of(u"注釈プロセッサを検索するモジュール・パスを指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.processorpath"_s),
			$of(u"注釈プロセッサを検索する位置を指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.profile"_s),
			$of(u"使用されているAPIが指定したプロファイルで使用可能かどうかを確認します"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.prompt"_s),
			$of(u"各エラーで停止する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.release"_s),
			$of(u"指定されたJava SEリリースに対してコンパイルします。サポートされているリリース: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.s"_s),
			$of(u"クラス・ファイルのかわりにjavaソースを発行する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.source"_s),
			$of(u"指定されたJava SEリリースとソースの互換性を保持します。サポートされているリリース: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.sourceDest"_s),
			$of(u"生成されたソース・ファイルを格納する場所を指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.sourcepath"_s),
			$of(u"入力ソース・ファイルを検索する位置を指定する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.system"_s),
			$of(u"システム・モジュールの位置をオーバーライドする"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.target"_s),
			$of(u"指定されたJava SEリリースに適したクラス・ファイルを生成します。サポートされているリリース: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.upgrademodulepath"_s),
			$of(u"アップグレード可能なモジュールの位置をオーバーライドする"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.userpathsfirst"_s),
			$of(u"ブート・クラスパスの後ではなく、ブート・クラスパスの前にクラスのクラスパスおよびソース・パスを検索する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.verbose"_s),
			$of(u"コンパイラの動作についてメッセージを出力する"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.opt.version"_s),
			$of(u"バージョン情報"_s)
		}),
		$$new($ObjectArray, {
			$of("javac.version"_s),
			$of("{0} {1}"_s)
		})
	});
}

javac_ja::javac_ja() {
}

$Class* javac_ja::load$($String* name, bool initialize) {
	$loadClass(javac_ja, name, initialize, &_javac_ja_ClassInfo_, allocate$javac_ja);
	return class$;
}

$Class* javac_ja::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com