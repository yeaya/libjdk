#include <sun/security/tools/jarsigner/Resources_ja.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace security {
		namespace tools {
			namespace jarsigner {

$ObjectArray2* Resources_ja::contents = nullptr;

void Resources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_ja::getContents() {
	return Resources_ja::contents;
}

void Resources_ja::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_ja::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"SPACE"_s,
			" "_s
		}),
		$$new($ObjectArray, {
			"6SPACE"_s,
			"      "_s
		}),
		$$new($ObjectArray, {
			"COMMA"_s,
			", "_s
		}),
		$$new($ObjectArray, {
			"provclass.not.a.provider"_s,
			u"%sはプロバイダではありません"_s
		}),
		$$new($ObjectArray, {
			"provider.name.not.found"_s,
			u"プロバイダ名\"%s\"が見つかりません"_s
		}),
		$$new($ObjectArray, {
			"provider.class.not.found"_s,
			u"プロバイダ\"%s\"が見つかりません"_s
		}),
		$$new($ObjectArray, {
			"jarsigner.error."_s,
			u"jarsignerエラー: "_s
		}),
		$$new($ObjectArray, {
			"Illegal.option."_s,
			u"不正なオプション: "_s
		}),
		$$new($ObjectArray, {
			"This.option.is.forremoval"_s,
			u"このオプションは非推奨であり、将来のリリースで削除される予定です: "_s
		}),
		$$new($ObjectArray, {
			".keystore.must.be.NONE.if.storetype.is.{0}"_s,
			u"-storetypeが{0}の場合、-keystoreはNONEである必要があります"_s
		}),
		$$new($ObjectArray, {
			".keypass.can.not.be.specified.if.storetype.is.{0}"_s,
			u"-storetypeが{0}の場合、-keypassは指定できません"_s
		}),
		$$new($ObjectArray, {
			"If.protected.is.specified.then.storepass.and.keypass.must.not.be.specified"_s,
			u"-protectedを指定する場合は、-storepassおよび-keypassを指定しないでください"_s
		}),
		$$new($ObjectArray, {
			"If.keystore.is.not.password.protected.then.storepass.and.keypass.must.not.be.specified"_s,
			u"キーストアがパスワードで保護されていない場合、-storepassおよび-keypassを指定しないでください"_s
		}),
		$$new($ObjectArray, {
			"Usage.jarsigner.options.jar.file.alias"_s,
			u"使用方法: jarsigner [options] jar-file alias"_s
		}),
		$$new($ObjectArray, {
			".jarsigner.verify.options.jar.file.alias."_s,
			"       jarsigner -verify [options] jar-file [alias...]"_s
		}),
		$$new($ObjectArray, {
			".keystore.url.keystore.location"_s,
			u"[-keystore <url>]           キーストアの位置"_s
		}),
		$$new($ObjectArray, {
			".storepass.password.password.for.keystore.integrity"_s,
			u"[-storepass <password>]     キーストア整合性のためのパスワード"_s
		}),
		$$new($ObjectArray, {
			".storetype.type.keystore.type"_s,
			u"[-storetype <type>]         キーストアの型"_s
		}),
		$$new($ObjectArray, {
			".keypass.password.password.for.private.key.if.different."_s,
			u"[-keypass <password>]       秘密キーのパスワード(異なる場合)"_s
		}),
		$$new($ObjectArray, {
			".certchain.file.name.of.alternative.certchain.file"_s,
			u"[-certchain <file>]         代替証明書チェーン・ファイルの名前"_s
		}),
		$$new($ObjectArray, {
			".sigfile.file.name.of.SF.DSA.file"_s,
			u"[-sigfile <file>]           .SF/.DSAファイルの名前"_s
		}),
		$$new($ObjectArray, {
			".signedjar.file.name.of.signed.JAR.file"_s,
			u"[-signedjar <file>]         署名付きJARファイルの名前"_s
		}),
		$$new($ObjectArray, {
			".digestalg.algorithm.name.of.digest.algorithm"_s,
			u"[-digestalg <algorithm>]    ダイジェスト・アルゴリズムの名前"_s
		}),
		$$new($ObjectArray, {
			".sigalg.algorithm.name.of.signature.algorithm"_s,
			u"[-sigalg <algorithm>]       シグネチャ・アルゴリズムの名前"_s
		}),
		$$new($ObjectArray, {
			".verify.verify.a.signed.JAR.file"_s,
			u"[-verify]                   署名付きJARファイルの検証"_s
		}),
		$$new($ObjectArray, {
			".verbose.suboptions.verbose.output.when.signing.verifying."_s,
			u"[-verbose[:suboptions]]     署名/検証時の詳細出力。"_s
		}),
		$$new($ObjectArray, {
			".suboptions.can.be.all.grouped.or.summary"_s,
			u"                            サブオプションとして、all、groupedまたはsummaryを使用できます"_s
		}),
		$$new($ObjectArray, {
			".certs.display.certificates.when.verbose.and.verifying"_s,
			u"[-certs]                    詳細出力および検証時に証明書を表示"_s
		}),
		$$new($ObjectArray, {
			".certs.revocation.check"_s,
			u"[-revCheck]                 証明書失効チェックの有効化"_s
		}),
		$$new($ObjectArray, {
			".tsa.url.location.of.the.Timestamping.Authority"_s,
			u"[-tsa <url>]                タイムスタンプ局の場所"_s
		}),
		$$new($ObjectArray, {
			".tsacert.alias.public.key.certificate.for.Timestamping.Authority"_s,
			u"[-tsacert <alias>]          タイムスタンプ局の公開キー証明書"_s
		}),
		$$new($ObjectArray, {
			".tsapolicyid.tsapolicyid.for.Timestamping.Authority"_s,
			u"[-tsapolicyid <oid>]        タイムスタンプ局のTSAPolicyID"_s
		}),
		$$new($ObjectArray, {
			".tsadigestalg.algorithm.of.digest.data.in.timestamping.request"_s,
			u"[-tsadigestalg <algorithm>] タイムスタンプ・リクエストのダイジェスト・データのアルゴリズム"_s
		}),
		$$new($ObjectArray, {
			".altsigner.class.class.name.of.an.alternative.signing.mechanism"_s,
			u"[-altsigner <class>]        代替署名メカニズムのクラス名\n                            (このオプションは非推奨であり、将来のリリースで削除される予定です。)"_s
		}),
		$$new($ObjectArray, {
			".altsignerpath.pathlist.location.of.an.alternative.signing.mechanism"_s,
			u"[-altsignerpath <pathlist>] 代替署名メカニズムの場所\n                            (このオプションは非推奨であり、将来のリリースで削除される予定です。)"_s
		}),
		$$new($ObjectArray, {
			".internalsf.include.the.SF.file.inside.the.signature.block"_s,
			u"[-internalsf]               シグネチャ・ブロックに.SFファイルを含める"_s
		}),
		$$new($ObjectArray, {
			".sectionsonly.don.t.compute.hash.of.entire.manifest"_s,
			u"[-sectionsonly]             マニフェスト全体のハッシュは計算しない"_s
		}),
		$$new($ObjectArray, {
			".protected.keystore.has.protected.authentication.path"_s,
			u"[-protected]                キーストアには保護された認証パスがある"_s
		}),
		$$new($ObjectArray, {
			".providerName.name.provider.name"_s,
			u"[-providerName <name>]      プロバイダ名"_s
		}),
		$$new($ObjectArray, {
			".add.provider.option"_s,
			u"[-addprovider <name>        名前でセキュリティ・プロバイダを追加する(SunPKCS11など)"_s
		}),
		$$new($ObjectArray, {
			".providerArg.option.1"_s,
			u"  [-providerArg <arg>]] ... -addproviderの引数を構成する"_s
		}),
		$$new($ObjectArray, {
			".providerClass.option"_s,
			u"[-providerClass <class>     完全修飾クラス名でセキュリティ・プロバイダを追加する"_s
		}),
		$$new($ObjectArray, {
			".providerArg.option.2"_s,
			u"  [-providerArg <arg>]] ... -providerClassの引数を構成する"_s
		}),
		$$new($ObjectArray, {
			".strict.treat.warnings.as.errors"_s,
			u"[-strict]                   警告をエラーとして処理"_s
		}),
		$$new($ObjectArray, {
			".conf.url.specify.a.pre.configured.options.file"_s,
			u"[-conf <url>]               事前構成済のオプション・ファイルを指定する"_s
		}),
		$$new($ObjectArray, {
			".print.this.help.message"_s,
			u"[-? -h --help]              このヘルプ・メッセージを出力します"_s
		}),
		$$new($ObjectArray, {
			"Option.lacks.argument"_s,
			u"オプションに引数がありません"_s
		}),
		$$new($ObjectArray, {
			"Please.type.jarsigner.help.for.usage"_s,
			u"使用方法についてはjarsigner --helpと入力してください"_s
		}),
		$$new($ObjectArray, {
			"Please.specify.jarfile.name"_s,
			u"jarfile名を指定してください"_s
		}),
		$$new($ObjectArray, {
			"Please.specify.alias.name"_s,
			u"別名を指定してください"_s
		}),
		$$new($ObjectArray, {
			"Only.one.alias.can.be.specified"_s,
			u"別名は1つのみ指定できます"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.signed.entries.which.is.not.signed.by.the.specified.alias.es."_s,
			u"このjarに含まれる署名済エントリは、指定された別名によって署名されていません。"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.signed.entries.that.s.not.signed.by.alias.in.this.keystore."_s,
			u"このjarに含まれる署名済エントリは、このキーストア内の別名によって署名されていません。"_s
		}),
		$$new($ObjectArray, {
			"s"_s,
			"s"_s
		}),
		$$new($ObjectArray, {
			"m"_s,
			"m"_s
		}),
		$$new($ObjectArray, {
			"k"_s,
			"k"_s
		}),
		$$new($ObjectArray, {
			".and.d.more."_s,
			u"(他にも%d個)"_s
		}),
		$$new($ObjectArray, {
			".s.signature.was.verified."_s,
			u"  s=シグネチャが検証されました "_s
		}),
		$$new($ObjectArray, {
			".m.entry.is.listed.in.manifest"_s,
			u"  m=エントリがマニフェスト内にリストされます"_s
		}),
		$$new($ObjectArray, {
			".k.at.least.one.certificate.was.found.in.keystore"_s,
			u"  k=1つ以上の証明書がキーストアで検出されました"_s
		}),
		$$new($ObjectArray, {
			".X.not.signed.by.specified.alias.es."_s,
			u"  X =指定した別名で署名されていません"_s
		}),
		$$new($ObjectArray, {
			"no.manifest."_s,
			u"マニフェストは存在しません。"_s
		}),
		$$new($ObjectArray, {
			".Signature.related.entries."_s,
			u"(シグネチャ関連エントリ)"_s
		}),
		$$new($ObjectArray, {
			".Unsigned.entries."_s,
			u"(署名なしのエントリ)"_s
		}),
		$$new($ObjectArray, {
			"jar.is.unsigned"_s,
			u"jarは署名されていません。"_s
		}),
		$$new($ObjectArray, {
			"jar.treated.unsigned"_s,
			u"警告: 署名が構文解析できないか検証できないため、このjarは署名なしとして扱われます。詳細は、デバッグを有効にして(-J-Djava.security.debug=jar) jarsignerを再実行してください。"_s
		}),
		$$new($ObjectArray, {
			"jar.treated.unsigned.see.weak"_s,
			u"このjarは、現在無効になっている弱いアルゴリズムで署名されているため、署名なしとして扱われます。\n\n詳細は、-verboseオプションを使用してjarsignerを再実行してください。"_s
		}),
		$$new($ObjectArray, {
			"jar.treated.unsigned.see.weak.verbose"_s,
			u"警告: このjarは、セキュリティ・プロパティによって現在無効になっている弱いアルゴリズムで署名されているため、署名なしとして扱われます:"_s
		}),
		$$new($ObjectArray, {
			"jar.signed."_s,
			u"jarは署名されました。"_s
		}),
		$$new($ObjectArray, {
			"jar.signed.with.signer.errors."_s,
			u"jarは署名されました - 署名者エラーがあります。"_s
		}),
		$$new($ObjectArray, {
			"jar.verified."_s,
			u"jarが検証されました。"_s
		}),
		$$new($ObjectArray, {
			"jar.verified.with.signer.errors."_s,
			u"jarは検証されました - 署名者エラーがあります。"_s
		}),
		$$new($ObjectArray, {
			"history.with.ts"_s,
			u"- 署名者: \"%1$s\"\n    ダイジェスト・アルゴリズム: %2$s\n    署名アルゴリズム: %3$s、%4$s\n  タイムスタンプ付加者: \"%6$s\" 日時: %5$tc\n    タイムスタンプのダイジェスト・アルゴリズム: %7$s\n    タイムスタンプの署名アルゴリズム: %8$s、%9$s"_s
		}),
		$$new($ObjectArray, {
			"history.without.ts"_s,
			u"- 署名者: \"%1$s\"\n    ダイジェスト・アルゴリズム: %2$s\n    署名アルゴリズム: %3$s、%4$s"_s
		}),
		$$new($ObjectArray, {
			"history.unparsable"_s,
			u"- 署名関連ファイル%sを解析できません"_s
		}),
		$$new($ObjectArray, {
			"history.nosf"_s,
			u"- 署名関連ファイルMETA-INF/%s.SFがありません"_s
		}),
		$$new($ObjectArray, {
			"history.nobk"_s,
			u"- 署名関連ファイルMETA-INF/%s.SFのブロック・ファイルがありません"_s
		}),
		$$new($ObjectArray, {
			"with.weak"_s,
			u"%s (弱)"_s
		}),
		$$new($ObjectArray, {
			"with.disabled"_s,
			u"%s (無効)"_s
		}),
		$$new($ObjectArray, {
			"key.bit"_s,
			u"%dビット・キー"_s
		}),
		$$new($ObjectArray, {
			"key.bit.weak"_s,
			u"%dビット・キー(弱)"_s
		}),
		$$new($ObjectArray, {
			"key.bit.disabled"_s,
			u"%dビット・キー (無効)"_s
		}),
		$$new($ObjectArray, {
			"unknown.size"_s,
			u"不明サイズ"_s
		}),
		$$new($ObjectArray, {
			"extra.attributes.detected"_s,
			u"POSIXファイル権限またはsymlink(あるいはその両方)の属性が検出されました。署名中はこれらの属性は無視され、署名によって保護されません。"_s
		}),
		$$new($ObjectArray, {
			"jarsigner."_s,
			"jarsigner: "_s
		}),
		$$new($ObjectArray, {
			"signature.filename.must.consist.of.the.following.characters.A.Z.0.9.or."_s,
			u"シグネチャのファイル名に使用できる文字は、A-Z、0-9、_、- のみです。"_s
		}),
		$$new($ObjectArray, {
			"unable.to.open.jar.file."_s,
			u"次のjarファイルを開くことができません: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.create."_s,
			u"作成できません: "_s
		}),
		$$new($ObjectArray, {
			".adding."_s,
			u"   追加中: "_s
		}),
		$$new($ObjectArray, {
			".updating."_s,
			u" 更新中: "_s
		}),
		$$new($ObjectArray, {
			".signing."_s,
			u"  署名中: "_s
		}),
		$$new($ObjectArray, {
			"attempt.to.rename.signedJarFile.to.jarFile.failed"_s,
			u"{0}の名前を{1}に変更しようとしましたが失敗しました"_s
		}),
		$$new($ObjectArray, {
			"attempt.to.rename.jarFile.to.origJar.failed"_s,
			u"{0}の名前を{1}に変更しようとしましたが失敗しました"_s
		}),
		$$new($ObjectArray, {
			"unable.to.sign.jar."_s,
			u"jarに署名できません: "_s
		}),
		$$new($ObjectArray, {
			"Enter.Passphrase.for.keystore."_s,
			u"キーストアのパスワードを入力してください: "_s
		}),
		$$new($ObjectArray, {
			"keystore.load."_s,
			u"キーストアのロード: "_s
		}),
		$$new($ObjectArray, {
			"certificate.exception."_s,
			u"証明書例外: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.keystore.class."_s,
			u"キーストア・クラスのインスタンスを生成できません: "_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.not.found.for.alias.alias.must.reference.a.valid.KeyStore.key.entry.containing.a.private.key.and"_s,
			u"次の証明書チェーンが見つかりません: {0}。{1}は、秘密キーおよび対応する公開キー証明書チェーンを含む有効なKeyStoreキー・エントリを参照する必要があります。"_s
		}),
		$$new($ObjectArray, {
			"File.specified.by.certchain.does.not.exist"_s,
			u"-certchainで指定されているファイルは存在しません"_s
		}),
		$$new($ObjectArray, {
			"Cannot.restore.certchain.from.file.specified"_s,
			u"指定されたファイルから証明書チェーンを復元できません"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.not.found.in.the.file.specified."_s,
			u"証明書チェーンは指定されたファイルに見つかりません。"_s
		}),
		$$new($ObjectArray, {
			"found.non.X.509.certificate.in.signer.s.chain"_s,
			u"署名者の連鎖内で非X.509証明書が検出されました"_s
		}),
		$$new($ObjectArray, {
			"Enter.key.password.for.alias."_s,
			u"{0}のキー・パスワードを入力してください: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.recover.key.from.keystore"_s,
			u"キーストアからキーを復元できません"_s
		}),
		$$new($ObjectArray, {
			"key.associated.with.alias.not.a.private.key"_s,
			u"{0}と関連付けられたキーは、秘密キーではありません"_s
		}),
		$$new($ObjectArray, {
			"you.must.enter.key.password"_s,
			u"キー・パスワードを入力する必要があります"_s
		}),
		$$new($ObjectArray, {
			"unable.to.read.password."_s,
			u"パスワードを読み込めません: "_s
		}),
		$$new($ObjectArray, {
			"certificate.is.valid.from"_s,
			u"証明書は{0}から{1}まで有効です"_s
		}),
		$$new($ObjectArray, {
			"certificate.expired.on"_s,
			u"証明書は{0}に失効しました"_s
		}),
		$$new($ObjectArray, {
			"certificate.is.not.valid.until"_s,
			u"証明書は{0}まで有効ではありません"_s
		}),
		$$new($ObjectArray, {
			"certificate.will.expire.on"_s,
			u"証明書は{0}に失効します"_s
		}),
		$$new($ObjectArray, {
			".Invalid.certificate.chain."_s,
			u"[無効な証明書チェーン: "_s
		}),
		$$new($ObjectArray, {
			".Invalid.TSA.certificate.chain."_s,
			u"[無効なTSA証明書チェーン: "_s
		}),
		$$new($ObjectArray, {
			"requesting.a.signature.timestamp"_s,
			u"シグネチャ・タイムスタンプのリクエスト"_s
		}),
		$$new($ObjectArray, {
			"TSA.location."_s,
			u"TSAの場所: "_s
		}),
		$$new($ObjectArray, {
			"TSA.certificate."_s,
			u"TSA証明書: "_s
		}),
		$$new($ObjectArray, {
			"no.response.from.the.Timestamping.Authority."_s,
			u"タイムスタンプ局からのレスポンスがありません。ファイアウォールを介して接続するときは、必要に応じてHTTPまたはHTTPSプロキシを指定してください。jarsignerに次のオプションを指定してください:"_s
		}),
		$$new($ObjectArray, {
			"or"_s,
			u"または"_s
		}),
		$$new($ObjectArray, {
			"Certificate.not.found.for.alias.alias.must.reference.a.valid.KeyStore.entry.containing.an.X.509.public.key.certificate.for.the"_s,
			u"証明書が見つかりませんでした: {0}。{1}はタイムスタンプ局のX.509公開キー証明書が含まれている有効なKeyStoreエントリを参照する必要があります。"_s
		}),
		$$new($ObjectArray, {
			"using.an.alternative.signing.mechanism"_s,
			u"代替署名メカニズムの使用"_s
		}),
		$$new($ObjectArray, {
			"entry.was.signed.on"_s,
			u"エントリは{0}に署名されました"_s
		}),
		$$new($ObjectArray, {
			"Warning."_s,
			u"警告: "_s
		}),
		$$new($ObjectArray, {
			"Error."_s,
			u"エラー: "_s
		}),
		$$new($ObjectArray, {
			"...Signer"_s,
			u">>> 署名者"_s
		}),
		$$new($ObjectArray, {
			"...TSA"_s,
			">>> TSA"_s
		}),
		$$new($ObjectArray, {
			"trusted.certificate"_s,
			u"信頼できる証明書"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.unsigned.entries.which.have.not.been.integrity.checked."_s,
			u"このjarには、整合性チェックをしていない署名なしのエントリが含まれています。 "_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.has.expired."_s,
			u"このjarには、署名者の証明書が期限切れのエントリが含まれています。 "_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.will.expire.within.six.months."_s,
			u"このjarには、署名者の証明書が6か月以内に期限切れとなるエントリが含まれています。 "_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.is.not.yet.valid."_s,
			u"このjarには、署名者の証明書がまだ有効になっていないエントリが含まれています。 "_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.is.self.signed."_s,
			u"このjarには、署名者の証明書が自己署名されているエントリが含まれています。 "_s
		}),
		$$new($ObjectArray, {
			"Re.run.with.the.verbose.and.certs.options.for.more.details."_s,
			u"詳細は、-verboseおよび-certsオプションを使用して再実行してください。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.has.expired."_s,
			u"署名者の証明書は期限切れです。"_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.expired.1.but.usable.2"_s,
			u"タイムスタンプは%1$tY-%1$tm-%1$tdに期限切れになります。ただし、JARは署名者の証明書が%2$tY-%2$tm-%2$tdに期限切れになるまで有効です。"_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.has.expired."_s,
			u"タイムスタンプは期限切れになりました。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.will.expire.within.six.months."_s,
			u"署名者の証明書は6か月以内に期限切れになります。"_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.will.expire.within.one.year.on.1"_s,
			u"タイムスタンプは1年以内の%1$tY-%1$tm-%1$tdに期限切れになります。"_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.will.expire.within.one.year.on.1.but.2"_s,
			u"タイムスタンプは1年以内の%1$tY-%1$tm-%1$tdに期限切れになります。ただし、JARは署名者の証明書が%2$tY-%2$tm-%2$tdに期限切れになるまで有効です。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.is.not.yet.valid."_s,
			u"署名者の証明書はまだ有効になっていません。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s,
			u"署名者証明書のKeyUsage拡張機能では、コード署名は許可されません。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s,
			u"署名者証明書のExtendedKeyUsage拡張機能では、コード署名は許可されません。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s,
			u"署名者証明書のNetscapeCertType拡張機能では、コード署名は許可されません。"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s,
			u"このjarには、署名者証明書のKeyUsage拡張機能がコード署名を許可しないエントリが含まれています。"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s,
			u"このjarには、署名者証明書のExtendedKeyUsage拡張機能がコード署名を許可しないエントリが含まれています。"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s,
			u"このjarには、署名者証明書のNetscapeCertType拡張機能がコード署名を許可しないエントリが含まれています。"_s
		}),
		$$new($ObjectArray, {
			".{0}.extension.does.not.support.code.signing."_s,
			u"[{0}拡張機能はコード署名をサポートしていません]"_s
		}),
		$$new($ObjectArray, {
			"The.signer.s.certificate.chain.is.invalid.reason.1"_s,
			u"署名者の証明書チェーンが無効です。理由: %s"_s
		}),
		$$new($ObjectArray, {
			"The.tsa.certificate.chain.is.invalid.reason.1"_s,
			u"TSA証明書チェーンが無効です。理由: %s"_s
		}),
		$$new($ObjectArray, {
			"The.signer.s.certificate.is.self.signed."_s,
			u"署名者の証明書は自己署名されています。"_s
		}),
		$$new($ObjectArray, {
			"The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s,
			u"%1$sアルゴリズム(%2$sオプションに指定)は、セキュリティ・リスクとみなされます。このアルゴリズムは将来の更新で無効化されます。"_s
		}),
		$$new($ObjectArray, {
			"The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk.and.is.disabled."_s,
			u"%1$sアルゴリズム(%2$sオプションに指定)は、セキュリティ・リスクとみなされ、無効化されています。"_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s,
			u"%1$sタイムスタンプ・ダイジェスト・アルゴリズムは、セキュリティ・リスクとみなされます。このアルゴリズムは将来の更新で無効化されます。"_s
		}),
		$$new($ObjectArray, {
			"The.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s,
			u"%1$sダイジェスト・アルゴリズムは、セキュリティ・リスクとみなされます。このアルゴリズムは将来の更新で無効化されます。"_s
		}),
		$$new($ObjectArray, {
			"The.signature.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s,
			u"%1$s署名アルゴリズムは、セキュリティ・リスクとみなされます。このアルゴリズムは将来の更新で無効化されます。"_s
		}),
		$$new($ObjectArray, {
			"The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk..This.key.size.will.be.disabled.in.a.future.update."_s,
			u"%1$s署名キーには%2$dのキー・サイズがあり、これはセキュリティ・リスクとみなされます。このキー・サイズは将来の更新で無効化されます。"_s
		}),
		$$new($ObjectArray, {
			"The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk.and.is.disabled."_s,
			u"%1$s署名キーには%2$dのキー・サイズがあり、これはセキュリティ・リスクとみなされます。"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.certificate.chain.is.invalid.reason.1"_s,
			u"このjarには、証明書チェーンが無効なエントリが含まれています。理由: %s"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.tsa.certificate.chain.is.invalid.reason.1"_s,
			u"このjarには、TSA証明書チェーンが無効なエントリが含まれています。理由: %s"_s
		}),
		$$new($ObjectArray, {
			"no.timestamp.signing"_s,
			u"-tsaまたは-tsacertが指定されていないため、このjarにはタイムスタンプが付加されていません。タイムスタンプがないと、署名者証明書の有効期限(%1$tY-%1$tm-%1$td)後に、ユーザーはこのjarを検証できない可能性があります。"_s
		}),
		$$new($ObjectArray, {
			"invalid.timestamp.signing"_s,
			u"タイムスタンプが無効です。有効なタイムスタンプがないと、署名者証明書の有効期限(%1$tY-%1$tm-%1$td)後に、ユーザーはこのjarを検証できない可能性があります。"_s
		}),
		$$new($ObjectArray, {
			"no.timestamp.verifying"_s,
			u"このjarには、タイムスタンプがない署名が含まれています。タイムスタンプがないと、いずれかの署名者証明書の有効期限後に(早ければ%1$tY-%1$tm-%1$td)ユーザーはこのjarを検証できない可能性があります。"_s
		}),
		$$new($ObjectArray, {
			"bad.timestamp.verifying"_s,
			u"このjarには、無効なタイムスタンプのある署名が含まれています。有効なタイムスタンプがないと、いずれかの署名者証明書の有効期限後に(早ければ%1$tY-%1$tm-%1$td)ユーザーはこのjarを検証できない可能性があります。\n詳細は、-J-Djava.security.debug=jarを指定してjarsignerを再実行してください。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.will.expire.on.1."_s,
			u"署名者の証明書は%1$tY-%1$tm-%1$tdに期限切れになります。"_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.will.expire.on.1."_s,
			u"タイムスタンプは%1$tY-%1$tm-%1$tdに期限切れになります。"_s
		}),
		$$new($ObjectArray, {
			"signer.cert.expired.1.but.timestamp.good.2."_s,
			u"署名者の証明書は%1$tY-%1$tm-%1$tdに期限切れになります。ただし、JARはタイムスタンプが%2$tY-%2$tm-%2$tdに期限切れになるまで有効です。"_s
		}),
		$$new($ObjectArray, {
			"Unknown.password.type."_s,
			u"不明なパスワード・タイプ: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.environment.variable."_s,
			u"環境変数が見つかりません: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.file."_s,
			u"ファイルが見つかりません: "_s
		}),
		$$new($ObjectArray, {
			"event.ocsp.check"_s,
			u"%sのOCSPサーバーに接続しています..."_s
		}),
		$$new($ObjectArray, {
			"event.crl.check"_s,
			u"%sからCRLをダウンロードしています..."_s
		})
	}));
}

Resources_ja::Resources_ja() {
}

$Class* Resources_ja::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_ja, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.tools.jarsigner.Resources_ja",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_ja, name, initialize, &classInfo$$, Resources_ja::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_ja);
	});
	return class$;
}

$Class* Resources_ja::class$ = nullptr;

			} // jarsigner
		} // tools
	} // security
} // sun