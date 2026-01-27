#include <sun/text/resources/cldr/ext/FormatData_ff_Latn_GM.h>

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

$MethodInfo _FormatData_ff_Latn_GM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ff_Latn_GM, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ff_Latn_GM, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ff_Latn_GM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ff_Latn_GM",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ff_Latn_GM_MethodInfo_
};

$Object* allocate$FormatData_ff_Latn_GM($Class* clazz) {
	return $of($alloc(FormatData_ff_Latn_GM));
}

void FormatData_ff_Latn_GM::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ff_Latn_GM::getContents() {
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
		})
	}));
	return data;
}

FormatData_ff_Latn_GM::FormatData_ff_Latn_GM() {
}

$Class* FormatData_ff_Latn_GM::load$($String* name, bool initialize) {
	$loadClass(FormatData_ff_Latn_GM, name, initialize, &_FormatData_ff_Latn_GM_ClassInfo_, allocate$FormatData_ff_Latn_GM);
	return class$;
}

$Class* FormatData_ff_Latn_GM::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun