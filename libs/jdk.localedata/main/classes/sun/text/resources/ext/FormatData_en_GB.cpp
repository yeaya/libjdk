#include <sun/text/resources/ext/FormatData_en_GB.h>

#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _FormatData_en_GB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_GB, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_GB, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_GB_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_en_GB",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_GB_MethodInfo_
};

$Object* allocate$FormatData_en_GB($Class* clazz) {
	return $of($alloc(FormatData_en_GB));
}

void FormatData_en_GB::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_GB::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH:mm:ss \'o\'\'clock\' z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM yyyy"_s,
				"dd MMMM yyyy"_s,
				"dd-MMM-yyyy"_s,
				"dd/MM/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_en_GB::FormatData_en_GB() {
}

$Class* FormatData_en_GB::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_GB, name, initialize, &_FormatData_en_GB_ClassInfo_, allocate$FormatData_en_GB);
	return class$;
}

$Class* FormatData_en_GB::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun