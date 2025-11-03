#include <sun/tools/jar/resources/jar_zh_CN.h>

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

$MethodInfo _jar_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(jar_zh_CN::*)()>(&jar_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _jar_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_zh_CN_MethodInfo_
};

$Object* allocate$jar_zh_CN($Class* clazz) {
	return $of($alloc(jar_zh_CN));
}

void jar_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of(u"\'c\' \u6807\u8bb0\u8981\u6c42\u6307\u5b9a\u6e05\u5355\u6216\u8f93\u5165\u6587\u4ef6!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"\'-d, --describe-module\' \u9009\u9879\u4e0d\u9700\u8981\u6307\u5b9a\u4efb\u4f55\u8f93\u5165\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"\u4e0d\u80fd\u540c\u65f6\u6307\u5b9a \'e\' \u6807\u8bb0\u548c\u5177\u6709 \'Main-Class\' \u5c5e\u6027\u7684\n\u6e05\u5355!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of(u"\u89e3\u6790\u6587\u4ef6\u53c2\u6570\u65f6\u51fa\u9519"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"\u5fc5\u987b\u6307\u5b9a {ctxuid} \u4e2d\u7684\u4efb\u4e00\u9009\u9879\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"\u9519\u8bef\u7684\u539f\u56e0: {0}, \u5fc5\u987b\u4e3a deprecated, deprecated-for-removal \u6216 incubating \u4e4b\u4e00"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"\'u\' \u6807\u8bb0\u8981\u6c42\u6307\u5b9a\u6e05\u5355, \'e\' \u6807\u8bb0\u6216\u8f93\u5165\u6587\u4ef6!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of(u"\u65e0\u6cd5\u6253\u5f00: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"{0}: \u65e0\u6cd5\u521b\u5efa\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"\u65e0\u6cd5\u521b\u5efa\u4e34\u65f6\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"\u6b63\u5728\u5bf9\u6a21\u5757 {0} \u7684\u88ab\u4f9d\u8d56\u5bf9\u8c61\u6267\u884c\u6563\u5217\u5904\u7406, \u5728\u6a21\u5757\u8def\u5f84\u4e2d\u627e\u4e0d\u5230\u6a21\u5757 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"\u975e\u6cd5\u9009\u9879: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of(u"\u5904\u7406\u65f6\u9047\u5230\u4e0d\u6b63\u786e\u7684\u957f\u5ea6: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"\u65e0\u6548\u7684\u6a21\u5757\u63cf\u8ff0\u7b26\u5c5e\u6027 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"\u9009\u9879{0}\u9700\u8981\u53c2\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of(u"\u672a\u627e\u5230\u670d\u52a1\u63d0\u4f9b\u65b9: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of(u"\u627e\u4e0d\u5230\u6a21\u5757\u63cf\u8ff0\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of(u"--module-version \u6216 --hash-modules \u4e4b\u4e00\u6ca1\u6709 module-info.class"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of(u"\u4e0d\u80fd\u6307\u5b9a\u591a\u4e2a \'-cuxtid\' \u9009\u9879"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"\u6ca1\u6709\u53d1\u884c\u7248\u7684\u6709\u6548\u63cf\u8ff0\u7b26: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of(u"\u6ca1\u6709\u6839\u6a21\u5757\u63cf\u8ff0\u7b26, \u8bf7\u6307\u5b9a --release"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0}: \u6ca1\u6709\u8fd9\u4e2a\u6587\u4ef6\u6216\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"\u53d1\u884c\u7248 {1} \u5b58\u5728\u610f\u5916\u7684\u7248\u672c\u5316\u6761\u76ee {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"\u53d1\u884c\u7248 {0} \u65e0\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"\u53d1\u884c\u7248 {0} \u65e0\u6548, \u5fc5\u987b >= 9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"\u65e0\u6cd5\u6d3e\u751f {0} \u7684\u6a21\u5757\u63cf\u8ff0\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"\u610f\u5916\u7684\u6a21\u5757\u63cf\u8ff0\u7b26 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"\u65e0\u6cd5\u8bc6\u522b\u7684\u9009\u9879: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of(u"\u6761\u76ee\u540d\u79f0\u683c\u5f0f\u9519\u8bef, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"\u6761\u76ee {0} \u5305\u542b\u7684\u7c7b\u5177\u6709\u4e0e\u65e9\u671f\u7248\u672c\u4e0d\u540c\u7684 api"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"\u6761\u76ee\u540d\u79f0 {0} \u592a\u77ed, \u4e0d\u662f\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"\u6761\u76ee {0} \u5305\u542b\u4e0e\u8f83\u65e9\u7248\u672c\u4e0d\u517c\u5bb9\u7684\u7c7b\u7248\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"\u7248\u672c\u5316\u76ee\u5f55\u4e2d\u7684 module-info.class \u5305\u542b\u4e0d\u540c\u7684 \"exports\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: \u7248\u672c\u5316\u76ee\u5f55\u4e2d\u7684 module-info.class \u5305\u542b\u4e0d\u540c\u7684 \"main-class\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"\u7248\u672c\u5316\u76ee\u5f55\u4e2d\u7684 module-info.class \u5305\u542b\u4e0d\u6b63\u786e\u7684\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"\u7248\u672c\u5316\u76ee\u5f55\u4e2d\u7684 module-info.class \u5305\u542b\u4e0d\u540c\u7684 \"opens\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"\u7248\u672c\u5316\u76ee\u5f55\u4e2d\u7684 module-info.class \u5305\u542b\u4e0d\u540c\u7684 \"provides\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"\u7248\u672c\u5316\u76ee\u5f55\u4e2d\u7684 module-info.class \u5305\u542b\u989d\u5916\u7684 \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"\u7248\u672c\u5316\u76ee\u5f55\u4e2d\u7684 module-info.class \u5305\u542b\u7f3a\u5c11\u7684 \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"\u7248\u672c\u5316\u76ee\u5f55\u4e2d\u7684 module-info.class \u5305\u542b\u989d\u5916\u7684 \"requires transitive\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: \u7248\u672c\u5316\u76ee\u5f55\u4e2d\u7684 module-info.class \u5305\u542b\u4e0d\u540c\u7684 \"version\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"\u6761\u76ee {0} \u662f\u5355\u72ec\u7684\u5d4c\u5957\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of(u"\u65e0\u6cd5\u9a8c\u8bc1 {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"\u5220\u9664\u7684\u591a\u53d1\u884c\u7248 jar \u6587\u4ef6 {0} \u65e0\u6548"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"\u6761\u76ee {0} \u5305\u542b\u5185\u90e8\u540d\u79f0\u4e3a {1} \u7684\u7c7b, \u540d\u79f0\u4e0d\u5339\u914d"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"\u6761\u76ee {0} \u5305\u542b\u672a\u5728\u57fa\u7840\u6761\u76ee\u4e2d\u627e\u5230\u7684\u65b0\u516c\u5171\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"\u6761\u76ee\u540d\u79f0 {0} \u6ca1\u6709\u7248\u672c\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of(u"\u5199\u5165\u73b0\u6709\u7684 jar \u6587\u4ef6\u65f6\u51fa\u9519"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" \u5728\u4efb\u610f\u6a21\u5f0f\u4e0b\u6709\u6548\u7684\u64cd\u4f5c\u4fee\u9970\u7b26:\n\n  -C DIR                     \u66f4\u6539\u4e3a\u6307\u5b9a\u7684\u76ee\u5f55\u5e76\u5305\u542b\n                             \u4ee5\u4e0b\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            \u6863\u6848\u6587\u4ef6\u540d\u3002\u7701\u7565\u65f6, \u57fa\u4e8e\u64cd\u4f5c\n                             \u4f7f\u7528 stdin \u6216 stdout\n      --release VERSION      \u5c06\u4e0b\u9762\u7684\u6240\u6709\u6587\u4ef6\u90fd\u653e\u5728\n                             jar \u7684\u7248\u672c\u5316\u76ee\u5f55\u4e2d (\u5373 META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              \u5728\u6807\u51c6\u8f93\u51fa\u4e2d\u751f\u6210\u8be6\u7ec6\u8f93\u51fa"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" \u4ec5\u5728\u521b\u5efa\u6a21\u5f0f\u4e0b\u6709\u6548\u7684\u64cd\u4f5c\u4fee\u9970\u7b26:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            \u521b\u5efa\u540e\u5728\u65b0\u7684 jar \u6863\u6848\u4e2d\n                             \u89c4\u8303\u5316\u4fe1\u606f\u3002\u6b64\u9009\u9879\u5df2\u8fc7\u65f6\uff0c\n                             \u8ba1\u5212\u5728\u672a\u6765\u7684 JDK \u53d1\u884c\u7248\u4e2d\u5220\u9664"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" \u5728\u521b\u5efa\u548c\u66f4\u65b0\u6a21\u5f0f\u4e0b\u6709\u6548\u7684\u64cd\u4f5c\u4fee\u9970\u7b26:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  \u4ece\u9ed8\u8ba4\u6839\u6a21\u5757\u96c6\u4e2d\u6392\u9664"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN \u8ba1\u7b97\u548c\u8bb0\u5f55\u6a21\u5757\u7684\u6563\u5217, \n                             \u8fd9\u4e9b\u6a21\u5757\u6309\u6307\u5b9a\u6a21\u5f0f\u5339\u914d\u5e76\u76f4\u63a5\u6216\n                             \u95f4\u63a5\u4f9d\u8d56\u4e8e\u6240\u521b\u5efa\u7684\u6a21\u5757\u5316 jar \u6216\n                             \u6240\u66f4\u65b0\u7684\u975e\u6a21\u5757\u5316 jar"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" \u53ea\u5728\u521b\u5efa, \u66f4\u65b0\u548c\u751f\u6210\u7d22\u5f15\u6a21\u5f0f\u4e0b\u6709\u6548\u7684\u64cd\u4f5c\u4fee\u9970\u7b26:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          \u4ec5\u5b58\u50a8; \u4e0d\u4f7f\u7528 ZIP \u538b\u7f29"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME \u6346\u7ed1\u5230\u6a21\u5757\u5316\u6216\u53ef\u6267\u884c \n                             jar \u6863\u6848\u7684\u72ec\u7acb\u5e94\u7528\u7a0b\u5e8f\n                             \u7684\u5e94\u7528\u7a0b\u5e8f\u5165\u53e3\u70b9"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        \u5305\u542b\u6307\u5b9a\u6e05\u5355\u6587\u4ef6\u4e2d\u7684\n                             \u6e05\u5355\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          \u6a21\u5757\u88ab\u4f9d\u8d56\u5bf9\u8c61\u7684\u4f4d\u7f6e, \u7528\u4e8e\u751f\u6210\n                             \u6563\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    \u521b\u5efa\u6a21\u5757\u5316 jar \u6216\u66f4\u65b0\n                             \u975e\u6a21\u5757\u5316 jar \u65f6\u7684\u6a21\u5757\u7248\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          \u4e0d\u4e3a\u6761\u76ee\u521b\u5efa\u6e05\u5355\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     \u63d0\u793a\u5de5\u5177\u5728\u89e3\u6790\u6a21\u5757\u540e\u53d1\u51fa\u8b66\u544a\u3002\n                             \u53ef\u4ee5\u4e3a deprecated, deprecated-for-removal\n                             \u6216 incubating \u4e4b\u4e00"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" \u4e3b\u64cd\u4f5c\u6a21\u5f0f:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of(u"  -c, --create               \u521b\u5efa\u6863\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of(u"  -d, --describe-module      \u8f93\u51fa\u6a21\u5757\u63cf\u8ff0\u7b26\u6216\u81ea\u52a8\u6a21\u5757\u540d\u79f0"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of(u"  -x, --extract              \u4ece\u6863\u6848\u4e2d\u63d0\u53d6\u6307\u5b9a\u7684 (\u6216\u5168\u90e8) \u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  \u4e3a\u6307\u5b9a\u7684 jar \u6863\u6848\u751f\u6210\n                             \u7d22\u5f15\u4fe1\u606f"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 \u5217\u51fa\u6863\u6848\u7684\u76ee\u5f55"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of(u"  -u, --update               \u66f4\u65b0\u73b0\u6709 jar \u6863\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(u" \u5176\u4ed6\u9009\u9879:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -?, -h, --help[:compat]    \u63d0\u4f9b\u6b64\u5e2e\u52a9\uff0c\u4e5f\u53ef\u4ee5\u9009\u62e9\u6027\u5730\u63d0\u4f9b\u517c\u5bb9\u6027\u5e2e\u52a9"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           \u63d0\u4f9b\u989d\u5916\u9009\u9879\u7684\u5e2e\u52a9"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of(u"      --version              \u8f93\u51fa\u7a0b\u5e8f\u7248\u672c"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" \u5982\u679c\u6a21\u5757\u63cf\u8ff0\u7b26 \'module-info.class\' \u4f4d\u4e8e\u6307\u5b9a\u76ee\u5f55\u7684\n \u6839\u76ee\u5f55\u4e2d, \u6216\u8005\u4f4d\u4e8e jar \u6863\u6848\u672c\u8eab\u7684\u6839\u76ee\u5f55\u4e2d, \u5219\n \u8be5\u6863\u6848\u662f\u4e00\u4e2a\u6a21\u5757\u5316 jar\u3002\u4ee5\u4e0b\u64cd\u4f5c\u53ea\u5728\u521b\u5efa\u6a21\u5757\u5316 jar,\n \u6216\u66f4\u65b0\u73b0\u6709\u7684\u975e\u6a21\u5757\u5316 jar \u65f6\u6709\u6548: \'--module-version\',\n \'--hash-modules\' \u548c \'--module-path\'\u3002\n\n \u5982\u679c\u4e3a\u957f\u9009\u9879\u63d0\u4f9b\u4e86\u5fc5\u9700\u53c2\u6570\u6216\u53ef\u9009\u53c2\u6570, \u5219\u5b83\u4eec\u5bf9\u4e8e\n \u4efb\u4f55\u5bf9\u5e94\u7684\u77ed\u9009\u9879\u4e5f\u662f\u5fc5\u9700\u6216\u53ef\u9009\u7684\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"\u7528\u6cd5: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar \u521b\u5efa\u7c7b\u548c\u8d44\u6e90\u7684\u6863\u6848, \u5e76\u4e14\u53ef\u4ee5\u5904\u7406\u6863\u6848\u4e2d\u7684\n\u5355\u4e2a\u7c7b\u6216\u8d44\u6e90\u6216\u8005\u4ece\u6863\u6848\u4e2d\u8fd8\u539f\u5355\u4e2a\u7c7b\u6216\u8d44\u6e90\u3002\n\n \u793a\u4f8b:\n # \u521b\u5efa\u5305\u542b\u4e24\u4e2a\u7c7b\u6587\u4ef6\u7684\u540d\u4e3a classes.jar \u7684\u6863\u6848:\n jar --create --file classes.jar Foo.class Bar.class\n # \u4f7f\u7528\u73b0\u6709\u7684\u6e05\u5355\u521b\u5efa\u6863\u6848, \u5176\u4e2d\u5305\u542b foo/ \u4e2d\u7684\u6240\u6709\u6587\u4ef6:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # \u521b\u5efa\u6a21\u5757\u5316 jar \u6863\u6848, \u5176\u4e2d\u6a21\u5757\u63cf\u8ff0\u7b26\u4f4d\u4e8e\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # \u5c06\u73b0\u6709\u7684\u975e\u6a21\u5757\u5316 jar \u66f4\u65b0\u4e3a\u6a21\u5757\u5316 jar:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # \u521b\u5efa\u5305\u542b\u591a\u4e2a\u53d1\u884c\u7248\u7684 jar, \u5e76\u5c06\u4e00\u4e9b\u6587\u4ef6\u653e\u5728 META-INF/versions/9 \u76ee\u5f55\u4e2d:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\n\u8981\u7f29\u77ed\u6216\u7b80\u5316 jar \u547d\u4ee4, \u53ef\u4ee5\u5728\u5355\u72ec\u7684\u6587\u672c\u6587\u4ef6\u4e2d\u6307\u5b9a\u53c2\u6570,\n\u5e76\u4f7f\u7528 @ \u7b26\u53f7\u4f5c\u4e3a\u524d\u7f00\u5c06\u6b64\u6587\u4ef6\u4f20\u9012\u7ed9 jar \u547d\u4ee4\u3002\n\n \u793a\u4f8b:\n # \u4ece\u6587\u4ef6 classes.list \u8bfb\u53d6\u9644\u52a0\u9009\u9879\u548c\u7c7b\u6587\u4ef6\u5217\u8868\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of(u"\u7528\u6cd5: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"\u5c1d\u8bd5\u4f7f\u7528 `jar --help\' \u83b7\u53d6\u8be6\u7ec6\u4fe1\u606f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of(u"\u5df2\u6dfb\u52a0\u6e05\u5355"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of(u"\u5df2\u6dfb\u52a0 module-info: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of(u"\u6b63\u5728\u6dfb\u52a0: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"\u627e\u4e0d\u5230\u6a21\u5757\u63cf\u8ff0\u7b26\u3002\u5df2\u6d3e\u751f\u81ea\u52a8\u6a21\u5757\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of(u"  \u5df2\u521b\u5efa: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of(u"(\u538b\u7f29\u4e86 {0}%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of(u"\u5df2\u63d0\u53d6: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of(u"\u6b63\u5728\u5ffd\u7565\u6761\u76ee{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(u"  \u5df2\u89e3\u538b: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of(u"(\u8f93\u5165 = {0}) (\u8f93\u51fa = {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of(u"(\u5b58\u50a8\u4e86 0%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of(u"\u5df2\u66f4\u65b0\u6e05\u5355"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of(u"\u5df2\u66f4\u65b0 module-info: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"\u517c\u5bb9\u6027\u63a5\u53e3\uff1a\n\u7528\u6cd5\uff1ajar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files] ...\n\u9009\u9879\uff1a\n    -c  \u521b\u5efa\u65b0\u6863\u6848\n    -t  \u5217\u51fa\u6863\u6848\u76ee\u5f55\n    -x  \u4ece\u6863\u6848\u4e2d\u63d0\u53d6\u6307\u5b9a\u7684\uff08\u6216\u6240\u6709\uff09\u6587\u4ef6\n    -u  \u66f4\u65b0\u73b0\u6709\u6863\u6848\n    -v  \u5728\u6807\u51c6\u8f93\u51fa\u4e2d\u751f\u6210\u8be6\u7ec6\u8f93\u51fa\n    -f  \u6307\u5b9a\u6863\u6848\u6587\u4ef6\u540d\n    -m  \u5305\u542b\u6307\u5b9a\u6e05\u5355\u6587\u4ef6\u4e2d\u7684\u6e05\u5355\u4fe1\u606f\n    -e  \u4e3a\u6346\u7ed1\u5230\u53ef\u6267\u884c jar \u6587\u4ef6\u7684\u72ec\u7acb\u5e94\u7528\u7a0b\u5e8f\n        \u6307\u5b9a\u5e94\u7528\u7a0b\u5e8f\u5165\u53e3\u70b9\n    -0  \u4ec5\u5b58\u50a8\uff1b\u4e0d\u4f7f\u7528\u4efb\u4f55 ZIP \u538b\u7f29\n    -P  \u4fdd\u7559\u6587\u4ef6\u540d\u4e2d\u7684\u524d\u5bfc \'/\'\uff08\u7edd\u5bf9\u8def\u5f84\uff09\u548c \"..\"\uff08\u7236\u76ee\u5f55\uff09\u7ec4\u6210\u90e8\u5206\n    -M  \u4e0d\u521b\u5efa\u6761\u76ee\u7684\u6e05\u5355\u6587\u4ef6\n    -i  \u4e3a\u6307\u5b9a\u7684 jar \u6587\u4ef6\u751f\u6210\u7d22\u5f15\u4fe1\u606f\n    -C  \u66f4\u6539\u4e3a\u6307\u5b9a\u7684\u76ee\u5f55\u5e76\u5305\u542b\u4ee5\u4e0b\u6587\u4ef6\n\u5982\u679c\u4efb\u4f55\u6587\u4ef6\u4e3a\u76ee\u5f55\uff0c\u5219\u5bf9\u5176\u8fdb\u884c\u9012\u5f52\u5904\u7406\u3002\n\u6e05\u5355\u6587\u4ef6\u540d\u3001\u6863\u6848\u6587\u4ef6\u540d\u548c\u5165\u53e3\u70b9\u540d\u79f0\u7684\u6307\u5b9a\u987a\u5e8f\n\u4e0e \'m\', \'f\' \u548c \'e\' \u6807\u8bb0\u7684\u6307\u5b9a\u987a\u5e8f\u76f8\u540c\u3002\n\n\u793a\u4f8b 1\uff1a\u5c06\u4e24\u4e2a\u7c7b\u6587\u4ef6\u5f52\u6863\u5230\u4e00\u4e2a\u540d\u4e3a classes.jar \u7684\u6863\u6848\u4e2d\uff1a\n       jar cvf classes.jar Foo.class Bar.class \n\u793a\u4f8b 2\uff1a\u4f7f\u7528\u73b0\u6709\u7684\u6e05\u5355\u6587\u4ef6 \'mymanifest\' \u5e76\n           \u5c06 foo/ \u76ee\u5f55\u4e2d\u7684\u6240\u6709\u6587\u4ef6\u5f52\u6863\u5230 \'classes.jar\' \u4e2d\uff1a\n       jar cvfm classes.jar mymanifest -C foo/\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.flag.is.deprecated"_s),
			$of(u"\u8b66\u544a\uff1a{0} \u9009\u9879\u5df2\u8fc7\u65f6\uff0c\u8ba1\u5212\u5728\u672a\u6765\u7684 JDK \u53d1\u884c\u7248\u4e2d\u5220\u9664\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"\u610f\u5916\u7684\u7248\u672c\u5316\u6761\u76ee {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"\u8b66\u544a: \u6761\u76ee {0} \u662f\u5df2\u9690\u85cf\u7a0b\u5e8f\u5305\u4e2d\u7684\n\u516c\u5171\u7c7b, \u5c06\u6b64 jar \u653e\u7f6e\u5728\u7c7b\u8def\u5f84\u4e2d\n\u5c06\u5bfc\u81f4\u516c\u5171\u63a5\u53e3\u4e0d\u517c\u5bb9"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"\u8b66\u544a: \u6761\u76ee {0} \u5305\u542b\u4e0e jar \u4e2d\u7684\n\u73b0\u6709\u6761\u76ee\u76f8\u540c\u7684\u7c7b"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of(u"\u8b66\u544a: \u6761\u76ee {0}, \u591a\u4e2a\u8d44\u6e90\u5177\u6709\u76f8\u540c\u540d\u79f0"_s)
		})
	});
}

jar_zh_CN::jar_zh_CN() {
}

$Class* jar_zh_CN::load$($String* name, bool initialize) {
	$loadClass(jar_zh_CN, name, initialize, &_jar_zh_CN_ClassInfo_, allocate$jar_zh_CN);
	return class$;
}

$Class* jar_zh_CN::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun