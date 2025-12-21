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

$FieldInfo _Resources_zh_CN_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_zh_CN, contents)},
	{}
};

$MethodInfo _Resources_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_zh_CN::*)()>(&Resources_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.jarsigner.Resources_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_zh_CN_FieldInfo_,
	_Resources_zh_CN_MethodInfo_
};

$Object* allocate$Resources_zh_CN($Class* clazz) {
	return $of($alloc(Resources_zh_CN));
}

$ObjectArray2* Resources_zh_CN::contents = nullptr;

void Resources_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_zh_CN::getContents() {
	return Resources_zh_CN::contents;
}

void clinit$Resources_zh_CN($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_zh_CN::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("SPACE"_s),
			$of(" "_s)
		}),
		$$new($ObjectArray, {
			$of("6SPACE"_s),
			$of("      "_s)
		}),
		$$new($ObjectArray, {
			$of("COMMA"_s),
			$of(", "_s)
		}),
		$$new($ObjectArray, {
			$of("provclass.not.a.provider"_s),
			$of(u"%s不是提供方"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"未找到名为 \"%s\" 的提供方"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of(u"未找到提供方 \"%s\""_s)
		}),
		$$new($ObjectArray, {
			$of("jarsigner.error."_s),
			$of(u"jarsigner 错误: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"非法选项: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.option.is.forremoval"_s),
			$of(u"该选项已过时，在将来的发行版中将被删除："_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"如果 -storetype 为 {0}, 则 -keystore 必须为 NONE"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"如果 -storetype 为 {0}, 则不能指定 -keypass"_s)
		}),
		$$new($ObjectArray, {
			$of("If.protected.is.specified.then.storepass.and.keypass.must.not.be.specified"_s),
			$of(u"如果指定了 -protected, 则不能指定 -storepass 和 -keypass"_s)
		}),
		$$new($ObjectArray, {
			$of("If.keystore.is.not.password.protected.then.storepass.and.keypass.must.not.be.specified"_s),
			$of(u"如果密钥库未受口令保护, 则不能指定 -storepass 和 -keypass"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.jarsigner.options.jar.file.alias"_s),
			$of(u"用法: jarsigner [选项] jar-file 别名"_s)
		}),
		$$new($ObjectArray, {
			$of(".jarsigner.verify.options.jar.file.alias."_s),
			$of(u"       jarsigner -verify [选项] jar-file [别名...]"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.url.keystore.location"_s),
			$of(u"[-keystore <url>]           密钥库位置"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepass.password.password.for.keystore.integrity"_s),
			$of(u"[-storepass <口令>]         用于密钥库完整性的口令"_s)
		}),
		$$new($ObjectArray, {
			$of(".storetype.type.keystore.type"_s),
			$of(u"[-storetype <类型>]         密钥库类型"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.password.password.for.private.key.if.different."_s),
			$of(u"[-keypass <口令>]           私有密钥的口令 (如果不同)"_s)
		}),
		$$new($ObjectArray, {
			$of(".certchain.file.name.of.alternative.certchain.file"_s),
			$of(u"[-certchain <文件>]         替代证书链文件的名称"_s)
		}),
		$$new($ObjectArray, {
			$of(".sigfile.file.name.of.SF.DSA.file"_s),
			$of(u"[-sigfile <文件>]           .SF/.DSA 文件的名称"_s)
		}),
		$$new($ObjectArray, {
			$of(".signedjar.file.name.of.signed.JAR.file"_s),
			$of(u"[-signedjar <文件>]         已签名的 JAR 文件的名称"_s)
		}),
		$$new($ObjectArray, {
			$of(".digestalg.algorithm.name.of.digest.algorithm"_s),
			$of(u"[-digestalg <算法>]        摘要算法的名称"_s)
		}),
		$$new($ObjectArray, {
			$of(".sigalg.algorithm.name.of.signature.algorithm"_s),
			$of(u"[-sigalg <算法>]           签名算法的名称"_s)
		}),
		$$new($ObjectArray, {
			$of(".verify.verify.a.signed.JAR.file"_s),
			$of(u"[-verify]                   验证已签名的 JAR 文件"_s)
		}),
		$$new($ObjectArray, {
			$of(".verbose.suboptions.verbose.output.when.signing.verifying."_s),
			$of(u"[-verbose[:suboptions]]     签名/验证时输出详细信息。"_s)
		}),
		$$new($ObjectArray, {
			$of(".suboptions.can.be.all.grouped.or.summary"_s),
			$of(u"                            子选项可以是 all, grouped 或 summary"_s)
		}),
		$$new($ObjectArray, {
			$of(".certs.display.certificates.when.verbose.and.verifying"_s),
			$of(u"[-certs]                    输出详细信息和验证时显示证书"_s)
		}),
		$$new($ObjectArray, {
			$of(".certs.revocation.check"_s),
			$of(u"[-revCheck]                 启用证书撤消检查"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsa.url.location.of.the.Timestamping.Authority"_s),
			$of(u"[-tsa <url>]                时间戳颁发机构的位置"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsacert.alias.public.key.certificate.for.Timestamping.Authority"_s),
			$of(u"[-tsacert <别名>]           时间戳颁发机构的公共密钥证书"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsapolicyid.tsapolicyid.for.Timestamping.Authority"_s),
			$of(u"[-tsapolicyid <oid>]        时间戳颁发机构的 TSAPolicyID"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsadigestalg.algorithm.of.digest.data.in.timestamping.request"_s),
			$of(u"[-tsadigestalg <算法>]      时间戳请求中的摘要数据的算法"_s)
		}),
		$$new($ObjectArray, {
			$of(".altsigner.class.class.name.of.an.alternative.signing.mechanism"_s),
			$of(u"[-altsigner <class>]        替代签名机制的类名\n                            （该选项已过时，在将来的发行版中将被删除。）"_s)
		}),
		$$new($ObjectArray, {
			$of(".altsignerpath.pathlist.location.of.an.alternative.signing.mechanism"_s),
			$of(u"[-altsignerpath <pathlist>] 替代签名机制的位置\n                            （该选项已过时，在将来的发行版中将被删除。）"_s)
		}),
		$$new($ObjectArray, {
			$of(".internalsf.include.the.SF.file.inside.the.signature.block"_s),
			$of(u"[-internalsf]               在签名块内包含 .SF 文件"_s)
		}),
		$$new($ObjectArray, {
			$of(".sectionsonly.don.t.compute.hash.of.entire.manifest"_s),
			$of(u"[-sectionsonly]             不计算整个清单的散列"_s)
		}),
		$$new($ObjectArray, {
			$of(".protected.keystore.has.protected.authentication.path"_s),
			$of(u"[-protected]                密钥库具有受保护验证路径"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerName.name.provider.name"_s),
			$of(u"[-providerName <名称>]      提供方名称"_s)
		}),
		$$new($ObjectArray, {
			$of(".add.provider.option"_s),
			$of(u"[-addprovider <名称>        按名称 (例如 SunPKCS11) 添加安全提供方"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerArg.option.1"_s),
			$of(u"  [-providerArg <参数>]] ... 配置 -addprovider 的参数"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerClass.option"_s),
			$of(u"[-providerClass <类>     按全限定类名添加安全提供方"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerArg.option.2"_s),
			$of(u"  [-providerArg <参数>]] ... 配置 -providerClass 的参数"_s)
		}),
		$$new($ObjectArray, {
			$of(".strict.treat.warnings.as.errors"_s),
			$of(u"[-strict]                   将警告视为错误"_s)
		}),
		$$new($ObjectArray, {
			$of(".conf.url.specify.a.pre.configured.options.file"_s),
			$of(u"[-conf <url>]               指定预配置的选项文件"_s)
		}),
		$$new($ObjectArray, {
			$of(".print.this.help.message"_s),
			$of(u"[-? -h --help]              输出此帮助消息"_s)
		}),
		$$new($ObjectArray, {
			$of("Option.lacks.argument"_s),
			$of(u"选项缺少参数"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.type.jarsigner.help.for.usage"_s),
			$of(u"请键入 jarsigner --help 以了解用法"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.jarfile.name"_s),
			$of(u"请指定 jarfile 名称"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.alias.name"_s),
			$of(u"请指定别名"_s)
		}),
		$$new($ObjectArray, {
			$of("Only.one.alias.can.be.specified"_s),
			$of(u"只能指定一个别名"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.signed.entries.which.is.not.signed.by.the.specified.alias.es."_s),
			$of(u"此 jar 包含未由指定别名签名的已签名条目。"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.signed.entries.that.s.not.signed.by.alias.in.this.keystore."_s),
			$of(u"此 jar 包含未由此密钥库中的别名签名的已签名条目。"_s)
		}),
		$$new($ObjectArray, {
			$of("s"_s),
			$of("s"_s)
		}),
		$$new($ObjectArray, {
			$of("m"_s),
			$of("m"_s)
		}),
		$$new($ObjectArray, {
			$of("k"_s),
			$of("k"_s)
		}),
		$$new($ObjectArray, {
			$of(".and.d.more."_s),
			$of(u"(%d 及以上)"_s)
		}),
		$$new($ObjectArray, {
			$of(".s.signature.was.verified."_s),
			$of(u"  s = 已验证签名 "_s)
		}),
		$$new($ObjectArray, {
			$of(".m.entry.is.listed.in.manifest"_s),
			$of(u"  m = 在清单中列出条目"_s)
		}),
		$$new($ObjectArray, {
			$of(".k.at.least.one.certificate.was.found.in.keystore"_s),
			$of(u"  k = 在密钥库中至少找到了一个证书"_s)
		}),
		$$new($ObjectArray, {
			$of(".X.not.signed.by.specified.alias.es."_s),
			$of(u"  X = 未由指定别名签名"_s)
		}),
		$$new($ObjectArray, {
			$of("no.manifest."_s),
			$of(u"没有清单。"_s)
		}),
		$$new($ObjectArray, {
			$of(".Signature.related.entries."_s),
			$of(u"(与签名相关的条目)"_s)
		}),
		$$new($ObjectArray, {
			$of(".Unsigned.entries."_s),
			$of(u"(未签名条目)"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.is.unsigned"_s),
			$of(u"jar 未签名。"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.treated.unsigned"_s),
			$of(u"警告: 签名无法解析或验证, 该 jar 将被视为未签名。有关详细信息, 请在启用调试的情况下重新运行 jarsigner (-J-Djava.security.debug=jar)。"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.treated.unsigned.see.weak"_s),
			$of(u"由于该 jar 是使用目前已禁用的弱算法签名的, 因此该 jar 将被视为未签名。\n\n有关详细信息, 请使用 -verbose 选项重新运行 jarsigner。"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.treated.unsigned.see.weak.verbose"_s),
			$of(u"警告: 该 jar 将被视为未签名, 因为它是由目前安全属性禁用的弱算法签名的:"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.signed."_s),
			$of(u"jar 已签名。"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.signed.with.signer.errors."_s),
			$of(u"jar 已签名, 但出现签名者错误。"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.verified."_s),
			$of(u"jar 已验证。"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.verified.with.signer.errors."_s),
			$of(u"jar 已验证, 但出现签名者错误。"_s)
		}),
		$$new($ObjectArray, {
			$of("history.with.ts"_s),
			$of(u"- 由 \"%1$s\" 签名\n    摘要算法: %2$s\n    签名算法: %3$s, %4$s\n  由 \"%6$s\" 于 %5$tc 加时间戳\n    时间戳摘要算法: %7$s\n    时间戳签名算法: %8$s, %9$s"_s)
		}),
		$$new($ObjectArray, {
			$of("history.without.ts"_s),
			$of(u"- 由 \"%1$s\" 签名\n    摘要算法: %2$s\n    签名算法: %3$s, %4$s"_s)
		}),
		$$new($ObjectArray, {
			$of("history.unparsable"_s),
			$of(u"- 无法解析的与签名相关的文件 %s"_s)
		}),
		$$new($ObjectArray, {
			$of("history.nosf"_s),
			$of(u"- 缺少与签名相关的文件 META-INF/%s.SF"_s)
		}),
		$$new($ObjectArray, {
			$of("history.nobk"_s),
			$of(u"- 与签名相关的文件 META-INF/%s.SF 缺少块文件"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of(u"%s (弱)"_s)
		}),
		$$new($ObjectArray, {
			$of("with.disabled"_s),
			$of(u"%s（禁用）"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of(u"%d 位密钥"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of(u"%d 位密钥 (弱)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.disabled"_s),
			$of(u"%d 位密钥（禁用）"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size"_s),
			$of(u"未知大小"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.attributes.detected"_s),
			$of(u"检测到 POSIX 文件权限和/或 symlink 属性。这些属性在进行签名时会被忽略，不受该签名的保护。"_s)
		}),
		$$new($ObjectArray, {
			$of("jarsigner."_s),
			$of("jarsigner: "_s)
		}),
		$$new($ObjectArray, {
			$of("signature.filename.must.consist.of.the.following.characters.A.Z.0.9.or."_s),
			$of(u"签名文件名必须包含以下字符: A-Z, 0-9, _ 或 -"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.open.jar.file."_s),
			$of(u"无法打开 jar 文件: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.create."_s),
			$of(u"无法创建: "_s)
		}),
		$$new($ObjectArray, {
			$of(".adding."_s),
			$of(u"   正在添加: "_s)
		}),
		$$new($ObjectArray, {
			$of(".updating."_s),
			$of(u" 正在更新: "_s)
		}),
		$$new($ObjectArray, {
			$of(".signing."_s),
			$of(u"  正在签名: "_s)
		}),
		$$new($ObjectArray, {
			$of("attempt.to.rename.signedJarFile.to.jarFile.failed"_s),
			$of(u"尝试将{0}重命名为{1}时失败"_s)
		}),
		$$new($ObjectArray, {
			$of("attempt.to.rename.jarFile.to.origJar.failed"_s),
			$of(u"尝试将{0}重命名为{1}时失败"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.sign.jar."_s),
			$of(u"无法对 jar 进行签名: "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.Passphrase.for.keystore."_s),
			$of(u"输入密钥库的密码短语: "_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.load."_s),
			$of(u"密钥库加载: "_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.exception."_s),
			$of(u"证书异常错误: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.keystore.class."_s),
			$of(u"无法实例化密钥库类: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.not.found.for.alias.alias.must.reference.a.valid.KeyStore.key.entry.containing.a.private.key.and"_s),
			$of(u"找不到{0}的证书链。{1}必须引用包含私有密钥和相应的公共密钥证书链的有效密钥库密钥条目。"_s)
		}),
		$$new($ObjectArray, {
			$of("File.specified.by.certchain.does.not.exist"_s),
			$of(u"由 -certchain 指定的文件不存在"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.restore.certchain.from.file.specified"_s),
			$of(u"无法从指定的文件还原 certchain"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.not.found.in.the.file.specified."_s),
			$of(u"在指定的文件中找不到证书链。"_s)
		}),
		$$new($ObjectArray, {
			$of("found.non.X.509.certificate.in.signer.s.chain"_s),
			$of(u"在签名者的链中找到非 X.509 证书"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"输入{0}的密钥口令: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.recover.key.from.keystore"_s),
			$of(u"无法从密钥库中恢复密钥"_s)
		}),
		$$new($ObjectArray, {
			$of("key.associated.with.alias.not.a.private.key"_s),
			$of(u"与{0}关联的密钥不是私有密钥"_s)
		}),
		$$new($ObjectArray, {
			$of("you.must.enter.key.password"_s),
			$of(u"必须输入密钥口令"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.read.password."_s),
			$of(u"无法读取口令: "_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.is.valid.from"_s),
			$of(u"证书的有效期为{0}至{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.expired.on"_s),
			$of(u"证书到期日期为 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.is.not.valid.until"_s),
			$of(u"直到{0}, 证书才有效"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.will.expire.on"_s),
			$of(u"证书将在{0}到期"_s)
		}),
		$$new($ObjectArray, {
			$of(".Invalid.certificate.chain."_s),
			$of(u"[无效的证书链: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Invalid.TSA.certificate.chain."_s),
			$of(u"[无效 TSA 的证书链: "_s)
		}),
		$$new($ObjectArray, {
			$of("requesting.a.signature.timestamp"_s),
			$of(u"正在请求签名时间戳"_s)
		}),
		$$new($ObjectArray, {
			$of("TSA.location."_s),
			$of(u"TSA 位置: "_s)
		}),
		$$new($ObjectArray, {
			$of("TSA.certificate."_s),
			$of(u"TSA 证书: "_s)
		}),
		$$new($ObjectArray, {
			$of("no.response.from.the.Timestamping.Authority."_s),
			$of(u"时间戳颁发机构没有响应。如果要从防火墙后面连接, 则可能需要指定 HTTP 或 HTTPS 代理。请为 jarsigner 提供以下选项: "_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"或"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.found.for.alias.alias.must.reference.a.valid.KeyStore.entry.containing.an.X.509.public.key.certificate.for.the"_s),
			$of(u"找不到{0}的证书。{1}必须引用包含时间戳颁发机构的 X.509 公共密钥证书的有效密钥库条目。"_s)
		}),
		$$new($ObjectArray, {
			$of("using.an.alternative.signing.mechanism"_s),
			$of(u"正在使用替代的签名机制"_s)
		}),
		$$new($ObjectArray, {
			$of("entry.was.signed.on"_s),
			$of(u"条目的签名日期为 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning."_s),
			$of(u"警告: "_s)
		}),
		$$new($ObjectArray, {
			$of("Error."_s),
			$of(u"错误: "_s)
		}),
		$$new($ObjectArray, {
			$of("...Signer"_s),
			$of(u">>> 签名者"_s)
		}),
		$$new($ObjectArray, {
			$of("...TSA"_s),
			$of(">>> TSA"_s)
		}),
		$$new($ObjectArray, {
			$of("trusted.certificate"_s),
			$of(u"可信证书"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.unsigned.entries.which.have.not.been.integrity.checked."_s),
			$of(u"此 jar 包含尚未进行完整性检查的未签名条目。 "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.has.expired."_s),
			$of(u"此 jar 包含签名者证书已过期的条目。 "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.will.expire.within.six.months."_s),
			$of(u"此 jar 包含签名者证书将在六个月内过期的条目。 "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.is.not.yet.valid."_s),
			$of(u"此 jar 包含签名者证书仍无效的条目。 "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.is.self.signed."_s),
			$of(u"此 jar 包含其签名者证书为自签名证书的条目。"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.run.with.the.verbose.and.certs.options.for.more.details."_s),
			$of(u"有关详细信息, 请使用 -verbose 和 -certs 选项重新运行。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.has.expired."_s),
			$of(u"签名者证书已过期。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.expired.1.but.usable.2"_s),
			$of(u"时间戳到期日期为 %1$tY-%1$tm-%1$td。不过，在签名者证书于 %2$tY-%2$tm-%2$td 到期之前，JAR 将有效。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.has.expired."_s),
			$of(u"时间戳已到期。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.will.expire.within.six.months."_s),
			$of(u"签名者证书将在六个月内过期。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.will.expire.within.one.year.on.1"_s),
			$of(u"时间戳将在一年内于 %1$tY-%1$tm-%1$td 到期。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.will.expire.within.one.year.on.1.but.2"_s),
			$of(u"时间戳将在一年内于 %1$tY-%1$tm-%1$td 到期。不过，在签名者证书于 %2$tY-%2$tm-%2$td 到期之前，JAR 将有效。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.is.not.yet.valid."_s),
			$of(u"签名者证书仍无效。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of(u"由于签名者证书的 KeyUsage 扩展而无法进行代码签名。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of(u"由于签名者证书的 ExtendedKeyUsage 扩展而无法进行代码签名。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s),
			$of(u"由于签名者证书的 NetscapeCertType 扩展而无法进行代码签名。"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of(u"此 jar 包含由于签名者证书的 KeyUsage 扩展而无法进行代码签名的条目。"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of(u"此 jar 包含由于签名者证书的 ExtendedKeyUsage 扩展而无法进行代码签名的条目。"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s),
			$of(u"此 jar 包含由于签名者证书的 NetscapeCertType 扩展而无法进行代码签名的条目。"_s)
		}),
		$$new($ObjectArray, {
			$of(".{0}.extension.does.not.support.code.signing."_s),
			$of(u"[{0} 扩展不支持代码签名]"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.s.certificate.chain.is.invalid.reason.1"_s),
			$of(u"签名者证书链无效。原因: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("The.tsa.certificate.chain.is.invalid.reason.1"_s),
			$of(u"TSA 证书链无效。原因: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.s.certificate.is.self.signed."_s),
			$of(u"签名者证书为自签名证书。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of(u"为 %2$s 选项指定的 %1$s 算法被视为存在安全风险。此算法将在未来的更新中被禁用。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk.and.is.disabled."_s),
			$of(u"为 %2$s 选项指定的 %1$s 算法被视为存在安全风险而且被禁用。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s 时间戳摘要算法被视为存在安全风险。此算法将在未来的更新中被禁用。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s 摘要算法被视为存在安全风险。此算法将在未来的更新中被禁用。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signature.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s 签名算法被视为存在安全风险。此算法将在未来的更新中被禁用。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk..This.key.size.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s 签名密钥的密钥大小 %2$d 被视为存在安全风险。此密钥大小将在未来的更新中被禁用。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk.and.is.disabled."_s),
			$of(u"%1$s 签名密钥的密钥大小 %2$d 被视为存在安全风险而且被禁用。"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.certificate.chain.is.invalid.reason.1"_s),
			$of(u"此 jar 包含其证书链无效的条目。原因: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.tsa.certificate.chain.is.invalid.reason.1"_s),
			$of(u"此 jar 包含其 TSA 证书链无效的条目。原因: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("no.timestamp.signing"_s),
			$of(u"未提供 -tsa 或 -tsacert, 此 jar 没有时间戳。如果没有时间戳, 则在签名者证书的到期日期 (%1$tY-%1$tm-%1$td) 之后, 用户可能无法验证此 jar。"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.timestamp.signing"_s),
			$of(u"时间戳无效。如果没有有效的时间戳，则在签名者证书的到期日期 (%1$tY-%1$tm-%1$td) 之后，用户可能无法验证此 jar。"_s)
		}),
		$$new($ObjectArray, {
			$of("no.timestamp.verifying"_s),
			$of(u"此 jar 包含的签名没有时间戳。如果没有时间戳, 则在其中任一签名者证书到期 (最早为 %1$tY-%1$tm-%1$td) 之后, 用户可能无法验证此 jar。"_s)
		}),
		$$new($ObjectArray, {
			$of("bad.timestamp.verifying"_s),
			$of(u"此 jar 包含带有无效时间戳的签名。如果没有有效时间戳, 则在其中任一签名者证书到期 (最早为 %1$tY-%1$tm-%1$td) 之后, 用户可能无法验证此 jar。\n有关详细信息, 请使用 -J-Djava.security.debug=jar 重新运行 jarsigner。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.will.expire.on.1."_s),
			$of(u"签名者证书将于 %1$tY-%1$tm-%1$td 到期。"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.will.expire.on.1."_s),
			$of(u"时间戳将于 %1$tY-%1$tm-%1$td 到期。"_s)
		}),
		$$new($ObjectArray, {
			$of("signer.cert.expired.1.but.timestamp.good.2."_s),
			$of(u"签名者证书到期日期为 %1$tY-%1$tm-%1$td。不过，在时间戳于 %2$tY-%2$tm-%2$td 到期之前，JAR 将有效。"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"未知口令类型: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"找不到环境变量: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of(u"找不到文件: "_s)
		}),
		$$new($ObjectArray, {
			$of("event.ocsp.check"_s),
			$of(u"正在联系位于 %s 的 OCSP 服务器..."_s)
		}),
		$$new($ObjectArray, {
			$of("event.crl.check"_s),
			$of(u"正在从 %s 下载 CRL..."_s)
		})
	}));
}

Resources_zh_CN::Resources_zh_CN() {
}

$Class* Resources_zh_CN::load$($String* name, bool initialize) {
	$loadClass(Resources_zh_CN, name, initialize, &_Resources_zh_CN_ClassInfo_, clinit$Resources_zh_CN, allocate$Resources_zh_CN);
	return class$;
}

$Class* Resources_zh_CN::class$ = nullptr;

			} // jarsigner
		} // tools
	} // security
} // sun