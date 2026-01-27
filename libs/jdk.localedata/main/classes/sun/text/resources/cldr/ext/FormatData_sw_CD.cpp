#include <sun/text/resources/cldr/ext/FormatData_sw_CD.h>

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

$MethodInfo _FormatData_sw_CD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sw_CD, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sw_CD, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sw_CD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_sw_CD",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sw_CD_MethodInfo_
};

$Object* allocate$FormatData_sw_CD($Class* clazz) {
	return $of($alloc(FormatData_sw_CD));
}

void FormatData_sw_CD::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sw_CD::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("Wakati"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("Juma"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("Siku ya juma"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("Muda wa siku"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("Majira ya saa"_s)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s,
				u"¤ #,##0.00"_s
			}))
		})
	}));
	return data;
}

FormatData_sw_CD::FormatData_sw_CD() {
}

$Class* FormatData_sw_CD::load$($String* name, bool initialize) {
	$loadClass(FormatData_sw_CD, name, initialize, &_FormatData_sw_CD_ClassInfo_, allocate$FormatData_sw_CD);
	return class$;
}

$Class* FormatData_sw_CD::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun