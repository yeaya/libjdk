#include <sun/text/resources/cldr/ext/FormatData_en_IM.h>

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

$MethodInfo _FormatData_en_IM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_IM, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_IM, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_IM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_en_IM",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_IM_MethodInfo_
};

$Object* allocate$FormatData_en_IM($Class* clazz) {
	return $of($alloc(FormatData_en_IM));
}

void FormatData_en_IM::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_IM::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
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

FormatData_en_IM::FormatData_en_IM() {
}

$Class* FormatData_en_IM::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_IM, name, initialize, &_FormatData_en_IM_ClassInfo_, allocate$FormatData_en_IM);
	return class$;
}

$Class* FormatData_en_IM::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun