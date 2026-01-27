#include <sun/text/resources/cldr/ext/FormatData_sv_FI.h>

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

$MethodInfo _FormatData_sv_FI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sv_FI, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sv_FI, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sv_FI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_sv_FI",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sv_FI_MethodInfo_
};

$Object* allocate$FormatData_sv_FI($Class* clazz) {
	return $of($alloc(FormatData_sv_FI));
}

void FormatData_sv_FI::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sv_FI::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				u" "_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				u"−"_s,
				u"×10^"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				u"#,##0 %"_s,
				u"#,##0.00 ¤"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		})
	}));
	return data;
}

FormatData_sv_FI::FormatData_sv_FI() {
}

$Class* FormatData_sv_FI::load$($String* name, bool initialize) {
	$loadClass(FormatData_sv_FI, name, initialize, &_FormatData_sv_FI_ClassInfo_, allocate$FormatData_sv_FI);
	return class$;
}

$Class* FormatData_sv_FI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun