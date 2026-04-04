#include <com/sun/tools/javac/resources/compiler_ja.h>
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

void compiler_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* compiler_ja::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"compiler.err.abstract.cant.be.accessed.directly"_s,
			u"抽象{0}である{1}({2}内)に直接アクセスすることはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.abstract.cant.be.instantiated"_s,
			u"{0}はabstractです。インスタンスを生成することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.abstract.meth.cant.have.body"_s,
			u"abstractメソッドが本体を持つことはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.add.exports.with.release"_s,
			u"システム・モジュール{0}からのパッケージのエクスポートは--releaseを指定して実行できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.add.reads.with.release"_s,
			u"システム・モジュール{0}の読取りエッジの追加は--releaseを指定して実行できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.addmods.all.module.path.invalid"_s,
			u"--add-modules ALL-MODULE-PATHは、名前のないモジュールのコンパイル時または自動モジュールのコンテキストでのコンパイル時のみ使用できます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.already.annotated"_s,
			u"{0} {1}は注釈が付いています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.already.defined"_s,
			u"{0} {1}はすでに{2} {3}で定義されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.already.defined.in.clinit"_s,
			u"{0} {1}はすでに{3} {4}の{2}で定義されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.already.defined.single.import"_s,
			u"同じ単純名の型が{0}の単一型インポートによってすでに定義されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.already.defined.static.single.import"_s,
			u"同じ単純名の型が{0}のstatic単一型インポートによってすでに定義されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.already.defined.this.unit"_s,
			u"{0}はコンパイル単位で定義されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.decl.not.allowed.here"_s,
			u"ここでは注釈型の宣言は許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.missing.default.value"_s,
			u"注釈@{0}には要素\'\'{1}\'\'のデフォルト値がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.missing.default.value.1"_s,
			u"注釈@{0}には要素{1}のデフォルト値がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.not.valid.for.type"_s,
			u"注釈は型{0}の要素に対して有効ではありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.type.not.applicable"_s,
			u"注釈型はこの種類の宣言に使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.type.not.applicable.to.type"_s,
			u"注釈@{0}はこの型のコンテキストに使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.value.must.be.annotation"_s,
			u"注釈の値は注釈である必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.value.must.be.class.literal"_s,
			u"注釈の値はクラス・リテラルである必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.value.must.be.name.value"_s,
			u"注釈の値は\'\'name=value\'\'という形式である必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.value.not.allowable.type"_s,
			u"使用できない型の注釈の値です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.anon.class.impl.intf.no.args"_s,
			u"名前のないクラスがインタフェースを実装しています。引数を持つことはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.anon.class.impl.intf.no.qual.for.new"_s,
			u"名前のないクラスがインタフェースを実装しています。newに修飾子を持つことはできません。"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.anon.class.impl.intf.no.typeargs"_s,
			u"名前のないクラスがインタフェースを実装しています。型引数を持つことはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.anonymous.diamond.method.does.not.override.superclass"_s,
			u"メソッドはスーパータイプのメソッドをオーバーライドまたは実装しません\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.array.and.receiver"_s,
			u"旧式の配列表記法は受取り側パラメータでは使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.array.and.varargs"_s,
			u"{2}で{0}と{1}の両方を宣言することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.array.dimension.missing"_s,
			u"配列の大きさが指定されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.array.req.but.found"_s,
			u"配列が要求されましたが、{0}が見つかりました"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.assert.as.identifier"_s,
			u"リリース1.4から\'\'assert\'\'はキーワードなので識別子として使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.attribute.value.must.be.constant"_s,
			u"要素値は定数式である必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.bad.functional.intf.anno"_s,
			u"予期しない@FunctionalInterface注釈"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.bad.functional.intf.anno.1"_s,
			u"予期しない@FunctionalInterface注釈\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.bad.initializer"_s,
			u"{0}の不正な初期化子"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.bad.name.for.option"_s,
			u"{0}オプションの値に含まれる名前が不正です: \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.bad.value.for.option"_s,
			u"{0}オプションの値が不正です: \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.break.outside.switch.expression"_s,
			u"switch式の外側でbreakを実行しようとしています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.break.outside.switch.loop"_s,
			u"breakがswitch文またはループの外にあります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.call.must.be.first.stmt.in.ctor"_s,
			u"{0}の呼出しはコンストラクタの先頭文である必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.call.to.super.not.allowed.in.enum.ctor"_s,
			u"列挙型コンストラクタでは、スーパークラスの呼出しはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cannot.create.array.with.diamond"_s,
			u"\'\'<>\'\'を持つ配列は作成できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cannot.create.array.with.type.arguments"_s,
			u"型引数を持つ配列を作成できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cannot.generate.class"_s,
			u"クラス{0}の生成中にエラーが発生しました\n({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.access"_s,
			u"{0}にアクセスできません\n{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.apply.diamond"_s,
			u"{0}の型引数を推定できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.apply.diamond.1"_s,
			u"{0}の型引数を推論できません\n理由: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.apply.symbol"_s,
			u"{4} {5}の{0} {1}は指定された型に適用できません。\n期待値: {2}\n検出値:    {3}\n理由: {6}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.apply.symbols"_s,
			u"{1}に適切な{0}が見つかりません({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.assign.val.to.final.var"_s,
			u"final変数{0}に値を代入することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.assign.val.to.this"_s,
			u"\'\'これ\'\'に割り当てることはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.deref"_s,
			u"{0}は間接参照できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.extend.intf.annotation"_s,
			u"@interfacesでは\'\'extends\'\'は許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.infer.local.var.type"_s,
			u"ローカル変数{0}の型を推論できません\n({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.inherit.diff.arg"_s,
			u"{0}を異なる引数<{1}>と<{2}>で継承することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.inherit.from.anon"_s,
			u"匿名クラスから継承できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.inherit.from.final"_s,
			u"final {0}からは継承できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.inherit.from.sealed"_s,
			u"クラスはシール・クラス{0}を拡張できません(\'\'permits\'\'句に指定されていないためです)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.read.file"_s,
			u"{0}を読み込めません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.ref.before.ctor.called"_s,
			u"スーパータイプのコンストラクタの呼出し前は{0}を参照できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.ref.non.effectively.final.var"_s,
			u"{1}から参照されるローカル変数は、finalまたは事実上のfinalである必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.resolve"_s,
			u"シンボルを見つけられません\nシンボル: {0} {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.resolve.args"_s,
			u"シンボルを見つけられません\nシンボル: {0} {1}({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.resolve.args.params"_s,
			u"シンボルを見つけられません\nシンボル: {0} <{2}>{1}({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.resolve.location"_s,
			u"シンボルを見つけられません\nシンボル:   {0} {1}\n場所: {4}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.resolve.location.args"_s,
			u"シンボルを見つけられません\nシンボル:   {0} {1}({3})\n場所: {4}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.resolve.location.args.params"_s,
			u"シンボルを見つけられません\nシンボル:   {0} <{2}>{1}({3})\n場所: {4}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.select.static.class.from.param.type"_s,
			u"パラメータにされた型からstaticクラスを選択することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.type.annotate.scoping"_s,
			u"スコープ・コンストラクトを型使用注釈で注釈付けすることはできません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.type.annotate.scoping.1"_s,
			u"スコープ・コンストラクトを型使用注釈で注釈付けすることはできません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.catch.without.try"_s,
			u"\'\'catch\'\'への\'\'try\'\'がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.clash.with.pkg.of.same.name"_s,
			u"{0} {1}は同名のパッケージと競合します"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.class.cant.write"_s,
			u"{0}の書込み中にエラーが発生しました: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.class.in.module.cant.extend.sealed.in.diff.module"_s,
			u"モジュール{1}のクラス{0}は別のモジュールのシール・クラスを拡張できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.class.in.unnamed.module.cant.extend.sealed.in.diff.package"_s,
			u"名前のないモジュールのクラス{0}は別のパッケージのシール・クラスを拡張できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.class.not.allowed"_s,
			u"クラス、インタフェースまたは列挙型の宣言をここで使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.class.public.should.be.in.file"_s,
			u"{0} {1}はpublicであり、ファイル{1}.javaで宣言する必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.concrete.inheritance.conflict"_s,
			u"{1}のメソッド{0}と{3}の{2}は同じシグニチャから継承されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.conflicting.exports"_s,
			u"エクスポートが重複または競合しています: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.conflicting.exports.to.module"_s,
			u"モジュールへのエクスポートが重複または競合しています: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.conflicting.opens"_s,
			u"オープンが重複または競合しています: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.conflicting.opens.to.module"_s,
			u"モジュールへのオープンが重複または競合しています: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.const.expr.req"_s,
			u"定数式が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cont.outside.loop"_s,
			u"continueがループの外にあります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.continue.outside.switch.expression"_s,
			u"switch式の外側でcontinueを実行しようとしています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cyclic.annotation.element"_s,
			u"要素{0}の型がループしています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cyclic.inheritance"_s,
			u"{0}を含む継承がループしています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cyclic.requires"_s,
			u"{0}を含む依存性がループしています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.bad.entity"_s,
			u"HTMLエンティティが不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.bad.inline.tag"_s,
			u"インライン・タグの使用が正しくありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.gt.expected"_s,
			u"\'\'>\'\'が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.identifier.expected"_s,
			u"識別子が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.malformed.html"_s,
			u"HTMLが不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.missing.semicolon"_s,
			u"セミコロンがありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.no.content"_s,
			u"コンテンツなし"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.no.tag.name"_s,
			u"\'@\'の後にタグ名がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.ref.bad.parens"_s,
			u"参照に\'\')\'\'がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.ref.syntax.error"_s,
			u"参照に構文エラーがあります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.ref.unexpected.input"_s,
			u"予期しないテキストです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.unexpected.content"_s,
			u"予期しないコンテンツです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.unterminated.inline.tag"_s,
			u"インライン・タグが終了していません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.unterminated.signature"_s,
			u"シグネチャが終了していません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.unterminated.string"_s,
			u"文字列が終了していません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.default.allowed.in.intf.annotation.member"_s,
			u"デフォルト値は注釈型の宣言でのみ使用できます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.default.overrides.object.member"_s,
			u"{1} {2}のデフォルト・メソッド{0}はjava.lang.Objectのメンバーをオーバーライドします"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.does.not.override.abstract"_s,
			u"{0}はabstractでなく、{2}内のabstractメソッド{1}をオーバーライドしません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.doesnt.exist"_s,
			u"パッケージ{0}は存在しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dot.class.expected"_s,
			u"\'\'.class\'\'がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.annotation.invalid.repeated"_s,
			u"注釈{0}は有効な繰返し可能な注釈ではありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.annotation.member.value"_s,
			u"注釈@{1}に重複した要素\'\'{0}\'\'があります。"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.annotation.missing.container"_s,
			u"{0}は繰返し可能な注釈型ではありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.case.label"_s,
			u"caseラベルが重複しています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.class"_s,
			u"クラス{0}が重複しています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.default.label"_s,
			u"defaultラベルが重複しています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.module"_s,
			u"モジュールが重複しています: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.module.on.path"_s,
			u"{0}でモジュールが重複しています\n{1}のモジュール"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.provides"_s,
			u"指定が重複しています: サービス{0}、実装{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.requires"_s,
			u"必須が重複しています: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.uses"_s,
			u"使用が重複しています: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.else.without.if"_s,
			u"\'\'else\'\'への\'\'if\'\'がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.empty.A.argument"_s,
			u"-Aには引数が必要です。\'\'-Akey\'\'または\'\'-Akey=value\'\'を使用してください"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.empty.char.lit"_s,
			u"空の文字リテラルです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.encl.class.required"_s,
			u"{0}を含む囲うインスタンスが必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.annotation.must.be.enum.constant"_s,
			u"列挙型注釈値は、列挙型定数である必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.as.identifier"_s,
			u"リリース5から\'\'enum\'はキーワードなので識別子として使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.cant.be.instantiated"_s,
			u"列挙型はインスタンス化できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.constant.expected"_s,
			u"ここに列挙型定数が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.constant.not.expected"_s,
			u"ここに列挙型定数は必要ありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.label.must.be.unqualified.enum"_s,
			u"列挙型のswitch caseラベルは列挙型定数の非修飾名である必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.no.finalize"_s,
			u"列挙型はfinalizeメソッドを持つことはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.no.subclassing"_s,
			u"クラスは直接java.lang.Enumを拡張できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.types.not.extensible"_s,
			u"列挙型は拡張可能ではありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.error"_s,
			u"エラー: "_s
		}),
		$$new($ObjectArray, {
			"compiler.err.error.reading.file"_s,
			u"{0}の読込みエラーです。{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.error.writing.file"_s,
			u"{0}の書込みエラーです。{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.except.already.caught"_s,
			u"例外{0}はすでに捕捉されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.except.never.thrown.in.try"_s,
			u"例外{0}は対応するtry文の本体ではスローされません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected"_s,
			u"{0}がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected.module"_s,
			u"\'\'モジュール\'\'が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected.module.or.open"_s,
			u"\'\'モジュール\'\'または\'\'オープン\'\'が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected.str"_s,
			u"{0}がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected2"_s,
			u"{0}または{1}がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected3"_s,
			u"{0}、{1}または{2}がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected4"_s,
			u"{0}, {1}, {2}または{3}がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expression.not.allowable.as.annotation.value"_s,
			u"式が注釈の値として許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.feature.not.supported.in.source"_s,
			u"{0}は-source {1}でサポートされていません\n({0}を有効にするには-source {2}以上を使用してください)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.feature.not.supported.in.source.plural"_s,
			u"{0}は-source {1}でサポートされていません\n({0}を有効にするには-source {2}以上を使用してください)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.file.not.directory"_s,
			u"ディレクトリではありません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.file.not.file"_s,
			u"ファイルではありません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.file.not.found"_s,
			u"ファイルが見つかりません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.file.patched.and.msp"_s,
			u"ファイルは、--patch-moduleと--module-source-pathの両方からアクセス可能ですが、各パス上の異なるモジュールに属しています: {0}, {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.file.sb.on.source.or.patch.path.for.module"_s,
			u"ファイルは、ソース・パス、またはモジュールのパッチ・パスに存在している必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.final.parameter.may.not.be.assigned"_s,
			u"finalパラメータ{0}に値を代入することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.finally.without.try"_s,
			u"\'\'finally\'\'への\'\'try\'\'がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.first.statement.must.be.call.to.another.constructor"_s,
			u"コンストラクタが標準でないため、先頭文がクラス{0}の他のコンストラクタを呼び出す必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.foreach.not.applicable.to.type"_s,
			u"for-eachは式のタイプに使用できません\n期待値: {1}\n検出値: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.fp.number.too.large"_s,
			u"浮動小数点数が大きすぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.fp.number.too.small"_s,
			u"浮動小数点数が小さすぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.generic.array.creation"_s,
			u"汎用配列を作成します"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.generic.throwable"_s,
			u"汎用クラスはjava.lang.Throwableを拡張できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.icls.cant.have.static.decl"_s,
			u"内部クラス{0}の静的宣言が不正です\n修飾子\'\'static\'\'は定数および変数の宣言でのみ使用できます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.argument.for.option"_s,
			u"{0}の引数が不正です: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.array.creation.both.dimension.and.initialization"_s,
			u"次元式と初期化の両方を使用した配列の作成は無効です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.char"_s,
			u"\'\'{0}\'\'は不正な文字です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.char.for.encoding"_s,
			u"この文字(0x{0})は、エンコーディング{1}にマップできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.combination.of.modifiers"_s,
			u"修飾子{0}と{1}の組合せは不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.default.super.call"_s,
			u"デフォルトのスーパー・コールの型修飾子{0}が不正です\n{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.dot"_s,
			u"不正な\'\'.\'\'です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.enum.static.ref"_s,
			u"初期化子からstaticフィールドへの参照が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.esc.char"_s,
			u"エスケープ文字が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.forward.ref"_s,
			u"前方参照が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.initializer.for.type"_s,
			u"{0}の初期化子が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.line.end.in.char.lit"_s,
			u"文字リテラルの行末が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.nonascii.digit"_s,
			u"不正な非ASCII数字です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.parenthesized.expression"_s,
			u"カッコ内の式が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.qual.not.icls"_s,
			u"修飾子が不正です。{0}は内部クラスではありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.record.component.name"_s,
			u"レコード・コンポーネント名{0}が無効です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.ref.to.restricted.type"_s,
			u"制限された型\'\'{0}\'\'への無効な参照です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.self.ref"_s,
			u"初期化子内の自己参照"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.start.of.expr"_s,
			u"式の開始が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.start.of.stmt"_s,
			u"文の開始が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.start.of.type"_s,
			u"型の開始が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.static.intf.meth.call"_s,
			u"staticインタフェース・メソッド・コールが不正です\n受信式は型修飾子\'\'{0}\'\'で置換される必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.text.block.open"_s,
			u"テキスト・ブロックの開始区切り文字のシーケンスが無効です。行の終了文字がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.underscore"_s,
			u"不正なアンダースコアです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.unicode.esc"_s,
			u"Unicodeエスケープが不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.import.requires.canonical"_s,
			u"インポートには{0}の標準名が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.improperly.formed.type.inner.raw.param"_s,
			u"型の形式が不適切です。raw型に指定された型引数です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.improperly.formed.type.param.missing"_s,
			u"型の形式が不適切です。パラメータが不足しています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.incomparable.types"_s,
			u"型{0}と{1}は比較できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.incompatible.thrown.types.in.mref"_s,
			u"機能式でスローされたタイプ{0}は不適合です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.incorrect.constructor.receiver.name"_s,
			u"受取り側の名前が、包含する外部クラス・タイプと一致しません\n必須: {0}\n検出:    {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.incorrect.constructor.receiver.type"_s,
			u"受取り側のタイプが、包含する外部クラス・タイプと一致しません\n必須: {0}\n検出:    {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.incorrect.receiver.name"_s,
			u"受取り側の名前が、包含するクラス・タイプと一致しません\n必須: {0}\n検出:    {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.incorrect.receiver.type"_s,
			u"受取り側のタイプが、包含するクラス・タイプと一致しません\n必須: {0}\n検出:    {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.initializer.must.be.able.to.complete.normally"_s,
			u"初期化子は正常に完了できる必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.initializer.not.allowed"_s,
			u"イニシャライザはinterfacesでは許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.instance.initializer.not.allowed.in.records"_s,
			u"インスタンス・イニシャライザはレコードでは使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.instanceof.pattern.no.subtype"_s,
			u"パターン・タイプ{0}は式タイプ{1}のサブタイプです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.instanceof.reifiable.not.safe"_s,
			u"{0}を{1}に安全にキャストできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.int.number.too.large"_s,
			u"整数が大きすぎます。"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.annotation.cant.have.type.params"_s,
			u"注釈型{0}は汎用にできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.annotation.member.clash"_s,
			u"注釈型{1}でメソッド{0}と同じ名前の要素が宣言されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.annotation.members.cant.have.params"_s,
			u"注釈型宣言内の要素が仮パラメータを宣言できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.annotation.members.cant.have.type.params"_s,
			u"注釈型宣言内の要素は汎用メソッドにできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.expected.here"_s,
			u"ここにインタフェースが必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.meth.cant.have.body"_s,
			u"インタフェース抽象メソッドが本体を持つことはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.not.allowed.here"_s,
			u"ここではインタフェースは許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.A.key"_s,
			u"注釈プロセッサ・オプション\'\'{0}\'\'のキーに指定されている一連の識別子が、ドットで区切られていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.accessor.method.in.record"_s,
			u"レコード{0}に無効なアクセサ・メソッドがあります\n({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.annotation.member.type"_s,
			u"注釈型要素の型が無効です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.binary.number"_s,
			u"2進数字は少なくとも1桁の2進数を含む必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.canonical.constructor.in.record"_s,
			u"レコード{1}に無効な{0}コンストラクタがあります\n({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.flag"_s,
			u"{0}は無効なフラグです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.hex.number"_s,
			u"16進数字は少なくとも1桁の16進数を含む必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.lambda.parameter.declaration"_s,
			u"無効なラムダ・パラメータ宣言\n({0})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.meth.decl.ret.type.req"_s,
			u"無効なメソッド宣言です。戻り値の型が必要です。"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.module.directive"_s,
			u"モジュール・ディレクティブ・キーワードまたは\'\'}\'\'が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.module.specifier"_s,
			u"モジュール指定子は許可されません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.mref"_s,
			u"{0}参照が無効です\n{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.path"_s,
			u"ファイル名が無効です: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.permits.clause"_s,
			u"無効なpermits句\n({0})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.profile"_s,
			u"無効なプロファイル: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation"_s,
			u"注釈が重複しています: {0}は無効な@Repeatable注釈で注釈付けされています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.elem.nondefault"_s,
			u"包含する注釈型{0}には要素{1}のデフォルト値が指定されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.incompatible.target"_s,
			u"包含する注釈型({0})は、繰返し可能な注釈型({1})より多くのターゲットに適用されます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.invalid.value"_s,
			u"{0}は有効な@Repeatableではありません: 値要素が無効です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.multiple.values"_s,
			u"{0}は有効な@Repeatableではありません。{1}要素メソッド\'\'value\'\'が宣言されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.no.value"_s,
			u"{0}は有効な@Repeatableではありません。値要素メソッドが宣言されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.not.applicable"_s,
			u"コンテナ{0}は要素{1}に使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.not.applicable.in.context"_s,
			u"コンテナ{0}はこの型のコンテキストに使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.not.documented"_s,
			u"繰返し可能な注釈型({1})は@Documentedですが、包含する注釈型({0})は違います"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.not.inherited"_s,
			u"繰返し可能な注釈型({1})は@Inheritedですが、包含する注釈型({0})は違います"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.repeated.and.container.present"_s,
			u"コンテナ{0}は含まれている要素と同時に指定できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.retention"_s,
			u"包含する注釈型({0})の保有が、繰返し可能な注釈型({2})の保有より短くなっています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.value.return"_s,
			u"包含する注釈型({0})は型{2}の要素\'\'value\'\'を宣言する必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.source"_s,
			u"{0}は無効なソース・リリースです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.supertype.record"_s,
			u"クラスは直接{0}を拡張できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.target"_s,
			u"{0}は無効なターゲット・リリースです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.yield"_s,
			u"制限された識別子\'\'yield\'\'の使用は無効です\n(yieldというメソッドを呼び出すには、yieldを受取り側またはタイプ名で修飾します)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.io.exception"_s,
			u"ソース・ファイルの読取りエラーです: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.is.preview"_s,
			u"{0}はプレビュー機能の一部であるAPIです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.label.already.in.use"_s,
			u"ラベル{0}はすでに使用されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.lambda.body.neither.value.nor.void.compatible"_s,
			u"ラムダ・ボディは値互換でもvoid互換でもありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.code"_s,
			u"コードが大きすぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.code.too.large.for.try.stmt"_s,
			u"try文のコードが大きすぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.dimensions"_s,
			u"配列型の次元が多すぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.locals"_s,
			u"ローカル変数が多すぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.parameters"_s,
			u"パラメータが多すぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.pool"_s,
			u"定数が多すぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.pool.in.class"_s,
			u"クラス{0}内の定数が多すぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.stack"_s,
			u"コードが要求するスタックが多すぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.string"_s,
			u"定数文字列が長すぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.string.overflow"_s,
			u"文字列\"{0}...\"のUTF8表現が、定数プールに対して長すぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.local.classes.cant.extend.sealed"_s,
			u"{0}クラスはシール・クラスを拡張できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.local.enum"_s,
			u"列挙型はローカルにできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.local.var.accessed.from.icls.needs.final"_s,
			u"ローカル変数{0}は内部クラスからアクセスされます。finalで宣言される必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.locn.bad.module-info"_s,
			u"{0}のmodule-info.classを読取り中に問題が発生しました"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.locn.cant.get.module.name.for.jar"_s,
			u"{0}のモジュール名を判別できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.locn.cant.read.directory"_s,
			u"ディレクトリ{0}を読み取れません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.locn.cant.read.file"_s,
			u"ファイル{0}を読み取れません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.locn.invalid.arg.for.xpatch"_s,
			u"--patch-moduleオプションの引数が無効です: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.locn.module-info.not.allowed.on.patch.path"_s,
			u"module-info.classはパッチ・パスでは許可されません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.malformed.fp.lit"_s,
			u"浮動小数点リテラルが不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.match.binding.exists"_s,
			u"既存の一致バインディングを再定義することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.method.does.not.override.superclass"_s,
			u"メソッドはスーパータイプのメソッドをオーバーライドまたは実装しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.missing.meth.body.or.decl.abstract"_s,
			u"メソッド本体がないか、abstractとして宣言されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.missing.ret.stmt"_s,
			u"return文が指定されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.mod.not.allowed.here"_s,
			u"修飾子{0}をここで使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.modifier.not.allowed.here"_s,
			u"修飾子{0}をここで使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.module.decl.sb.in.module-info.java"_s,
			u"モジュール宣言はmodule-info.javaという名前のファイルにある必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.module.name.mismatch"_s,
			u"モジュール名{0}は必要な名前{1}と一致しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.module.non.zero.opens"_s,
			u"オープン・モジュール{0}はゼロでないopens_countを持ちます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.module.not.found"_s,
			u"モジュールが見つかりません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.module.not.found.in.module.source.path"_s,
			u"モジュール・ソース・パスにモジュール{0}が見つかりません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.module.not.found.on.module.source.path"_s,
			u"モジュール・ソース・パスにモジュールが見つかりません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.modulesourcepath.must.be.specified.with.dash.m.option"_s,
			u"-mオプションを使用する場合、モジュール・ソース・パスを指定する必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.multi-module.outdir.cannot.be.exploded.module"_s,
			u"複数モジュール・モードで、出力ディレクトリは展開したモジュールにすることはできません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.multicatch.parameter.may.not.be.assigned"_s,
			u"複数catchパラメータ{0}に値を代入することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.multicatch.types.must.be.disjoint"_s,
			u"複数catch文の代替をサブクラス化によって関連付けることはできません\n代替{0}は代替{1}のサブクラスです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.multiple.values.for.module.source.path"_s,
			u"パターン引数で--module-source-pathが複数回指定されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.name.clash.same.erasure"_s,
			u"名前が競合しています。{0}と{1}は削除後の名前が同じです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.name.clash.same.erasure.no.hide"_s,
			u"名前が競合しています。{1}の{0}と{3}の{2}はまだ他方を非表示にしていませんが、削除後の名前が同じです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.name.clash.same.erasure.no.override"_s,
			u"名前が競合しています。{2}の{0}({1})と{5}の{3}({4})はまだ他方をオーバーライドしていませんが、削除後の名前が同じです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.name.clash.same.erasure.no.override.1"_s,
			u"名前が競合しています。{0} {1}はまだ他方をオーバーライドしていませんが、削除後の名前が同じ2つのメソッドがあります\n最初のメソッド:  {4}の{2}({3})\n2番目のメソッド: {7}の{5}({6})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.name.reserved.for.internal.use"_s,
			u"{0}は内部での使用のため予約されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.native.meth.cant.have.body"_s,
			u"nativeメソッドが本体を持つことはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.new.not.allowed.in.annotation"_s,
			u"\'\'new\'\'は注釈に使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.annotation.member"_s,
			u"{1}の注釈メンバー{0}がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.annotations.on.dot.class"_s,
			u"注釈はクラス・リテラルのタイプで許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.encl.instance.of.type.in.scope"_s,
			u"型{0}の内部クラスを囲むインスタンスがスコープ内にありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.intf.expected.here"_s,
			u"ここにインタフェースは必要ありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.match.entry"_s,
			u"{0}は{1}のエントリに適合しません。{2}が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.opens.unless.strong"_s,
			u"\'\'opens\'\'は強固なモジュールでのみ許可されます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.output.dir"_s,
			u"クラス出力ディレクトリが指定されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.pkg.in.module-info.java"_s,
			u"パッケージ宣言はファイルmodule-info.java内では許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.source.files"_s,
			u"ソース・ファイルがありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.source.files.classes"_s,
			u"ソース・ファイルまたはクラス名がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.superclass"_s,
			u"{0}にはスーパークラスがありません。"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.switch.expression"_s,
			u"switch式の外側のyield"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.switch.expression.qualify"_s,
			u"switch式の外側のyield\n(yieldというメソッドを呼び出すには、yieldを受取り側またはタイプ名で修飾します)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.value.for.option"_s,
			u"{0}オプションの値がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.zipfs.for.archive"_s,
			u"このファイルの処理に使用できるファイル・システム・プロバイダがありません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.non-static.cant.be.ref"_s,
			u"staticでない{0} {1}をstaticコンテキストから参照することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.non.sealed.or.sealed.expected"_s,
			u"sealedまたはnon-sealed修飾子が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.non.sealed.sealed.or.final.expected"_s,
			u"sealed、non-sealedまたはfinal修飾子が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.non.sealed.with.no.sealed.supertype"_s,
			u"non-sealed修飾子はここでは許可されません\n(クラス{0}にシール・スーパータイプが含まれていません)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.annotation.type"_s,
			u"{0}は注釈型ではありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.def.access.class.intf.cant.access"_s,
			u"{1}.{0}はアクセスできないクラスまたはインタフェースに定義されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.def.access.class.intf.cant.access.reason"_s,
			u"パッケージ{2}の{1}.{0}にはアクセスできません\n({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.def.access.package.cant.access"_s,
			u"{0} は表示不可です\n({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.def.public"_s,
			u"{1}の{0}はpublicではありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.def.public.cant.access"_s,
			u"{1}の{0}はpublicではありません。パッケージ外からはアクセスできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.encl.class"_s,
			u"{0}は内部クラスを囲みません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.exhaustive"_s,
			u"switch式がすべての可能な入力値をカバーしていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.in.module.on.module.source.path"_s,
			u"モジュール・ソース・パスのモジュールにありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.in.profile"_s,
			u"{0}はプロファイル\'\'{1}\'\'で使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.loop.label"_s,
			u"{0}はループ・ラベルではありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.stmt"_s,
			u"文ではありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.within.bounds"_s,
			u"型引数{0}は型変数{1}の境界内にありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.operator.cant.be.applied"_s,
			u"単項演算子\'\'{0}\'\'のオペランド型{1}が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.operator.cant.be.applied.1"_s,
			u"二項演算子\'\'{0}\'\'のオペランド型が不正です\n最初の型: {1}\n2番目の型: {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.option.not.allowed.with.target"_s,
			u"オプション{0}はターゲット{1}とともに指定できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.option.removed.source"_s,
			u"ソース・オプション{0}は現在サポートされていません。{1}以降を使用してください。"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.option.removed.target"_s,
			u"ターゲット・オプション{0}は現在サポートされていません。{1}以降を使用してください。"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.option.too.many"_s,
			u"オプション{0}を指定できるのは1回のみです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.orphaned"_s,
			u"{0}には親がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.output.dir.must.be.specified.with.dash.m.option"_s,
			u"-mオプションを使用する場合、クラス出力ディレクトリを指定する必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.override.incompatible.ret"_s,
			u"{0}\n戻り値の型{1}は{2}と互換性がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.override.meth"_s,
			u"{0}\nオーバーライドされたメソッドは{1}です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.override.meth.doesnt.throw"_s,
			u"{0}\nオーバーライドされたメソッドは{1}をスローしません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.override.static"_s,
			u"{0}\nオーバーライドするメソッドがstaticです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.override.weaker.access"_s,
			u"{0}\n({1})より弱いアクセス権限を割り当てようとしました"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.package.clash.from.requires"_s,
			u"モジュール{0}は{2}と{3}の両方からパッケージ{1}を読み取ります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.package.clash.from.requires.in.unnamed"_s,
			u"名前のないモジュ－ルは{1}と{2}の両方からパッケージ{0}を読み取ります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.package.empty.or.not.found"_s,
			u"パッケージは空であるか、または存在しません {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.package.in.other.module"_s,
			u"パッケージが別のモジュールに存在します: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.package.not.visible"_s,
			u"パッケージ{0}は表示不可です\n({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.pkg.annotations.sb.in.package-info.java"_s,
			u"パッケージの注釈はファイルpackage-info.java内にある必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.pkg.clashes.with.class.of.same.name"_s,
			u"パッケージ{0}は同名のクラスと競合しています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.plugin.not.found"_s,
			u"プラグインが見つかりません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.premature.eof"_s,
			u"構文解析中にファイルの終わりに移りました"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.preview.feature.disabled"_s,
			u"{0}はプレビュー機能であり、デフォルトで無効になっています。\n({0}を有効にするには--enable-previewを使用します)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.preview.feature.disabled.classfile"_s,
			u"{0}のクラス・ファイルはJava SE {1}のプレビュー機能を使用します。\n(プレビュー機能を含むクラス・ファイルをロードできるようにするには、--enable-previewを使用します)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.preview.feature.disabled.plural"_s,
			u"{0}はプレビュー機能であり、デフォルトで無効になっています。\n({0}を有効にするには--enable-previewを使用します)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.preview.not.latest"_s,
			u"--enable-previewが指定されたソース・リリース{0}は無効です\n(プレビュー言語機能はリリース{1}でのみサポートされています)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.preview.without.source.or.release"_s,
			u"--enable-previewは-sourceまたは--releaseとともに使用する必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.prob.found.req"_s,
			u"不適合な型: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.bad.config.file"_s,
			u"サービス構成ファイルが不正であるか、プロセッサ・オブジェクトの構築中に例外がスローされました: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.cant.access"_s,
			u"{0}にアクセスできません\n{1}\n詳細は次のスタックトレースで調査してください。\n{2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.cant.access.1"_s,
			u"{0}にアクセスできません\n{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.cant.create.loader"_s,
			u"注釈プロセッサのクラス・ローダーを作成できませんでした: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.cant.find.class"_s,
			u"\'\'{0}\'\'のクラス・ファイルが見つかりませんでした。"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.cant.load.class"_s,
			u"\'\'{0}\'\'が原因で、プロセッサ・クラス・ファイルをロードできませんでした。"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.messager"_s,
			"{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.no.explicit.annotation.processing.requested"_s,
			u"クラス名\'\'{0}\'\'が受け入れられるのは、注釈処理が明示的にリクエストされた場合のみです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.no.service"_s,
			u"サービス・ローダーが使用できませんでしたが、注釈処理に必要です。"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.processor.bad.option.name"_s,
			u"プロセッサ\'\'{1}\'\'によって指定されたオプション名\'\'{0}\'\'が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.processor.cant.instantiate"_s,
			u"プロセッサ\'\'{0}\'\'のインスタンスをインスタンス化できませんでした"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.processor.not.found"_s,
			u"注釈プロセッサ\'\'{0}\'\'が見つかりません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.processor.wrong.type"_s,
			u"注釈プロセッサ\'\'{0}\'\'がjavax.annotation.processing.Processorを実装していません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.service.problem"_s,
			u"プロセッサをロードするためのサービス・ローダーを作成中にエラーが発生しました。"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.processorpath.no.processormodulepath"_s,
			u"-processorpathと--processor-module-pathの組合せが不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.profile.bootclasspath.conflict"_s,
			u"profileとbootclasspathオプションは同時に使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.qualified.new.of.static.class"_s,
			u"staticクラスのnewが修飾されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.receiver.parameter.not.applicable.constructor.toplevel.class"_s,
			u"受取り側パラメータは最上位レベル・クラスのコンストラクタに適用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.record.cannot.declare.instance.fields"_s,
			u"フィールド宣言は静的である必要があります\n(フィールドをレコード・コンポーネントに置換することを検討)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.record.cant.declare.field.modifiers"_s,
			u"レコード・コンポーネントに修飾子を使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.record.component.and.old.array.syntax"_s,
			u"旧式の配列表記法はレコード・コンポーネントでは使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.record.header.expected"_s,
			u"レコード・ヘッダーが必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.recursive.ctor.invocation"_s,
			u"コンストラクタの呼出しが再帰的です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.ref.ambiguous"_s,
			u"{0}の参照はあいまいです\n{3}の{1} {2}と{6}の{4} {5}の両方が一致します"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.release.bootclasspath.conflict"_s,
			u"オプション{0}は--releaseと一緒に使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.repeated.annotation.target"_s,
			u"注釈ターゲットが繰り返されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.repeated.interface"_s,
			u"インタフェースが繰り返されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.repeated.modifier"_s,
			u"修飾子が繰り返されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.repeated.provides.for.service"_s,
			u"サービス{0}に複数の\'\'provides\'\'があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.repeated.value.for.module.source.path"_s,
			u"モジュール{0}に対して--module-source-pathが複数回指定されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.repeated.value.for.patch.module"_s,
			u"モジュール{0}に対して--patch-moduleが複数回指定されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.report.access"_s,
			u"{0}は{2}で{1}アクセスされます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.req.arg"_s,
			u"{0}には引数が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.restricted.type.not.allowed"_s,
			u"ここでは\'\'{0}\'\'は許可されません\nリリース{1}から\'\'{0}\'\'は制限された型名であり、型の宣言に使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.restricted.type.not.allowed.array"_s,
			u"\'\'{0}\'\'は配列の要素タイプとして許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.restricted.type.not.allowed.compound"_s,
			u"\'\'{0}\'\'は複合宣言で許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.restricted.type.not.allowed.here"_s,
			u"\'\'{0}\'\'はここでは許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.ret.outside.meth"_s,
			u"メソッドの外のreturn文です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.return.outside.switch.expression"_s,
			u"switch式の外側でreturnを実行しようとしています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.rule.completes.normally"_s,
			u"switchルールが値を提供せずに完了しました\n(switch式のswitchルールは値またはスローを提供する必要があります)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.same.binary.name"_s,
			u"クラス: {0}と{1}のバイナリ名が同じです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.sealed.class.must.have.subclasses"_s,
			u"シール・クラスにはサブクラスを含める必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.sealed.or.non.sealed.local.classes.not.allowed"_s,
			u"sealedまたはnon-sealedのローカル・クラスは許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.definition.is.enum"_s,
			u"サービス定義が列挙型です: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.doesnt.have.a.no.args.constructor"_s,
			u"サービス実装のデフォルト・コンストラクタがありません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.is.abstract"_s,
			u"サービス実装が抽象クラスです: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.is.inner"_s,
			u"サービス実装が内部クラスです: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.must.be.subtype.of.service.interface"_s,
			u"サービス実装タイプは、サービス・インタフェース・タイプのサブタイプであるか、サービス実装を戻し、引数を持たない、\"provider\"という名前のpublic staticメソッドを持つ必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.no.args.constructor.not.public"_s,
			u"サービス実装の引数なしのコンストラクタがパブリックではありません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.not.in.right.module"_s,
			u"サービス実装をprovidesディレクティブとして同じモジュールに定義する必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.provider.return.must.be.subtype.of.service.interface"_s,
			u"\"provider\"メソッドの戻りタイプは、サービス・インタフェース・タイプのサブタイプである必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.signature.doesnt.match.intf"_s,
			u"シグニチャが{0}に適合しません。互換性のないインタフェースです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.signature.doesnt.match.supertype"_s,
			u"シグニチャが{0}に適合しません。互換性のないスーパータイプです"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.source.cant.overwrite.input.file"_s,
			u"ソースの書込みエラーです。入力ファイル{0}を上書きできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.sourcepath.modulesourcepath.conflict"_s,
			u"--source-pathと--module-source-pathの両方を指定できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.stack.sim.error"_s,
			u"内部エラー: {0}でのスタック・シミュレーション・エラー"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.static.declaration.not.allowed.in.inner.classes"_s,
			u"静的宣言は内部クラスでは許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.static.imp.only.classes.and.interfaces"_s,
			u"static importはクラスとインタフェースからのみとなります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.static.methods.cannot.be.annotated.with.override"_s,
			u"staticメソッドは@Overrideで注釈付けすることはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.string.const.req"_s,
			u"定数の文字列式が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.switch.case.unexpected.statement"_s,
			u"caseの予期しない文です。予期されるのは、式、ブロックまたはthrow文です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.switch.expression.completes.normally"_s,
			u"switch式が値を提供せずに完了しました\n(switch式はすべての可能な入力値について値またはスローを提供する必要があります)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.switch.expression.empty"_s,
			u"switch式にcase句がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.switch.expression.no.result.expressions"_s,
			u"switch式に結果式がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.switch.mixing.case.types"_s,
			u"switchでcaseの異なる種類が使用されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.switch.null.not.allowed"_s,
			u"caseのnullラベルは許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.this.as.identifier"_s,
			u"リリース8から\'\'this\'\'は受信タイプのパラメータ名としてのみ許可されます\nこれは最初のパラメータにする必要があり、ラムダ・パラメータにはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.throws.not.allowed.in.intf.annotation"_s,
			u"throws節を@interfaceメンバーで使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.too.many.modules"_s,
			u"検出されたモジュール宣言が多すぎます"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.too.many.patched.modules"_s,
			u"パッチ適用モジュールが多すぎます({0})。--module-source-pathを使用してください"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.try.resource.may.not.be.assigned"_s,
			u"自動クローズ可能なリソース{0}に値を代入することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.try.with.resources.expr.effectively.final.var"_s,
			u"try-with-resourcesリソースとして使用される変数{0}が、finalでも事実上のfinalでもありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.try.with.resources.expr.needs.var"_s,
			u"try-with-resourcesリソースは、final変数または事実上のfinal変数への参照を示す変数宣言または式である必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.try.without.catch.finally.or.resource.decls"_s,
			u"\'\'try\'\'への\'\'catch\'\'、\'\'finally\'\'またはリソース宣言がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.two.class.loaders.1"_s,
			u"javacが複数のクラス・ローダー間で分割されています: 構成を確認してください"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.two.class.loaders.2"_s,
			u"javacが複数のクラス・ローダー間で分割されています:\nクラスの取得元ファイル: {0}\njavacの取得元: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.type.doesnt.take.params"_s,
			u"型{0}はパラメータをとりません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.type.found.req"_s,
			u"予期しない型\n期待値: {1}\n検出値:    {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.type.var.cant.be.deref"_s,
			u"型変数から選択できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.type.var.may.not.be.followed.by.other.bounds"_s,
			u"この型変数の後ろに他の境界を配置することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.type.var.more.than.once"_s,
			u"型変数{0}は{1}の戻り値の型で2回以上出現します。インスタンス生成されないままにはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.type.var.more.than.once.in.result"_s,
			u"型変数{0}は{1}の型で2回以上出現します。インスタンス生成されないままにはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.types.incompatible"_s,
			u"タイプ{0}と{1}は互換性がありません。\n{2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unclosed.char.lit"_s,
			u"文字リテラルが閉じられていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unclosed.comment"_s,
			u"コメントが閉じられていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unclosed.str.lit"_s,
			u"文字列リテラルが閉じられていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unclosed.text.block"_s,
			u"閉じられていないテキスト・ブロック"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.undef.label"_s,
			u"ラベル{0}は未定義です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.underscore.as.identifier"_s,
			u"リリース9から\'\'_\'\'はキーワードなので識別子として使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.underscore.as.identifier.in.lambda"_s,
			u"\'\'_\'\'が識別子として使用されています\n(ラムダ・パラメータでは\'\'_\'\'を識別子として使用することは禁止されています)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unexpected.lambda"_s,
			u"ここではラムダ式は予期されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unexpected.mref"_s,
			u"ここではメソッド参照は予期されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unexpected.type"_s,
			u"予期しない型\n期待値: {0}\n検出値:    {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unmatched.quote"_s,
			u"環境変数{0}の引用符が一致しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unnamed.pkg.not.allowed.named.modules"_s,
			u"名前のないパッケージは名前付きモジュールでは許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unreachable.stmt"_s,
			u"この文に制御が移ることはありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unreported.exception.default.constructor"_s,
			u"デフォルトのコンストラクタ内に報告されない例外{0}が存在します"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unreported.exception.implicit.close"_s,
			u"報告されない例外{0}は、スローするには捕捉または宣言する必要があります\nリソース変数\'\'{1}\'\'でのclose()の暗黙的なコールから例外がスローされました"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unreported.exception.need.to.catch.or.throw"_s,
			u"例外{0}は報告されません。スローするには、捕捉または宣言する必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unsupported.encoding"_s,
			u"サポートされていないエンコーディングです: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unsupported.release.version"_s,
			u"リリース・バージョン{0}はサポートされていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.var.might.already.be.assigned"_s,
			u"変数{0}はすでに代入されている可能性があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.var.might.be.assigned.in.loop"_s,
			u"変数{0}はループ内で代入されている可能性があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.var.might.not.have.been.initialized"_s,
			u"変数{0}は初期化されていない可能性があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.var.not.initialized.in.default.constructor"_s,
			u"変数{0}は、デフォルト・コンストラクタで初期化されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.varargs.and.old.array.syntax"_s,
			u"旧式の配列表記法は可変引数パラメータでは使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.varargs.and.receiver"_s,
			u"varargs表記は受取り側パラメータで使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.varargs.invalid.trustme.anno"_s,
			u"{0}注釈が無効です。{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.varargs.must.be.last"_s,
			u"可変引数パラメータは最後のパラメータにする必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.variable.not.allowed"_s,
			u"変数の宣言をここで使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.void.not.allowed.here"_s,
			u"ここで\'\'void\'\'型を使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.warnings.and.werror"_s,
			u"警告が見つかり-Werrorが指定されました"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.wrong.number.type.args"_s,
			u"型引数の数が不正です。{0}個必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.wrong.receiver"_s,
			u"受取り側パラメータの名前が間違っています"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.accessor.method.cant.throw.exception"_s,
			u"throws句をアクセサ・メソッドで使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.accessor.method.must.not.be.generic"_s,
			u"アクセサ・メソッドは汎用にできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.accessor.method.must.not.be.static"_s,
			u"アクセサ・メソッドは静的にできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.accessor.return.type.doesnt.match"_s,
			u"アクセサ・メソッド{0}の戻り型はレコード・コンポーネント{1}のタイプと一致する必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.anachronistic.module.info"_s,
			u"バージョン{0}.{1}のクラス・ファイルにモジュール宣言が見つかりました"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.anonymous"_s,
			u"匿名"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.anonymous.class"_s,
			"<anonymous {0}>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.applicable.method.found"_s,
			u"#{0}個の使用可能メソッドが見つかりました: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.applicable.method.found.1"_s,
			u"#{0}個の使用可能メソッドが見つかりました: {1}\n({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.arg.length.mismatch"_s,
			u"実引数リストと仮引数リストの長さが異なります"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.class.file"_s,
			u"クラス{0}のクラス・ファイルが無効です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.class.file.header"_s,
			u"クラス・ファイル{0}は不正です\n{1}\n削除するか、クラスパスの正しいサブディレクトリにあるかを確認してください。"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.class.signature"_s,
			u"クラス{0}のシグニチャが不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.const.pool.entry"_s,
			u"{0}の定数プール・エントリが不正です\n索引{2}では{1}が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.const.pool.index"_s,
			u"{0}の定数プール索引が不正です\n索引{1}が{2}のプール・サイズ内にありません。"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.const.pool.tag"_s,
			u"定数プール・タグ{0}が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.const.pool.tag.at"_s,
			u"定数プール・タグ{1}での{0}が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.constant.range"_s,
			u"{1}の定数値\'\'{0}\'\'は{2}の想定範囲外です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.constant.value"_s,
			u"{1}の定数値\'\'{0}\'\'は不正です。{2}が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.constant.value.type"_s,
			u"タイプ\'\'{0}\'\'の変数に定数値は指定できませんが、定数値が指定されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.enclosing.class"_s,
			u"{0}の内部クラスが不正です: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.enclosing.method"_s,
			u"クラス{0}の囲んでいるメソッド属性が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.instance.method.in.unbound.lookup"_s,
			u"非バインド検索で予期しないインスタンス{0} {1}が見つかりました"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.intersection.target.for.functional.expr"_s,
			u"ラムダまたはメソッド参照の交差タイプ・ターゲットが不正です\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.module-info.name"_s,
			u"クラス名が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.requires.flag"_s,
			u"不正な必須フラグ: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.runtime.invisible.param.annotations"_s,
			u"RuntimeInvisibleParameterAnnotations属性が不正です: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.signature"_s,
			u"シグニチャ{0}が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.source.file.header"_s,
			u"ソース・ファイル{0}は不正です\n{1}\n削除するか、ソース・パスの正しいサブディレクトリにあるかを確認してください。"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.static.method.in.bound.lookup"_s,
			u"バインド検索で予期しない静的な{0} {1}が見つかりました"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.static.method.in.unbound.lookup"_s,
			u"非バインド検索で予期しない静的な{0} {1}が見つかりました"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.type.annotation.value"_s,
			u"注釈ターゲット型の値の型が不正です: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.base.membership"_s,
			u"すべてのベース・クラスがメンバーです"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.canonical"_s,
			u"標準"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.canonical.cant.have.return.statement"_s,
			u"コンパクト・コンストラクタにRETURN文を含めることはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.canonical.must.not.contain.explicit.constructor.invocation"_s,
			u"標準コンストラクタに明示的なコンストラクタ呼出しを含めることはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.canonical.must.not.declare.type.variables"_s,
			u"標準コンストラクタは型変数を宣言できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.canonical.must.not.have.stronger.access"_s,
			u"({0})より強いアクセス権限を割り当てようとしました"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.canonical.with.name.mismatch"_s,
			u"標準コンストラクタのパラメータ名が無効です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.access.inner.cls.constr"_s,
			u"コンストラクタ{0}({1})にアクセスできません\n内部クラスを囲む型{2}のインスタンスがスコープ内にありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.apply.diamond.1"_s,
			u"{0}の型引数を推論できません\n理由: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.apply.symbol"_s,
			u"{4} {5}の{0} {1}は指定された型に適用できません\n期待値: {2}\n検出値:    {3}\n理由: {6}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.apply.symbols"_s,
			u"{1}に適切な{0}が見つかりません({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.hide"_s,
			u"{1}の{0}は{3}の{2}を隠すことはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.implement"_s,
			u"{1}の{0}は{3}の{2}を実装できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.override"_s,
			u"{1}の{0}は{3}の{2}をオーバーライドできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.resolve.args"_s,
			u"シンボルを見つけられません\nシンボル: {0} {1}({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.resolve.location.args"_s,
			u"シンボルを見つけられません\nシンボル:   {0} {1}({3})\n場所: {4}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.resolve.location.args.params"_s,
			u"シンボルを見つけられません\nシンボル:   {0} <{2}>{1}({3})\n場所: {4}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.resolve.modules"_s,
			u"モジュールを解決できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.captured.type"_s,
			"CAP#{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.clashes.with"_s,
			u"{1}の{0}は{3}の{2}と競合します"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.class.file.not.found"_s,
			u"{0}のクラス・ファイルが見つかりません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.class.file.wrong.class"_s,
			u"クラス・ファイル{0}に不正なクラスがあります"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.class.is.not.sealed"_s,
			u"{0}はシールする必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.compact"_s,
			u"コンパクト"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.conditional.target.cant.be.void"_s,
			u"条件式のターゲット型はvoidにできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.count.error"_s,
			u"エラー{0}個"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.count.error.plural"_s,
			u"エラー{0}個"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.count.error.recompile"_s,
			u"合計{1}個のうち、最初の{0}個のエラーのみ表示しています。さらに表示する場合は、-Xmaxerrsを使用してください"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.count.warn"_s,
			u"警告{0}個"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.count.warn.plural"_s,
			u"警告{0}個"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.count.warn.recompile"_s,
			u"合計{1}個のうち、最初の{0}個の警告のみ表示しています。さらに表示する場合は、-Xmaxwarnsを使用してください"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.descriptor"_s,
			u"ディスクリプタ: {2} {0}({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.descriptor.throws"_s,
			u"ディスクリプタ: {2} {0}({1})で{3}がスローされます"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.diamond"_s,
			"{0}<>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.diamond.and.explicit.params"_s,
			u"コンストラクタの明示的な型パラメータでは\'\'<>\'\'を使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.diamond.anonymous.methods.implicitly.override"_s,
			u"(<>のため、この匿名クラスに宣言されたすべての非privateメソッドはスーパータイプのメソッドをオーバーライドまたは実装しません)"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.diamond.invalid.arg"_s,
			u"{1}について推定された型引数{0}はこのコンテキストでは許可されません\n推論引数は署名属性に表現できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.diamond.invalid.args"_s,
			u"{1}について推定された型引数{0}はこのコンテキストでは許可されません\n推論引数は署名属性に表現できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.diamond.non.generic"_s,
			u"非汎用クラス{0}で\'\'<>\'\'を使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.doesnt.extend.sealed"_s,
			u"サブクラス{0}はシール・クラスを拡張する必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.eq.bounds"_s,
			u"等価制約: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.exception.message"_s,
			"{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.explicit.param.do.not.conform.to.bounds"_s,
			u"明示的な型引数{0}は、宣言された境界{1}に適合しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.fatal.err.cant.close"_s,
			u"致命的エラー: コンパイラ・リソースを閉じることができません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.fatal.err.cant.locate.ctor"_s,
			u"致命的エラー: {0}のコンストラクタを検出できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.fatal.err.cant.locate.field"_s,
			u"致命的エラー: フィールド{0}を検出できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.fatal.err.cant.locate.meth"_s,
			u"致命的エラー: メソッド{0}を検出できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.fatal.err.no.java.lang"_s,
			u"致命的エラー: クラスパスまたはブート・クラスパスでパッケージjava.langを検出できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.annotations.after.type.params"_s,
			u"メソッド・タイプ・パラメータの後の注釈"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.default.methods"_s,
			u"デフォルト・メソッド"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.diamond"_s,
			u"ダイヤモンド演算子"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.diamond.and.anon.class"_s,
			u"匿名内部クラスでの\'\'<>\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.intersection.types.in.cast"_s,
			u"intersection型"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.lambda"_s,
			u"ラムダ式"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.method.references"_s,
			u"メソッド参照"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.modules"_s,
			u"モジュール"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.multiple.case.labels"_s,
			u"複数のcaseラベル"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.not.supported.in.source"_s,
			u"{0}は-source {1}でサポートされていません\n({0}を有効にするには-source {2}以上を使用してください)"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.not.supported.in.source.plural"_s,
			u"{0}は-source {1}でサポートされていません\n({0}を有効にするには-source {2}以上を使用してください)"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.pattern.matching.instanceof"_s,
			u"instanceofでのパターンの一致"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.private.intf.methods"_s,
			u"privateインタフェース・メソッド"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.records"_s,
			u"レコード"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.reifiable.types.instanceof"_s,
			u"instanceofでのreifiable型"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.repeatable.annotations"_s,
			u"繰返し注釈"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.sealed.classes"_s,
			u"シール・クラス"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.static.intf.method.invoke"_s,
			u"staticインタフェース・メソッド呼出し"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.static.intf.methods"_s,
			u"staticインタフェース・メソッド"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.switch.expressions"_s,
			u"switch式"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.switch.rules"_s,
			u"switchルール"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.text.blocks"_s,
			u"テキスト・ブロック"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.type.annotations"_s,
			u"タイプ注釈"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.var.in.try.with.resources"_s,
			u"try-with-resources内の変数"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.var.syntax.in.implicit.lambda"_s,
			u"暗黙ラムダのvar構文"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.file.does.not.contain.module"_s,
			u"ファイルにモジュール宣言が含まれていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.file.does.not.contain.package"_s,
			u"ファイルにパッケージ{0}が含まれていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.file.doesnt.contain.class"_s,
			u"ファイルにクラス{0}が含まれていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.illegal.signature"_s,
			u"型{1}の署名属性が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.illegal.start.of.class.file"_s,
			u"クラス・ファイルの開始が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.implicit.and.explicit.not.allowed"_s,
			u"暗黙的に型指定されたパラメータと明示的に型指定されたパラメータを組み合せることはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inaccessible.varargs.type"_s,
			u"仮可変引数要素型{0}は{1} {2}からアクセスできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inapplicable.method"_s,
			u"{0} {1}.{2}は使用できません\n({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.abstract.default"_s,
			u"{0} {1}は型{4}と{5}から{2}({3})の抽象とデフォルトを継承します"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.abstracts"_s,
			u"{0} {1}で複数のオーバーライドしない抽象メソッドが見つかりました"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.arg.types.in.lambda"_s,
			u"ラムダ式のパラメータ型は不適合です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.arg.types.in.mref"_s,
			u"メソッド参照のパラメータ型は不適合です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.bounds"_s,
			u"推論変数{0}には、不適合な境界があります\n{1}\n{2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.descs.in.functional.intf"_s,
			u"{0} {1}で不適合な機能ディスクリプタが見つかりました"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.diff.ret"_s,
			u"両方とも{0}({1})を定義していますが、戻り値の型が無関係です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.eq.bounds"_s,
			u"推論変数{0}には、不適合な等価制約{1}があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.ret.type.in.lambda"_s,
			u"ラムダ式の戻り型が不正です\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.ret.type.in.mref"_s,
			u"メソッド参照の戻り型が不正です\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.type.in.conditional"_s,
			u"条件式の型が不正です\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.type.in.switch.expression"_s,
			u"switch式の型が不正です\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.unrelated.defaults"_s,
			u"{0} {1}は型{4}と{5}から{2}({3})の関連しないデフォルトを継承します"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.upper.bounds"_s,
			u"推測の変数{0}には、適合しない上限{1}があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inconvertible.types"_s,
			u"{0}を{1}に変換できません:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.infer.arg.length.mismatch"_s,
			u"型変数{0}を推論できません\n(実引数リストと仮引数リストの長さが異なります)"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.infer.no.conforming.assignment.exists"_s,
			u"型変数{0}を推論できません\n(引数の不一致: {1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.infer.no.conforming.instance.exists"_s,
			u"型変数{0}のインスタンスが存在しないので、{1}は{2}に適合しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.infer.varargs.argument.mismatch"_s,
			u"型変数{0}を推論できません\n(可変引数の不一致: {1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inferred.do.not.conform.to.eq.bounds"_s,
			u"推論型が等価制約に適合しません\n推論: {0}\n等価制約: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inferred.do.not.conform.to.lower.bounds"_s,
			u"推論型が下限に適合しません\n推論: {0}\n下限: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inferred.do.not.conform.to.upper.bounds"_s,
			u"推論型が上限に適合しません\n推論: {0}\n上限: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inner.cls"_s,
			u"内部クラス"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.intersection.type"_s,
			"INT#{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.invalid.default.interface"_s,
			u"バージョン{0}.{1}のクラス・ファイルにデフォルト・メソッドが見つかりました"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.invalid.generic.lambda.target"_s,
			u"ラムダ式の機能ディスクリプタが無効です\n{1} {2}のメソッド{0}は汎用です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.invalid.mref"_s,
			u"{0}参照が無効です\n{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.invalid.static.interface"_s,
			u"バージョン{0}.{1}のクラス・ファイルにstaticメソッドが見つかりました"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.is.a.type.variable"_s,
			u"型変数を含めることはできません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.is.duplicated"_s,
			u"重複を含めることはできません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.annotation"_s,
			"@interface"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.class"_s,
			u"クラス"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.constructor"_s,
			u"コンストラクタ"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.enum"_s,
			u"列挙"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.instance.init"_s,
			u"インスタンス初期化子"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.interface"_s,
			u"インタフェース"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.method"_s,
			u"メソッド"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.module"_s,
			u"モジュール"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.package"_s,
			u"パッケージ"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.record"_s,
			u"レコード"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.record.component"_s,
			u"レコード・コンポーネント"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.static"_s,
			"static"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.static.init"_s,
			u"static初期化子"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.type.variable"_s,
			u"型変数"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.type.variable.bound"_s,
			u"型変数の境界"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.value"_s,
			u"値"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.variable"_s,
			u"変数"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.lambda"_s,
			u"ラムダ式"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local"_s,
			u"ローカル"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.array.missing.target"_s,
			u"配列初期化子には明示的なターゲット型が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.cant.infer.null"_s,
			u"変数初期化子は\'\'null\'\'です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.cant.infer.void"_s,
			u"変数初期化子は\'\'void\'\'です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.lambda.missing.target"_s,
			u"ラムダ式には明示的なターゲット型が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.missing.init"_s,
			u"初期化子なしで変数に\'\'var\'\'を使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.mref.missing.target"_s,
			u"メソッド参照には明示的なターゲット型が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.self.ref"_s,
			u"自己参照変数に\'\'var\'\'を使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.location"_s,
			"{0} {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.location.1"_s,
			u"タイプ{2}の{0} {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.locn.module_path"_s,
			u"アプリケーション・モジュール・パス"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.locn.module_source_path"_s,
			u"モジュール・ソース・パス"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.locn.system_modules"_s,
			u"システム・モジュール"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.locn.upgrade_module_path"_s,
			u"アップグレード・モジュール・パス"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.lower.bounds"_s,
			u"下限: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.malformed.vararg.method"_s,
			u"クラス・ファイルに不正な可変引数メソッドが含まれています: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.method.descriptor.invalid"_s,
			u"メソッド・ディスクリプタが{0}に対して無効です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.method.must.be.public"_s,
			u"アクセサ・メソッドはpublicである必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.missing.ret.val"_s,
			u"戻り値がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.module.info.definition.expected"_s,
			u"module-info定義が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.module.info.invalid.super.class"_s,
			u"無効なスーパー・クラスを含むmodule-info"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.module.name.mismatch"_s,
			u"モジュール名{0}は必要な名前{1}と一致しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.module.non.zero.opens"_s,
			u"オープン・モジュール{0}はゼロでないopens_countを持ちます"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.mref.infer.and.explicit.params"_s,
			u"コンストラクタの明示的な型パラメータではrawコンストラクタ参照を使用できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.must.not.be.same.class"_s,
			u"permits句の自己参照が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.must.not.be.supertype"_s,
			u"スーパータイプ{0}への参照が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.no.abstracts"_s,
			u"{0} {1}で抽象メソッドが見つかりません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.no.args"_s,
			u"引数がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.no.conforming.assignment.exists"_s,
			u"引数の不一致: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.no.suitable.functional.intf.inst"_s,
			u"{0}の機能インタフェース・ディスクリプタを推論できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.no.unique.maximal.instance.exists"_s,
			u"型変数{0}(上限{1})の固有の最大インスタンスが存在しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.no.unique.minimal.instance.exists"_s,
			u"型変数{0}(下限{1})の固有の最小インスタンスが存在しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.a.functional.intf"_s,
			u"{0}は機能インタフェースではありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.a.functional.intf.1"_s,
			u"{0}は機能インタフェースではありません\n{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.an.intf.component"_s,
			u"コンポーネント・タイプ{0}はインタフェースではありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.applicable.method.found"_s,
			u"#{0}個の使用できないメソッドが見つかりました: {1}\n({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.class.intf.cant.access"_s,
			u"{1}.{0}はアクセスできないクラスまたはインタフェースに定義されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.class.intf.cant.access.reason"_s,
			u"パッケージ{2}の{1}.{0}にはアクセスできません\n({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.does.not.read"_s,
			u"パッケージ{1}はモジュール{2}で宣言されていますが、モジュール{0}に読み込まれていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.does.not.read.from.unnamed"_s,
			u"パッケージ{0}はモジュール{1}で宣言されていますが、モジュール・グラフにありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.does.not.read.unnamed"_s,
			u"パッケージ{0}は名前のないモジュールで宣言されていますが、モジュール{1}に読み込まれていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.not.exported"_s,
			u"パッケージ{0}はモジュール{1}で宣言されていますが、エクスポートされていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.not.exported.from.unnamed"_s,
			u"パッケージ{0}はモジュール{1}で宣言されていますが、エクスポートされていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.not.exported.to.module"_s,
			u"パッケージ{0}はモジュール{1}で宣言されていますが、モジュール{2}にエクスポートされていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.not.exported.to.module.from.unnamed"_s,
			u"パッケージ{0}はモジュール{1}で宣言されていますが、名前のないモジュールにエクスポートされていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.package.cant.access"_s,
			u"{0} は表示不可です\n({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.public.cant.access"_s,
			u"{1}の{0}はpublicではありません。パッケージ外からはアクセスできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.overridden.default"_s,
			u"{1}のメソッド{0}はオーバーライドされます"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.package.not.visible"_s,
			u"パッケージ{0}は表示不可です\n({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.partial.inst.sig"_s,
			u"部分的にインスタンス化されました: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.possible.loss.of.precision"_s,
			u"精度が失われる可能性がある{0}から{1}への変換"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.prob.found.req"_s,
			u"不適合な型: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.redundant.supertype"_s,
			u"冗長なインタフェース{0}は{1}によって拡張されました"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.ref.ambiguous"_s,
			u"{0}の参照はあいまいです\n{3}の{1} {2}と{6}の{4} {5}の両方が一致します"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.report.access"_s,
			u"{0}は{2}で{1}アクセスされます"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.resume.abort"_s,
			u"R)再開,A)中止>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.source.unavailable"_s,
			u"(ソースが利用不可)"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.stat.expr.expected"_s,
			u"ラムダ・ボディがvoid機能インタフェースと互換性がありません\n(ブロックのラムダ・ボディの使用を検討するか、かわりに文の式を使用してください)"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.static.mref.with.targs"_s,
			u"staticメソッド参照のパラメータ化された修飾子"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.switch.expression.target.cant.be.void"_s,
			u"switch式のターゲット型はvoidにできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.synthetic.name.conflict"_s,
			u"シンボル{0}が、{1}でコンパイラが合成したシンボルと競合します"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.throws.clause.not.allowed.for.canonical.constructor"_s,
			u"throws句は{0}コンストラクタでは許可されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.bad-symbol"_s,
			"<bad symbol>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.character"_s,
			"<character>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.double"_s,
			"<double>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.end-of-input"_s,
			"<end of input>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.float"_s,
			"<float>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.identifier"_s,
			"<identifier>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.integer"_s,
			"<integer>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.long-integer"_s,
			"<long integer>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.string"_s,
			"<string>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.try.not.applicable.to.type"_s,
			u"try-with-resourceは変数型に使用できません\n({0})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.captureof"_s,
			u"{1}のキャプチャ#{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.captureof.1"_s,
			u"キャプチャ#{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.must.be.identical.to.corresponding.record.component.type"_s,
			u"型と引数の数は対応するレコード・コンポーネントのものと一致する必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.none"_s,
			"<none>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.null"_s,
			"<null>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.parameter"_s,
			u"型パラメータ{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.req.array.or.iterable"_s,
			u"配列またはjava.lang.Iterable"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.req.class"_s,
			u"クラス"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.req.class.array"_s,
			u"クラスまたは配列"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.req.exact"_s,
			u"境界のないクラスまたはインタフェース"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.req.ref"_s,
			u"参照"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.var"_s,
			"{0}#{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unable.to.access.file"_s,
			u"ファイル{0}にアクセスできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unchecked.assign"_s,
			u"無検査変換"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unchecked.cast.to.type"_s,
			u"無検査キャスト"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unchecked.clash.with"_s,
			u"{1}の{0}は{3}の{2}をオーバーライドします"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unchecked.implement"_s,
			u"{1}の{0}は{3}の{2}を実装します"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unchecked.override"_s,
			u"{1}の{0}は{3}の{2}をオーバーライドします"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.undecl.type.var"_s,
			u"型変数{0}は宣言されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unexpected.const.pool.tag.at"_s,
			u"予期しない定数プール・タグ: {0}が{1}にあります"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unexpected.ret.val"_s,
			u"予期しない戻り値"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unicode.str.not.supported"_s,
			u"クラス・ファイル内のUnicode文字列はサポートされていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unnamed.module"_s,
			u"名前のないモジュール"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unnamed.package"_s,
			u"名前のないパッケージ"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.upper.bounds"_s,
			u"下限: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.user.selected.completion.failure"_s,
			u"クラス名によるユーザー選択の完了に失敗しました"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.var.and.explicit.not.allowed"_s,
			u"\'\'var\'\'と明示的に型指定されたパラメータを組み合せることはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.var.and.implicit.not.allowed"_s,
			u"\'\'var\'\'と暗黙的に型指定されたパラメータを組み合せることはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.argument.mismatch"_s,
			u"可変引数の不一致: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.clash.with"_s,
			u"{1}の{0}は{3}の{2}をオーバーライドします"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.implement"_s,
			u"{1}の{0}は{3}の{2}を実装します"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.override"_s,
			u"{1}の{0}は{3}の{2}をオーバーライドします"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.trustme.on.non.varargs.accessor"_s,
			u"アクセサ{0}は可変引数メソッドではありません。"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.trustme.on.non.varargs.meth"_s,
			u"メソッド{0}は可変引数メソッドではありません。"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.trustme.on.reifiable.varargs"_s,
			u"可変引数要素型{0}はreifiable型です。"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.trustme.on.virtual.varargs"_s,
			u"インスタンス・メソッド{0}はfinalでもprivateでもありません。"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.trustme.on.virtual.varargs.final.only"_s,
			u"インスタンス・メソッド{0}はfinalではありません。"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.checking.attribution"_s,
			u"[{0}を確認中]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.classpath"_s,
			u"[クラス・ファイルの検索パス: {0}]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.loading"_s,
			u"[{0}を読込み中]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.parsing.done"_s,
			u"[{0}ミリ秒で構文解析完了]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.parsing.started"_s,
			u"[{0}を構文解析開始]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.sourcepath"_s,
			u"[ソース・ファイルの検索パス: {0}]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.total"_s,
			u"[合計{0}ミリ秒]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.wrote.file"_s,
			u"[{0}を書込み完了]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.version.not.available"_s,
			u"(バージョン情報がありません)"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.captured"_s,
			u"{3}のキャプチャからの{0} extends {1} super: {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.captured.1"_s,
			u"{3}のキャプチャからの{0} extends {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.description.captured"_s,
			u"{0}が新しい型変数の場合:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.description.captured.1"_s,
			u"{0}が新しい型変数の場合:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.description.intersection"_s,
			u"{0}がintersection型の場合:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.description.intersection.1"_s,
			u"{0}がintersection型の場合:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.description.typevar"_s,
			u"{0}が型変数の場合:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.description.typevar.1"_s,
			u"{0}が型変数の場合:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.fresh.typevar"_s,
			u"{0}は{1}を拡張します"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.intersection"_s,
			"{0} extends {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.typevar"_s,
			u"{2} {3}で宣言されている{0} extends {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.typevar.1"_s,
			u"{2} {3}で宣言された{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.wrong.number.type.args"_s,
			u"型引数の数が不正です。{0}個必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.wrong.version"_s,
			u"クラス・ファイルのバージョン{0}.{1}は不正です。{2}.{3}である必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.x.print.processor.info"_s,
			u"プロセッサ{0}は{1}に一致し、{2}を返します。"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.x.print.rounds"_s,
			u"往復{0}:\n\t入力ファイル: {1}\n\t注釈: {2}\n\t最後の往復: {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.compressed.diags"_s,
			u"一部のメッセージは簡略化されています。-Xdiags:verboseで再コンパイルして完全な出力を取得してください"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.deferred.method.inst"_s,
			u"メソッド{0}の遅延インスタンス化\nインスタンス化されたシグネチャ: {1}\nターゲット型: {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.deprecated.filename"_s,
			u"{0}は推奨されないAPIを使用またはオーバーライドしています。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.deprecated.filename.additional"_s,
			u"{0}に推奨されないAPIの追加使用またはオーバーライドがあります。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.deprecated.plural"_s,
			u"一部の入力ファイルは推奨されないAPIを使用またはオーバーライドしています。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.deprecated.plural.additional"_s,
			u"一部の入力ファイルは推奨されないAPIを追加使用またはオーバーライドしています。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.deprecated.recompile"_s,
			u"詳細は、-Xlint:deprecationオプションを指定して再コンパイルしてください。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.lambda.stat"_s,
			u"ラムダ式を変換しています\n代替metafactory = {0}\n合成メソッド = {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.mref.stat"_s,
			u"メソッド参照を変換しています\n代替metafactory = {0}\n"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.mref.stat.1"_s,
			u"メソッド参照を変換しています\n代替metafactory = {0}\nブリッジ・メソッド = {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.multiple.elements"_s,
			u"モジュール\'\'{2}\'\'に\'\'{1}という名前の複数の要素がjavax.lang.model.util.Elements.{0}によって見つかりました。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.note"_s,
			u"ノート:"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.preview.filename"_s,
			u"{0}はプレビュー言語機能を使用します。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.preview.filename.additional"_s,
			u"{0}は追加でプレビュー言語機能を使用します。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.preview.plural"_s,
			u"一部の入力ファイルはプレビュー言語機能を使用します。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.preview.plural.additional"_s,
			u"一部の入力ファイルは追加でプレビュー言語機能を使用します。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.preview.recompile"_s,
			u"詳細は、-Xlint:previewオプションを指定して再コンパイルしてください。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.proc.messager"_s,
			"{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.removal.filename"_s,
			u"{0}は、削除用にマークされた推奨されないAPIを使用またはオーバーライドしています。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.removal.filename.additional"_s,
			u"{0}に、削除用にマークされた推奨されないAPIの追加使用またはオーバーライドがあります。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.removal.plural"_s,
			u"一部の入力ファイルは、削除用にマークされた推奨されないAPIを使用またはオーバーライドしています。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.removal.plural.additional"_s,
			u"一部の入力ファイルは、削除用にマークされた推奨されないAPIを追加使用またはオーバーライドしています。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.removal.recompile"_s,
			u"詳細は、-Xlint:removalオプションを指定して再コンパイルしてください。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.unchecked.filename"_s,
			u"{0}の操作は、未チェックまたは安全ではありません。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.unchecked.filename.additional"_s,
			u"{0}に未チェックまたは安全ではない操作がさらにあります。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.unchecked.plural"_s,
			u"入力ファイルの操作のうち、未チェックまたは安全ではないものがあります。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.unchecked.plural.additional"_s,
			u"入力ファイルの操作のうち、未チェックまたは安全ではないものがさらにあります。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.unchecked.recompile"_s,
			u"詳細は、-Xlint:uncheckedオプションを指定して再コンパイルしてください。"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.verbose.l2m.deduplicate"_s,
			u"重複除外ラムダ実装メソッド{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.verbose.resolve.multi"_s,
			u"型{1}のメソッド{0}を候補{2}に解決しています\nフェーズ: {3}\n実際の型: {4}\n型引数: {5}\n候補:"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.verbose.resolve.multi.1"_s,
			u"型{1}のメソッド{0}の解決にエラーがあります\nフェーズ: {3}\n実際の型: {4}\n型引数: {5}\n候補:"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.access.to.member.from.serializable.element"_s,
			u"直列化可能要素からメンバー{0}へのアクセスは、信頼できないコードからパブリックにアクセス可能である可能性があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.access.to.member.from.serializable.lambda"_s,
			u"直列化可能ラムダからメンバー{0}へのアクセスは、信頼できないコードからパブリックにアクセス可能である可能性があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.addopens.ignored"_s,
			u"--add-opensは、コンパイル時には無効です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.annotation.method.not.found"_s,
			u"タイプ\'\'{0}\'\'内に注釈メソッド\'\'{1}()\'\'が見つかりません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.annotation.method.not.found.reason"_s,
			u"タイプ\'\'{0}\'\'内に注釈メソッド\'\'{1}()\'\'が見つかりません: {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.attempt.to.synchronize.on.instance.of.value.based.class"_s,
			u"値ベース・クラスのインスタンスで同期しようとしました"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.auxiliary.class.accessed.from.outside.of.its.source.file"_s,
			u"{1}の補助クラス{0}にソース・ファイル外からアクセスできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.bad.name.for.option"_s,
			u"{0}オプションの値に含まれる名前が不正です: \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.big.major.version"_s,
			u"{0}: メジャー・バージョン{1}は、このコンパイラでサポートされている最新のメジャー・バージョン{2}より新しいです。\nコンパイラのアップグレードをお薦めします。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.constant.SVUID"_s,
			u"serialVersionUIDはクラス{0}の定数である必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.deprecated.annotation.has.no.effect"_s,
			u"@Deprecated注釈は、この{0}宣言には影響しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.diamond.redundant.args"_s,
			u"新しい式の型引数が重複しています(かわりにダイヤモンド演算子を使用します)。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.dir.path.element.not.directory"_s,
			u"不正なパス要素\"{0}\": ディレクトリは存在しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.dir.path.element.not.found"_s,
			u"不正なパス要素\"{0}\": そのディレクトリは存在しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.div.zero"_s,
			u"ゼロで除算"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.empty.if"_s,
			u"if以降が空の文です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.file.from.future"_s,
			u"ファイル{0}の変更日が将来の日付です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.finally.cannot.complete"_s,
			u"finally節が正常に完了できません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.forward.ref"_s,
			u"初期化される前の変数\'\'{0}\'\'を参照しようとしました"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.future.attr"_s,
			u"バージョン{1}.{2}のクラス・ファイルで導入された{0}属性は、バージョン{3}.{4}のクラス・ファイルでは無視されます"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.has.been.deprecated"_s,
			u"{1}の{0}は推奨されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.has.been.deprecated.for.removal"_s,
			u"{1}の{0}は推奨されておらず、削除用にマークされています"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.has.been.deprecated.for.removal.module"_s,
			u"モジュール{0}は推奨されておらず、削除用にマークされています"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.has.been.deprecated.module"_s,
			u"モジュール{0}は推奨されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.illegal.char.for.encoding"_s,
			u"この文字は、エンコーディング{0}にマップできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.illegal.ref.to.restricted.type"_s,
			u"制限された型\'\'{0}\'\'への無効な参照です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.improper.SVUID"_s,
			u"serialVersionUIDは、クラス{0}にstatic finalを宣言する必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.inconsistent.white.space.indentation"_s,
			u"空白のインデントに一貫性がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.incubating.modules"_s,
			u"実験的なモジュールを使用しています: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.inexact.non-varargs.call"_s,
			u"最終パラメータの不正確な引数型を持った可変引数メソッドの非可変引数呼出し。\n可変引数呼出しに関しては{0}にキャストします。\n非可変引数呼出しに関しては{1}にキャストしてこの警告を出さないようにします"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.invalid.archive.file"_s,
			u"パス上の予期しないファイル: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.invalid.path"_s,
			u"ファイル名が無効です: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.invalid.yield"_s,
			u"\'\'yield\'\'は将来のリリースで制限された識別子になる可能性があります\n(yieldというメソッドを呼び出すには、yieldを受取り側またはタイプ名で修飾します)"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.is.preview"_s,
			u"{0}はプレビュー機能の一部であるAPIです"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.leaks.not.accessible"_s,
			u"モジュール{2}の{0} {1}は、このモジュールを必要とするクライアントからアクセスできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.leaks.not.accessible.not.required.transitive"_s,
			u"モジュール{2}の{0} {1}は、\'\'requires transitive\'\'を使用して間接的にエクスポートされません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.leaks.not.accessible.unexported"_s,
			u"モジュール{2}の{0} {1}はエクスポートされません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.leaks.not.accessible.unexported.qualified"_s,
			u"モジュール{2}の{0} {1}は、このモジュールを必要とするすべてのクライアントに表示されない可能性があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.lintOption"_s,
			"[{0}] "_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.local.redundant.type"_s,
			u"ローカル変数の型が重複しています(明示的な型を\'\'var\'\'に置き換えます)。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.locn.unknown.file.on.module.path"_s,
			u"モジュール・パスのファイルが不明です: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.long.SVUID"_s,
			u"serialVersionUIDは、クラス{0}のlong型である必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.method.redundant.typeargs"_s,
			u"メソッド呼出しの型引数が重複しています。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.missing-explicit-ctor"_s,
			u"エクスポートされたパッケージ{1}のクラス{0}は明示的なコンストラクタを宣言しないため、デフォルト・コンストラクタをモジュール{2}のクライアントに公開します"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.missing.SVUID"_s,
			u"直列化可能なクラス{0}には、serialVersionUIDが定義されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.missing.deprecated.annotation"_s,
			u"推奨されない項目は@Deprecatedで注釈が付けられていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.module.for.option.not.found"_s,
			u"{0}オプション内にモジュール名が見つかりません: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.module.not.found"_s,
			u"モジュールが見つかりません: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.option.obsolete.source"_s,
			u"ソース値{0}は廃止されていて、今後のリリースで削除される予定です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.option.obsolete.suppression"_s,
			u"廃止されたオプションについての警告を表示しないようにするには、-Xlint:オプションを使用します。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.option.obsolete.target"_s,
			u"ターゲット値{0}は廃止されていて、今後のリリースで削除される予定です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.option.parameters.unsupported"_s,
			u"-parametersは、ターゲット値{0}ではサポートされていません。{1}以降を使用してください。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.outdir.is.in.exploded.module"_s,
			u"出力ディレクトリは展開したモジュール内です: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.override.bridge"_s,
			u"{0}。オーバーライドされたメソッドはブリッジ・メソッドです"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.override.equals.but.not.hashcode"_s,
			u"クラス{0}はequalsをオーバーライドしますが、このクラスも、また、いかなるスーパークラスも、hashCodeメソッドをオーバーライドしません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.override.unchecked.ret"_s,
			u"{0}\n戻り値の型は{1}から{2}への無検査変換が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.override.unchecked.thrown"_s,
			u"{0}\nオーバーライドされたメソッドは{1}をスローしません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.override.varargs.extra"_s,
			u"{0}。オーバーライドしているメソッドには\'\'...\'\'がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.override.varargs.missing"_s,
			u"{0}。オーバーライドされたメソッドには\'\'...\'\'がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.package.empty.or.not.found"_s,
			u"パッケージは空であるか、または存在しません {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.path.element.not.found"_s,
			u"不正なパス要素\"{0}\": そのファイルまたはディレクトリはありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.pkg-info.already.seen"_s,
			u"package-info.javaファイルがすでにパッケージ{0}用に表示されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.poor.choice.for.module.name"_s,
			u"モジュール名コンポーネント{0}の末尾は数字にしないでください"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.position.overflow"_s,
			u"位置エンコーディングが行{0}でオーバーフローします"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.possible.fall-through.into.case"_s,
			u"caseにfall-throughする可能性があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.potential.lambda.found"_s,
			u"この匿名内部クラスをラムダ式に変換できます。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.potentially.ambiguous.overload"_s,
			u"{1}内の{0}は{3}内の{2}と矛盾する可能性があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.preview.feature.use"_s,
			u"{0}はプレビュー機能であり、今後のリリースで削除される可能性があります。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.preview.feature.use.classfile"_s,
			u"{0}のクラス・ファイルはJava SE {1}のプレビュー機能を使用します。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.preview.feature.use.plural"_s,
			u"{0}はプレビュー機能であり、今後のリリースで削除される可能性があります。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.prob.found.req"_s,
			u"{0}\n期待値: {2}\n検出値:    {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.annotations.without.processors"_s,
			u"これらの注釈を要求するプロセッサはありませんでした: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.duplicate.option.name"_s,
			u"重複するサポート対象オプション\'\'{0}\'\'が注釈プロセッサ\'\'{1}\'\'によって返されました"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.duplicate.supported.annotation"_s,
			u"重複するサポート対象注釈型\'\'{0}\'\'が注釈プロセッサ\'\'{1}\'\'によって返されました"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.file.create.last.round"_s,
			u"最後に作成されたタイプ\'\'{0}\'\'のファイルは注釈処理に渡されません。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.file.reopening"_s,
			u"\'\'{0}\'\'用のファイルを複数回作成しようとしています"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.illegal.file.name"_s,
			u"無効な名前\'\'{0}\'\'のファイルは作成できません。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.malformed.supported.string"_s,
			u"プロセッサ\'\'{1}\'\'が返したサポートされる注釈型の文字列\'\'{0}\'\'が不正です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.messager"_s,
			"{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.package.does.not.exist"_s,
			u"パッケージ{0}は存在しません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.proc-only.requested.no.procs"_s,
			u"コンパイルなしの注釈処理がリクエストされましたが、プロセッサが見つかりませんでした。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.processor.incompatible.source.version"_s,
			u"注釈プロセッサ\'\'{1}\'\'から-source \'\'{2}\'\'より小さいソース・バージョン\'\'{0}\'\'がサポートされています"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.redundant.types.with.wildcard"_s,
			u"注釈プロセッサ\'\'{0}\'\'は\'\'*\'\'と他の注釈型を重複してサポートします"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.suspicious.class.name"_s,
			u"名前が{1}で終わる型のファイルを作成しています: \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.type.already.exists"_s,
			u"タイプ\'\'{0}\'\'のファイルはすでにソース・パスまたはクラスパスに存在します"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.type.recreate"_s,
			u"タイプ\'\'{0}\'\'のファイルを複数回作成しようとしています"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.unclosed.type.files"_s,
			u"タイプ\'\'{0}\'\'のファイルが閉じられていません。これらのタイプは注釈処理されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.unmatched.processor.options"_s,
			u"次のオプションはどのプロセッサでも認識されませんでした: \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.use.implicit"_s,
			u"暗黙的にコンパイルされたファイルは注釈処理に渡されません。\n-implicitを使用し暗黙的コンパイルのポリシーを指定してください。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.use.proc.or.implicit"_s,
			u"暗黙的にコンパイルされたファイルは注釈処理に渡されません。\n-proc:noneを使用し注釈処理を無効にするか -implicitを使用し暗黙的コンパイルのポリシーを指定してください。"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.profile.target.conflict"_s,
			u"プロファイル{0}はターゲット・リリース{1}に対して有効ではありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.raw.class.use"_s,
			u"raw型が見つかりました: {0}\n汎用クラス{1}の型引数がありません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.redundant.cast"_s,
			u"{0}への冗長なキャストです"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.requires.automatic"_s,
			u"自動モジュールにはディレクティブが必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.requires.transitive.automatic"_s,
			u"自動モジュールには推移的ディレクティブが必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.restricted.type.not.allowed"_s,
			u"リリース{1}から、\'\'{0}\'\'は制限された型名であり、型の宣言での使用、または配列の要素タイプとしての使用はできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.restricted.type.not.allowed.preview"_s,
			u"\'\'{0}\'\'は将来のリリースで制限された型名になる可能性があり、型の宣言での使用、または配列の要素タイプとしての使用はできなくなる可能性があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.self.ref"_s,
			u"初期化子内の変数\'\'{0}\'\'の自己参照"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.service.provided.but.not.exported.or.used"_s,
			u"サービス・インタフェースが指定されましたが、エクスポートまたは使用されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.source.no.bootclasspath"_s,
			u"ブートストラップ・クラスパスが-source {0}と一緒に設定されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.source.no.system.modules.path"_s,
			u"システム・モジュール・パスが-source {0}と一緒に設定されていません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.source.target.conflict"_s,
			u"ソース・リリース{0}にはターゲット・リリース{1}が必要です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.static.not.qualified.by.type"_s,
			u"static {0}は式ではなく型名{1}で修飾する必要があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.sun.proprietary"_s,
			u"{0}は内部所有のAPIであり、今後のリリースで削除される可能性があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.target.default.source.conflict"_s,
			u"ターゲット・リリース{0}がデフォルトのソース・リリース{1}と競合しています"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.trailing.white.space.will.be.removed"_s,
			u"末尾の空白は除去されます"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.try.explicit.close.call"_s,
			u"自動クローズ可能なリソースにおけるclose()の明示的呼出し"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.try.resource.not.referenced"_s,
			u"自動クローズ可能なリソース{0}は対応するtry文の本体では参照されません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.try.resource.throws.interrupted.exc"_s,
			u"自動クローズ可能なリソース{0}に、InterruptedExceptionをスローする可能性があるメンバー・メソッドclose()があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.assign"_s,
			u"{0}から{1}への無検査代入です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.assign.to.var"_s,
			u"raw型{1}のメンバーとして変数{0}への無検査代入です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.call.mbr.of.raw.type"_s,
			u"raw型{1}のメンバーとしての{0}への無検査呼出しです"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.cast.to.type"_s,
			u"型{0}への無検査キャストです"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.generic.array.creation"_s,
			u"型{0}の可変引数パラメータに対する総称型配列の無検査作成です"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.meth.invocation.applied"_s,
			u"無検査メソッド呼出し: {4} {5}の{0} {1}は指定された型に適用されます\n期待値: {2}\n検出値:    {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.varargs.non.reifiable.type"_s,
			u"パラメータ化された可変引数型{0}からのヒープ汚染の可能性があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.underscore.as.identifier"_s,
			u"リリース9から\'\'_\'\'はキーワードなので識別子として使用することはできません"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unexpected.archive.file"_s,
			u"アーカイブ・ファイルの予期しない拡張子: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unknown.enum.constant"_s,
			u"不明な列挙型定数です{1}.{2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unknown.enum.constant.reason"_s,
			u"不明な列挙型定数です{1}.{2}\n理由: {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unreachable.catch"_s,
			u"catch句に移すことができません\nスローされたタイプ{0}はすでに捕捉されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unreachable.catch.1"_s,
			u"catch句に移すことができません\nスローされたタイプ{0}はすでに捕捉されています"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.varargs.redundant.trustme.anno"_s,
			u"{0}注釈が冗長です。{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.varargs.unsafe.use.varargs.param"_s,
			u"可変引数メソッドは、型情報保持可能でない可変引数パラメータ{0}からのヒープ汚染の原因となる可能性があります"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.warning"_s,
			u"警告:"_s
		})
	});
}

compiler_ja::compiler_ja() {
}

$Class* compiler_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(compiler_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(compiler_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.resources.compiler_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(compiler_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(compiler_ja);
	});
	return class$;
}

$Class* compiler_ja::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com