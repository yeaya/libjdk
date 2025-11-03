#include <sun/tools/jar/resources/jar_zh_TW.h>

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

$MethodInfo _jar_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(jar_zh_TW::*)()>(&jar_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _jar_zh_TW_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_zh_TW",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_zh_TW_MethodInfo_
};

$Object* allocate$jar_zh_TW($Class* clazz) {
	return $of($alloc(jar_zh_TW));
}

void jar_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of(u"\'c\' \u65d7\u6a19\u8981\u6c42\u6307\u5b9a\u8cc7\u8a0a\u6e05\u55ae\u6216\u8f38\u5165\u6a94\u6848\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"\'-d, --describe-module\' \u9078\u9805\u4e0d\u9700\u8981\u6307\u5b9a\u8f38\u5165\u6a94"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"\u7121\u6cd5\u540c\u6642\u6307\u5b9a \'e\' \u65d7\u6a19\u548c\u5177\u6709 \'Main-Class\' \u5c6c\u6027\u7684\n\u8cc7\u8a0a\u6e05\u55ae\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of(u"\u5256\u6790\u6a94\u6848\u5f15\u6578\u6642\u767c\u751f\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"\u5fc5\u9808\u6307\u5b9a -{ctxuid} \u7684\u5176\u4e2d\u4e00\u500b\u9078\u9805\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"\u932f\u8aa4\u539f\u56e0: {0}\uff0c\u5fc5\u9808\u662f deprecated\u3001deprecated-for-removal \u6216 incubating \u5176\u4e2d\u4e4b\u4e00"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"\'u\' \u65d7\u6a19\u8981\u6c42\u6307\u5b9a\u8cc7\u8a0a\u6e05\u55ae\u3001\'e\' \u65d7\u6a19\u6216\u8f38\u5165\u6a94\u6848\uff01"_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of(u"\u7121\u6cd5\u958b\u555f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"{0} : \u7121\u6cd5\u5efa\u7acb\u76ee\u9304"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"\u7121\u6cd5\u5efa\u7acb\u66ab\u5b58\u6a94\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"\u96dc\u6e4a\u6a21\u7d44 {0} \u76f8\u4f9d\u6027\uff0c\u5728\u6a21\u7d44\u8def\u5f91\u4e0a\u627e\u4e0d\u5230\u6a21\u7d44 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"\u7121\u6548\u7684\u9078\u9805: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of(u"\u8655\u7406 {0} \u6642\u9577\u5ea6\u4e0d\u6b63\u78ba"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"\u6a21\u7d44\u63cf\u8ff0\u5340\u5c6c\u6027 {0} \u7121\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"\u9078\u9805 {0} \u9700\u8981\u4e00\u500b\u5f15\u6578"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of(u"\u627e\u4e0d\u5230\u670d\u52d9\u63d0\u4f9b\u8005: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of(u"\u627e\u4e0d\u5230\u6a21\u7d44\u63cf\u8ff0\u5340"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of(u"--module-version \u6216 --hash-modules \u5176\u4e2d\u4e00\u500b\u6c92\u6709 module-info.class"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of(u"\u60a8\u4e0d\u80fd\u6307\u5b9a\u591a\u500b \'-cuxtid\' \u9078\u9805"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"\u6c92\u6709\u4ee5\u4e0b\u7248\u672c\u7684\u64cd\u4f5c\u63cf\u8ff0\u5340: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of(u"\u6c92\u6709\u6839\u6a21\u7d44\u63cf\u8ff0\u5340\uff0c\u8acb\u6307\u5b9a --release"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0} : \u6c92\u6709\u9019\u985e\u6a94\u6848\u6216\u76ee\u9304"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"\u7248\u672c {1} \u6709\u672a\u9810\u671f\u7684\u555f\u52d5\u591a\u7248\u672c\u529f\u80fd\u9805\u76ee {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"\u7248\u672c {0} \u7121\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"\u7248\u672c {0} \u7121\u6548\uff0c\u5fc5\u9808\u5927\u65bc\u7b49\u65bc 9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"\u7121\u6cd5\u884d\u751f {0} \u7684\u6a21\u7d44\u63cf\u8ff0\u5340"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"\u672a\u9810\u671f\u7684\u6a21\u7d44\u63cf\u8ff0\u5340 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"\u7121\u6cd5\u8fa8\u8b58\u7684\u9078\u9805 : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of(u"\u9805\u76ee\u540d\u7a31 {0} \u7684\u683c\u5f0f\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"\u9805\u76ee {0} \u7684\u67d0\u500b\u985e\u5225\u542b\u6709\u8207\u8f03\u820a\u7248\u672c\u4e0d\u540c\u7684 API"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"\u9805\u76ee\u540d\u7a31 {0} \u592a\u77ed\uff0c\u7121\u6cd5\u4f5c\u70ba\u76ee\u9304"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"\u9805\u76ee {0} \u7684\u985e\u5225\u7248\u672c\u8207\u8f03\u820a\u7248\u672c\u4e0d\u76f8\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"\u5df2\u555f\u52d5\u591a\u7248\u672c\u529f\u80fd\u76ee\u9304\u4e2d\u7684 module-info.class \u5305\u542b\u4e0d\u540c\u7684 \"exports\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: \u5df2\u555f\u52d5\u591a\u7248\u672c\u529f\u80fd\u76ee\u9304\u4e2d\u7684 module-info.class \u5305\u542b\u4e0d\u540c\u7684 \"main-class\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"\u5df2\u555f\u52d5\u591a\u7248\u672c\u529f\u80fd\u76ee\u9304\u4e2d\u7684 module-info.class \u5305\u542b\u4e0d\u6b63\u78ba\u7684\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"\u5df2\u555f\u52d5\u591a\u7248\u672c\u529f\u80fd\u76ee\u9304\u4e2d\u7684 module-info.class \u5305\u542b\u4e0d\u540c\u7684 \"opens\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"\u5df2\u555f\u52d5\u591a\u7248\u672c\u529f\u80fd\u76ee\u9304\u4e2d\u7684 module-info.class \u5305\u542b\u4e0d\u540c\u7684 \"provides\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"\u5df2\u555f\u52d5\u591a\u7248\u672c\u529f\u80fd\u76ee\u9304\u4e2d\u7684 module-info.class \u5305\u542b\u984d\u5916\u7684 \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"\u5df2\u555f\u52d5\u591a\u7248\u672c\u529f\u80fd\u76ee\u9304\u4e2d\u7684 module-info.class \u5305\u542b\u907a\u6f0f\u7684 \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"\u5df2\u555f\u52d5\u591a\u7248\u672c\u529f\u80fd\u76ee\u9304\u4e2d\u7684 module-info.class \u5305\u542b\u984d\u5916\u7684 \"requires transitive\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: \u5df2\u555f\u52d5\u591a\u7248\u672c\u529f\u80fd\u76ee\u9304\u4e2d\u7684 module-info.class \u5305\u542b\u4e0d\u540c\u7684 \"version\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"\u9805\u76ee {0} \u662f\u5df2\u9694\u96e2\u7684\u5de2\u72c0\u7d50\u69cb\u985e\u5225"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of(u"\u7121\u6cd5\u9a57\u8b49 {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"\u5df2\u522a\u9664\u7121\u6548\u7684\u591a\u91cd\u7248\u672c jar \u6a94\u6848 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"\u9805\u76ee {0} \u542b\u6709\u5167\u90e8\u540d\u7a31\u70ba {1} \u7684\u985e\u5225\uff0c\u540d\u7a31\u4e0d\u76f8\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"\u9805\u76ee {0} \u542b\u6709\u5728\u57fa\u6e96\u9805\u76ee\u4e2d\u627e\u4e0d\u5230\u7684\u65b0\u516c\u7528\u985e\u5225"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"\u9805\u76ee\u540d\u7a31 {0} \u6c92\u6709\u7248\u672c\u7de8\u865f"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of(u"\u5beb\u5165\u73fe\u6709\u7684 jar \u6a94\u6848\u6642\u767c\u751f\u932f\u8aa4"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" \u53ef\u5728\u4efb\u4f55\u6a21\u5f0f\u4e0b\u4f7f\u7528\u7684\u4f5c\u696d\u4fee\u98fe\u689d\u4ef6:\n\n  -C DIR                     \u8b8a\u66f4\u70ba\u6307\u5b9a\u76ee\u9304\u4e26\u5305\u542b\n                             \u4e0b\u5217\u6a94\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            \u5b58\u6a94\u6a94\u6848\u540d\u7a31\u3002\u5982\u679c\u7701\u7565\uff0c\u6703\u6839\u64da\u4f5c\u696d\u4f7f\u7528\n                             stdin \u6216 stdout\n      --release VERSION      \u5c07\u6240\u6709\u4e0b\u5217\u6a94\u6848\u653e\u7f6e\u5728 jar \u7684\u555f\u52d5\u591a\u7248\u672c\n                             \u529f\u80fd\u76ee\u9304\u4e2d (\u4f8b\u5982 META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              \u5728\u6a19\u6e96\u8f38\u51fa\u4e2d\u7522\u751f\u8a73\u7d30\u8f38\u51fa"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" \u53ea\u80fd\u5728\u5efa\u7acb\u6a21\u5f0f\u4f7f\u7528\u7684\u4f5c\u696d\u4fee\u98fe\u689d\u4ef6:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            \u5efa\u7acb\u65b0\u7684 jar \u5b58\u6a94\u4e4b\u5f8c\uff0c\u5c07\u5176\u4e2d\u7684\u8cc7\u8a0a\n                             \u6a19\u6e96\u5316"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" \u53ea\u80fd\u5728\u5efa\u7acb\u548c\u66f4\u65b0\u6a21\u5f0f\u4e0b\u4f7f\u7528\u7684\u4f5c\u696d\u4fee\u98fe\u689d\u4ef6:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  \u4e0d\u5305\u62ec\u9810\u8a2d\u7684\u6a21\u7d44\u8a2d\u5b9a\u6839\u76ee\u9304"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN \u904b\u7b97\u53ca\u8a18\u9304\u8207\u6307\u5b9a\u6a23\u5f0f\n                             \u76f8\u7b26\u7684\u6a21\u7d44\u96dc\u6e4a\uff0c\u9019\u76f4\u63a5\u6216\u9593\u63a5\u5730\n                             \u76f8\u4f9d\u65bc\u6b63\u5728\u5efa\u7acb\u7684\u6a21\u7d44\u5316 jar \u6216\u6b63\u5728\n                             \u66f4\u65b0\u7684\u975e\u6a21\u7d44\u5316 jar"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" \u53ea\u80fd\u5728\u5efa\u7acb\u3001\u66f4\u65b0\u53ca\u7522\u751f\u7d22\u5f15\u6a21\u5f0f\u4e0b\u4f7f\u7528\u7684\u4f5c\u696d\u4fee\u98fe\u689d\u4ef6:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          \u50c5\u5132\u5b58; \u4e0d\u4f7f\u7528 ZIP \u58d3\u7e2e\u65b9\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME \u96a8\u9644\u65bc\u6a21\u7d44\u5316\u6216\u53ef\u57f7\u884c\n                             jar \u5b58\u6a94\u4e2d\u7368\u7acb\u61c9\u7528\u7a0b\u5f0f\u7684\n                             \u61c9\u7528\u7a0b\u5f0f\u9032\u5165\u9ede"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        \u5305\u542b\u6307\u5b9a\u8cc7\u8a0a\u6e05\u55ae\u6a94\u6848\u4e2d\u7684\u8cc7\u8a0a\u6e05\u55ae\n                             \u8cc7\u8a0a"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          \u6a21\u7d44\u76f8\u4f9d\u6027\u7684\u4f4d\u7f6e\uff0c\u7528\u65bc\u7522\u751f\n                             \u96dc\u6e4a"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    \u5efa\u7acb\u6a21\u7d44\u5316 jar \u6216\u66f4\u65b0\u975e\u6a21\u7d44\u5316 jar \u6642\n                             \u4f7f\u7528\u7684\u6a21\u7d44\u7248\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          \u4e0d\u70ba\u9805\u76ee\u5efa\u7acb\u8cc7\u8a0a\u6e05\u55ae\u6a94\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     \u82e5\u6a21\u7d44\u5df2\u89e3\u6790\uff0c\u5247\u63d0\u793a\u5de5\u5177\u4ee5\u767c\u51fa\u8b66\u544a\u3002\n                             deprecated\u3001deprecated-for-removal \u6216 incubating \n                             \u5176\u4e2d\u4e4b\u4e00"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" \u4e3b\u8981\u4f5c\u696d\u6a21\u5f0f:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of(u"  -c, --create               \u5efa\u7acb\u5b58\u6a94"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of(u"  -d, --describe-module      \u5217\u5370\u6a21\u7d44\u63cf\u8ff0\u5340\u6216\u81ea\u52d5\u7522\u751f\u7684\u6a21\u7d44\u540d\u7a31"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of(u"  -x, --extract              \u5f9e\u5b58\u6a94\u4e2d\u64f7\u53d6\u6307\u5b9a (\u6216\u6240\u6709) \u6a94\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  \u70ba\u6307\u5b9a\u7684 jar \u5b58\u6a94\u7522\u751f\u7d22\u5f15\n                             \u8cc7\u8a0a"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 \u5217\u51fa\u5b58\u6a94\u7684\u76ee\u9304"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of(u"  -u, --update               \u66f4\u65b0\u73fe\u6709\u7684 jar \u5b58\u6a94"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(u" \u5176\u4ed6\u9078\u9805:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -h, --help[:compat]        \u63d0\u4f9b\u6b64\u8aaa\u660e\u6216\u9078\u64c7\u6027\u986f\u793a\u76f8\u5bb9\u6027\u8aaa\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           \u63d0\u4f9b\u984d\u5916\u9078\u9805\u7684\u8aaa\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of(u"      --version              \u5217\u5370\u7a0b\u5f0f\u7248\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" \u5982\u679c\u6a21\u7d44\u63cf\u8ff0\u5340 (\'module-info.class\') \u4f4d\u65bc\u6307\u5b9a\u76ee\u9304\u7684\u6839\n \u6216 jar \u5b58\u6a94\u672c\u8eab\u7684\u6839\uff0c\u5247\u5b58\u6a94\u6703\u662f\n \u6a21\u7d44\u5316\u7684 jar\u3002\u4e0b\u5217\u4f5c\u696d\u53ea\u80fd\u5728\u5efa\u7acb\u6a21\u7d44\u5316 jar \u6216\u66f4\u65b0\n \u73fe\u6709\u975e\u6a21\u7d44\u5316 jar \u6642\u9032\u884c: \'--module-version\'\u3001\n \'--hash-modules\' \u548c \'--module-path\'\u3002\n\n \u9577\u9078\u9805\u7684\u5f37\u5236\u6027\u6216\u9078\u64c7\u6027\u5f15\u6578\u4e5f\u6703\u662f\u4efb\u4f55\u5c0d\u61c9\u77ed\u9078\u9805\u7684\n \u5f37\u5236\u6027\u6216\u9078\u64c7\u6027\u5f15\u6578\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"\u7528\u6cd5: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar \u6703\u5efa\u7acb\u4e00\u500b\u985e\u5225\u548c\u8cc7\u6e90\u7684\u5b58\u6a94\uff0c\u800c\u4e14\u53ef\u64cd\u63a7\u6216\n\u5f9e\u5b58\u6a94\u56de\u5fa9\u500b\u5225\u985e\u5225\u6216\u8cc7\u6e90\u3002\n\n \u7bc4\u4f8b:\n # \u5efa\u7acb\u4e00\u500b\u540d\u70ba classes.jar \u7684\u5b58\u6a94\uff0c\u5176\u4e2d\u542b\u6709\u5169\u500b\u985e\u5225\u6a94\u6848:\n jar --create --file classes.jar Foo.class Bar.class\n # \u4f7f\u7528\u73fe\u6709\u7684\u8cc7\u8a0a\u6e05\u55ae\u52a0\u4e0a foo/ \u4e2d\u7684\u6240\u6709\u6a94\u6848\u5efa\u7acb\u4e00\u500b\u5b58\u6a94:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # \u5efa\u7acb\u4e00\u500b\u6a21\u7d44\u5316 jar \u5b58\u6a94\uff0c\u5176\u4e2d\u7684\u6a21\u7d44\u63cf\u8ff0\u5340\u4f4d\u65bc\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # \u5c07\u73fe\u6709\u7684\u975e\u6a21\u7d44\u5316 jar \u66f4\u65b0\u6210\u6a21\u7d44\u5316 jar:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # \u5efa\u7acb\u591a\u91cd\u7248\u672c\u7684 jar\uff0c\u5c07\u90e8\u5206\u6a94\u6848\u653e\u7f6e\u5728 META-INF/versions/9 \u76ee\u9304\u4e2d:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\n\u82e5\u8981\u7e2e\u77ed\u6216\u7c21\u5316 jar \u547d\u4ee4\uff0c\u53ef\u4ee5\u5728\u500b\u5225\u6587\u5b57\u6a94\u4e2d\u6307\u5b9a\u5f15\u6578\uff0c\n\u7136\u5f8c\u4f7f\u7528 at \u7b26\u865f (@) \u4f5c\u70ba\u524d\u7f6e\u78bc\uff0c\u5c07\u5176\u50b3\u9001\u81f3 jar \u547d\u4ee4\u3002\n\n \u7bc4\u4f8b:\n # \u5f9e classes.list \u6a94\u6848\u8b80\u53d6\u984d\u5916\u7684\u9078\u9805\u548c\u985e\u5225\u6a94\u6848\u6e05\u55ae\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of(u"\u7528\u6cd5: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"\u8acb\u4f7f\u7528 \'jar --help\' \u4ee5\u53d6\u5f97\u66f4\u591a\u7684\u8cc7\u8a0a\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of(u"\u5df2\u65b0\u589e\u8cc7\u8a0a\u6e05\u55ae"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of(u"\u5df2\u65b0\u589e module-info: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of(u"\u65b0\u589e: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"\u627e\u4e0d\u5230\u6a21\u7d44\u63cf\u8ff0\u5340\u3002\u5df2\u81ea\u52d5\u884d\u751f\u6a21\u7d44\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of(u"  \u5efa\u7acb: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of(u"(\u58d3\u7e2e {0}%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of(u"\u64f7\u53d6: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of(u"\u5ffd\u7565\u9805\u76ee {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(u" \u64f4\u5c55: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of(u" (\u8b80={0})(\u5beb={1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of(u"(\u5132\u5b58 0%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of(u"\u5df2\u66f4\u65b0\u8cc7\u8a0a\u6e05\u55ae"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of(u"\u5df2\u66f4\u65b0 module-info: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"\u76f8\u5bb9\u6027\u4ecb\u9762:\n\u7528\u6cd5: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files] ...\n\u9078\u9805:\n    -c  \u5efa\u7acb\u65b0\u5b58\u6a94\n    -t  \u5217\u51fa\u5b58\u6a94\u7684\u76ee\u9304\n    -x  \u5f9e\u5b58\u6a94\u4e2d\u64f7\u53d6\u6307\u5b9a (\u6216\u5168\u90e8) \u7684\u6a94\u6848\n    -u  \u66f4\u65b0\u73fe\u6709\u5b58\u6a94\n    -v  \u5728\u6a19\u6e96\u8f38\u51fa\u4e2d\u7522\u751f\u8a73\u7d30\u8f38\u51fa\n    -f  \u6307\u5b9a\u5b58\u6a94\u6a94\u6848\u540d\u7a31\n    -m  \u5305\u542b\u6307\u5b9a\u4e4b\u8cc7\u8a0a\u6e05\u55ae\u6a94\u6848\u4e2d\u7684\u8cc7\u8a0a\u6e05\u55ae\u8cc7\u8a0a\n    -n  \u5728\u5efa\u7acb\u65b0\u5b58\u6a94\u4e4b\u5f8c\u57f7\u884c Pack200 \u6b63\u898f\u5316\n    -e  \u70ba\u96a8\u9644\u65bc\u53ef\u57f7\u884c jar \u6a94\u6848\u4e2d\u7684\u7368\u7acb\u61c9\u7528\u7a0b\u5f0f \n        \u6307\u5b9a\u61c9\u7528\u7a0b\u5f0f\u9032\u5165\u9ede\n    -0  \u50c5\u5132\u5b58; \u4e0d\u4f7f\u7528 ZIP \u58d3\u7e2e\u65b9\u5f0f\n    -P  \u4fdd\u7559\u6a94\u6848\u540d\u7a31\u524d\u9762\u7684 \'/\' (\u7d55\u5c0d\u8def\u5f91) \u548c \"..\" (\u4e0a\u5c64\u76ee\u9304) \u5143\u4ef6\n    -M  \u4e0d\u70ba\u9805\u76ee\u5efa\u7acb\u8cc7\u8a0a\u6e05\u55ae\u6a94\u6848\n    -i  \u70ba\u6307\u5b9a\u7684 jar \u6a94\u6848\u7522\u751f\u7d22\u5f15\u8cc7\u8a0a\n    -C  \u8b8a\u66f4\u81f3\u6307\u5b9a\u7684\u76ee\u9304\u4e26\u5305\u542b\u5f8c\u9762\u6240\u5217\u7684\u6a94\u6848\n\u5982\u679c\u6709\u4efb\u4f55\u6a94\u6848\u662f\u76ee\u9304\uff0c\u5247\u6703\u5c0d\u5176\u9032\u884c\u905e\u8ff4\u8655\u7406\u3002\n\u8cc7\u8a0a\u6e05\u55ae\u6a94\u6848\u540d\u7a31\u3001\u5b58\u6a94\u6a94\u6848\u540d\u7a31\u4ee5\u53ca\u9032\u5165\u9ede\u540d\u7a31\n\u7684\u6307\u5b9a\u9806\u5e8f\u8207\u6307\u5b9a \'m\'\u3001\'f\' \u4ee5\u53ca \'e\' \u65d7\u6a19\u7684\u9806\u5e8f\u76f8\u540c\u3002\n\n\u7bc4\u4f8b 1: \u5c07\u5169\u500b\u985e\u5225\u6a94\u6848\u5b58\u6a94\u81f3\u540d\u70ba classes.jar \u7684\u5b58\u6a94\u4e2d: \n       jar cvf classes.jar Foo.class Bar.class \n\u7bc4\u4f8b 2: \u4f7f\u7528\u73fe\u6709\u7684\u8cc7\u8a0a\u6e05\u55ae\u6a94\u6848 \'mymanifest\' \u4e26\u5c07\n           foo/ \u76ee\u9304\u4e2d\u7684\u6240\u6709\u6a94\u6848\u5b58\u6a94\u81f3 \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"\u672a\u9810\u671f\u7684\u555f\u52d5\u591a\u7248\u672c\u529f\u80fd\u9805\u76ee {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"\u8b66\u544a: \u9805\u76ee {0} \u662f\u96b1\u85cf\u5957\u88dd\u7a0b\u5f0f\u4e2d\u7684\n\u516c\u7528\u985e\u5225\uff0c\u82e5\u5c07\u6b64 jar \u653e\u5728\u985e\u5225\u8def\u5f91\u4e0a\n\u6703\u9020\u6210\u516c\u7528\u4ecb\u9762\u4e0d\u76f8\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"\u8b66\u544a: \u9805\u76ee {0} \u7684\u67d0\u500b\u985e\u5225\n\u8207 jar \u4e2d\u7684\u73fe\u6709\u9805\u76ee\u76f8\u540c"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of(u"\u8b66\u544a: \u9805\u76ee {0} \u4e2d\u7684\u591a\u500b\u8cc7\u6e90\u540d\u7a31\u76f8\u540c"_s)
		})
	});
}

jar_zh_TW::jar_zh_TW() {
}

$Class* jar_zh_TW::load$($String* name, bool initialize) {
	$loadClass(jar_zh_TW, name, initialize, &_jar_zh_TW_ClassInfo_, allocate$jar_zh_TW);
	return class$;
}

$Class* jar_zh_TW::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun