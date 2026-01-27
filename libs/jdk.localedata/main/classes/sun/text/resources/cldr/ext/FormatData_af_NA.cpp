#include <sun/text/resources/cldr/ext/FormatData_af_NA.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_af_NA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_af_NA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_af_NA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_af_NA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_af_NA",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_af_NA_MethodInfo_
};

$Object* allocate$FormatData_af_NA($Class* clazz) {
	return $of($alloc(FormatData_af_NA));
}

void FormatData_af_NA::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_af_NA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		})
	}));
	return data;
}

FormatData_af_NA::FormatData_af_NA() {
}

$Class* FormatData_af_NA::load$($String* name, bool initialize) {
	$loadClass(FormatData_af_NA, name, initialize, &_FormatData_af_NA_ClassInfo_, allocate$FormatData_af_NA);
	return class$;
}

$Class* FormatData_af_NA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun