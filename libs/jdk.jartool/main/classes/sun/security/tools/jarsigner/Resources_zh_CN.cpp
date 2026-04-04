#include <sun/security/tools/jarsigner/Resources_zh_CN.h>
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

$ObjectArray2* Resources_zh_CN::contents = nullptr;

void Resources_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_zh_CN::getContents() {
	return Resources_zh_CN::contents;
}

void Resources_zh_CN::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources_zh_CN::contents, $new($ObjectArray2, {
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
			u"%s不是提供方"_s
		}),
		$$new($ObjectArray, {
			"provider.name.not.found"_s,
			u"未找到名为 \"%s\" 的提供方"_s
		}),
		$$new($ObjectArray, {
			"provider.class.not.found"_s,
			u"未找到提供方 \"%s\""_s
		}),
		$$new($ObjectArray, {
			"jarsigner.error."_s,
			u"jarsigner 错误: "_s
		}),
		$$new($ObjectArray, {
			"Illegal.option."_s,
			u"非法选项: "_s
		}),
		$$new($ObjectArray, {
			"This.option.is.forremoval"_s,
			u"该选项已过时，在将来的发行版中将被删除："_s
		}),
		$$new($ObjectArray, {
			".keystore.must.be.NONE.if.storetype.is.{0}"_s,
			u"如果 -storetype 为 {0}, 则 -keystore 必须为 NONE"_s
		}),
		$$new($ObjectArray, {
			".keypass.can.not.be.specified.if.storetype.is.{0}"_s,
			u"如果 -storetype 为 {0}, 则不能指定 -keypass"_s
		}),
		$$new($ObjectArray, {
			"If.protected.is.specified.then.storepass.and.keypass.must.not.be.specified"_s,
			u"如果指定了 -protected, 则不能指定 -storepass 和 -keypass"_s
		}),
		$$new($ObjectArray, {
			"If.keystore.is.not.password.protected.then.storepass.and.keypass.must.not.be.specified"_s,
			u"如果密钥库未受口令保护, 则不能指定 -storepass 和 -keypass"_s
		}),
		$$new($ObjectArray, {
			"Usage.jarsigner.options.jar.file.alias"_s,
			u"用法: jarsigner [选项] jar-file 别名"_s
		}),
		$$new($ObjectArray, {
			".jarsigner.verify.options.jar.file.alias."_s,
			u"       jarsigner -verify [选项] jar-file [别名...]"_s
		}),
		$$new($ObjectArray, {
			".keystore.url.keystore.location"_s,
			u"[-keystore <url>]           密钥库位置"_s
		}),
		$$new($ObjectArray, {
			".storepass.password.password.for.keystore.integrity"_s,
			u"[-storepass <口令>]         用于密钥库完整性的口令"_s
		}),
		$$new($ObjectArray, {
			".storetype.type.keystore.type"_s,
			u"[-storetype <类型>]         密钥库类型"_s
		}),
		$$new($ObjectArray, {
			".keypass.password.password.for.private.key.if.different."_s,
			u"[-keypass <口令>]           私有密钥的口令 (如果不同)"_s
		}),
		$$new($ObjectArray, {
			".certchain.file.name.of.alternative.certchain.file"_s,
			u"[-certchain <文件>]         替代证书链文件的名称"_s
		}),
		$$new($ObjectArray, {
			".sigfile.file.name.of.SF.DSA.file"_s,
			u"[-sigfile <文件>]           .SF/.DSA 文件的名称"_s
		}),
		$$new($ObjectArray, {
			".signedjar.file.name.of.signed.JAR.file"_s,
			u"[-signedjar <文件>]         已签名的 JAR 文件的名称"_s
		}),
		$$new($ObjectArray, {
			".digestalg.algorithm.name.of.digest.algorithm"_s,
			u"[-digestalg <算法>]        摘要算法的名称"_s
		}),
		$$new($ObjectArray, {
			".sigalg.algorithm.name.of.signature.algorithm"_s,
			u"[-sigalg <算法>]           签名算法的名称"_s
		}),
		$$new($ObjectArray, {
			".verify.verify.a.signed.JAR.file"_s,
			u"[-verify]                   验证已签名的 JAR 文件"_s
		}),
		$$new($ObjectArray, {
			".verbose.suboptions.verbose.output.when.signing.verifying."_s,
			u"[-verbose[:suboptions]]     签名/验证时输出详细信息。"_s
		}),
		$$new($ObjectArray, {
			".suboptions.can.be.all.grouped.or.summary"_s,
			u"                            子选项可以是 all, grouped 或 summary"_s
		}),
		$$new($ObjectArray, {
			".certs.display.certificates.when.verbose.and.verifying"_s,
			u"[-certs]                    输出详细信息和验证时显示证书"_s
		}),
		$$new($ObjectArray, {
			".certs.revocation.check"_s,
			u"[-revCheck]                 启用证书撤消检查"_s
		}),
		$$new($ObjectArray, {
			".tsa.url.location.of.the.Timestamping.Authority"_s,
			u"[-tsa <url>]                时间戳颁发机构的位置"_s
		}),
		$$new($ObjectArray, {
			".tsacert.alias.public.key.certificate.for.Timestamping.Authority"_s,
			u"[-tsacert <别名>]           时间戳颁发机构的公共密钥证书"_s
		}),
		$$new($ObjectArray, {
			".tsapolicyid.tsapolicyid.for.Timestamping.Authority"_s,
			u"[-tsapolicyid <oid>]        时间戳颁发机构的 TSAPolicyID"_s
		}),
		$$new($ObjectArray, {
			".tsadigestalg.algorithm.of.digest.data.in.timestamping.request"_s,
			u"[-tsadigestalg <算法>]      时间戳请求中的摘要数据的算法"_s
		}),
		$$new($ObjectArray, {
			".altsigner.class.class.name.of.an.alternative.signing.mechanism"_s,
			u"[-altsigner <class>]        替代签名机制的类名\n                            （该选项已过时，在将来的发行版中将被删除。）"_s
		}),
		$$new($ObjectArray, {
			".altsignerpath.pathlist.location.of.an.alternative.signing.mechanism"_s,
			u"[-altsignerpath <pathlist>] 替代签名机制的位置\n                            （该选项已过时，在将来的发行版中将被删除。）"_s
		}),
		$$new($ObjectArray, {
			".internalsf.include.the.SF.file.inside.the.signature.block"_s,
			u"[-internalsf]               在签名块内包含 .SF 文件"_s
		}),
		$$new($ObjectArray, {
			".sectionsonly.don.t.compute.hash.of.entire.manifest"_s,
			u"[-sectionsonly]             不计算整个清单的散列"_s
		}),
		$$new($ObjectArray, {
			".protected.keystore.has.protected.authentication.path"_s,
			u"[-protected]                密钥库具有受保护验证路径"_s
		}),
		$$new($ObjectArray, {
			".providerName.name.provider.name"_s,
			u"[-providerName <名称>]      提供方名称"_s
		}),
		$$new($ObjectArray, {
			".add.provider.option"_s,
			u"[-addprovider <名称>        按名称 (例如 SunPKCS11) 添加安全提供方"_s
		}),
		$$new($ObjectArray, {
			".providerArg.option.1"_s,
			u"  [-providerArg <参数>]] ... 配置 -addprovider 的参数"_s
		}),
		$$new($ObjectArray, {
			".providerClass.option"_s,
			u"[-providerClass <类>     按全限定类名添加安全提供方"_s
		}),
		$$new($ObjectArray, {
			".providerArg.option.2"_s,
			u"  [-providerArg <参数>]] ... 配置 -providerClass 的参数"_s
		}),
		$$new($ObjectArray, {
			".strict.treat.warnings.as.errors"_s,
			u"[-strict]                   将警告视为错误"_s
		}),
		$$new($ObjectArray, {
			".conf.url.specify.a.pre.configured.options.file"_s,
			u"[-conf <url>]               指定预配置的选项文件"_s
		}),
		$$new($ObjectArray, {
			".print.this.help.message"_s,
			u"[-? -h --help]              输出此帮助消息"_s
		}),
		$$new($ObjectArray, {
			"Option.lacks.argument"_s,
			u"选项缺少参数"_s
		}),
		$$new($ObjectArray, {
			"Please.type.jarsigner.help.for.usage"_s,
			u"请键入 jarsigner --help 以了解用法"_s
		}),
		$$new($ObjectArray, {
			"Please.specify.jarfile.name"_s,
			u"请指定 jarfile 名称"_s
		}),
		$$new($ObjectArray, {
			"Please.specify.alias.name"_s,
			u"请指定别名"_s
		}),
		$$new($ObjectArray, {
			"Only.one.alias.can.be.specified"_s,
			u"只能指定一个别名"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.signed.entries.which.is.not.signed.by.the.specified.alias.es."_s,
			u"此 jar 包含未由指定别名签名的已签名条目。"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.signed.entries.that.s.not.signed.by.alias.in.this.keystore."_s,
			u"此 jar 包含未由此密钥库中的别名签名的已签名条目。"_s
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
			u"(%d 及以上)"_s
		}),
		$$new($ObjectArray, {
			".s.signature.was.verified."_s,
			u"  s = 已验证签名 "_s
		}),
		$$new($ObjectArray, {
			".m.entry.is.listed.in.manifest"_s,
			u"  m = 在清单中列出条目"_s
		}),
		$$new($ObjectArray, {
			".k.at.least.one.certificate.was.found.in.keystore"_s,
			u"  k = 在密钥库中至少找到了一个证书"_s
		}),
		$$new($ObjectArray, {
			".X.not.signed.by.specified.alias.es."_s,
			u"  X = 未由指定别名签名"_s
		}),
		$$new($ObjectArray, {
			"no.manifest."_s,
			u"没有清单。"_s
		}),
		$$new($ObjectArray, {
			".Signature.related.entries."_s,
			u"(与签名相关的条目)"_s
		}),
		$$new($ObjectArray, {
			".Unsigned.entries."_s,
			u"(未签名条目)"_s
		}),
		$$new($ObjectArray, {
			"jar.is.unsigned"_s,
			u"jar 未签名。"_s
		}),
		$$new($ObjectArray, {
			"jar.treated.unsigned"_s,
			u"警告: 签名无法解析或验证, 该 jar 将被视为未签名。有关详细信息, 请在启用调试的情况下重新运行 jarsigner (-J-Djava.security.debug=jar)。"_s
		}),
		$$new($ObjectArray, {
			"jar.treated.unsigned.see.weak"_s,
			u"由于该 jar 是使用目前已禁用的弱算法签名的, 因此该 jar 将被视为未签名。\n\n有关详细信息, 请使用 -verbose 选项重新运行 jarsigner。"_s
		}),
		$$new($ObjectArray, {
			"jar.treated.unsigned.see.weak.verbose"_s,
			u"警告: 该 jar 将被视为未签名, 因为它是由目前安全属性禁用的弱算法签名的:"_s
		}),
		$$new($ObjectArray, {
			"jar.signed."_s,
			u"jar 已签名。"_s
		}),
		$$new($ObjectArray, {
			"jar.signed.with.signer.errors."_s,
			u"jar 已签名, 但出现签名者错误。"_s
		}),
		$$new($ObjectArray, {
			"jar.verified."_s,
			u"jar 已验证。"_s
		}),
		$$new($ObjectArray, {
			"jar.verified.with.signer.errors."_s,
			u"jar 已验证, 但出现签名者错误。"_s
		}),
		$$new($ObjectArray, {
			"history.with.ts"_s,
			u"- 由 \"%1$s\" 签名\n    摘要算法: %2$s\n    签名算法: %3$s, %4$s\n  由 \"%6$s\" 于 %5$tc 加时间戳\n    时间戳摘要算法: %7$s\n    时间戳签名算法: %8$s, %9$s"_s
		}),
		$$new($ObjectArray, {
			"history.without.ts"_s,
			u"- 由 \"%1$s\" 签名\n    摘要算法: %2$s\n    签名算法: %3$s, %4$s"_s
		}),
		$$new($ObjectArray, {
			"history.unparsable"_s,
			u"- 无法解析的与签名相关的文件 %s"_s
		}),
		$$new($ObjectArray, {
			"history.nosf"_s,
			u"- 缺少与签名相关的文件 META-INF/%s.SF"_s
		}),
		$$new($ObjectArray, {
			"history.nobk"_s,
			u"- 与签名相关的文件 META-INF/%s.SF 缺少块文件"_s
		}),
		$$new($ObjectArray, {
			"with.weak"_s,
			u"%s (弱)"_s
		}),
		$$new($ObjectArray, {
			"with.disabled"_s,
			u"%s（禁用）"_s
		}),
		$$new($ObjectArray, {
			"key.bit"_s,
			u"%d 位密钥"_s
		}),
		$$new($ObjectArray, {
			"key.bit.weak"_s,
			u"%d 位密钥 (弱)"_s
		}),
		$$new($ObjectArray, {
			"key.bit.disabled"_s,
			u"%d 位密钥（禁用）"_s
		}),
		$$new($ObjectArray, {
			"unknown.size"_s,
			u"未知大小"_s
		}),
		$$new($ObjectArray, {
			"extra.attributes.detected"_s,
			u"检测到 POSIX 文件权限和/或 symlink 属性。这些属性在进行签名时会被忽略，不受该签名的保护。"_s
		}),
		$$new($ObjectArray, {
			"jarsigner."_s,
			"jarsigner: "_s
		}),
		$$new($ObjectArray, {
			"signature.filename.must.consist.of.the.following.characters.A.Z.0.9.or."_s,
			u"签名文件名必须包含以下字符: A-Z, 0-9, _ 或 -"_s
		}),
		$$new($ObjectArray, {
			"unable.to.open.jar.file."_s,
			u"无法打开 jar 文件: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.create."_s,
			u"无法创建: "_s
		}),
		$$new($ObjectArray, {
			".adding."_s,
			u"   正在添加: "_s
		}),
		$$new($ObjectArray, {
			".updating."_s,
			u" 正在更新: "_s
		}),
		$$new($ObjectArray, {
			".signing."_s,
			u"  正在签名: "_s
		}),
		$$new($ObjectArray, {
			"attempt.to.rename.signedJarFile.to.jarFile.failed"_s,
			u"尝试将{0}重命名为{1}时失败"_s
		}),
		$$new($ObjectArray, {
			"attempt.to.rename.jarFile.to.origJar.failed"_s,
			u"尝试将{0}重命名为{1}时失败"_s
		}),
		$$new($ObjectArray, {
			"unable.to.sign.jar."_s,
			u"无法对 jar 进行签名: "_s
		}),
		$$new($ObjectArray, {
			"Enter.Passphrase.for.keystore."_s,
			u"输入密钥库的密码短语: "_s
		}),
		$$new($ObjectArray, {
			"keystore.load."_s,
			u"密钥库加载: "_s
		}),
		$$new($ObjectArray, {
			"certificate.exception."_s,
			u"证书异常错误: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.keystore.class."_s,
			u"无法实例化密钥库类: "_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.not.found.for.alias.alias.must.reference.a.valid.KeyStore.key.entry.containing.a.private.key.and"_s,
			u"找不到{0}的证书链。{1}必须引用包含私有密钥和相应的公共密钥证书链的有效密钥库密钥条目。"_s
		}),
		$$new($ObjectArray, {
			"File.specified.by.certchain.does.not.exist"_s,
			u"由 -certchain 指定的文件不存在"_s
		}),
		$$new($ObjectArray, {
			"Cannot.restore.certchain.from.file.specified"_s,
			u"无法从指定的文件还原 certchain"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.not.found.in.the.file.specified."_s,
			u"在指定的文件中找不到证书链。"_s
		}),
		$$new($ObjectArray, {
			"found.non.X.509.certificate.in.signer.s.chain"_s,
			u"在签名者的链中找到非 X.509 证书"_s
		}),
		$$new($ObjectArray, {
			"Enter.key.password.for.alias."_s,
			u"输入{0}的密钥口令: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.recover.key.from.keystore"_s,
			u"无法从密钥库中恢复密钥"_s
		}),
		$$new($ObjectArray, {
			"key.associated.with.alias.not.a.private.key"_s,
			u"与{0}关联的密钥不是私有密钥"_s
		}),
		$$new($ObjectArray, {
			"you.must.enter.key.password"_s,
			u"必须输入密钥口令"_s
		}),
		$$new($ObjectArray, {
			"unable.to.read.password."_s,
			u"无法读取口令: "_s
		}),
		$$new($ObjectArray, {
			"certificate.is.valid.from"_s,
			u"证书的有效期为{0}至{1}"_s
		}),
		$$new($ObjectArray, {
			"certificate.expired.on"_s,
			u"证书到期日期为 {0}"_s
		}),
		$$new($ObjectArray, {
			"certificate.is.not.valid.until"_s,
			u"直到{0}, 证书才有效"_s
		}),
		$$new($ObjectArray, {
			"certificate.will.expire.on"_s,
			u"证书将在{0}到期"_s
		}),
		$$new($ObjectArray, {
			".Invalid.certificate.chain."_s,
			u"[无效的证书链: "_s
		}),
		$$new($ObjectArray, {
			".Invalid.TSA.certificate.chain."_s,
			u"[无效 TSA 的证书链: "_s
		}),
		$$new($ObjectArray, {
			"requesting.a.signature.timestamp"_s,
			u"正在请求签名时间戳"_s
		}),
		$$new($ObjectArray, {
			"TSA.location."_s,
			u"TSA 位置: "_s
		}),
		$$new($ObjectArray, {
			"TSA.certificate."_s,
			u"TSA 证书: "_s
		}),
		$$new($ObjectArray, {
			"no.response.from.the.Timestamping.Authority."_s,
			u"时间戳颁发机构没有响应。如果要从防火墙后面连接, 则可能需要指定 HTTP 或 HTTPS 代理。请为 jarsigner 提供以下选项: "_s
		}),
		$$new($ObjectArray, {
			"or"_s,
			u"或"_s
		}),
		$$new($ObjectArray, {
			"Certificate.not.found.for.alias.alias.must.reference.a.valid.KeyStore.entry.containing.an.X.509.public.key.certificate.for.the"_s,
			u"找不到{0}的证书。{1}必须引用包含时间戳颁发机构的 X.509 公共密钥证书的有效密钥库条目。"_s
		}),
		$$new($ObjectArray, {
			"using.an.alternative.signing.mechanism"_s,
			u"正在使用替代的签名机制"_s
		}),
		$$new($ObjectArray, {
			"entry.was.signed.on"_s,
			u"条目的签名日期为 {0}"_s
		}),
		$$new($ObjectArray, {
			"Warning."_s,
			u"警告: "_s
		}),
		$$new($ObjectArray, {
			"Error."_s,
			u"错误: "_s
		}),
		$$new($ObjectArray, {
			"...Signer"_s,
			u">>> 签名者"_s
		}),
		$$new($ObjectArray, {
			"...TSA"_s,
			">>> TSA"_s
		}),
		$$new($ObjectArray, {
			"trusted.certificate"_s,
			u"可信证书"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.unsigned.entries.which.have.not.been.integrity.checked."_s,
			u"此 jar 包含尚未进行完整性检查的未签名条目。 "_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.has.expired."_s,
			u"此 jar 包含签名者证书已过期的条目。 "_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.will.expire.within.six.months."_s,
			u"此 jar 包含签名者证书将在六个月内过期的条目。 "_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.is.not.yet.valid."_s,
			u"此 jar 包含签名者证书仍无效的条目。 "_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.is.self.signed."_s,
			u"此 jar 包含其签名者证书为自签名证书的条目。"_s
		}),
		$$new($ObjectArray, {
			"Re.run.with.the.verbose.and.certs.options.for.more.details."_s,
			u"有关详细信息, 请使用 -verbose 和 -certs 选项重新运行。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.has.expired."_s,
			u"签名者证书已过期。"_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.expired.1.but.usable.2"_s,
			u"时间戳到期日期为 %1$tY-%1$tm-%1$td。不过，在签名者证书于 %2$tY-%2$tm-%2$td 到期之前，JAR 将有效。"_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.has.expired."_s,
			u"时间戳已到期。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.will.expire.within.six.months."_s,
			u"签名者证书将在六个月内过期。"_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.will.expire.within.one.year.on.1"_s,
			u"时间戳将在一年内于 %1$tY-%1$tm-%1$td 到期。"_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.will.expire.within.one.year.on.1.but.2"_s,
			u"时间戳将在一年内于 %1$tY-%1$tm-%1$td 到期。不过，在签名者证书于 %2$tY-%2$tm-%2$td 到期之前，JAR 将有效。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.is.not.yet.valid."_s,
			u"签名者证书仍无效。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s,
			u"由于签名者证书的 KeyUsage 扩展而无法进行代码签名。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s,
			u"由于签名者证书的 ExtendedKeyUsage 扩展而无法进行代码签名。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s,
			u"由于签名者证书的 NetscapeCertType 扩展而无法进行代码签名。"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s,
			u"此 jar 包含由于签名者证书的 KeyUsage 扩展而无法进行代码签名的条目。"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s,
			u"此 jar 包含由于签名者证书的 ExtendedKeyUsage 扩展而无法进行代码签名的条目。"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s,
			u"此 jar 包含由于签名者证书的 NetscapeCertType 扩展而无法进行代码签名的条目。"_s
		}),
		$$new($ObjectArray, {
			".{0}.extension.does.not.support.code.signing."_s,
			u"[{0} 扩展不支持代码签名]"_s
		}),
		$$new($ObjectArray, {
			"The.signer.s.certificate.chain.is.invalid.reason.1"_s,
			u"签名者证书链无效。原因: %s"_s
		}),
		$$new($ObjectArray, {
			"The.tsa.certificate.chain.is.invalid.reason.1"_s,
			u"TSA 证书链无效。原因: %s"_s
		}),
		$$new($ObjectArray, {
			"The.signer.s.certificate.is.self.signed."_s,
			u"签名者证书为自签名证书。"_s
		}),
		$$new($ObjectArray, {
			"The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s,
			u"为 %2$s 选项指定的 %1$s 算法被视为存在安全风险。此算法将在未来的更新中被禁用。"_s
		}),
		$$new($ObjectArray, {
			"The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk.and.is.disabled."_s,
			u"为 %2$s 选项指定的 %1$s 算法被视为存在安全风险而且被禁用。"_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s,
			u"%1$s 时间戳摘要算法被视为存在安全风险。此算法将在未来的更新中被禁用。"_s
		}),
		$$new($ObjectArray, {
			"The.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s,
			u"%1$s 摘要算法被视为存在安全风险。此算法将在未来的更新中被禁用。"_s
		}),
		$$new($ObjectArray, {
			"The.signature.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s,
			u"%1$s 签名算法被视为存在安全风险。此算法将在未来的更新中被禁用。"_s
		}),
		$$new($ObjectArray, {
			"The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk..This.key.size.will.be.disabled.in.a.future.update."_s,
			u"%1$s 签名密钥的密钥大小 %2$d 被视为存在安全风险。此密钥大小将在未来的更新中被禁用。"_s
		}),
		$$new($ObjectArray, {
			"The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk.and.is.disabled."_s,
			u"%1$s 签名密钥的密钥大小 %2$d 被视为存在安全风险而且被禁用。"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.certificate.chain.is.invalid.reason.1"_s,
			u"此 jar 包含其证书链无效的条目。原因: %s"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.tsa.certificate.chain.is.invalid.reason.1"_s,
			u"此 jar 包含其 TSA 证书链无效的条目。原因: %s"_s
		}),
		$$new($ObjectArray, {
			"no.timestamp.signing"_s,
			u"未提供 -tsa 或 -tsacert, 此 jar 没有时间戳。如果没有时间戳, 则在签名者证书的到期日期 (%1$tY-%1$tm-%1$td) 之后, 用户可能无法验证此 jar。"_s
		}),
		$$new($ObjectArray, {
			"invalid.timestamp.signing"_s,
			u"时间戳无效。如果没有有效的时间戳，则在签名者证书的到期日期 (%1$tY-%1$tm-%1$td) 之后，用户可能无法验证此 jar。"_s
		}),
		$$new($ObjectArray, {
			"no.timestamp.verifying"_s,
			u"此 jar 包含的签名没有时间戳。如果没有时间戳, 则在其中任一签名者证书到期 (最早为 %1$tY-%1$tm-%1$td) 之后, 用户可能无法验证此 jar。"_s
		}),
		$$new($ObjectArray, {
			"bad.timestamp.verifying"_s,
			u"此 jar 包含带有无效时间戳的签名。如果没有有效时间戳, 则在其中任一签名者证书到期 (最早为 %1$tY-%1$tm-%1$td) 之后, 用户可能无法验证此 jar。\n有关详细信息, 请使用 -J-Djava.security.debug=jar 重新运行 jarsigner。"_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.will.expire.on.1."_s,
			u"签名者证书将于 %1$tY-%1$tm-%1$td 到期。"_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.will.expire.on.1."_s,
			u"时间戳将于 %1$tY-%1$tm-%1$td 到期。"_s
		}),
		$$new($ObjectArray, {
			"signer.cert.expired.1.but.timestamp.good.2."_s,
			u"签名者证书到期日期为 %1$tY-%1$tm-%1$td。不过，在时间戳于 %2$tY-%2$tm-%2$td 到期之前，JAR 将有效。"_s
		}),
		$$new($ObjectArray, {
			"Unknown.password.type."_s,
			u"未知口令类型: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.environment.variable."_s,
			u"找不到环境变量: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.file."_s,
			u"找不到文件: "_s
		}),
		$$new($ObjectArray, {
			"event.ocsp.check"_s,
			u"正在联系位于 %s 的 OCSP 服务器..."_s
		}),
		$$new($ObjectArray, {
			"event.crl.check"_s,
			u"正在从 %s 下载 CRL..."_s
		})
	}));
}

Resources_zh_CN::Resources_zh_CN() {
}

$Class* Resources_zh_CN::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_zh_CN, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.tools.jarsigner.Resources_zh_CN",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources_zh_CN, name, initialize, &classInfo$$, Resources_zh_CN::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources_zh_CN);
	});
	return class$;
}

$Class* Resources_zh_CN::class$ = nullptr;

			} // jarsigner
		} // tools
	} // security
} // sun