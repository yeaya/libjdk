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

void javac_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* javac_ja::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"javac.fullVersion"_s,
			u"{0}フル・バージョン\"{1}\""_s
		}),
		$$new($ObjectArray, {
			"javac.msg.bug"_s,
			u"コンパイラで例外が発生しました({0})。Bug Database (http://bugs.java.com)で重複がないかをご確認のうえ、Java bugレポート・ページ(http://bugreport.java.com)でJavaコンパイラに対するbugの登録をお願いいたします。レポートには、そのプログラム、下記の診断内容、およびJavaコンパイラに渡したパラメータを含めてください。ご協力ありがとうございます。"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.io"_s,
			u"\n\n入出力エラーが発生しました。\n詳細は次のスタックトレースで調査してください。\n"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.parameters.output"_s,
			u"javacパラメータを次の場所に出力しています: {0}"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.parameters.output.error"_s,
			u"javacパラメータを{0}に出力しようとしたときにエラーが発生しました。パラメータが続きます:"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.plugin.uncaught.exception"_s,
			u"\n\nプラグインで捕捉されない例外がスローされました。\n詳細は次のスタック・トレースで調査してください。\n"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.proc.annotation.uncaught.exception"_s,
			u"\n\n注釈処理で捕捉されない例外がスローされました。\n詳細は次のスタックトレースで調査してください。\n"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.resource"_s,
			u"\n\nシステム・リソースが不足しています。\n詳細は次のスタックトレースで調査してください。\n"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.usage"_s,
			u"使用方法: {0} <options> <source files>\n使用可能なオプションのリストについては、--helpを使用します"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.usage.header"_s,
			u"使用方法: {0} <options> <source files>\n使用可能なオプションには次のものがあります。"_s
		}),
		$$new($ObjectArray, {
			"javac.msg.usage.nonstandard.footer"_s,
			u"この追加オプションは予告なしに変更されることがあります。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.A"_s,
			u"注釈プロセッサに渡されるオプション"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.AT"_s,
			u"ファイルからの読取りオプションおよびファイル名"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.J"_s,
			u"<flag>を実行システムに直接渡す"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Werror"_s,
			u"警告が発生した場合にコンパイルを終了する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.X"_s,
			u"追加オプションのヘルプを出力します"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xbootclasspath.a"_s,
			u"ブートストラップ・クラス・パスに追加する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xbootclasspath.p"_s,
			u"ブートストラップ・クラス・パスの先頭に付加する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xdoclint"_s,
			u"javadocコメントの問題に関する推奨チェックを有効にします"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xdoclint.custom"_s,
			u"javadocコメントの問題に関する特定のチェックを有効または無効にします。\n        ここで、<group>はaccessibility、html、missing、referenceまたはsyntaxのいずれかで、\n        <access>はpublic、protected、packageまたはprivateのいずれかです。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xdoclint.package.args"_s,
			"[-]<packages>(,[-]<package>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xdoclint.package.desc"_s,
			u"特定のパッケージのチェックを有効または無効にします。各<package>は、\nパッケージの修飾された名前、またはパッケージ名の接頭辞の後に\'\'.*\'\'を指定\n(指定したパッケージのすべてのサブパッケージに拡張)したものです。各<package>の前に\n\'-\'を指定すると、指定した1つ以上のパッケージに関するチェックを無効にできます。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xdoclint.subopts"_s,
			"(all|none|[-]<group>)[/<access>]"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint"_s,
			u"推奨の警告を有効にする"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.all"_s,
			u"すべての警告を有効にします"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.custom"_s,
			u"有効または無効にする警告(カンマ区切り)。\n        指定した警告を無効にするには、キーの前に\'-\'を指定します。\n        サポートされているキーは次のとおりです:"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.auxiliaryclass"_s,
			u"ソース・ファイルで非表示になっているが他のファイルから使用されている補助クラスについて警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.cast"_s,
			u"不要なキャストの使用について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.classfile"_s,
			u"クラス・ファイルの内容に関連した問題について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.dep-ann"_s,
			u"JavaDocで非推奨としてマークされているが@非推奨の注釈を使用していない項目について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.deprecation"_s,
			u"非推奨項目の使用について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.divzero"_s,
			u"定整数0で除算されることについて警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.empty"_s,
			u"if以降が空の文であることについて警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.exports"_s,
			u"モジュールのエクスポートに関する問題について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.fallthrough"_s,
			u"switch文の1つのcaseから次へのフォール・スルーについて警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.finally"_s,
			u"正常に完了しないfinally節について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.missing-explicit-ctor"_s,
			u"エクスポートされたパッケージのpublicおよびprotectedのクラスに明示的なコンストラクタがないことを警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.module"_s,
			u"モジュール・システム関連の問題について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.opens"_s,
			u"モジュールのオープンに関する問題について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.options"_s,
			u"コマンド行オプションの使用に関する問題について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.overloads"_s,
			u"メソッドのオーバーロードに関する問題について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.overrides"_s,
			u"メソッドのオーバーライドに関する問題について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.path"_s,
			u"コマンド行の無効なパス要素について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.preview"_s,
			u"プレビュー言語機能の使用について警告します"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.processing"_s,
			u"注釈処理に関する問題について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.rawtypes"_s,
			u"raw型の使用について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.removal"_s,
			u"削除用にマークされたAPIの使用について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.requires-automatic"_s,
			u"requires句内の自動モジュールの使用について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.requires-transitive-automatic"_s,
			u"requires transitive内の自動モジュールについて警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.serial"_s,
			u"シリアル・バージョンIDを指定しない直列化可能なクラスについて警告します。 \n                             また、直列化可能要素からpublic以外のメンバーへのアクセスについて警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.static"_s,
			u"インスタンスを使用したstaticメンバーへのアクセスについて警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.synchronization"_s,
			u"値ベース・クラスのインスタンスでの同期の試行について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.text-blocks"_s,
			u"テキスト・ブロック・インデント内の一貫性のない空白文字について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.try"_s,
			u"tryブロック(try-with-resourcesなど)の使用に関する問題について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.unchecked"_s,
			u"無検査操作について警告します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.desc.varargs"_s,
			u"安全ではない可能性がある可変引数メソッドについて警告します"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xlint.none"_s,
			u"すべての警告を無効にします"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.Xstdout"_s,
			u"標準出力をリダイレクトする"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.addExports"_s,
			u"<other-module>がALL-UNNAMEDである場合、その定義モジュールから、追加モジュールまたは\n        すべての名前のないモジュールにエクスポート済とみなされるようにパッケージを指定します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.addReads"_s,
			u"指定のモジュールで必須とみなされるように追加モジュールを指定します。\n        名前のないモジュールを必要とする場合、<other-module>はALL-UNNAMEDにします。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.addmods"_s,
			u"初期モジュールに加えて解決するルート・モジュール、または<module>が\n        ALL-MODULE-PATHである場合はモジュール・パスのすべてのモジュール。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.Xlint"_s,
			"<key>(,<key>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.addExports"_s,
			"<module>/<package>=<other-module>(,<other-module>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.addReads"_s,
			"<module>=<other-module>(,<other-module>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.addmods"_s,
			"<module>(,<module>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.class"_s,
			"<class>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.class.list"_s,
			"<class1>[,<class2>,<class3>...]"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.default.module.for.created.files"_s,
			"<module-name>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.directory"_s,
			"<directory>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.dirs"_s,
			"<dirs>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.encoding"_s,
			"<encoding>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.file"_s,
			"<filename>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.flag"_s,
			"<flag>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.jdk"_s,
			"<jdk>|none"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.key.equals.value"_s,
			"key[=value]"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.limitmods"_s,
			"<module>(,<module>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.m"_s,
			"<module>(,<module>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.module.version"_s,
			u"<バージョン>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.mspath"_s,
			"<module-source-path>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.multi-release"_s,
			"<release>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.number"_s,
			"<number>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.patch"_s,
			"<module>=<file>(:<file>)*"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.path"_s,
			"<path>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.pathname"_s,
			"<pathname>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.plugin"_s,
			"\"name args\""_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.profile"_s,
			"<profile>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.arg.release"_s,
			"<release>"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.bootclasspath"_s,
			u"ブートストラップ・クラス・パスの位置をオーバーライドする"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.classpath"_s,
			u"ユーザー・クラス・ファイルおよび注釈プロセッサを検索する位置を指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.d"_s,
			u"生成されたクラス・ファイルを格納する位置を指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.default.module.for.created.files"_s,
			u"何も指定されていないか、推定型の場合、注釈プロセッサによって作成されるファイルのターゲット・モジュールをフォールバックします。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.deprecation"_s,
			u"推奨されないAPIが使用されているソースの位置を出力する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.diags"_s,
			u"診断モードの選択"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.doclint.format"_s,
			u"ドキュメント・コメントの形式を指定します"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.encoding"_s,
			u"ソース・ファイルが使用する文字エンコーディングを指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.endorseddirs"_s,
			u"推奨規格パスの位置をオーバーライドする"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.extdirs"_s,
			u"インストール済み拡張機能の位置をオーバーライドする"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.g"_s,
			u"すべてのデバッグ情報を生成する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.g.lines.vars.source"_s,
			u"いくつかのデバッグ情報のみを生成する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.g.none"_s,
			u"デバッグ情報を生成しない"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.headerDest"_s,
			u"生成されたネイティブ・ヘッダー・ファイルを格納する場所を指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.help"_s,
			u"このヘルプ・メッセージを出力します"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.implicit"_s,
			u"暗黙的に参照されるファイルについてクラス・ファイルを生成するかどうかを指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.inherit_runtime_environment"_s,
			u"実行時環境からモジュール・システム構成オプションを継承します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.limitmods"_s,
			u"参照可能なモジュールの領域を制限します"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.m"_s,
			u"指定したモジュールのみコンパイルし、タイムスタンプを確認する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.maxerrs"_s,
			u"出力するエラーの最大数を設定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.maxwarns"_s,
			u"出力する警告の最大数を設定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.module.version"_s,
			u"コンパイルするモジュールのバージョンを指定します"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.modulepath"_s,
			u"アプリケーション・モジュールを検索する位置を指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.modulesourcepath"_s,
			u"複数モジュールの入力ソース・ファイルを検索する位置を指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.moreinfo"_s,
			u"型変数の拡張情報を出力する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.multi-release"_s,
			u"マルチリリースjarの使用するリリースを指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.nogj"_s,
			u"言語の汎用性を受け付けない"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.nowarn"_s,
			u"警告を発生させない"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.parameters"_s,
			u"メソッド・パラメータにリフレクション用のメタデータを生成します"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.patch"_s,
			u"JARファイルまたはディレクトリのクラスおよびリソースでモジュールを\n        オーバーライドまたは拡張します"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.pkginfo"_s,
			u"package-infoファイルの処理を指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.plugin"_s,
			u"実行されるプラグインの名前とオプション引数"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.prefer"_s,
			u"暗黙的にコンパイルされるクラスについて、ソース・ファイルとクラス・ファイルの両方が見つかった際どちらを読み込むか指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.preview"_s,
			u"プレビュー言語機能を有効にします。-sourceまたは--releaseとともに使用されます。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.print"_s,
			u"指定した型のテキスト表示を出力する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.printProcessorInfo"_s,
			u"プロセッサが処理を依頼される注釈についての情報を印刷する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.printRounds"_s,
			u"注釈処理の往復についての情報を印刷する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.printsearch"_s,
			u"クラス・ファイルの検索位置情報を出力する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.proc.none.only"_s,
			u"注釈処理やコンパイルを実行するかどうかを制御します。"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.processor"_s,
			u"実行する注釈プロセッサの名前。デフォルトの検出処理をバイパス"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.processormodulepath"_s,
			u"注釈プロセッサを検索するモジュール・パスを指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.processorpath"_s,
			u"注釈プロセッサを検索する位置を指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.profile"_s,
			u"使用されているAPIが指定したプロファイルで使用可能かどうかを確認します"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.prompt"_s,
			u"各エラーで停止する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.release"_s,
			u"指定されたJava SEリリースに対してコンパイルします。サポートされているリリース: {0}"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.s"_s,
			u"クラス・ファイルのかわりにjavaソースを発行する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.source"_s,
			u"指定されたJava SEリリースとソースの互換性を保持します。サポートされているリリース: {0}"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.sourceDest"_s,
			u"生成されたソース・ファイルを格納する場所を指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.sourcepath"_s,
			u"入力ソース・ファイルを検索する位置を指定する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.system"_s,
			u"システム・モジュールの位置をオーバーライドする"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.target"_s,
			u"指定されたJava SEリリースに適したクラス・ファイルを生成します。サポートされているリリース: {0}"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.upgrademodulepath"_s,
			u"アップグレード可能なモジュールの位置をオーバーライドする"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.userpathsfirst"_s,
			u"ブート・クラスパスの後ではなく、ブート・クラスパスの前にクラスのクラスパスおよびソース・パスを検索する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.verbose"_s,
			u"コンパイラの動作についてメッセージを出力する"_s
		}),
		$$new($ObjectArray, {
			"javac.opt.version"_s,
			u"バージョン情報"_s
		}),
		$$new($ObjectArray, {
			"javac.version"_s,
			"{0} {1}"_s
		})
	});
}

javac_ja::javac_ja() {
}

$Class* javac_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(javac_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(javac_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.resources.javac_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(javac_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(javac_ja);
	});
	return class$;
}

$Class* javac_ja::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com