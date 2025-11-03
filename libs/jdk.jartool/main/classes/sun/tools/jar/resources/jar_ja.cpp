#include <sun/tools/jar/resources/jar_ja.h>

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

$MethodInfo _jar_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(jar_ja::*)()>(&jar_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _jar_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_ja_MethodInfo_
};

$Object* allocate$jar_ja($Class* clazz) {
	return $of($alloc(jar_ja));
}

void jar_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of(u"\u30d5\u30e9\u30b0\'c\'\u3067\u306f\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u307e\u305f\u306f\u5165\u529b\u30d5\u30a1\u30a4\u30eb\u306e\u6307\u5b9a\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"\'-d, --describe-module\'\u30aa\u30d7\u30b7\u30e7\u30f3\u3067\u306f\u5165\u529b\u30d5\u30a1\u30a4\u30eb\u306e\u6307\u5b9a\u306f\u4e0d\u8981\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"\'e\'\u30d5\u30e9\u30b0\u3068\'Main-Class\'\u5c5e\u6027\u3092\u6301\u3064\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u306f\u540c\u6642\u306b\n\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u5f15\u6570\u306e\u89e3\u6790\u4e2d\u306b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3-{ctxuid}\u306e\u3046\u3061\u306e1\u3064\u3092\u6307\u5b9a\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"\u4e0d\u6b63\u306a\u7406\u7531: {0}\u3001\u975e\u63a8\u5968\u3001\u524a\u9664\u4e88\u5b9a\u306e\u975e\u63a8\u5968\u307e\u305f\u306f\u5b9f\u9a13\u7684\u306e\u3044\u305a\u308c\u304b\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"\u30d5\u30e9\u30b0\'u\'\u3067\u306f\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u304b\'e\'\u30d5\u30e9\u30b0\u3001\u307e\u305f\u306f\u5165\u529b\u30d5\u30a1\u30a4\u30eb\u306e\u6307\u5b9a\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of(u"{0}\u3092\u958b\u304f\u3053\u3068\u304c\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"\u30c7\u30a3\u30ec\u30af\u30c8\u30ea{0}\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"\u4e00\u6642\u30d5\u30a1\u30a4\u30eb\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb{0}\u4f9d\u5b58\u6027\u306e\u30cf\u30c3\u30b7\u30e5\u3067\u30e2\u30b8\u30e5\u30fc\u30eb{1}\u304c\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30d1\u30b9\u306b\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"\u4e0d\u6b63\u306a\u30aa\u30d7\u30b7\u30e7\u30f3: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of(u"{0}\u306e\u51e6\u7406\u4e2d\u306b\u4e0d\u6b63\u306a\u9577\u3055\u304c\u3042\u308a\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\u5c5e\u6027{0}\u304c\u7121\u52b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"\u30aa\u30d7\u30b7\u30e7\u30f3{0}\u306b\u306f\u5f15\u6570\u304c\u5fc5\u8981\u3067\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of(u"\u30b5\u30fc\u30d3\u30b9\u30fb\u30d7\u30ed\u30d0\u30a4\u30c0\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of(u"--module-version\u307e\u305f\u306f--hash-modules\u306e\u3044\u305a\u308c\u304b\u3067module-info.class\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of(u"\u8907\u6570\u306e\'cuxtid\'\u30aa\u30d7\u30b7\u30e7\u30f3\u3092\u6307\u5b9a\u3067\u304d\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"\u30ea\u30ea\u30fc\u30b9\u306e\u64cd\u4f5c\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\u306f\u3042\u308a\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of(u"\u30eb\u30fc\u30c8\u30fb\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\u304c\u3042\u308a\u307e\u305b\u3093\u3002--release\u3092\u6307\u5b9a\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0}\u3068\u3044\u3046\u30d5\u30a1\u30a4\u30eb\u307e\u305f\u306f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"\u30ea\u30ea\u30fc\u30b9{1}\u3067\u4e88\u671f\u3057\u306a\u3044\u30d0\u30fc\u30b8\u30e7\u30cb\u30f3\u30b0\u6e08\u30a8\u30f3\u30c8\u30ea{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"\u30ea\u30ea\u30fc\u30b9{0}\u306f\u6709\u52b9\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"\u30ea\u30ea\u30fc\u30b9{0}\u306f\u6709\u52b9\u3067\u306f\u3042\u308a\u307e\u305b\u3093\u30029\u4ee5\u4e0a\u3067\u3042\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"\u6b21\u306e\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\u3092\u5c0e\u51fa\u3067\u304d\u307e\u305b\u3093: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"\u4e88\u671f\u3057\u306a\u3044\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"\u8a8d\u8b58\u3055\u308c\u306a\u3044\u30aa\u30d7\u30b7\u30e7\u30f3: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea\u540d\u304c\u4e0d\u6b63\u3067\u3059: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea: {0}\u306b\u306f\u3001\u4ee5\u524d\u306e\u30d0\u30fc\u30b8\u30e7\u30f3\u3068\u306f\u7570\u306a\u308bAPI\u3092\u6301\u3064\u30af\u30e9\u30b9\u304c\u542b\u307e\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea\u540d: {0}\u304c\u77ed\u3059\u304e\u307e\u3059\u3002\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u3067\u306f\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea: {0}\u306b\u306f\u3001\u4ee5\u524d\u306e\u30d0\u30fc\u30b8\u30e7\u30f3\u3068\u4e92\u63db\u6027\u306e\u306a\u3044\u30af\u30e9\u30b9\u30fb\u30d0\u30fc\u30b8\u30e7\u30f3\u304c\u542b\u307e\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"\u30d0\u30fc\u30b8\u30e7\u30cb\u30f3\u30b0\u3055\u308c\u305f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306emodule-info.class\u306b\u7570\u306a\u308b\"exports\"\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: \u30d0\u30fc\u30b8\u30e7\u30cb\u30f3\u30b0\u3055\u308c\u305f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306emodule-info.class\u306b\u7570\u306a\u308b\"main-class\"\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"\u30d0\u30fc\u30b8\u30e7\u30cb\u30f3\u30b0\u3055\u308c\u305f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306emodule-info.class\u306b\u6b63\u3057\u304f\u306a\u3044\u540d\u524d\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"\u30d0\u30fc\u30b8\u30e7\u30cb\u30f3\u30b0\u30fb\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306emodule-info.class\u306b\u7570\u306a\u308b\"opens\"\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"\u30d0\u30fc\u30b8\u30e7\u30cb\u30f3\u30b0\u3055\u308c\u305f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306emodule-info.class\u306b\u7570\u306a\u308b\"provides\"\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"\u30d0\u30fc\u30b8\u30e7\u30cb\u30f3\u30b0\u3055\u308c\u305f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306emodule-info.class\u306b\u8ffd\u52a0\u306e\"requires\"\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"\u30d0\u30fc\u30b8\u30e7\u30cb\u30f3\u30b0\u3055\u308c\u305f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306emodule-info.class\u306b\u6b20\u843d\u3057\u3066\u3044\u308b\"requires\"\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"\u30d0\u30fc\u30b8\u30e7\u30cb\u30f3\u30b0\u30fb\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306emodule-info.class\u306b\u8ffd\u52a0\u306e\"requires transitive\"\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: \u30d0\u30fc\u30b8\u30e7\u30cb\u30f3\u30b0\u3055\u308c\u305f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306emodule-info.class\u306b\u7570\u306a\u308b\"version\"\u304c\u542b\u307e\u308c\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea: {0}\u306f\u3001\u5206\u96e2\u578b\u306e\u30cd\u30b9\u30c8\u3055\u308c\u305f\u30af\u30e9\u30b9\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of(u"{0}\u3092\u691c\u8a3c\u3067\u304d\u307e\u305b\u3093: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"\u7121\u52b9\u306a\u30de\u30eb\u30c1\u30ea\u30ea\u30fc\u30b9jar\u30d5\u30a1\u30a4\u30eb{0}\u304c\u524a\u9664\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea: {0}\u306b\u306f\u3001\u5185\u90e8\u540d{1}\u3092\u6301\u3064\u30af\u30e9\u30b9\u304c\u542b\u307e\u308c\u307e\u3059\u304c\u3001\u540d\u524d\u304c\u4e00\u81f4\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea: {0}\u306b\u306f\u3001\u30d9\u30fc\u30b9\u30fb\u30a8\u30f3\u30c8\u30ea\u306b\u5b58\u5728\u3057\u306a\u3044\u65b0\u3057\u3044public\u30af\u30e9\u30b9\u304c\u542b\u307e\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea\u540d: {0}\u306b\u30d0\u30fc\u30b8\u30e7\u30f3\u756a\u53f7\u304c\u3042\u308a\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of(u"\u65e2\u5b58jar\u30d5\u30a1\u30a4\u30eb\u306e\u66f8\u8fbc\u307f\u4e2d\u306b\u30a8\u30e9\u30fc\u304c\u767a\u751f\u3057\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" \u3069\u306e\u30e2\u30fc\u30c9\u3067\u3082\u6709\u52b9\u306a\u64cd\u4f5c\u4fee\u98fe\u5b50:\n\n  -C DIR                     \u6307\u5b9a\u306e\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306b\u5909\u66f4\u3057\u3001\u6b21\u306e\u30d5\u30a1\u30a4\u30eb\u3092\n                             \u53d6\u308a\u8fbc\u307f\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f\u3001--file=FILE            \u30a2\u30fc\u30ab\u30a4\u30d6\u30fb\u30d5\u30a1\u30a4\u30eb\u540d\u3002\u7701\u7565\u3057\u305f\u5834\u5408\u3001stdin\u307e\u305f\u306f\n                             stdout\u306e\u3044\u305a\u308c\u304b\u304c\u64cd\u4f5c\u306b\u57fa\u3065\u3044\u3066\u4f7f\u7528\u3055\u308c\u307e\u3059\n      --release VERSION      \u6b21\u306e\u3059\u3079\u3066\u306e\u30d5\u30a1\u30a4\u30eb\u3092jar\u306e\u30d0\u30fc\u30b8\u30e7\u30cb\u30f3\u30b0\u3055\u308c\u305f\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\n                             (\u3064\u307e\u308a\u3001META-INF/versions/VERSION/)\u306b\u914d\u7f6e\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v\u3001--verbose              \u6a19\u6e96\u51fa\u529b\u306b\u8a73\u7d30\u306a\u51fa\u529b\u3092\u751f\u6210\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" \u4f5c\u6210\u30e2\u30fc\u30c9\u3067\u306e\u307f\u6709\u52b9\u306a\u64cd\u4f5c\u4fee\u98fe\u5b50:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            \u65b0\u3057\u3044jar\u30a2\u30fc\u30ab\u30a4\u30d6\u306e\u4f5c\u6210\u5f8c\u3001\u542b\u307e\u308c\u308b\u60c5\u5831\u3092\n                             \u6b63\u898f\u5316\u3057\u307e\u3059\u3002\u3053\u306e\u30aa\u30d7\u30b7\u30e7\u30f3\u306f\u975e\u63a8\u5968\u3067\u3042\u308a\u3001\n                             \u4eca\u5f8c\u306eJDK\u30ea\u30ea\u30fc\u30b9\u3067\u524a\u9664\u3055\u308c\u308b\u4e88\u5b9a\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" \u4f5c\u6210\u307e\u305f\u306f\u66f4\u65b0\u30e2\u30fc\u30c9\u3067\u306e\u307f\u6709\u52b9\u306a\u64cd\u4f5c\u4fee\u98fe\u5b50:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  \u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u30c7\u30d5\u30a9\u30eb\u30c8\u306e\u30eb\u30fc\u30c8\u8a2d\u5b9a\u304b\u3089\u9664\u5916\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN \u30e2\u30b8\u30e5\u30e9jar\u306e\u4f5c\u6210\u6642\u307e\u305f\u306f\u975e\u30e2\u30b8\u30e5\u30e9jar\u306e\u66f4\u65b0\u6642\u306b\n                             \u6307\u5b9a\u306e\u30d1\u30bf\u30fc\u30f3\u306b\u4e00\u81f4\u3057\u3001\u76f4\u63a5\u307e\u305f\u306f\u9593\u63a5\u7684\u306b\n                             \u4f9d\u5b58\u3057\u3066\u3044\u308b\u30e2\u30b8\u30e5\u30fc\u30eb\u306e\u30cf\u30c3\u30b7\u30e5\u3092\n                             \u8a08\u7b97\u304a\u3088\u3073\u8a18\u9332\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" \u4f5c\u6210\u3001\u66f4\u65b0\u304a\u3088\u3073\u7d22\u5f15\u751f\u6210\u30e2\u30fc\u30c9\u3067\u306e\u307f\u6709\u52b9\u306a\u64cd\u4f5c\u4fee\u98fe\u5b50:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          \u683c\u7d0d\u306e\u307f\u3002ZIP\u5727\u7e2e\u3092\u4f7f\u7528\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e\u3001--main-class=CLASSNAME \u30e2\u30b8\u30e5\u30e9\u307e\u305f\u306f\u5b9f\u884c\u53ef\u80fd\u306ajar\u30a2\u30fc\u30ab\u30a4\u30d6\u306b\n                             \u30d0\u30f3\u30c9\u30eb\u3055\u308c\u305f\u30b9\u30bf\u30f3\u30c9\u30a2\u30ed\u30f3\u30fb\u30a2\u30d7\u30ea\u30b1\u30fc\u30b7\u30e7\u30f3\u306e\n                             \u30a2\u30d7\u30ea\u30b1\u30fc\u30b7\u30e7\u30f3\u30fb\u30a8\u30f3\u30c8\u30ea\u30fb\u30dd\u30a4\u30f3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m\u3001--manifest=FILE        \u6307\u5b9a\u306e\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u30fb\u30d5\u30a1\u30a4\u30eb\u304b\u3089\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u60c5\u5831\u3092\n                             \u53d6\u308a\u8fbc\u307f\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p\u3001--module-path          \u30cf\u30c3\u30b7\u30e5\u3092\u751f\u6210\u3059\u308b\u30e2\u30b8\u30e5\u30fc\u30eb\u4f9d\u5b58\u6027\n                             \u306e\u5834\u6240"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    \u30e2\u30b8\u30e5\u30e9jar\u306e\u4f5c\u6210\u6642\u307e\u305f\u306f\u975e\u30e2\u30b8\u30e5\u30e9jar\u306e\u66f4\u65b0\u6642\u306e\n                             \u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30d0\u30fc\u30b8\u30e7\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M\u3001--no-manifest          \u30a8\u30f3\u30c8\u30ea\u306e\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u4f5c\u6210\u3057\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     \u30e2\u30b8\u30e5\u30fc\u30eb\u304c\u89e3\u6c7a\u3055\u308c\u3066\u3044\u308b\u5834\u5408\u306f\u3001\u8b66\u544a\u3092\u767a\u884c\u3059\u308b\n                             \u30c4\u30fc\u30eb\u306e\u30d2\u30f3\u30c8\u3002\u975e\u63a8\u5968\u3001\u524a\u9664\u4e88\u5b9a\u306e\u975e\u63a8\u5968\u307e\u305f\u306f\n                             \u5b9f\u9a13\u7684\u306e\u3044\u305a\u308c\u304b"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" \u30e1\u30a4\u30f3\u64cd\u4f5c\u30e2\u30fc\u30c9:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of(u"  -c\u3001--create               \u30a2\u30fc\u30ab\u30a4\u30d6\u3092\u4f5c\u6210\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of(u"  -d, --describe-module      \u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\u307e\u305f\u306f\u81ea\u52d5\u30e2\u30b8\u30e5\u30fc\u30eb\u540d\u3092\u51fa\u529b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of(u"  -x\u3001--extract              \u6307\u5b9a\u306e(\u307e\u305f\u306f\u3059\u3079\u3066\u306e)\u30d5\u30a1\u30a4\u30eb\u3092\u30a2\u30fc\u30ab\u30a4\u30d6\u304b\u3089\u62bd\u51fa\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i,\u3001--generate-index=FILE  \u6307\u5b9a\u306ejar\u30a2\u30fc\u30ab\u30a4\u30d6\u306e\u7d22\u5f15\u60c5\u5831\u3092\n                             \u751f\u6210\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t\u3001--list                 \u30a2\u30fc\u30ab\u30a4\u30d6\u306e\u5185\u5bb9\u3092\u4e00\u89a7\u8868\u793a\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of(u"  -u\u3001--update               \u65e2\u5b58\u306ejar\u30a2\u30fc\u30ab\u30a4\u30d6\u3092\u66f4\u65b0\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(u" \u305d\u306e\u4ed6\u306e\u30aa\u30d7\u30b7\u30e7\u30f3:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -?\u3001-h\u3001--help[:compat]        \u3053\u308c(\u30aa\u30d7\u30b7\u30e7\u30f3\u3067\u4e92\u63db\u6027)\u3092help\u306b\u6307\u5b9a\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           \u8ffd\u52a0\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u30d8\u30eb\u30d7\u3092\u63d0\u4f9b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of(u"      --version              \u30d7\u30ed\u30b0\u30e9\u30e0\u30fb\u30d0\u30fc\u30b8\u30e7\u30f3\u3092\u51fa\u529b\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" \u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\'module-info.class\'\u304c\u6307\u5b9a\u306e\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306e\u30eb\u30fc\u30c8\u307e\u305f\u306f\n jar\u30a2\u30fc\u30ab\u30a4\u30d6\u81ea\u4f53\u306e\u30eb\u30fc\u30c8\u306b\u3042\u308b\u5834\u5408\u3001\u30a2\u30fc\u30ab\u30a4\u30d6\u306f\u30e2\u30b8\u30e5\u30e9jar\u3067\u3059\u3002\n \u6b21\u306e\u64cd\u4f5c\u306f\u3001\u30e2\u30b8\u30e5\u30e9jar\u306e\u4f5c\u6210\u6642\u307e\u305f\u306f\u65e2\u5b58\u306e\u975e\u30e2\u30b8\u30e5\u30e9jar\u306e\u66f4\u65b0\u6642\u306b\n \u306e\u307f\u6709\u52b9\u3067\u3059:  \'--module-version\'\u3001\n \'--hash-modules\'\u304a\u3088\u3073\'--module-path\'\u3002\n\n \u30ed\u30f3\u30b0\u30fb\u30aa\u30d7\u30b7\u30e7\u30f3\u3078\u306e\u5fc5\u9808\u307e\u305f\u306f\u30aa\u30d7\u30b7\u30e7\u30f3\u306e\u5f15\u6570\u306f\u3001\u5bfe\u5fdc\u3059\u308b\u30b7\u30e7\u30fc\u30c8\u30fb\u30aa\u30d7\u30b7\u30e7\u30f3\n \u306b\u5bfe\u3057\u3066\u3082\u5fc5\u9808\u307e\u305f\u306f\u30aa\u30d7\u30b7\u30e7\u30f3\u306b\u306a\u308a\u307e\u3059\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"\u4f7f\u7528\u65b9\u6cd5: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar\u306f\u30af\u30e9\u30b9\u304a\u3088\u3073\u30ea\u30bd\u30fc\u30b9\u306e\u30a2\u30fc\u30ab\u30a4\u30d6\u3092\u4f5c\u6210\u3057\u3001\u30a2\u30fc\u30ab\u30a4\u30d6\u304b\u3089\u500b\u3005\u306e\u30af\u30e9\u30b9\u307e\u305f\u306f\n\u30ea\u30bd\u30fc\u30b9\u3092\u64cd\u4f5c\u307e\u305f\u306f\u5fa9\u5143\u3067\u304d\u307e\u3059\u3002\n\n \u4f8b:\n # 2\u3064\u306e\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u542b\u3080classes.jar\u3068\u3044\u3046\u30a2\u30fc\u30ab\u30a4\u30d6\u3092\u4f5c\u6210\u3059\u308b:\n jar --create --file classes.jar Foo.class Bar.class\n # foo/\u306e\u3059\u3079\u3066\u306e\u30d5\u30a1\u30a4\u30eb\u3092\u542b\u3080\u3001\u65e2\u5b58\u306e\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u3092\u4f7f\u7528\u3057\u305f\u30a2\u30fc\u30ab\u30a4\u30d6\u3092\u4f5c\u6210\u3059\u308b:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # \u30e2\u30b8\u30e5\u30e9jar\u30a2\u30fc\u30ab\u30a4\u30d6\u3092\u4f5c\u6210\u3059\u308b\u3002\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\u306fclasses/module-info.class\u306b\n # \u3042\u308b:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # \u65e2\u5b58\u306e\u975e\u30e2\u30b8\u30e5\u30e9jar\u3092\u30e2\u30b8\u30e5\u30e9jar\u306b\u66f4\u65b0\u3059\u308b:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # \u8907\u6570\u30ea\u30ea\u30fc\u30b9jar\u3092\u4f5c\u6210\u3057\u3001\u4e00\u90e8\u306e\u30d5\u30a1\u30a4\u30eb\u3092META-INF/versions/9\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306b\u914d\u7f6e\u3059\u308b:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\njar\u30b3\u30de\u30f3\u30c9\u3092\u77ed\u7e2e\u307e\u305f\u306f\u7c21\u7565\u5316\u3059\u308b\u306b\u306f\u3001\u500b\u5225\u306e\u30c6\u30ad\u30b9\u30c8\u30fb\u30d5\u30a1\u30a4\u30eb\u3067\u5f15\u6570\u3092\u6307\u5b9a\u3057\u3001\n\u8a18\u53f7(@)\u3092\u63a5\u982d\u8f9e\u3068\u3057\u3066\u4f7f\u7528\u3057\u3066jar\u30b3\u30de\u30f3\u30c9\u306b\u6e21\u3057\u307e\u3059\u3002\n\n \u4f8b:\n # \u8ffd\u52a0\u30aa\u30d7\u30b7\u30e7\u30f3\u304a\u3088\u3073\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u306e\u30ea\u30b9\u30c8\u3092\u30d5\u30a1\u30a4\u30ebclasses.list\u304b\u3089\u8aad\u8fbc\u307f\u307e\u3059\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of(u"\u4f7f\u7528\u65b9\u6cd5: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"\u8a73\u7d30\u306f\u3001`jar --help\'\u3092\u5b9f\u884c\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of(u"\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u304c\u8ffd\u52a0\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of(u"module-info\u304c\u8ffd\u52a0\u3055\u308c\u307e\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of(u"{0}\u3092\u8ffd\u52a0\u4e2d\u3067\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"\u30e2\u30b8\u30e5\u30fc\u30eb\u30fb\u30c7\u30a3\u30b9\u30af\u30ea\u30d7\u30bf\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3002\u81ea\u52d5\u30e2\u30b8\u30e5\u30fc\u30eb\u304c\u5c0e\u51fa\u3055\u308c\u307e\u3057\u305f\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of(u"  {0}\u304c\u4f5c\u6210\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of(u"({0}%\u53ce\u7e2e\u3055\u308c\u307e\u3057\u305f)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of(u"{0}\u304c\u62bd\u51fa\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of(u"\u30a8\u30f3\u30c8\u30ea{0}\u3092\u7121\u8996\u3057\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(u" {0}\u304c\u5c55\u958b\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of(u"(\u5165={0})(\u51fa={1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of(u"(0%\u683c\u7d0d\u3055\u308c\u307e\u3057\u305f)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of(u"\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u304c\u66f4\u65b0\u3055\u308c\u307e\u3057\u305f"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of(u"module-info\u304c\u66f4\u65b0\u3055\u308c\u307e\u3057\u305f: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"\u4e92\u63db\u6027\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9: \n\u4f7f\u7528\u65b9\u6cd5: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files] ...\n\u30aa\u30d7\u30b7\u30e7\u30f3:\n    -c \u30a2\u30fc\u30ab\u30a4\u30d6\u3092\u65b0\u898f\u4f5c\u6210\u3059\u308b\n    -t \u30a2\u30fc\u30ab\u30a4\u30d6\u306e\u5185\u5bb9\u3092\u4e00\u89a7\u8868\u793a\u3059\u308b\n    -x \u6307\u5b9a\u306e(\u307e\u305f\u306f\u3059\u3079\u3066\u306e)\u30d5\u30a1\u30a4\u30eb\u3092\u30a2\u30fc\u30ab\u30a4\u30d6\u304b\u3089\u62bd\u51fa\u3059\u308b\n    -u \u65e2\u5b58\u30a2\u30fc\u30ab\u30a4\u30d6\u3092\u66f4\u65b0\u3059\u308b\n    -v \u6a19\u6e96\u51fa\u529b\u306b\u8a73\u7d30\u306a\u51fa\u529b\u3092\u751f\u6210\u3059\u308b\n    -f \u30a2\u30fc\u30ab\u30a4\u30d6\u30fb\u30d5\u30a1\u30a4\u30eb\u540d\u3092\u6307\u5b9a\u3059\u308b\n    -m \u6307\u5b9a\u306e\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u30fb\u30d5\u30a1\u30a4\u30eb\u304b\u3089\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u60c5\u5831\u3092\u53d6\u308a\u8fbc\u3080\n    -e \u5b9f\u884c\u53ef\u80fdjar\u30d5\u30a1\u30a4\u30eb\u306b\u30d0\u30f3\u30c9\u30eb\u3055\u308c\u305f\u30b9\u30bf\u30f3\u30c9\u30a2\u30ed\u30f3\u30fb\u30a2\u30d7\u30ea\u30b1\u30fc\u30b7\u30e7\u30f3\u306e\n        \u30a8\u30f3\u30c8\u30ea\u30fb\u30dd\u30a4\u30f3\u30c8\u3092\u6307\u5b9a\u3059\u308b\n    -0 \u683c\u7d0d\u306e\u307f\u3002ZIP\u5727\u7e2e\u3092\u4f7f\u7528\u3057\u306a\u3044\n    -P \u30d5\u30a1\u30a4\u30eb\u540d\u306e\u5148\u982d\u306e\'/\' (\u7d76\u5bfe\u30d1\u30b9)\u304a\u3088\u3073\"..\" (\u89aa\u30c7\u30a3\u30ec\u30af\u30c8\u30ea)\u30b3\u30f3\u30dd\u30fc\u30cd\u30f3\u30c8\u3092\u4fdd\u6301\u3059\u308b\n    -M \u30a8\u30f3\u30c8\u30ea\u306e\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u4f5c\u6210\u3057\u306a\u3044\n    -i \u6307\u5b9a\u306ejar\u30d5\u30a1\u30a4\u30eb\u306e\u7d22\u5f15\u60c5\u5831\u3092\u751f\u6210\u3059\u308b\n    -C \u6307\u5b9a\u306e\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306b\u5909\u66f4\u3057\u3001\u6b21\u306e\u30d5\u30a1\u30a4\u30eb\u3092\u53d6\u308a\u8fbc\u3080\n\u30d5\u30a1\u30a4\u30eb\u304c\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306e\u5834\u5408\u306f\u518d\u5e30\u7684\u306b\u51e6\u7406\u3055\u308c\u307e\u3059\u3002\n\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u30fb\u30d5\u30a1\u30a4\u30eb\u540d\u3001\u30a2\u30fc\u30ab\u30a4\u30d6\u30fb\u30d5\u30a1\u30a4\u30eb\u540d\u304a\u3088\u3073\u30a8\u30f3\u30c8\u30ea\u30fb\u30dd\u30a4\u30f3\u30c8\u540d\u306f\u3001\n\u30d5\u30e9\u30b0\'m\'\u3001\'f\'\u3001\'e\'\u306e\u6307\u5b9a\u3068\u540c\u3058\u9806\u756a\u3067\u6307\u5b9a\u3059\u308b\u5fc5\u8981\u304c\u3042\u308a\u307e\u3059\u3002\n\n\u4f8b1: 2\u3064\u306e\u30af\u30e9\u30b9\u30fb\u30d5\u30a1\u30a4\u30eb\u3092\u30a2\u30fc\u30ab\u30a4\u30d6classes.jar\u306b\u4fdd\u5b58\u3059\u308b:\n     jar cvf classes.jar Foo.class Bar.class\n\u4f8b2: \u65e2\u5b58\u306e\u30de\u30cb\u30d5\u30a7\u30b9\u30c8\u30fb\u30d5\u30a1\u30a4\u30eb\'mymanifest\'\u3092\u4f7f\u7528\u3057\u3001foo/\u30c7\u30a3\u30ec\u30af\u30c8\u30ea\u306e\n     \u5168\u30d5\u30a1\u30a4\u30eb\u3092\'classes.jar\'\u306b\u30a2\u30fc\u30ab\u30a4\u30d6\u3059\u308b:\n     jar cvfm classes.jar mymanifest -C foo/ . \n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.flag.is.deprecated"_s),
			$of(u"\u8b66\u544a: {0}\u30aa\u30d7\u30b7\u30e7\u30f3\u306f\u975e\u63a8\u5968\u3067\u3042\u308a\u3001\u4eca\u5f8c\u306eJDK\u30ea\u30ea\u30fc\u30b9\u3067\u524a\u9664\u3055\u308c\u308b\u4e88\u5b9a\u3067\u3059\u3002\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"\u4e88\u671f\u3057\u306a\u3044\u30d0\u30fc\u30b8\u30e7\u30cb\u30f3\u30b0\u6e08\u30a8\u30f3\u30c8\u30ea{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"\u8b66\u544a : \u30a8\u30f3\u30c8\u30ea{0}\u306f\u3001\u96a0\u3057\u30d1\u30c3\u30b1\u30fc\u30b8\u5185\u306epublic\u30af\u30e9\u30b9\u3067\u3059\u3002\n\u30af\u30e9\u30b9\u30d1\u30b9\u306b\u3053\u306ejar\u3092\u914d\u7f6e\u3059\u308b\u3068\u3001\u4e92\u63db\u6027\u306e\u306a\u3044\npublic\u30a4\u30f3\u30bf\u30d5\u30a7\u30fc\u30b9\u304c\u751f\u6210\u3055\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"\u8b66\u544a : \u30a8\u30f3\u30c8\u30ea{0}\u306b\u306f\u3001jar\u306b\u3059\u3067\u306b\u5b58\u5728\u3059\u308b\n\u30a8\u30f3\u30c8\u30ea\u3068\u540c\u3058\u30af\u30e9\u30b9\u304c\u542b\u307e\u308c\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of(u"\u8b66\u544a : \u30a8\u30f3\u30c8\u30ea{0}\u3001\u540c\u3058\u540d\u524d\u3092\u6301\u3064\u8907\u6570\u306e\u30ea\u30bd\u30fc\u30b9"_s)
		})
	});
}

jar_ja::jar_ja() {
}

$Class* jar_ja::load$($String* name, bool initialize) {
	$loadClass(jar_ja, name, initialize, &_jar_ja_ClassInfo_, allocate$jar_ja);
	return class$;
}

$Class* jar_ja::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun