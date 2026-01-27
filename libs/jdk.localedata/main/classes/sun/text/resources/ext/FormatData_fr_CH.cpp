#include <sun/text/resources/ext/FormatData_fr_CH.h>

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

$MethodInfo _FormatData_fr_CH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_CH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_CH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fr_CH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_fr_CH",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_CH_MethodInfo_
};

$Object* allocate$FormatData_fr_CH($Class* clazz) {
	return $of($alloc(FormatData_fr_CH));
}

void FormatData_fr_CH::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_CH::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"¤ #,##0.00;¤-#,##0.00"_s,
				"#,##0 %"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				"\'"_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"�"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH.mm.\' h\' z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d. MMMM yyyy"_s,
				"d. MMMM yyyy"_s,
				"d MMM yyyy"_s,
				"dd.MM.yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GaMjkHmsSEDFwWxhKzZ"_s)
		})
	});
}

FormatData_fr_CH::FormatData_fr_CH() {
}

$Class* FormatData_fr_CH::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_CH, name, initialize, &_FormatData_fr_CH_ClassInfo_, allocate$FormatData_fr_CH);
	return class$;
}

$Class* FormatData_fr_CH::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun