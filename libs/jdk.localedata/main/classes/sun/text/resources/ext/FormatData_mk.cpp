#include <sun/text/resources/ext/FormatData_mk.h>

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

$MethodInfo _FormatData_mk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_mk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_mk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_mk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_mk",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_mk_MethodInfo_
};

$Object* allocate$FormatData_mk($Class* clazz) {
	return $of($alloc(FormatData_mk));
}

void FormatData_mk::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_mk::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"јануари"_s,
				u"февруари"_s,
				u"март"_s,
				u"април"_s,
				u"мај"_s,
				u"јуни"_s,
				u"јули"_s,
				u"август"_s,
				u"септември"_s,
				u"октомври"_s,
				u"ноември"_s,
				u"декември"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"јан."_s,
				u"фев."_s,
				u"мар."_s,
				u"апр."_s,
				u"мај."_s,
				u"јун."_s,
				u"јул."_s,
				u"авг."_s,
				u"септ."_s,
				u"окт."_s,
				u"ноем."_s,
				u"декем."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"ј"_s,
				u"ф"_s,
				u"м"_s,
				u"а"_s,
				u"м"_s,
				u"ј"_s,
				u"ј"_s,
				u"а"_s,
				u"с"_s,
				u"о"_s,
				u"н"_s,
				u"д"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"недела"_s,
				u"понеделник"_s,
				u"вторник"_s,
				u"среда"_s,
				u"четврток"_s,
				u"петок"_s,
				u"сабота"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"нед."_s,
				u"пон."_s,
				u"вт."_s,
				u"сре."_s,
				u"чет."_s,
				u"пет."_s,
				u"саб."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"н"_s,
				u"п"_s,
				u"в"_s,
				u"с"_s,
				u"ч"_s,
				u"п"_s,
				u"с"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"пр.н.е."_s,
				u"ае."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
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
				u"�"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d, MMMM yyyy"_s,
				"d, MMMM yyyy"_s,
				"d.M.yyyy"_s,
				"d.M.yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GuMtkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_mk::FormatData_mk() {
}

$Class* FormatData_mk::load$($String* name, bool initialize) {
	$loadClass(FormatData_mk, name, initialize, &_FormatData_mk_ClassInfo_, allocate$FormatData_mk);
	return class$;
}

$Class* FormatData_mk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun