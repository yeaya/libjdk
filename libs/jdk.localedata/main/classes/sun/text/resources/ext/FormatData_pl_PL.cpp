#include <sun/text/resources/ext/FormatData_pl_PL.h>

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

$MethodInfo _FormatData_pl_PL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_pl_PL, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_pl_PL, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_pl_PL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_pl_PL",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_pl_PL_MethodInfo_
};

$Object* allocate$FormatData_pl_PL($Class* clazz) {
	return $of($alloc(FormatData_pl_PL));
}

void FormatData_pl_PL::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_pl_PL::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"#,##0.## ¤;-#,##0.## ¤"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"yyyy-MM-dd"_s,
				"dd.MM.yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_pl_PL::FormatData_pl_PL() {
}

$Class* FormatData_pl_PL::load$($String* name, bool initialize) {
	$loadClass(FormatData_pl_PL, name, initialize, &_FormatData_pl_PL_ClassInfo_, allocate$FormatData_pl_PL);
	return class$;
}

$Class* FormatData_pl_PL::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun