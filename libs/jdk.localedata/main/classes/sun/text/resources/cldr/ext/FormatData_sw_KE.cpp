#include <sun/text/resources/cldr/ext/FormatData_sw_KE.h>

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

$MethodInfo _FormatData_sw_KE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sw_KE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sw_KE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sw_KE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_sw_KE",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sw_KE_MethodInfo_
};

$Object* allocate$FormatData_sw_KE($Class* clazz) {
	return $of($alloc(FormatData_sw_KE));
}

void FormatData_sw_KE::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sw_KE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd/MM/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd/MM/y G"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
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
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
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
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s,
				u"¤ #,##0.00"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:elfu 0 other:elfu 0}"_s,
				u"{one:elfu 00 other:elfu 00}"_s,
				u"{one:elfu 000 other:elfu 000}"_s,
				"{one:M0 other:M0}"_s,
				"{one:M00 other:M00}"_s,
				"{one:M000 other:M000}"_s,
				"{one:B0 other:B0}"_s,
				"{one:B00 other:B00}"_s,
				"{one:B000 other:B000}"_s,
				"{one:T0 other:T0}"_s,
				"{one:T00 other:T00}"_s,
				"{one:T000 other:T000}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"{one:elfu\' \'0;elfu\' \'-0 other:elfu\' \'0;elfu\' \'-0}"_s,
				"{one:elfu\' \'00;elfu\' \'-00 other:elfu\' \'00}"_s,
				"{one:elfu\' \'000 other:elfu\' \'000}"_s,
				"{one:milioni\' \'0 other:milioni\' \'0}"_s,
				"{one:milioni\' \'00 other:milioni\' \'00}"_s,
				"{one:milioni\' \'000 other:milioni\' \'000}"_s,
				"{one:bilioni\' \'0 other:bilioni\' \'0}"_s,
				"{one:bilioni\' \'00 other:bilioni\' \'00}"_s,
				"{one:bilioni\' \'000 other:bilioni\' \'000}"_s,
				"{one:trilioni\' \'0 other:trilioni\' \'0}"_s,
				"{one:trilioni\' \'00 other:trilioni\' \'00}"_s,
				"{one:trilioni\' \'000 other:trilioni\' \'000}"_s
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

FormatData_sw_KE::FormatData_sw_KE() {
}

$Class* FormatData_sw_KE::load$($String* name, bool initialize) {
	$loadClass(FormatData_sw_KE, name, initialize, &_FormatData_sw_KE_ClassInfo_, allocate$FormatData_sw_KE);
	return class$;
}

$Class* FormatData_sw_KE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun