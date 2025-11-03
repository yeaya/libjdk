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

$FieldInfo _Resources_ja_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources_ja, contents)},
	{}
};

$MethodInfo _Resources_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Resources_ja::*)()>(&Resources_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Resources_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.jarsigner.Resources_ja",
	"java.util.ListResourceBundle",
	nullptr,
	_Resources_ja_FieldInfo_,
	_Resources_ja_MethodInfo_
};

$Object* allocate$Resources_ja($Class* clazz) {
	return $of($alloc(Resources_ja));
}

$ObjectArray2* Resources_ja::contents = nullptr;

void Resources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources_ja::getContents() {
	return Resources_ja::contents;
}

void clinit$Resources_ja($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Resources_ja::contents, $new($ObjectArray2, {
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
			$of(u"%s\u306f\u30d7\u30ed\u30d0\u30a4\u30c0\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.name.not.found"_s),
			$of(u"\u30d7\u30ed\u30d0\u30a4\u30c0\u540d\"%s\"\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("provider.class.not.found"_s),
			$of(u"\u30d7\u30ed\u30d0\u30a4\u30c0\"%s\"\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("jarsigner.error."_s),
			$of(u"jarsigner\u30a8\u30e9\u30fc: "_s)
		}),
		$$new($ObjectArray, {
			$of("Illegal.option."_s),
			$of(u"\u4e0d\u6b63\u306a\u30aa\u30d7\u30b7\u30e7\u30f3: "_s)
		}),
		$$new($ObjectArray, {
			$of("This.option.is.forremoval"_s),
			$of(u"\u3053\u306e\u30aa\u30d7\u30b7\u30e7\u30f3\u306f\u975e\u63a8\u5968\u3067\u3042\u308a\u3001\u5c06\u6765\u306e\u30ea\u30ea\u30fc\u30b9\u3067\u524a\u9664\u3055\u308c\u308b\u4e88\u5b9a\u3067\u3059: "_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.must.be.NONE.if.storetype.is.{0}"_s),
			$of(u"-storetype\u304c{0}\u306e\u5834\u5408\u3001-keystore\u306fNONE\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.can.not.be.specified.if.storetype.is.{0}"_s),
			$of(u"-storetype\u304c{0}\u306e\u5834\u5408\u3001-keypass\u306f\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("If.protected.is.specified.then.storepass.and.keypass.must.not.be.specified"_s),
			$of(u"-protected\u3092\u6307\u5b9a\u3059\u308b\u5834\u5408\u306f\u3001-storepass\u304a\u3088\u3073-keypass\u3092\u6307\u5b9a\u3057\u306a\u3044\u3067\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("If.keystore.is.not.password.protected.then.storepass.and.keypass.must.not.be.specified"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u304c\u30d1\u30b9\u30ef\u30fc\u30c9\u3067\u4fdd\u8b77\u3055\u308c\u3066\u3044\u306a\u3044\u5834\u5408\u3001-storepass\u304a\u3088\u3073-keypass\u3092\u6307\u5b9a\u3057\u306a\u3044\u3067\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("Usage.jarsigner.options.jar.file.alias"_s),
			$of(u"\u4f7f\u7528\u65b9\u6cd5: jarsigner [options] jar-file alias"_s)
		}),
		$$new($ObjectArray, {
			$of(".jarsigner.verify.options.jar.file.alias."_s),
			$of("       jarsigner -verify [options] jar-file [alias...]"_s)
		}),
		$$new($ObjectArray, {
			$of(".keystore.url.keystore.location"_s),
			$of(u"[-keystore <url>]           \u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u4f4d\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of(".storepass.password.password.for.keystore.integrity"_s),
			$of(u"[-storepass <password>]     \u30ad\u30fc\u30b9\u30c8\u30a2\u6574\u5408\u6027\u306e\u305f\u3081\u306e\u30d1\u30b9\u30ef\u30fc\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of(".storetype.type.keystore.type"_s),
			$of(u"[-storetype <type>]         \u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u578b"_s)
		}),
		$$new($ObjectArray, {
			$of(".keypass.password.password.for.private.key.if.different."_s),
			$of(u"[-keypass <password>]       \u79d8\u5bc6\u30ad\u30fc\u306e\u30d1\u30b9\u30ef\u30fc\u30c9(\u7570\u306a\u308b\u5834\u5408)"_s)
		}),
		$$new($ObjectArray, {
			$of(".certchain.file.name.of.alternative.certchain.file"_s),
			$of(u"[-certchain <file>]         \u4ee3\u66ff\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u540d\u524d"_s)
		}),
		$$new($ObjectArray, {
			$of(".sigfile.file.name.of.SF.DSA.file"_s),
			$of(u"[-sigfile <file>]           .SF/.DSA\u30d5\u30a1\u30a4\u30eb\u306e\u540d\u524d"_s)
		}),
		$$new($ObjectArray, {
			$of(".signedjar.file.name.of.signed.JAR.file"_s),
			$of(u"[-signedjar <file>]         \u7f72\u540d\u4ed8\u304dJAR\u30d5\u30a1\u30a4\u30eb\u306e\u540d\u524d"_s)
		}),
		$$new($ObjectArray, {
			$of(".digestalg.algorithm.name.of.digest.algorithm"_s),
			$of(u"[-digestalg <algorithm>]    \u30c0\u30a4\u30b8\u30a7\u30b9\u30c8\u30fb\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u306e\u540d\u524d"_s)
		}),
		$$new($ObjectArray, {
			$of(".sigalg.algorithm.name.of.signature.algorithm"_s),
			$of(u"[-sigalg <algorithm>]       \u30b7\u30b0\u30cd\u30c1\u30e3\u30fb\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u306e\u540d\u524d"_s)
		}),
		$$new($ObjectArray, {
			$of(".verify.verify.a.signed.JAR.file"_s),
			$of(u"[-verify]                   \u7f72\u540d\u4ed8\u304dJAR\u30d5\u30a1\u30a4\u30eb\u306e\u691c\u8a3c"_s)
		}),
		$$new($ObjectArray, {
			$of(".verbose.suboptions.verbose.output.when.signing.verifying."_s),
			$of(u"[-verbose[:suboptions]]     \u7f72\u540d/\u691c\u8a3c\u6642\u306e\u8a73\u7d30\u51fa\u529b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(".suboptions.can.be.all.grouped.or.summary"_s),
			$of(u"                            \u30b5\u30d6\u30aa\u30d7\u30b7\u30e7\u30f3\u3068\u3057\u3066\u3001all\u3001grouped\u307e\u305f\u306fsummary\u3092\u4f7f\u7528\u3067\u304d\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(".certs.display.certificates.when.verbose.and.verifying"_s),
			$of(u"[-certs]                    \u8a73\u7d30\u51fa\u529b\u304a\u3088\u3073\u691c\u8a3c\u6642\u306b\u8a3c\u660e\u66f8\u3092\u8868\u793a"_s)
		}),
		$$new($ObjectArray, {
			$of(".certs.revocation.check"_s),
			$of(u"[-revCheck]                 \u8a3c\u660e\u66f8\u5931\u52b9\u30c1\u30a7\u30c3\u30af\u306e\u6709\u52b9\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsa.url.location.of.the.Timestamping.Authority"_s),
			$of(u"[-tsa <url>]                \u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u5c40\u306e\u5834\u6240"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsacert.alias.public.key.certificate.for.Timestamping.Authority"_s),
			$of(u"[-tsacert <alias>]          \u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u5c40\u306e\u516c\u958b\u30ad\u30fc\u8a3c\u660e\u66f8"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsapolicyid.tsapolicyid.for.Timestamping.Authority"_s),
			$of(u"[-tsapolicyid <oid>]        \u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u5c40\u306eTSAPolicyID"_s)
		}),
		$$new($ObjectArray, {
			$of(".tsadigestalg.algorithm.of.digest.data.in.timestamping.request"_s),
			$of(u"[-tsadigestalg <algorithm>] \u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u30fb\u30ea\u30af\u30a8\u30b9\u30c8\u306e\u30c0\u30a4\u30b8\u30a7\u30b9\u30c8\u30fb\u30c7\u30fc\u30bf\u306e\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0"_s)
		}),
		$$new($ObjectArray, {
			$of(".altsigner.class.class.name.of.an.alternative.signing.mechanism"_s),
			$of(u"[-altsigner <class>]        \u4ee3\u66ff\u7f72\u540d\u30e1\u30ab\u30cb\u30ba\u30e0\u306e\u30af\u30e9\u30b9\u540d\n                            (\u3053\u306e\u30aa\u30d7\u30b7\u30e7\u30f3\u306f\u975e\u63a8\u5968\u3067\u3042\u308a\u3001\u5c06\u6765\u306e\u30ea\u30ea\u30fc\u30b9\u3067\u524a\u9664\u3055\u308c\u308b\u4e88\u5b9a\u3067\u3059\u3002)"_s)
		}),
		$$new($ObjectArray, {
			$of(".altsignerpath.pathlist.location.of.an.alternative.signing.mechanism"_s),
			$of(u"[-altsignerpath <pathlist>] \u4ee3\u66ff\u7f72\u540d\u30e1\u30ab\u30cb\u30ba\u30e0\u306e\u5834\u6240\n                            (\u3053\u306e\u30aa\u30d7\u30b7\u30e7\u30f3\u306f\u975e\u63a8\u5968\u3067\u3042\u308a\u3001\u5c06\u6765\u306e\u30ea\u30ea\u30fc\u30b9\u3067\u524a\u9664\u3055\u308c\u308b\u4e88\u5b9a\u3067\u3059\u3002)"_s)
		}),
		$$new($ObjectArray, {
			$of(".internalsf.include.the.SF.file.inside.the.signature.block"_s),
			$of(u"[-internalsf]               \u30b7\u30b0\u30cd\u30c1\u30e3\u30fb\u30d6\u30ed\u30c3\u30af\u306b.SF\u30d5\u30a1\u30a4\u30eb\u3092\u542b\u3081\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of(".sectionsonly.don.t.compute.hash.of.entire.manifest"_s),
			$of(u"[-sectionsonly]             \u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u5168\u4f53\u306e\u30cf\u30c3\u30b7\u30e5\u306f\u8a08\u7b97\u3057\u306a\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of(".protected.keystore.has.protected.authentication.path"_s),
			$of(u"[-protected]                \u30ad\u30fc\u30b9\u30c8\u30a2\u306b\u306f\u4fdd\u8b77\u3055\u308c\u305f\u8a8d\u8a3c\u30d1\u30b9\u304c\u3042\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerName.name.provider.name"_s),
			$of(u"[-providerName <name>]      \u30d7\u30ed\u30d0\u30a4\u30c0\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of(".add.provider.option"_s),
			$of(u"[-addprovider <name>        \u540d\u524d\u3067\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30d7\u30ed\u30d0\u30a4\u30c0\u3092\u8ffd\u52a0\u3059\u308b(SunPKCS11\u306a\u3069)"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerArg.option.1"_s),
			$of(u"  [-providerArg <arg>]] ... -addprovider\u306e\u5f15\u6570\u3092\u69cb\u6210\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerClass.option"_s),
			$of(u"[-providerClass <class>     \u5b8c\u5168\u4fee\u98fe\u30af\u30e9\u30b9\u540d\u3067\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30d7\u30ed\u30d0\u30a4\u30c0\u3092\u8ffd\u52a0\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of(".providerArg.option.2"_s),
			$of(u"  [-providerArg <arg>]] ... -providerClass\u306e\u5f15\u6570\u3092\u69cb\u6210\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of(".strict.treat.warnings.as.errors"_s),
			$of(u"[-strict]                   \u8b66\u544a\u3092\u30a8\u30e9\u30fc\u3068\u3057\u3066\u51e6\u7406"_s)
		}),
		$$new($ObjectArray, {
			$of(".conf.url.specify.a.pre.configured.options.file"_s),
			$of(u"[-conf <url>]               \u4e8b\u524d\u69cb\u6210\u6e08\u306e\u30aa\u30d7\u30b7\u30e7\u30f3\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u6307\u5b9a\u3059\u308b"_s)
		}),
		$$new($ObjectArray, {
			$of(".print.this.help.message"_s),
			$of(u"[-? -h --help]              \u3053\u306e\u30d8\u30eb\u30d7\u30fb\u30e1\u30c3\u30bb\u30fc\u30b8\u3092\u51fa\u529b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("Option.lacks.argument"_s),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3\u306b\u5f15\u6570\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.type.jarsigner.help.for.usage"_s),
			$of(u"\u4f7f\u7528\u65b9\u6cd5\u306b\u3064\u3044\u3066\u306fjarsigner --help\u3068\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.jarfile.name"_s),
			$of(u"jarfile\u540d\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("Please.specify.alias.name"_s),
			$of(u"\u5225\u540d\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("Only.one.alias.can.be.specified"_s),
			$of(u"\u5225\u540d\u306f1\u3064\u306e\u307f\u6307\u5b9a\u3067\u304d\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.signed.entries.which.is.not.signed.by.the.specified.alias.es."_s),
			$of(u"\u3053\u306ejar\u306b\u542b\u307e\u308c\u308b\u7f72\u540d\u6e08\u30a8\u30f3\u30c8\u30ea\u306f\u3001\u6307\u5b9a\u3055\u308c\u305f\u5225\u540d\u306b\u3088\u3063\u3066\u7f72\u540d\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.signed.entries.that.s.not.signed.by.alias.in.this.keystore."_s),
			$of(u"\u3053\u306ejar\u306b\u542b\u307e\u308c\u308b\u7f72\u540d\u6e08\u30a8\u30f3\u30c8\u30ea\u306f\u3001\u3053\u306e\u30ad\u30fc\u30b9\u30c8\u30a2\u5185\u306e\u5225\u540d\u306b\u3088\u3063\u3066\u7f72\u540d\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
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
			$of(u"(\u4ed6\u306b\u3082%d\u500b)"_s)
		}),
		$$new($ObjectArray, {
			$of(".s.signature.was.verified."_s),
			$of(u"  s=\u30b7\u30b0\u30cd\u30c1\u30e3\u304c\u691c\u8a3c\u3055\u308c\u307e\u3057\u305f "_s)
		}),
		$$new($ObjectArray, {
			$of(".m.entry.is.listed.in.manifest"_s),
			$of(u"  m=\u30a8\u30f3\u30c8\u30ea\u304c\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u5185\u306b\u30ea\u30b9\u30c8\u3055\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(".k.at.least.one.certificate.was.found.in.keystore"_s),
			$of(u"  k=1\u3064\u4ee5\u4e0a\u306e\u8a3c\u660e\u66f8\u304c\u30ad\u30fc\u30b9\u30c8\u30a2\u3067\u691c\u51fa\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of(".X.not.signed.by.specified.alias.es."_s),
			$of(u"  X =\u6307\u5b9a\u3057\u305f\u5225\u540d\u3067\u7f72\u540d\u3055\u308c\u3066\u3044\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("no.manifest."_s),
			$of(u"\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u306f\u5b58\u5728\u3057\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(".Signature.related.entries."_s),
			$of(u"(\u30b7\u30b0\u30cd\u30c1\u30e3\u95a2\u9023\u30a8\u30f3\u30c8\u30ea)"_s)
		}),
		$$new($ObjectArray, {
			$of(".Unsigned.entries."_s),
			$of(u"(\u7f72\u540d\u306a\u3057\u306e\u30a8\u30f3\u30c8\u30ea)"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.is.unsigned"_s),
			$of(u"jar\u306f\u7f72\u540d\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.treated.unsigned"_s),
			$of(u"\u8b66\u544a: \u7f72\u540d\u304c\u69cb\u6587\u89e3\u6790\u3067\u304d\u306a\u3044\u304b\u691c\u8a3c\u3067\u304d\u306a\u3044\u305f\u3081\u3001\u3053\u306ejar\u306f\u7f72\u540d\u306a\u3057\u3068\u3057\u3066\u6271\u308f\u308c\u307e\u3059\u3002\u8a73\u7d30\u306f\u3001\u30c7\u30d0\u30c3\u30b0\u3092\u6709\u52b9\u306b\u3057\u3066(-J-Djava.security.debug=jar) jarsigner\u3092\u518d\u5b9f\u884c\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.treated.unsigned.see.weak"_s),
			$of(u"\u3053\u306ejar\u306f\u3001\u73fe\u5728\u7121\u52b9\u306b\u306a\u3063\u3066\u3044\u308b\u5f31\u3044\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u3067\u7f72\u540d\u3055\u308c\u3066\u3044\u308b\u305f\u3081\u3001\u7f72\u540d\u306a\u3057\u3068\u3057\u3066\u6271\u308f\u308c\u307e\u3059\u3002\n\n\u8a73\u7d30\u306f\u3001-verbose\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u4f7f\u7528\u3057\u3066jarsigner\u3092\u518d\u5b9f\u884c\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.treated.unsigned.see.weak.verbose"_s),
			$of(u"\u8b66\u544a: \u3053\u306ejar\u306f\u3001\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30d7\u30ed\u30d1\u30c6\u30a3\u306b\u3088\u3063\u3066\u73fe\u5728\u7121\u52b9\u306b\u306a\u3063\u3066\u3044\u308b\u5f31\u3044\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u3067\u7f72\u540d\u3055\u308c\u3066\u3044\u308b\u305f\u3081\u3001\u7f72\u540d\u306a\u3057\u3068\u3057\u3066\u6271\u308f\u308c\u307e\u3059:"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.signed."_s),
			$of(u"jar\u306f\u7f72\u540d\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.signed.with.signer.errors."_s),
			$of(u"jar\u306f\u7f72\u540d\u3055\u308c\u307e\u3057\u305f - \u7f72\u540d\u8005\u30a8\u30e9\u30fc\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.verified."_s),
			$of(u"jar\u304c\u691c\u8a3c\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jar.verified.with.signer.errors."_s),
			$of(u"jar\u306f\u691c\u8a3c\u3055\u308c\u307e\u3057\u305f - \u7f72\u540d\u8005\u30a8\u30e9\u30fc\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("history.with.ts"_s),
			$of(u"- \u7f72\u540d\u8005: \"%1$s\"\n    \u30c0\u30a4\u30b8\u30a7\u30b9\u30c8\u30fb\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0: %2$s\n    \u7f72\u540d\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0: %3$s\u3001%4$s\n  \u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u4ed8\u52a0\u8005: \"%6$s\" \u65e5\u6642: %5$tc\n    \u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u306e\u30c0\u30a4\u30b8\u30a7\u30b9\u30c8\u30fb\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0: %7$s\n    \u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u306e\u7f72\u540d\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0: %8$s\u3001%9$s"_s)
		}),
		$$new($ObjectArray, {
			$of("history.without.ts"_s),
			$of(u"- \u7f72\u540d\u8005: \"%1$s\"\n    \u30c0\u30a4\u30b8\u30a7\u30b9\u30c8\u30fb\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0: %2$s\n    \u7f72\u540d\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0: %3$s\u3001%4$s"_s)
		}),
		$$new($ObjectArray, {
			$of("history.unparsable"_s),
			$of(u"- \u7f72\u540d\u95a2\u9023\u30d5\u30a1\u30a4\u30eb%s\u3092\u89e3\u6790\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("history.nosf"_s),
			$of(u"- \u7f72\u540d\u95a2\u9023\u30d5\u30a1\u30a4\u30ebMETA-INF/%s.SF\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("history.nobk"_s),
			$of(u"- \u7f72\u540d\u95a2\u9023\u30d5\u30a1\u30a4\u30ebMETA-INF/%s.SF\u306e\u30d6\u30ed\u30c3\u30af\u30fb\u30d5\u30a1\u30a4\u30eb\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("with.weak"_s),
			$of(u"%s (\u5f31)"_s)
		}),
		$$new($ObjectArray, {
			$of("with.disabled"_s),
			$of(u"%s (\u7121\u52b9)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit"_s),
			$of(u"%d\u30d3\u30c3\u30c8\u30fb\u30ad\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.weak"_s),
			$of(u"%d\u30d3\u30c3\u30c8\u30fb\u30ad\u30fc(\u5f31)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.bit.disabled"_s),
			$of(u"%d\u30d3\u30c3\u30c8\u30fb\u30ad\u30fc (\u7121\u52b9)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown.size"_s),
			$of(u"\u4e0d\u660e\u30b5\u30a4\u30ba"_s)
		}),
		$$new($ObjectArray, {
			$of("extra.attributes.detected"_s),
			$of(u"POSIX\u30d5\u30a1\u30a4\u30eb\u6a29\u9650\u307e\u305f\u306fsymlink(\u3042\u308b\u3044\u306f\u305d\u306e\u4e21\u65b9)\u306e\u5c5e\u6027\u304c\u691c\u51fa\u3055\u308c\u307e\u3057\u305f\u3002\u7f72\u540d\u4e2d\u306f\u3053\u308c\u3089\u306e\u5c5e\u6027\u306f\u7121\u8996\u3055\u308c\u3001\u7f72\u540d\u306b\u3088\u3063\u3066\u4fdd\u8b77\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("jarsigner."_s),
			$of("jarsigner: "_s)
		}),
		$$new($ObjectArray, {
			$of("signature.filename.must.consist.of.the.following.characters.A.Z.0.9.or."_s),
			$of(u"\u30b7\u30b0\u30cd\u30c1\u30e3\u306e\u30d5\u30a1\u30a4\u30eb\u540d\u306b\u4f7f\u7528\u3067\u304d\u308b\u6587\u5b57\u306f\u3001A-Z\u30010-9\u3001_\u3001- \u306e\u307f\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.open.jar.file."_s),
			$of(u"\u6b21\u306ejar\u30d5\u30a1\u30a4\u30eb\u3092\u958b\u304f\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.create."_s),
			$of(u"\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of(".adding."_s),
			$of(u"   \u8ffd\u52a0\u4e2d: "_s)
		}),
		$$new($ObjectArray, {
			$of(".updating."_s),
			$of(u" \u66f4\u65b0\u4e2d: "_s)
		}),
		$$new($ObjectArray, {
			$of(".signing."_s),
			$of(u"  \u7f72\u540d\u4e2d: "_s)
		}),
		$$new($ObjectArray, {
			$of("attempt.to.rename.signedJarFile.to.jarFile.failed"_s),
			$of(u"{0}\u306e\u540d\u524d\u3092{1}\u306b\u5909\u66f4\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f\u304c\u5931\u6557\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("attempt.to.rename.jarFile.to.origJar.failed"_s),
			$of(u"{0}\u306e\u540d\u524d\u3092{1}\u306b\u5909\u66f4\u3057\u3088\u3046\u3068\u3057\u307e\u3057\u305f\u304c\u5931\u6557\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.sign.jar."_s),
			$of(u"jar\u306b\u7f72\u540d\u3067\u304d\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.Passphrase.for.keystore."_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044: "_s)
		}),
		$$new($ObjectArray, {
			$of("keystore.load."_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u306e\u30ed\u30fc\u30c9: "_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.exception."_s),
			$of(u"\u8a3c\u660e\u66f8\u4f8b\u5916: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.instantiate.keystore.class."_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u30fb\u30af\u30e9\u30b9\u306e\u30a4\u30f3\u30b9\u30bf\u30f3\u30b9\u3092\u751f\u6210\u3067\u304d\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.not.found.for.alias.alias.must.reference.a.valid.KeyStore.key.entry.containing.a.private.key.and"_s),
			$of(u"\u6b21\u306e\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {0}\u3002{1}\u306f\u3001\u79d8\u5bc6\u30ad\u30fc\u304a\u3088\u3073\u5bfe\u5fdc\u3059\u308b\u516c\u958b\u30ad\u30fc\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3\u3092\u542b\u3080\u6709\u52b9\u306aKeyStore\u30ad\u30fc\u30fb\u30a8\u30f3\u30c8\u30ea\u3092\u53c2\u7167\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("File.specified.by.certchain.does.not.exist"_s),
			$of(u"-certchain\u3067\u6307\u5b9a\u3055\u308c\u3066\u3044\u308b\u30d5\u30a1\u30a4\u30eb\u306f\u5b58\u5728\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.restore.certchain.from.file.specified"_s),
			$of(u"\u6307\u5b9a\u3055\u308c\u305f\u30d5\u30a1\u30a4\u30eb\u304b\u3089\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3\u3092\u5fa9\u5143\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.chain.not.found.in.the.file.specified."_s),
			$of(u"\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3\u306f\u6307\u5b9a\u3055\u308c\u305f\u30d5\u30a1\u30a4\u30eb\u306b\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("found.non.X.509.certificate.in.signer.s.chain"_s),
			$of(u"\u7f72\u540d\u8005\u306e\u9023\u9396\u5185\u3067\u975eX.509\u8a3c\u660e\u66f8\u304c\u691c\u51fa\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Enter.key.password.for.alias."_s),
			$of(u"{0}\u306e\u30ad\u30fc\u30fb\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044: "_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.recover.key.from.keystore"_s),
			$of(u"\u30ad\u30fc\u30b9\u30c8\u30a2\u304b\u3089\u30ad\u30fc\u3092\u5fa9\u5143\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("key.associated.with.alias.not.a.private.key"_s),
			$of(u"{0}\u3068\u95a2\u9023\u4ed8\u3051\u3089\u308c\u305f\u30ad\u30fc\u306f\u3001\u79d8\u5bc6\u30ad\u30fc\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("you.must.enter.key.password"_s),
			$of(u"\u30ad\u30fc\u30fb\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u5165\u529b\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("unable.to.read.password."_s),
			$of(u"\u30d1\u30b9\u30ef\u30fc\u30c9\u3092\u8aad\u307f\u8fbc\u3081\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.is.valid.from"_s),
			$of(u"\u8a3c\u660e\u66f8\u306f{0}\u304b\u3089{1}\u307e\u3067\u6709\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.expired.on"_s),
			$of(u"\u8a3c\u660e\u66f8\u306f{0}\u306b\u5931\u52b9\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.is.not.valid.until"_s),
			$of(u"\u8a3c\u660e\u66f8\u306f{0}\u307e\u3067\u6709\u52b9\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("certificate.will.expire.on"_s),
			$of(u"\u8a3c\u660e\u66f8\u306f{0}\u306b\u5931\u52b9\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of(".Invalid.certificate.chain."_s),
			$of(u"[\u7121\u52b9\u306a\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3: "_s)
		}),
		$$new($ObjectArray, {
			$of(".Invalid.TSA.certificate.chain."_s),
			$of(u"[\u7121\u52b9\u306aTSA\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3: "_s)
		}),
		$$new($ObjectArray, {
			$of("requesting.a.signature.timestamp"_s),
			$of(u"\u30b7\u30b0\u30cd\u30c1\u30e3\u30fb\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u306e\u30ea\u30af\u30a8\u30b9\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("TSA.location."_s),
			$of(u"TSA\u306e\u5834\u6240: "_s)
		}),
		$$new($ObjectArray, {
			$of("TSA.certificate."_s),
			$of(u"TSA\u8a3c\u660e\u66f8: "_s)
		}),
		$$new($ObjectArray, {
			$of("no.response.from.the.Timestamping.Authority."_s),
			$of(u"\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u5c40\u304b\u3089\u306e\u30ec\u30b9\u30dd\u30f3\u30b9\u304c\u3042\u308a\u307e\u305b\u3093\u3002\u30d5\u30a1\u30a4\u30a2\u30a6\u30a9\u30fc\u30eb\u3092\u4ecb\u3057\u3066\u63a5\u7d9a\u3059\u308b\u3068\u304d\u306f\u3001\u5fc5\u8981\u306b\u5fdc\u3058\u3066HTTP\u307e\u305f\u306fHTTPS\u30d7\u30ed\u30ad\u30b7\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044\u3002jarsigner\u306b\u6b21\u306e\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044:"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"\u307e\u305f\u306f"_s)
		}),
		$$new($ObjectArray, {
			$of("Certificate.not.found.for.alias.alias.must.reference.a.valid.KeyStore.entry.containing.an.X.509.public.key.certificate.for.the"_s),
			$of(u"\u8a3c\u660e\u66f8\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3067\u3057\u305f: {0}\u3002{1}\u306f\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u5c40\u306eX.509\u516c\u958b\u30ad\u30fc\u8a3c\u660e\u66f8\u304c\u542b\u307e\u308c\u3066\u3044\u308b\u6709\u52b9\u306aKeyStore\u30a8\u30f3\u30c8\u30ea\u3092\u53c2\u7167\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("using.an.alternative.signing.mechanism"_s),
			$of(u"\u4ee3\u66ff\u7f72\u540d\u30e1\u30ab\u30cb\u30ba\u30e0\u306e\u4f7f\u7528"_s)
		}),
		$$new($ObjectArray, {
			$of("entry.was.signed.on"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea\u306f{0}\u306b\u7f72\u540d\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("Warning."_s),
			$of(u"\u8b66\u544a: "_s)
		}),
		$$new($ObjectArray, {
			$of("Error."_s),
			$of(u"\u30a8\u30e9\u30fc: "_s)
		}),
		$$new($ObjectArray, {
			$of("...Signer"_s),
			$of(u">>> \u7f72\u540d\u8005"_s)
		}),
		$$new($ObjectArray, {
			$of("...TSA"_s),
			$of(">>> TSA"_s)
		}),
		$$new($ObjectArray, {
			$of("trusted.certificate"_s),
			$of(u"\u4fe1\u983c\u3067\u304d\u308b\u8a3c\u660e\u66f8"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.unsigned.entries.which.have.not.been.integrity.checked."_s),
			$of(u"\u3053\u306ejar\u306b\u306f\u3001\u6574\u5408\u6027\u30c1\u30a7\u30c3\u30af\u3092\u3057\u3066\u3044\u306a\u3044\u7f72\u540d\u306a\u3057\u306e\u30a8\u30f3\u30c8\u30ea\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.has.expired."_s),
			$of(u"\u3053\u306ejar\u306b\u306f\u3001\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u304c\u671f\u9650\u5207\u308c\u306e\u30a8\u30f3\u30c8\u30ea\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.will.expire.within.six.months."_s),
			$of(u"\u3053\u306ejar\u306b\u306f\u3001\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u304c6\u304b\u6708\u4ee5\u5185\u306b\u671f\u9650\u5207\u308c\u3068\u306a\u308b\u30a8\u30f3\u30c8\u30ea\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.is.not.yet.valid."_s),
			$of(u"\u3053\u306ejar\u306b\u306f\u3001\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u304c\u307e\u3060\u6709\u52b9\u306b\u306a\u3063\u3066\u3044\u306a\u3044\u30a8\u30f3\u30c8\u30ea\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.is.self.signed."_s),
			$of(u"\u3053\u306ejar\u306b\u306f\u3001\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u304c\u81ea\u5df1\u7f72\u540d\u3055\u308c\u3066\u3044\u308b\u30a8\u30f3\u30c8\u30ea\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002 "_s)
		}),
		$$new($ObjectArray, {
			$of("Re.run.with.the.verbose.and.certs.options.for.more.details."_s),
			$of(u"\u8a73\u7d30\u306f\u3001-verbose\u304a\u3088\u3073-certs\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u4f7f\u7528\u3057\u3066\u518d\u5b9f\u884c\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.has.expired."_s),
			$of(u"\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u306f\u671f\u9650\u5207\u308c\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.expired.1.but.usable.2"_s),
			$of(u"\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u306f%1$tY-%1$tm-%1$td\u306b\u671f\u9650\u5207\u308c\u306b\u306a\u308a\u307e\u3059\u3002\u305f\u3060\u3057\u3001JAR\u306f\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u304c%2$tY-%2$tm-%2$td\u306b\u671f\u9650\u5207\u308c\u306b\u306a\u308b\u307e\u3067\u6709\u52b9\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.has.expired."_s),
			$of(u"\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u306f\u671f\u9650\u5207\u308c\u306b\u306a\u308a\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.will.expire.within.six.months."_s),
			$of(u"\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u306f6\u304b\u6708\u4ee5\u5185\u306b\u671f\u9650\u5207\u308c\u306b\u306a\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.will.expire.within.one.year.on.1"_s),
			$of(u"\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u306f1\u5e74\u4ee5\u5185\u306e%1$tY-%1$tm-%1$td\u306b\u671f\u9650\u5207\u308c\u306b\u306a\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.will.expire.within.one.year.on.1.but.2"_s),
			$of(u"\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u306f1\u5e74\u4ee5\u5185\u306e%1$tY-%1$tm-%1$td\u306b\u671f\u9650\u5207\u308c\u306b\u306a\u308a\u307e\u3059\u3002\u305f\u3060\u3057\u3001JAR\u306f\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u304c%2$tY-%2$tm-%2$td\u306b\u671f\u9650\u5207\u308c\u306b\u306a\u308b\u307e\u3067\u6709\u52b9\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.is.not.yet.valid."_s),
			$of(u"\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u306f\u307e\u3060\u6709\u52b9\u306b\u306a\u3063\u3066\u3044\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of(u"\u7f72\u540d\u8005\u8a3c\u660e\u66f8\u306eKeyUsage\u62e1\u5f35\u6a5f\u80fd\u3067\u306f\u3001\u30b3\u30fc\u30c9\u7f72\u540d\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of(u"\u7f72\u540d\u8005\u8a3c\u660e\u66f8\u306eExtendedKeyUsage\u62e1\u5f35\u6a5f\u80fd\u3067\u306f\u3001\u30b3\u30fc\u30c9\u7f72\u540d\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s),
			$of(u"\u7f72\u540d\u8005\u8a3c\u660e\u66f8\u306eNetscapeCertType\u62e1\u5f35\u6a5f\u80fd\u3067\u306f\u3001\u30b3\u30fc\u30c9\u7f72\u540d\u306f\u8a31\u53ef\u3055\u308c\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of(u"\u3053\u306ejar\u306b\u306f\u3001\u7f72\u540d\u8005\u8a3c\u660e\u66f8\u306eKeyUsage\u62e1\u5f35\u6a5f\u80fd\u304c\u30b3\u30fc\u30c9\u7f72\u540d\u3092\u8a31\u53ef\u3057\u306a\u3044\u30a8\u30f3\u30c8\u30ea\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s),
			$of(u"\u3053\u306ejar\u306b\u306f\u3001\u7f72\u540d\u8005\u8a3c\u660e\u66f8\u306eExtendedKeyUsage\u62e1\u5f35\u6a5f\u80fd\u304c\u30b3\u30fc\u30c9\u7f72\u540d\u3092\u8a31\u53ef\u3057\u306a\u3044\u30a8\u30f3\u30c8\u30ea\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s),
			$of(u"\u3053\u306ejar\u306b\u306f\u3001\u7f72\u540d\u8005\u8a3c\u660e\u66f8\u306eNetscapeCertType\u62e1\u5f35\u6a5f\u80fd\u304c\u30b3\u30fc\u30c9\u7f72\u540d\u3092\u8a31\u53ef\u3057\u306a\u3044\u30a8\u30f3\u30c8\u30ea\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of(".{0}.extension.does.not.support.code.signing."_s),
			$of(u"[{0}\u62e1\u5f35\u6a5f\u80fd\u306f\u30b3\u30fc\u30c9\u7f72\u540d\u3092\u30b5\u30dd\u30fc\u30c8\u3057\u3066\u3044\u307e\u305b\u3093]"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.s.certificate.chain.is.invalid.reason.1"_s),
			$of(u"\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3\u304c\u7121\u52b9\u3067\u3059\u3002\u7406\u7531: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("The.tsa.certificate.chain.is.invalid.reason.1"_s),
			$of(u"TSA\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3\u304c\u7121\u52b9\u3067\u3059\u3002\u7406\u7531: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.s.certificate.is.self.signed."_s),
			$of(u"\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u306f\u81ea\u5df1\u7f72\u540d\u3055\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0(%2$s\u30aa\u30d7\u30b7\u30e7\u30f3\u306b\u6307\u5b9a)\u306f\u3001\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30ea\u30b9\u30af\u3068\u307f\u306a\u3055\u308c\u307e\u3059\u3002\u3053\u306e\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u306f\u5c06\u6765\u306e\u66f4\u65b0\u3067\u7121\u52b9\u5316\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk.and.is.disabled."_s),
			$of(u"%1$s\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0(%2$s\u30aa\u30d7\u30b7\u30e7\u30f3\u306b\u6307\u5b9a)\u306f\u3001\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30ea\u30b9\u30af\u3068\u307f\u306a\u3055\u308c\u3001\u7121\u52b9\u5316\u3055\u308c\u3066\u3044\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u30fb\u30c0\u30a4\u30b8\u30a7\u30b9\u30c8\u30fb\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u306f\u3001\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30ea\u30b9\u30af\u3068\u307f\u306a\u3055\u308c\u307e\u3059\u3002\u3053\u306e\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u306f\u5c06\u6765\u306e\u66f4\u65b0\u3067\u7121\u52b9\u5316\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s\u30c0\u30a4\u30b8\u30a7\u30b9\u30c8\u30fb\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u306f\u3001\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30ea\u30b9\u30af\u3068\u307f\u306a\u3055\u308c\u307e\u3059\u3002\u3053\u306e\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u306f\u5c06\u6765\u306e\u66f4\u65b0\u3067\u7121\u52b9\u5316\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signature.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s\u7f72\u540d\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u306f\u3001\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30ea\u30b9\u30af\u3068\u307f\u306a\u3055\u308c\u307e\u3059\u3002\u3053\u306e\u30a2\u30eb\u30b4\u30ea\u30ba\u30e0\u306f\u5c06\u6765\u306e\u66f4\u65b0\u3067\u7121\u52b9\u5316\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk..This.key.size.will.be.disabled.in.a.future.update."_s),
			$of(u"%1$s\u7f72\u540d\u30ad\u30fc\u306b\u306f%2$d\u306e\u30ad\u30fc\u30fb\u30b5\u30a4\u30ba\u304c\u3042\u308a\u3001\u3053\u308c\u306f\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30ea\u30b9\u30af\u3068\u307f\u306a\u3055\u308c\u307e\u3059\u3002\u3053\u306e\u30ad\u30fc\u30fb\u30b5\u30a4\u30ba\u306f\u5c06\u6765\u306e\u66f4\u65b0\u3067\u7121\u52b9\u5316\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk.and.is.disabled."_s),
			$of(u"%1$s\u7f72\u540d\u30ad\u30fc\u306b\u306f%2$d\u306e\u30ad\u30fc\u30fb\u30b5\u30a4\u30ba\u304c\u3042\u308a\u3001\u3053\u308c\u306f\u30bb\u30ad\u30e5\u30ea\u30c6\u30a3\u30fb\u30ea\u30b9\u30af\u3068\u307f\u306a\u3055\u308c\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.certificate.chain.is.invalid.reason.1"_s),
			$of(u"\u3053\u306ejar\u306b\u306f\u3001\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3\u304c\u7121\u52b9\u306a\u30a8\u30f3\u30c8\u30ea\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002\u7406\u7531: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("This.jar.contains.entries.whose.tsa.certificate.chain.is.invalid.reason.1"_s),
			$of(u"\u3053\u306ejar\u306b\u306f\u3001TSA\u8a3c\u660e\u66f8\u30c1\u30a7\u30fc\u30f3\u304c\u7121\u52b9\u306a\u30a8\u30f3\u30c8\u30ea\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002\u7406\u7531: %s"_s)
		}),
		$$new($ObjectArray, {
			$of("no.timestamp.signing"_s),
			$of(u"-tsa\u307e\u305f\u306f-tsacert\u304c\u6307\u5b9a\u3055\u308c\u3066\u3044\u306a\u3044\u305f\u3081\u3001\u3053\u306ejar\u306b\u306f\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u304c\u4ed8\u52a0\u3055\u308c\u3066\u3044\u307e\u305b\u3093\u3002\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u304c\u306a\u3044\u3068\u3001\u7f72\u540d\u8005\u8a3c\u660e\u66f8\u306e\u6709\u52b9\u671f\u9650(%1$tY-%1$tm-%1$td)\u5f8c\u306b\u3001\u30e6\u30fc\u30b6\u30fc\u306f\u3053\u306ejar\u3092\u691c\u8a3c\u3067\u304d\u306a\u3044\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("invalid.timestamp.signing"_s),
			$of(u"\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u304c\u7121\u52b9\u3067\u3059\u3002\u6709\u52b9\u306a\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u304c\u306a\u3044\u3068\u3001\u7f72\u540d\u8005\u8a3c\u660e\u66f8\u306e\u6709\u52b9\u671f\u9650(%1$tY-%1$tm-%1$td)\u5f8c\u306b\u3001\u30e6\u30fc\u30b6\u30fc\u306f\u3053\u306ejar\u3092\u691c\u8a3c\u3067\u304d\u306a\u3044\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("no.timestamp.verifying"_s),
			$of(u"\u3053\u306ejar\u306b\u306f\u3001\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u304c\u306a\u3044\u7f72\u540d\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u304c\u306a\u3044\u3068\u3001\u3044\u305a\u308c\u304b\u306e\u7f72\u540d\u8005\u8a3c\u660e\u66f8\u306e\u6709\u52b9\u671f\u9650\u5f8c\u306b(\u65e9\u3051\u308c\u3070%1$tY-%1$tm-%1$td)\u30e6\u30fc\u30b6\u30fc\u306f\u3053\u306ejar\u3092\u691c\u8a3c\u3067\u304d\u306a\u3044\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("bad.timestamp.verifying"_s),
			$of(u"\u3053\u306ejar\u306b\u306f\u3001\u7121\u52b9\u306a\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u306e\u3042\u308b\u7f72\u540d\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059\u3002\u6709\u52b9\u306a\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u304c\u306a\u3044\u3068\u3001\u3044\u305a\u308c\u304b\u306e\u7f72\u540d\u8005\u8a3c\u660e\u66f8\u306e\u6709\u52b9\u671f\u9650\u5f8c\u306b(\u65e9\u3051\u308c\u3070%1$tY-%1$tm-%1$td)\u30e6\u30fc\u30b6\u30fc\u306f\u3053\u306ejar\u3092\u691c\u8a3c\u3067\u304d\u306a\u3044\u53ef\u80fd\u6027\u304c\u3042\u308a\u307e\u3059\u3002\n\u8a73\u7d30\u306f\u3001-J-Djava.security.debug=jar\u3092\u6307\u5b9a\u3057\u3066jarsigner\u3092\u518d\u5b9f\u884c\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.signer.certificate.will.expire.on.1."_s),
			$of(u"\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u306f%1$tY-%1$tm-%1$td\u306b\u671f\u9650\u5207\u308c\u306b\u306a\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("The.timestamp.will.expire.on.1."_s),
			$of(u"\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u306f%1$tY-%1$tm-%1$td\u306b\u671f\u9650\u5207\u308c\u306b\u306a\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("signer.cert.expired.1.but.timestamp.good.2."_s),
			$of(u"\u7f72\u540d\u8005\u306e\u8a3c\u660e\u66f8\u306f%1$tY-%1$tm-%1$td\u306b\u671f\u9650\u5207\u308c\u306b\u306a\u308a\u307e\u3059\u3002\u305f\u3060\u3057\u3001JAR\u306f\u30bf\u30a4\u30e0\u30b9\u30bf\u30f3\u30d7\u304c%2$tY-%2$tm-%2$td\u306b\u671f\u9650\u5207\u308c\u306b\u306a\u308b\u307e\u3067\u6709\u52b9\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("Unknown.password.type."_s),
			$of(u"\u4e0d\u660e\u306a\u30d1\u30b9\u30ef\u30fc\u30c9\u30fb\u30bf\u30a4\u30d7: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.environment.variable."_s),
			$of(u"\u74b0\u5883\u5909\u6570\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of("Cannot.find.file."_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: "_s)
		}),
		$$new($ObjectArray, {
			$of("event.ocsp.check"_s),
			$of(u"%s\u306eOCSP\u30b5\u30fc\u30d0\u30fc\u306b\u63a5\u7d9a\u3057\u3066\u3044\u307e\u3059..."_s)
		}),
		$$new($ObjectArray, {
			$of("event.crl.check"_s),
			$of(u"%s\u304b\u3089CRL\u3092\u30c0\u30a6\u30f3\u30ed\u30fc\u30c9\u3057\u3066\u3044\u307e\u3059..."_s)
		})
	}));
}

Resources_ja::Resources_ja() {
}

$Class* Resources_ja::load$($String* name, bool initialize) {
	$loadClass(Resources_ja, name, initialize, &_Resources_ja_ClassInfo_, clinit$Resources_ja, allocate$Resources_ja);
	return class$;
}

$Class* Resources_ja::class$ = nullptr;

			} // jarsigner
		} // tools
	} // security
} // sun