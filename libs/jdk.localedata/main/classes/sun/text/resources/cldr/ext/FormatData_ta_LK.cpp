#include <sun/text/resources/cldr/ext/FormatData_ta_LK.h>

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

$MethodInfo _FormatData_ta_LK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ta_LK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ta_LK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ta_LK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ta_LK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ta_LK_MethodInfo_
};

$Object* allocate$FormatData_ta_LK($Class* clazz) {
	return $of($alloc(FormatData_ta_LK));
}

void FormatData_ta_LK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ta_LK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
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

FormatData_ta_LK::FormatData_ta_LK() {
}

$Class* FormatData_ta_LK::load$($String* name, bool initialize) {
	$loadClass(FormatData_ta_LK, name, initialize, &_FormatData_ta_LK_ClassInfo_, allocate$FormatData_ta_LK);
	return class$;
}

$Class* FormatData_ta_LK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun