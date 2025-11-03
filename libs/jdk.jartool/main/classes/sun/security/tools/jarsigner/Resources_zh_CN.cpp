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
			$of(u"%s\u4e0d\u662f\u63d0\u4f9b\u65b9"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"\u672a\u627e\u5230\u540d\u4e3a \"%s\" \u7684\u63d0\u4f9b\u65b9"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of(u"\u672a\u627e\u5230\u63d0\u4f9b\u65b9 \"%s\""_s)
		}),
		$$new($ObjectArray, {
			$of("jarsigner.error."_s),
			$of(u"jarsigner \u9519\u8bef: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"\u975e\u6cd5\u9009\u9879: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.option.is.forremoval"_s),
			$of(u"\u8be5\u9009\u9879\u5df2\u8fc7\u65f6\uff0c\u5728\u5c06\u6765\u7684\u53d1\u884c\u7248\u4e2d\u5c06\u88ab\u5220\u9664\uff1a"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"\u5982\u679c -storetype \u4e3a {0}, \u5219 -keystore \u5fc5\u987b\u4e3a NONE"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"\u5982\u679c -storetype \u4e3a {0}, \u5219\u4e0d\u80fd\u6307\u5b9a -keypass"_s)
		}),
		$$new($ObjectArray, {
			$of("If.protected.is.specified.then.storepass.and.keypass.must.not.be.specified"_s),
			$of(u"\u5982\u679c\u6307\u5b9a\u4e86 -protected, \u5219\u4e0d\u80fd\u6307\u5b9a -storepass \u548c -keypass"_s)
		}),
		$$new($ObjectArray, {
			$of("If.keystore.is.not.password.protected.then.storepass.and.keypass.must.not.be.specified"_s),
			$of(u"\u5982\u679c\u5bc6\u94a5\u5e93\u672a\u53d7\u53e3\u4ee4\u4fdd\u62a4, \u5219\u4e0d\u80fd\u6307\u5b9a -storepass \u548c -keypass"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.jarsigner.options.jar.file.alias"_s),
			$of(u"\u7528\u6cd5: jarsigner [\u9009\u9879] jar-file \u522b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of(".jarsigner.verify.options.jar.file.alias."_s),
			$of(u"       jarsigner -verify [\u9009\u9879] jar-file [\u522b\u540d...]"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.url.keystore.location"_s),
			$of(u"[-keystore <url>]           \u5bc6\u94a5\u5e93\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepass.password.password.for.keystore.integrity"_s),
			$of(u"[-storepass <\u53e3\u4ee4>]         \u7528\u4e8e\u5bc6\u94a5\u5e93\u5b8c\u6574\u6027\u7684\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of(".storetype.type.keystore.type"_s),
			$of(u"[-storetype <\u7c7b\u578b>]         \u5bc6\u94a5\u5e93\u7c7b\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.password.password.for.private.key.if.different."_s),
			$of(u"[-keypass <\u53e3\u4ee4>]           \u79c1\u6709\u5bc6\u94a5\u7684\u53e3\u4ee4 (\u5982\u679c\u4e0d\u540c)"_s)
		}),
		$$new($ObjectArray, {
			$of(".certchain.file.name.of.alternative.certchain.file"_s),
			$of(u"[-certchain <\u6587\u4ef6>]         \u66ff\u4ee3\u8bc1\u4e66\u94fe\u6587\u4ef6\u7684\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of(".sigfile.file.name.of.SF.DSA.file"_s),
			$of(u"[-sigfile <\u6587\u4ef6>]           .SF/.DSA \u6587\u4ef6\u7684\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of(".signedjar.file.name.of.signed.JAR.file"_s),
			$of(u"[-signedjar <\u6587\u4ef6>]         \u5df2\u7b7e\u540d\u7684 JAR \u6587\u4ef6\u7684\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of(".digestalg.algorithm.name.of.digest.algorithm"_s),
			$of(u"[-digestalg <\u7b97\u6cd5>]        \u6458\u8981\u7b97\u6cd5\u7684\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of(".sigalg.algorithm.name.of.signature.algorithm"_s),
			$of(u"[-sigalg <\u7b97\u6cd5>]           \u7b7e\u540d\u7b97\u6cd5\u7684\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of(".verify.verify.a.signed.JAR.file"_s),
			$of(u"[-verify]                   \u9a8c\u8bc1\u5df2\u7b7e\u540d\u7684 JAR \u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of(".verbose.suboptions.verbose.output.when.signing.verifying."_s),
			$of(u"[-verbose[:suboptions]]     \u7b7e\u540d/\u9a8c\u8bc1\u65f6\u8f93\u51fa\u8be6\u7ec6\u4fe1\u606f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(".suboptions.can.be.all.grouped.or.summary"_s),
			$of(u"                            \u5b50\u9009\u9879\u53ef\u4ee5\u662f all, grouped \u6216 summary"_s)
		}),
		$$new($ObjectArray, {
			$of(".certs.display.certificates.when.verbose.and.verifying"_s),
			$of(u"[-certs]                    \u8f93\u51fa\u8be6\u7ec6\u4fe1\u606f\u548c\u9a8c\u8bc1\u65f6\u663e\u793a\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of(".certs.revocation.check"_s),
			$of(u"[-revCheck]                 \u542f\u7528\u8bc1\u4e66\u64a4\u6d88\u68c0\u67e5"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsa.url.location.of.the.Timestamping.Authority"_s),
			$of(u"[-tsa <url>]                \u65f6\u95f4\u6233\u9881\u53d1\u673a\u6784\u7684\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsacert.alias.public.key.certificate.for.Timestamping.Authority"_s),
			$of(u"[-tsacert <\u522b\u540d>]           \u65f6\u95f4\u6233\u9881\u53d1\u673a\u6784\u7684\u516c\u5171\u5bc6\u94a5\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsapolicyid.tsapolicyid.for.Timestamping.Authority"_s),
			$of(u"[-tsapolicyid <oid>]        \u65f6\u95f4\u6233\u9881\u53d1\u673a\u6784\u7684 TSAPolicyID"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsadigestalg.algorithm.of.digest.data.in.timestamping.request"_s),
			$of(u"[-tsadigestalg <\u7b97\u6cd5>]      \u65f6\u95f4\u6233\u8bf7\u6c42\u4e2d\u7684\u6458\u8981\u6570\u636e\u7684\u7b97\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of(".altsigner.class.class.name.of.an.alternative.signing.mechanism"_s),
			$of(u"[-altsigner <class>]        \u66ff\u4ee3\u7b7e\u540d\u673a\u5236\u7684\u7c7b\u540d\n                            \uff08\u8be5\u9009\u9879\u5df2\u8fc7\u65f6\uff0c\u5728\u5c06\u6765\u7684\u53d1\u884c\u7248\u4e2d\u5c06\u88ab\u5220\u9664\u3002\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of(".altsignerpath.pathlist.location.of.an.alternative.signing.mechanism"_s),
			$of(u"[-altsignerpath <pathlist>] \u66ff\u4ee3\u7b7e\u540d\u673a\u5236\u7684\u4f4d\u7f6e\n                            \uff08\u8be5\u9009\u9879\u5df2\u8fc7\u65f6\uff0c\u5728\u5c06\u6765\u7684\u53d1\u884c\u7248\u4e2d\u5c06\u88ab\u5220\u9664\u3002\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of(".internalsf.include.the.SF.file.inside.the.signature.block"_s),
			$of(u"[-internalsf]               \u5728\u7b7e\u540d\u5757\u5185\u5305\u542b .SF \u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of(".sectionsonly.don.t.compute.hash.of.entire.manifest"_s),
			$of(u"[-sectionsonly]             \u4e0d\u8ba1\u7b97\u6574\u4e2a\u6e05\u5355\u7684\u6563\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of(".protected.keystore.has.protected.authentication.path"_s),
			$of(u"[-protected]                \u5bc6\u94a5\u5e93\u5177\u6709\u53d7\u4fdd\u62a4\u9a8c\u8bc1\u8def\u5f84"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerName.name.provider.name"_s),
			$of(u"[-providerName <\u540d\u79f0>]      \u63d0\u4f9b\u65b9\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of(".add.provider.option"_s),
			$of(u"[-addprovider <\u540d\u79f0>        \u6309\u540d\u79f0 (\u4f8b\u5982 SunPKCS11) \u6dfb\u52a0\u5b89\u5168\u63d0\u4f9b\u65b9"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerArg.option.1"_s),
			$of(u"  [-providerArg <\u53c2\u6570>]] ... \u914d\u7f6e -addprovider \u7684\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerClass.option"_s),
			$of(u"[-providerClass <\u7c7b>     \u6309\u5168\u9650\u5b9a\u7c7b\u540d\u6dfb\u52a0\u5b89\u5168\u63d0\u4f9b\u65b9"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerArg.option.2"_s),
			$of(u"  [-providerArg <\u53c2\u6570>]] ... \u914d\u7f6e -providerClass \u7684\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of(".strict.treat.warnings.as.errors"_s),
			$of(u"[-strict]                   \u5c06\u8b66\u544a\u89c6\u4e3a\u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of(".conf.url.specify.a.pre.configured.options.file"_s),
			$of(u"[-conf <url>]               \u6307\u5b9a\u9884\u914d\u7f6e\u7684\u9009\u9879\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of(".print.this.help.message"_s),
			$of(u"[-? -h --help]              \u8f93\u51fa\u6b64\u5e2e\u52a9\u6d88\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("Option.lacks.argument"_s),
			$of(u"\u9009\u9879\u7f3a\u5c11\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.type.jarsigner.help.for.usage"_s),
			$of(u"\u8bf7\u952e\u5165 jarsigner --help \u4ee5\u4e86\u89e3\u7528\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.jarfile.name"_s),
			$of(u"\u8bf7\u6307\u5b9a jarfile \u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.alias.name"_s),
			$of(u"\u8bf7\u6307\u5b9a\u522b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("Only.one.alias.can.be.specified"_s),
			$of(u"\u53ea\u80fd\u6307\u5b9a\u4e00\u4e2a\u522b\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.signed.entries.which.is.not.signed.by.the.specified.alias.es."_s),
			$of(u"\u6b64 jar \u5305\u542b\u672a\u7531\u6307\u5b9a\u522b\u540d\u7b7e\u540d\u7684\u5df2\u7b7e\u540d\u6761\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.signed.entries.that.s.not.signed.by.alias.in.this.keystore."_s),
			$of(u"\u6b64 jar \u5305\u542b\u672a\u7531\u6b64\u5bc6\u94a5\u5e93\u4e2d\u7684\u522b\u540d\u7b7e\u540d\u7684\u5df2\u7b7e\u540d\u6761\u76ee\u3002"_s)
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
			$of(u"(%d \u53ca\u4ee5\u4e0a)"_s)
		}),
		$$new($ObjectArray, {
			$of(".s.signature.was.verified."_s),
			$of(u"  s = \u5df2\u9a8c\u8bc1\u7b7e\u540d "_s)
		}),
		$$new($ObjectArray, {
			$of(".m.entry.is.listed.in.manifest"_s),
			$of(u"  m = \u5728\u6e05\u5355\u4e2d\u5217\u51fa\u6761\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of(".k.at.least.one.certificate.was.found.in.keystore"_s),
			$of(u"  k = \u5728\u5bc6\u94a5\u5e93\u4e2d\u81f3\u5c11\u627e\u5230\u4e86\u4e00\u4e2a\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of(".X.not.signed.by.specified.alias.es."_s),
			$of(u"  X = \u672a\u7531\u6307\u5b9a\u522b\u540d\u7b7e\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("no.manifest."_s),
			$of(u"\u6ca1\u6709\u6e05\u5355\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(".Signature.related.entries."_s),
			$of(u"(\u4e0e\u7b7e\u540d\u76f8\u5173\u7684\u6761\u76ee)"_s)
		}),
		$$new($ObjectArray, {
			$of(".Unsigned.entries."_s),
			$of(u"(\u672a\u7b7e\u540d\u6761\u76ee)"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.is.unsigned"_s),
			$of(u"jar \u672a\u7b7e\u540d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.treated.unsigned"_s),
			$of(u"\u8b66\u544a: \u7b7e\u540d\u65e0\u6cd5\u89e3\u6790\u6216\u9a8c\u8bc1, \u8be5 jar \u5c06\u88ab\u89c6\u4e3a\u672a\u7b7e\u540d\u3002\u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u5728\u542f\u7528\u8c03\u8bd5\u7684\u60c5\u51b5\u4e0b\u91cd\u65b0\u8fd0\u884c jarsigner (-J-Djava.security.debug=jar)\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.treated.unsigned.see.weak"_s),
			$of(u"\u7531\u4e8e\u8be5 jar \u662f\u4f7f\u7528\u76ee\u524d\u5df2\u7981\u7528\u7684\u5f31\u7b97\u6cd5\u7b7e\u540d\u7684, \u56e0\u6b64\u8be5 jar \u5c06\u88ab\u89c6\u4e3a\u672a\u7b7e\u540d\u3002\n\n\u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u4f7f\u7528 -verbose \u9009\u9879\u91cd\u65b0\u8fd0\u884c jarsigner\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.treated.unsigned.see.weak.verbose"_s),
			$of(u"\u8b66\u544a: \u8be5 jar \u5c06\u88ab\u89c6\u4e3a\u672a\u7b7e\u540d, \u56e0\u4e3a\u5b83\u662f\u7531\u76ee\u524d\u5b89\u5168\u5c5e\u6027\u7981\u7528\u7684\u5f31\u7b97\u6cd5\u7b7e\u540d\u7684:"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.signed."_s),
			$of(u"jar \u5df2\u7b7e\u540d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.signed.with.signer.errors."_s),
			$of(u"jar \u5df2\u7b7e\u540d, \u4f46\u51fa\u73b0\u7b7e\u540d\u8005\u9519\u8bef\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.verified."_s),
			$of(u"jar \u5df2\u9a8c\u8bc1\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.verified.with.signer.errors."_s),
			$of(u"jar \u5df2\u9a8c\u8bc1, \u4f46\u51fa\u73b0\u7b7e\u540d\u8005\u9519\u8bef\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("history.with.ts"_s),
			$of(u"- \u7531 \"%1$s\" \u7b7e\u540d\n    \u6458\u8981\u7b97\u6cd5: %2$s\n    \u7b7e\u540d\u7b97\u6cd5: %3$s, %4$s\n  \u7531 \"%6$s\" \u4e8e %5$tc \u52a0\u65f6\u95f4\u6233\n    \u65f6\u95f4\u6233\u6458\u8981\u7b97\u6cd5: %7$s\n    \u65f6\u95f4\u6233\u7b7e\u540d\u7b97\u6cd5: %8$s, %9$s"_s)
		}),
		$$new($ObjectArray, {
			$of("history.without.ts"_s),
			$of(u"- \u7531 \"%1$s\" \u7b7e\u540d\n    \u6458\u8981\u7b97\u6cd5: %2$s\n    \u7b7e\u540d\u7b97\u6cd5: %3$s, %4$s"_s)
		}),
		$$new($ObjectArray, {
			$of("history.unparsable"_s),
			$of(u"- \u65e0\u6cd5\u89e3\u6790\u7684\u4e0e\u7b7e\u540d\u76f8\u5173\u7684\u6587\u4ef6 %s"_s)
		}),
		$$new($ObjectArray, {
			$of("history.nosf"_s),
			$of(u"- \u7f3a\u5c11\u4e0e\u7b7e\u540d\u76f8\u5173\u7684\u6587\u4ef6 META-INF/%s.SF"_s)
		}),
		$$new($ObjectArray, {
			$of("history.nobk"_s),
			$of(u"- \u4e0e\u7b7e\u540d\u76f8\u5173\u7684\u6587\u4ef6 META-INF/%s.SF \u7f3a\u5c11\u5757\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of(u"%s (\u5f31)"_s)
		}),
		$$new($ObjectArray, {
			$of("with.disabled"_s),
			$of(u"%s\uff08\u7981\u7528\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of(u"%d \u4f4d\u5bc6\u94a5"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of(u"%d \u4f4d\u5bc6\u94a5 (\u5f31)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.disabled"_s),
			$of(u"%d \u4f4d\u5bc6\u94a5\uff08\u7981\u7528\uff09"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size"_s),
			$of(u"\u672a\u77e5\u5927\u5c0f"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.attributes.detected"_s),
			$of(u"\u68c0\u6d4b\u5230 POSIX \u6587\u4ef6\u6743\u9650\u548c/\u6216 symlink \u5c5e\u6027\u3002\u8fd9\u4e9b\u5c5e\u6027\u5728\u8fdb\u884c\u7b7e\u540d\u65f6\u4f1a\u88ab\u5ffd\u7565\uff0c\u4e0d\u53d7\u8be5\u7b7e\u540d\u7684\u4fdd\u62a4\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jarsigner."_s),
			$of("jarsigner: "_s)
		}),
		$$new($ObjectArray, {
			$of("signature.filename.must.consist.of.the.following.characters.A.Z.0.9.or."_s),
			$of(u"\u7b7e\u540d\u6587\u4ef6\u540d\u5fc5\u987b\u5305\u542b\u4ee5\u4e0b\u5b57\u7b26: A-Z, 0-9, _ \u6216 -"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.open.jar.file."_s),
			$of(u"\u65e0\u6cd5\u6253\u5f00 jar \u6587\u4ef6: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.create."_s),
			$of(u"\u65e0\u6cd5\u521b\u5efa: "_s)
		}),
		$$new($ObjectArray, {
			$of(".adding."_s),
			$of(u"   \u6b63\u5728\u6dfb\u52a0: "_s)
		}),
		$$new($ObjectArray, {
			$of(".updating."_s),
			$of(u" \u6b63\u5728\u66f4\u65b0: "_s)
		}),
		$$new($ObjectArray, {
			$of(".signing."_s),
			$of(u"  \u6b63\u5728\u7b7e\u540d: "_s)
		}),
		$$new($ObjectArray, {
			$of("attempt.to.rename.signedJarFile.to.jarFile.failed"_s),
			$of(u"\u5c1d\u8bd5\u5c06{0}\u91cd\u547d\u540d\u4e3a{1}\u65f6\u5931\u8d25"_s)
		}),
		$$new($ObjectArray, {
			$of("attempt.to.rename.jarFile.to.origJar.failed"_s),
			$of(u"\u5c1d\u8bd5\u5c06{0}\u91cd\u547d\u540d\u4e3a{1}\u65f6\u5931\u8d25"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.sign.jar."_s),
			$of(u"\u65e0\u6cd5\u5bf9 jar \u8fdb\u884c\u7b7e\u540d: "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.Passphrase.for.keystore."_s),
			$of(u"\u8f93\u5165\u5bc6\u94a5\u5e93\u7684\u5bc6\u7801\u77ed\u8bed: "_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.load."_s),
			$of(u"\u5bc6\u94a5\u5e93\u52a0\u8f7d: "_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.exception."_s),
			$of(u"\u8bc1\u4e66\u5f02\u5e38\u9519\u8bef: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.keystore.class."_s),
			$of(u"\u65e0\u6cd5\u5b9e\u4f8b\u5316\u5bc6\u94a5\u5e93\u7c7b: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.not.found.for.alias.alias.must.reference.a.valid.KeyStore.key.entry.containing.a.private.key.and"_s),
			$of(u"\u627e\u4e0d\u5230{0}\u7684\u8bc1\u4e66\u94fe\u3002{1}\u5fc5\u987b\u5f15\u7528\u5305\u542b\u79c1\u6709\u5bc6\u94a5\u548c\u76f8\u5e94\u7684\u516c\u5171\u5bc6\u94a5\u8bc1\u4e66\u94fe\u7684\u6709\u6548\u5bc6\u94a5\u5e93\u5bc6\u94a5\u6761\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("File.specified.by.certchain.does.not.exist"_s),
			$of(u"\u7531 -certchain \u6307\u5b9a\u7684\u6587\u4ef6\u4e0d\u5b58\u5728"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.restore.certchain.from.file.specified"_s),
			$of(u"\u65e0\u6cd5\u4ece\u6307\u5b9a\u7684\u6587\u4ef6\u8fd8\u539f certchain"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.not.found.in.the.file.specified."_s),
			$of(u"\u5728\u6307\u5b9a\u7684\u6587\u4ef6\u4e2d\u627e\u4e0d\u5230\u8bc1\u4e66\u94fe\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("found.non.X.509.certificate.in.signer.s.chain"_s),
			$of(u"\u5728\u7b7e\u540d\u8005\u7684\u94fe\u4e2d\u627e\u5230\u975e X.509 \u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"\u8f93\u5165{0}\u7684\u5bc6\u94a5\u53e3\u4ee4: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.recover.key.from.keystore"_s),
			$of(u"\u65e0\u6cd5\u4ece\u5bc6\u94a5\u5e93\u4e2d\u6062\u590d\u5bc6\u94a5"_s)
		}),
		$$new($ObjectArray, {
			$of("key.associated.with.alias.not.a.private.key"_s),
			$of(u"\u4e0e{0}\u5173\u8054\u7684\u5bc6\u94a5\u4e0d\u662f\u79c1\u6709\u5bc6\u94a5"_s)
		}),
		$$new($ObjectArray, {
			$of("you.must.enter.key.password"_s),
			$of(u"\u5fc5\u987b\u8f93\u5165\u5bc6\u94a5\u53e3\u4ee4"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.read.password."_s),
			$of(u"\u65e0\u6cd5\u8bfb\u53d6\u53e3\u4ee4: "_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.is.valid.from"_s),
			$of(u"\u8bc1\u4e66\u7684\u6709\u6548\u671f\u4e3a{0}\u81f3{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.expired.on"_s),
			$of(u"\u8bc1\u4e66\u5230\u671f\u65e5\u671f\u4e3a {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.is.not.valid.until"_s),
			$of(u"\u76f4\u5230{0}, \u8bc1\u4e66\u624d\u6709\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.will.expire.on"_s),
			$of(u"\u8bc1\u4e66\u5c06\u5728{0}\u5230\u671f"_s)
		}),
		$$new($ObjectArray, {
			$of(".Invalid.certificate.chain."_s),
			$of(u"[\u65e0\u6548\u7684\u8bc1\u4e66\u94fe: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Invalid.TSA.certificate.chain."_s),
			$of(u"[\u65e0\u6548 TSA \u7684\u8bc1\u4e66\u94fe: "_s)
		}),
		$$new($ObjectArray, {
			$of("requesting.a.signature.timestamp"_s),
			$of(u"\u6b63\u5728\u8bf7\u6c42\u7b7e\u540d\u65f6\u95f4\u6233"_s)
		}),
		$$new($ObjectArray, {
			$of("TSA.location."_s),
			$of(u"TSA \u4f4d\u7f6e: "_s)
		}),
		$$new($ObjectArray, {
			$of("TSA.certificate."_s),
			$of(u"TSA \u8bc1\u4e66: "_s)
		}),
		$$new($ObjectArray, {
			$of("no.response.from.the.Timestamping.Authority."_s),
			$of(u"\u65f6\u95f4\u6233\u9881\u53d1\u673a\u6784\u6ca1\u6709\u54cd\u5e94\u3002\u5982\u679c\u8981\u4ece\u9632\u706b\u5899\u540e\u9762\u8fde\u63a5, \u5219\u53ef\u80fd\u9700\u8981\u6307\u5b9a HTTP \u6216 HTTPS \u4ee3\u7406\u3002\u8bf7\u4e3a jarsigner \u63d0\u4f9b\u4ee5\u4e0b\u9009\u9879: "_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u6216"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.found.for.alias.alias.must.reference.a.valid.KeyStore.entry.containing.an.X.509.public.key.certificate.for.the"_s),
			$of(u"\u627e\u4e0d\u5230{0}\u7684\u8bc1\u4e66\u3002{1}\u5fc5\u987b\u5f15\u7528\u5305\u542b\u65f6\u95f4\u6233\u9881\u53d1\u673a\u6784\u7684 X.509 \u516c\u5171\u5bc6\u94a5\u8bc1\u4e66\u7684\u6709\u6548\u5bc6\u94a5\u5e93\u6761\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("using.an.alternative.signing.mechanism"_s),
			$of(u"\u6b63\u5728\u4f7f\u7528\u66ff\u4ee3\u7684\u7b7e\u540d\u673a\u5236"_s)
		}),
		$$new($ObjectArray, {
			$of("entry.was.signed.on"_s),
			$of(u"\u6761\u76ee\u7684\u7b7e\u540d\u65e5\u671f\u4e3a {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning."_s),
			$of(u"\u8b66\u544a: "_s)
		}),
		$$new($ObjectArray, {
			$of("Error."_s),
			$of(u"\u9519\u8bef: "_s)
		}),
		$$new($ObjectArray, {
			$of("...Signer"_s),
			$of(u">>> \u7b7e\u540d\u8005"_s)
		}),
		$$new($ObjectArray, {
			$of("...TSA"_s),
			$of(">>> TSA"_s)
		}),
		$$new($ObjectArray, {
			$of("trusted.certificate"_s),
			$of(u"\u53ef\u4fe1\u8bc1\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.unsigned.entries.which.have.not.been.integrity.checked."_s),
			$of(u"\u6b64 jar \u5305\u542b\u5c1a\u672a\u8fdb\u884c\u5b8c\u6574\u6027\u68c0\u67e5\u7684\u672a\u7b7e\u540d\u6761\u76ee\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.has.expired."_s),
			$of(u"\u6b64 jar \u5305\u542b\u7b7e\u540d\u8005\u8bc1\u4e66\u5df2\u8fc7\u671f\u7684\u6761\u76ee\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.will.expire.within.six.months."_s),
			$of(u"\u6b64 jar \u5305\u542b\u7b7e\u540d\u8005\u8bc1\u4e66\u5c06\u5728\u516d\u4e2a\u6708\u5185\u8fc7\u671f\u7684\u6761\u76ee\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.is.not.yet.valid."_s),
			$of(u"\u6b64 jar \u5305\u542b\u7b7e\u540d\u8005\u8bc1\u4e66\u4ecd\u65e0\u6548\u7684\u6761\u76ee\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.is.self.signed."_s),
			$of(u"\u6b64 jar \u5305\u542b\u5176\u7b7e\u540d\u8005\u8bc1\u4e66\u4e3a\u81ea\u7b7e\u540d\u8bc1\u4e66\u7684\u6761\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Re.run.with.the.verbose.and.certs.options.for.more.details."_s),
			$of(u"\u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u4f7f\u7528 -verbose \u548c -certs \u9009\u9879\u91cd\u65b0\u8fd0\u884c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.has.expired."_s),
			$of(u"\u7b7e\u540d\u8005\u8bc1\u4e66\u5df2\u8fc7\u671f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.expired.1.but.usable.2"_s),
			$of(u"\u65f6\u95f4\u6233\u5230\u671f\u65e5\u671f\u4e3a %1$tY-%1$tm-%1$td\u3002\u4e0d\u8fc7\uff0c\u5728\u7b7e\u540d\u8005\u8bc1\u4e66\u4e8e %2$tY-%2$tm-%2$td \u5230\u671f\u4e4b\u524d\uff0cJAR \u5c06\u6709\u6548\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.has.expired."_s),
			$of(u"\u65f6\u95f4\u6233\u5df2\u5230\u671f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.will.expire.within.six.months."_s),
			$of(u"\u7b7e\u540d\u8005\u8bc1\u4e66\u5c06\u5728\u516d\u4e2a\u6708\u5185\u8fc7\u671f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.will.expire.within.one.year.on.1"_s),
			$of(u"\u65f6\u95f4\u6233\u5c06\u5728\u4e00\u5e74\u5185\u4e8e %1$tY-%1$tm-%1$td \u5230\u671f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.will.expire.within.one.year.on.1.but.2"_s),
			$of(u"\u65f6\u95f4\u6233\u5c06\u5728\u4e00\u5e74\u5185\u4e8e %1$tY-%1$tm-%1$td \u5230\u671f\u3002\u4e0d\u8fc7\uff0c\u5728\u7b7e\u540d\u8005\u8bc1\u4e66\u4e8e %2$tY-%2$tm-%2$td \u5230\u671f\u4e4b\u524d\uff0cJAR \u5c06\u6709\u6548\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.is.not.yet.valid."_s),
			$of(u"\u7b7e\u540d\u8005\u8bc1\u4e66\u4ecd\u65e0\u6548\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of(u"\u7531\u4e8e\u7b7e\u540d\u8005\u8bc1\u4e66\u7684 KeyUsage \u6269\u5c55\u800c\u65e0\u6cd5\u8fdb\u884c\u4ee3\u7801\u7b7e\u540d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of(u"\u7531\u4e8e\u7b7e\u540d\u8005\u8bc1\u4e66\u7684 ExtendedKeyUsage \u6269\u5c55\u800c\u65e0\u6cd5\u8fdb\u884c\u4ee3\u7801\u7b7e\u540d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s),
			$of(u"\u7531\u4e8e\u7b7e\u540d\u8005\u8bc1\u4e66\u7684 NetscapeCertType \u6269\u5c55\u800c\u65e0\u6cd5\u8fdb\u884c\u4ee3\u7801\u7b7e\u540d\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of(u"\u6b64 jar \u5305\u542b\u7531\u4e8e\u7b7e\u540d\u8005\u8bc1\u4e66\u7684 KeyUsage \u6269\u5c55\u800c\u65e0\u6cd5\u8fdb\u884c\u4ee3\u7801\u7b7e\u540d\u7684\u6761\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of(u"\u6b64 jar \u5305\u542b\u7531\u4e8e\u7b7e\u540d\u8005\u8bc1\u4e66\u7684 ExtendedKeyUsage \u6269\u5c55\u800c\u65e0\u6cd5\u8fdb\u884c\u4ee3\u7801\u7b7e\u540d\u7684\u6761\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s),
			$of(u"\u6b64 jar \u5305\u542b\u7531\u4e8e\u7b7e\u540d\u8005\u8bc1\u4e66\u7684 NetscapeCertType \u6269\u5c55\u800c\u65e0\u6cd5\u8fdb\u884c\u4ee3\u7801\u7b7e\u540d\u7684\u6761\u76ee\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(".{0}.extension.does.not.support.code.signing."_s),
			$of(u"[{0} \u6269\u5c55\u4e0d\u652f\u6301\u4ee3\u7801\u7b7e\u540d]"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.s.certificate.chain.is.invalid.reason.1"_s),
			$of(u"\u7b7e\u540d\u8005\u8bc1\u4e66\u94fe\u65e0\u6548\u3002\u539f\u56e0: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("The.tsa.certificate.chain.is.invalid.reason.1"_s),
			$of(u"TSA \u8bc1\u4e66\u94fe\u65e0\u6548\u3002\u539f\u56e0: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.s.certificate.is.self.signed."_s),
			$of(u"\u7b7e\u540d\u8005\u8bc1\u4e66\u4e3a\u81ea\u7b7e\u540d\u8bc1\u4e66\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of(u"\u4e3a %2$s \u9009\u9879\u6307\u5b9a\u7684 %1$s \u7b97\u6cd5\u88ab\u89c6\u4e3a\u5b58\u5728\u5b89\u5168\u98ce\u9669\u3002\u6b64\u7b97\u6cd5\u5c06\u5728\u672a\u6765\u7684\u66f4\u65b0\u4e2d\u88ab\u7981\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk.and.is.disabled."_s),
			$of(u"\u4e3a %2$s \u9009\u9879\u6307\u5b9a\u7684 %1$s \u7b97\u6cd5\u88ab\u89c6\u4e3a\u5b58\u5728\u5b89\u5168\u98ce\u9669\u800c\u4e14\u88ab\u7981\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s \u65f6\u95f4\u6233\u6458\u8981\u7b97\u6cd5\u88ab\u89c6\u4e3a\u5b58\u5728\u5b89\u5168\u98ce\u9669\u3002\u6b64\u7b97\u6cd5\u5c06\u5728\u672a\u6765\u7684\u66f4\u65b0\u4e2d\u88ab\u7981\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s \u6458\u8981\u7b97\u6cd5\u88ab\u89c6\u4e3a\u5b58\u5728\u5b89\u5168\u98ce\u9669\u3002\u6b64\u7b97\u6cd5\u5c06\u5728\u672a\u6765\u7684\u66f4\u65b0\u4e2d\u88ab\u7981\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signature.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s \u7b7e\u540d\u7b97\u6cd5\u88ab\u89c6\u4e3a\u5b58\u5728\u5b89\u5168\u98ce\u9669\u3002\u6b64\u7b97\u6cd5\u5c06\u5728\u672a\u6765\u7684\u66f4\u65b0\u4e2d\u88ab\u7981\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk..This.key.size.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s \u7b7e\u540d\u5bc6\u94a5\u7684\u5bc6\u94a5\u5927\u5c0f %2$d \u88ab\u89c6\u4e3a\u5b58\u5728\u5b89\u5168\u98ce\u9669\u3002\u6b64\u5bc6\u94a5\u5927\u5c0f\u5c06\u5728\u672a\u6765\u7684\u66f4\u65b0\u4e2d\u88ab\u7981\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk.and.is.disabled."_s),
			$of(u"%1$s \u7b7e\u540d\u5bc6\u94a5\u7684\u5bc6\u94a5\u5927\u5c0f %2$d \u88ab\u89c6\u4e3a\u5b58\u5728\u5b89\u5168\u98ce\u9669\u800c\u4e14\u88ab\u7981\u7528\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.certificate.chain.is.invalid.reason.1"_s),
			$of(u"\u6b64 jar \u5305\u542b\u5176\u8bc1\u4e66\u94fe\u65e0\u6548\u7684\u6761\u76ee\u3002\u539f\u56e0: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.tsa.certificate.chain.is.invalid.reason.1"_s),
			$of(u"\u6b64 jar \u5305\u542b\u5176 TSA \u8bc1\u4e66\u94fe\u65e0\u6548\u7684\u6761\u76ee\u3002\u539f\u56e0: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("no.timestamp.signing"_s),
			$of(u"\u672a\u63d0\u4f9b -tsa \u6216 -tsacert, \u6b64 jar \u6ca1\u6709\u65f6\u95f4\u6233\u3002\u5982\u679c\u6ca1\u6709\u65f6\u95f4\u6233, \u5219\u5728\u7b7e\u540d\u8005\u8bc1\u4e66\u7684\u5230\u671f\u65e5\u671f (%1$tY-%1$tm-%1$td) \u4e4b\u540e, \u7528\u6237\u53ef\u80fd\u65e0\u6cd5\u9a8c\u8bc1\u6b64 jar\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.timestamp.signing"_s),
			$of(u"\u65f6\u95f4\u6233\u65e0\u6548\u3002\u5982\u679c\u6ca1\u6709\u6709\u6548\u7684\u65f6\u95f4\u6233\uff0c\u5219\u5728\u7b7e\u540d\u8005\u8bc1\u4e66\u7684\u5230\u671f\u65e5\u671f (%1$tY-%1$tm-%1$td) \u4e4b\u540e\uff0c\u7528\u6237\u53ef\u80fd\u65e0\u6cd5\u9a8c\u8bc1\u6b64 jar\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("no.timestamp.verifying"_s),
			$of(u"\u6b64 jar \u5305\u542b\u7684\u7b7e\u540d\u6ca1\u6709\u65f6\u95f4\u6233\u3002\u5982\u679c\u6ca1\u6709\u65f6\u95f4\u6233, \u5219\u5728\u5176\u4e2d\u4efb\u4e00\u7b7e\u540d\u8005\u8bc1\u4e66\u5230\u671f (\u6700\u65e9\u4e3a %1$tY-%1$tm-%1$td) \u4e4b\u540e, \u7528\u6237\u53ef\u80fd\u65e0\u6cd5\u9a8c\u8bc1\u6b64 jar\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("bad.timestamp.verifying"_s),
			$of(u"\u6b64 jar \u5305\u542b\u5e26\u6709\u65e0\u6548\u65f6\u95f4\u6233\u7684\u7b7e\u540d\u3002\u5982\u679c\u6ca1\u6709\u6709\u6548\u65f6\u95f4\u6233, \u5219\u5728\u5176\u4e2d\u4efb\u4e00\u7b7e\u540d\u8005\u8bc1\u4e66\u5230\u671f (\u6700\u65e9\u4e3a %1$tY-%1$tm-%1$td) \u4e4b\u540e, \u7528\u6237\u53ef\u80fd\u65e0\u6cd5\u9a8c\u8bc1\u6b64 jar\u3002\n\u6709\u5173\u8be6\u7ec6\u4fe1\u606f, \u8bf7\u4f7f\u7528 -J-Djava.security.debug=jar \u91cd\u65b0\u8fd0\u884c jarsigner\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.will.expire.on.1."_s),
			$of(u"\u7b7e\u540d\u8005\u8bc1\u4e66\u5c06\u4e8e %1$tY-%1$tm-%1$td \u5230\u671f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.will.expire.on.1."_s),
			$of(u"\u65f6\u95f4\u6233\u5c06\u4e8e %1$tY-%1$tm-%1$td \u5230\u671f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("signer.cert.expired.1.but.timestamp.good.2."_s),
			$of(u"\u7b7e\u540d\u8005\u8bc1\u4e66\u5230\u671f\u65e5\u671f\u4e3a %1$tY-%1$tm-%1$td\u3002\u4e0d\u8fc7\uff0c\u5728\u65f6\u95f4\u6233\u4e8e %2$tY-%2$tm-%2$td \u5230\u671f\u4e4b\u524d\uff0cJAR \u5c06\u6709\u6548\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"\u672a\u77e5\u53e3\u4ee4\u7c7b\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"\u627e\u4e0d\u5230\u73af\u5883\u53d8\u91cf: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of(u"\u627e\u4e0d\u5230\u6587\u4ef6: "_s)
		}),
		$$new($ObjectArray, {
			$of("event.ocsp.check"_s),
			$of(u"\u6b63\u5728\u8054\u7cfb\u4f4d\u4e8e %s \u7684 OCSP \u670d\u52a1\u5668..."_s)
		}),
		$$new($ObjectArray, {
			$of("event.crl.check"_s),
			$of(u"\u6b63\u5728\u4ece %s \u4e0b\u8f7d CRL..."_s)
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