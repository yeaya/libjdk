#include <sun/text/resources/cldr/ext/FormatData_pt_MO.h>

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

$MethodInfo _FormatData_pt_MO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_pt_MO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_pt_MO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_pt_MO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_pt_MO",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_pt_MO_MethodInfo_
};

$Object* allocate$FormatData_pt_MO($Class* clazz) {
	return $of($alloc(FormatData_pt_MO));
}

void FormatData_pt_MO::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_pt_MO::getContents() {
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

FormatData_pt_MO::FormatData_pt_MO() {
}

$Class* FormatData_pt_MO::load$($String* name, bool initialize) {
	$loadClass(FormatData_pt_MO, name, initialize, &_FormatData_pt_MO_ClassInfo_, allocate$FormatData_pt_MO);
	return class$;
}

$Class* FormatData_pt_MO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun