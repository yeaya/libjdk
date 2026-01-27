#include <sun/text/resources/cldr/ext/FormatData_fr_MR.h>

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

$MethodInfo _FormatData_fr_MR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_MR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_MR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fr_MR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_fr_MR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_MR_MethodInfo_
};

$Object* allocate$FormatData_fr_MR($Class* clazz) {
	return $of($alloc(FormatData_fr_MR));
}

void FormatData_fr_MR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_MR::getContents() {
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

FormatData_fr_MR::FormatData_fr_MR() {
}

$Class* FormatData_fr_MR::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_MR, name, initialize, &_FormatData_fr_MR_ClassInfo_, allocate$FormatData_fr_MR);
	return class$;
}

$Class* FormatData_fr_MR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun