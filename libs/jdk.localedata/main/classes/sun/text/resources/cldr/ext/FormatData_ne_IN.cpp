#include <sun/text/resources/cldr/ext/FormatData_ne_IN.h>

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

$MethodInfo _FormatData_ne_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ne_IN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ne_IN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ne_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ne_IN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ne_IN_MethodInfo_
};

$Object* allocate$FormatData_ne_IN($Class* clazz) {
	return $of($alloc(FormatData_ne_IN));
}

void FormatData_ne_IN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ne_IN::getContents() {
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

FormatData_ne_IN::FormatData_ne_IN() {
}

$Class* FormatData_ne_IN::load$($String* name, bool initialize) {
	$loadClass(FormatData_ne_IN, name, initialize, &_FormatData_ne_IN_ClassInfo_, allocate$FormatData_ne_IN);
	return class$;
}

$Class* FormatData_ne_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun