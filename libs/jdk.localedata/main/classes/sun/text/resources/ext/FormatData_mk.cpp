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

void FormatData_mk::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_mk::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			$$new($StringArray, {
				u"недела"_s,
				u"понеделник"_s,
				u"вторник"_s,
				u"среда"_s,
				u"четврток"_s,
				u"петок"_s,
				u"сабота"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				u"нед."_s,
				u"пон."_s,
				u"вт."_s,
				u"сре."_s,
				u"чет."_s,
				u"пет."_s,
				u"саб."_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				u"н"_s,
				u"п"_s,
				u"в"_s,
				u"с"_s,
				u"ч"_s,
				u"п"_s,
				u"с"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				u"пр.н.е."_s,
				u"ае."_s
			})
		}),
		$$new($ObjectArray, {
			"NumberElements"_s,
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
				u"�"_s
			})
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			$$new($StringArray, {
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:"_s,
				"HH:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, d, MMMM yyyy"_s,
				"d, MMMM yyyy"_s,
				"d.M.yyyy"_s,
				"d.M.yy"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GuMtkHmsSEDFwWahKzZ"_s
		})
	});
}

FormatData_mk::FormatData_mk() {
}

$Class* FormatData_mk::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_mk, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_mk, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_mk",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_mk, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_mk);
	});
	return class$;
}

$Class* FormatData_mk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun