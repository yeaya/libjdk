#include <sun/text/resources/cldr/ext/FormatData_de_IT.h>

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

$MethodInfo _FormatData_de_IT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_de_IT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_de_IT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_de_IT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_de_IT",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_de_IT_MethodInfo_
};

$Object* allocate$FormatData_de_IT($Class* clazz) {
	return $of($alloc(FormatData_de_IT));
}

void FormatData_de_IT::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_de_IT::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"Jänner"_s,
		"Februar"_s,
		u"März"_s,
		"April"_s,
		"Mai"_s,
		"Juni"_s,
		"Juli"_s,
		"August"_s,
		"September"_s,
		"Oktober"_s,
		"November"_s,
		"Dezember"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"Jän."_s,
		"Feb."_s,
		u"März"_s,
		"Apr."_s,
		"Mai"_s,
		"Juni"_s,
		"Juli"_s,
		"Aug."_s,
		"Sep."_s,
		"Okt."_s,
		"Nov."_s,
		"Dez."_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"Jän"_s,
				"Feb"_s,
				u"Mär"_s,
				"Apr"_s,
				"Mai"_s,
				"Jun"_s,
				"Jul"_s,
				"Aug"_s,
				"Sep"_s,
				"Okt"_s,
				"Nov"_s,
				"Dez"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		})
	}));
	return data;
}

FormatData_de_IT::FormatData_de_IT() {
}

$Class* FormatData_de_IT::load$($String* name, bool initialize) {
	$loadClass(FormatData_de_IT, name, initialize, &_FormatData_de_IT_ClassInfo_, allocate$FormatData_de_IT);
	return class$;
}

$Class* FormatData_de_IT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun