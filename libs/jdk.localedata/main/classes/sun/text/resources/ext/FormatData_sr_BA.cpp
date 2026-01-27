#include <sun/text/resources/ext/FormatData_sr_BA.h>

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

$MethodInfo _FormatData_sr_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sr_BA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sr_BA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sr_BA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sr_BA",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sr_BA_MethodInfo_
};

$Object* allocate$FormatData_sr_BA($Class* clazz) {
	return $of($alloc(FormatData_sr_BA));
}

void FormatData_sr_BA::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr_BA::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"јануар"_s,
				u"фебруар"_s,
				u"март"_s,
				u"април"_s,
				u"мај"_s,
				u"јуни"_s,
				u"јули"_s,
				u"август"_s,
				u"септембар"_s,
				u"октобар"_s,
				u"новембар"_s,
				u"децембар"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"недеља"_s,
				u"понедељак"_s,
				u"уторак"_s,
				u"сриједа"_s,
				u"четвртак"_s,
				u"петак"_s,
				u"субота"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"нед"_s,
				u"пон"_s,
				u"уто"_s,
				u"сри"_s,
				u"чет"_s,
				u"пет"_s,
				u"суб"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				u"HH \'часова\', mm \'минута\', ss\' секунди\'"_s,
				"HH.mm.ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd. MMMM yyyy."_s,
				"dd. MMMM yyyy."_s,
				"yyyy-MM-dd"_s,
				"yy-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_sr_BA::FormatData_sr_BA() {
}

$Class* FormatData_sr_BA::load$($String* name, bool initialize) {
	$loadClass(FormatData_sr_BA, name, initialize, &_FormatData_sr_BA_ClassInfo_, allocate$FormatData_sr_BA);
	return class$;
}

$Class* FormatData_sr_BA::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun