#include <sun/text/resources/cldr/ext/FormatData_ti_ER.h>

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

$MethodInfo _FormatData_ti_ER_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ti_ER, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ti_ER, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ti_ER_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ti_ER",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ti_ER_MethodInfo_
};

$Object* allocate$FormatData_ti_ER($Class* clazz) {
	return $of($alloc(FormatData_ti_ER));
}

void FormatData_ti_ER::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ti_ER::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE፡ dd MMMM መዓልቲ y G"_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE፡ dd MMMM መዓልቲ y GGGG"_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				u"ሰ"_s,
				u"ሰ"_s,
				u"ሰ"_s,
				u"ረ"_s,
				u"ሓ"_s,
				u"ዓ"_s,
				u"ቀ"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"ዓመተ ዓለም"_s,
				u"ዓመተ ምህረት"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		})
	}));
	return data;
}

FormatData_ti_ER::FormatData_ti_ER() {
}

$Class* FormatData_ti_ER::load$($String* name, bool initialize) {
	$loadClass(FormatData_ti_ER, name, initialize, &_FormatData_ti_ER_ClassInfo_, allocate$FormatData_ti_ER);
	return class$;
}

$Class* FormatData_ti_ER::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun