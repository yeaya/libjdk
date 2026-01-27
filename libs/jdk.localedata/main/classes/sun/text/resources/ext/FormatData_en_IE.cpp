#include <sun/text/resources/ext/FormatData_en_IE.h>

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

$MethodInfo _FormatData_en_IE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_IE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_IE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_IE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_en_IE",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_IE_MethodInfo_
};

$Object* allocate$FormatData_en_IE($Class* clazz) {
	return $of($alloc(FormatData_en_IE));
}

void FormatData_en_IE::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_IE::getContents() {
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
				"dd MMMM yyyy"_s,
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

FormatData_en_IE::FormatData_en_IE() {
}

$Class* FormatData_en_IE::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_IE, name, initialize, &_FormatData_en_IE_ClassInfo_, allocate$FormatData_en_IE);
	return class$;
}

$Class* FormatData_en_IE::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun