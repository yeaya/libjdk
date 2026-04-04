#include <sun/text/resources/ext/FormatData_ar_JO.h>
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

void FormatData_ar_JO::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar_JO::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
				u"كانون الثاني"_s,
				u"شباط"_s,
				u"آذار"_s,
				u"نيسان"_s,
				u"أيار"_s,
				u"حزيران"_s,
				u"تموز"_s,
				u"آب"_s,
				u"أيلول"_s,
				u"تشرين الأول"_s,
				u"تشرين الثاني"_s,
				u"كانون الأول"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				u"كانون الثاني"_s,
				u"شباط"_s,
				u"آذار"_s,
				u"نيسان"_s,
				u"أيار"_s,
				u"حزيران"_s,
				u"تموز"_s,
				u"آب"_s,
				u"أيلول"_s,
				u"تشرين الأول"_s,
				u"تشرين الثاني"_s,
				u"كانون الأول"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				u"الأحد"_s,
				u"الاثنين"_s,
				u"الثلاثاء"_s,
				u"الأربعاء"_s,
				u"الخميس"_s,
				u"الجمعة"_s,
				u"السبت"_s
			})
		})
	});
}

FormatData_ar_JO::FormatData_ar_JO() {
}

$Class* FormatData_ar_JO::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ar_JO, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ar_JO, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_ar_JO",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_ar_JO, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_ar_JO);
	});
	return class$;
}

$Class* FormatData_ar_JO::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun