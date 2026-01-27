#include <sun/text/resources/cldr/ext/FormatData_tr_CY.h>

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

$MethodInfo _FormatData_tr_CY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_tr_CY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_tr_CY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_tr_CY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_tr_CY",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_tr_CY_MethodInfo_
};

$Object* allocate$FormatData_tr_CY($Class* clazz) {
	return $of($alloc(FormatData_tr_CY));
}

void FormatData_tr_CY::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_tr_CY::getContents() {
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

FormatData_tr_CY::FormatData_tr_CY() {
}

$Class* FormatData_tr_CY::load$($String* name, bool initialize) {
	$loadClass(FormatData_tr_CY, name, initialize, &_FormatData_tr_CY_ClassInfo_, allocate$FormatData_tr_CY);
	return class$;
}

$Class* FormatData_tr_CY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun