#include <sun/text/resources/cldr/ext/FormatData_ps_PK.h>

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

$MethodInfo _FormatData_ps_PK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ps_PK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ps_PK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ps_PK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ps_PK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ps_PK_MethodInfo_
};

$Object* allocate$FormatData_ps_PK($Class* clazz) {
	return $of($alloc(FormatData_ps_PK));
}

void FormatData_ps_PK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ps_PK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"محرم"_s,
				u"د صفرے د"_s,
				u"ربيع"_s,
				u"ربيع II"_s,
				u"جماعه"_s,
				u"جموما II"_s,
				u"رجب"_s,
				u"شعبان"_s,
				u"رمضان"_s,
				u"شوال"_s,
				u"ذي القعده"_s,
				u"ذي الحج"_s,
				""_s
			}))
		})
	}));
	return data;
}

FormatData_ps_PK::FormatData_ps_PK() {
}

$Class* FormatData_ps_PK::load$($String* name, bool initialize) {
	$loadClass(FormatData_ps_PK, name, initialize, &_FormatData_ps_PK_ClassInfo_, allocate$FormatData_ps_PK);
	return class$;
}

$Class* FormatData_ps_PK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun