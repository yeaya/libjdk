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

void FormatData_sw_CD::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sw_CD::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"field.era"_s,
			"Wakati"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"Juma"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"Siku ya juma"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"Muda wa siku"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"Majira ya saa"_s
		}),
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s,
				u"¤ #,##0.00"_s
			})
		})
	}));
	return data;
}

FormatData_sw_CD::FormatData_sw_CD() {
}

$Class* FormatData_sw_CD::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sw_CD, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sw_CD, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_sw_CD",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_sw_CD, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_sw_CD);
	});
	return class$;
}

$Class* FormatData_sw_CD::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun