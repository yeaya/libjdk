#include <sun/text/resources/ext/FormatData_en_CA.h>

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

$MethodInfo _FormatData_en_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_CA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_CA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_CA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_en_CA",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_CA_MethodInfo_
};

$Object* allocate$FormatData_en_CA($Class* clazz) {
	return $of($alloc(FormatData_en_CA));
}

void FormatData_en_CA::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_CA::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"h:mm:ss \'o\'\'clock\' a z"_s,
				"h:mm:ss z a"_s,
				"h:mm:ss a"_s,
				"h:mm a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, MMMM d, yyyy"_s,
				"MMMM d, yyyy"_s,
				"d-MMM-yyyy"_s,
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

FormatData_en_CA::FormatData_en_CA() {
}

$Class* FormatData_en_CA::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_CA, name, initialize, &_FormatData_en_CA_ClassInfo_, allocate$FormatData_en_CA);
	return class$;
}

$Class* FormatData_en_CA::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun