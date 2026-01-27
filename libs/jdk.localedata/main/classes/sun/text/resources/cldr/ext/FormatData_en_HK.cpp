#include <sun/text/resources/cldr/ext/FormatData_en_HK.h>

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

$MethodInfo _FormatData_en_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_HK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_HK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_en_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_HK_MethodInfo_
};

$Object* allocate$FormatData_en_HK($Class* clazz) {
	return $of($alloc(FormatData_en_HK));
}

void FormatData_en_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM, y G"_s,
		"d MMMM, y G"_s,
		"d MMM, y G"_s,
		"d/M/yy GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM, y GGGG"_s,
		"d MMMM, y GGGG"_s,
		"d MMM, y GGGG"_s,
		"d/M/yy G"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
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
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"d/M/y"_s
			}))
		})
	}));
	return data;
}

FormatData_en_HK::FormatData_en_HK() {
}

$Class* FormatData_en_HK::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_HK, name, initialize, &_FormatData_en_HK_ClassInfo_, allocate$FormatData_en_HK);
	return class$;
}

$Class* FormatData_en_HK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun