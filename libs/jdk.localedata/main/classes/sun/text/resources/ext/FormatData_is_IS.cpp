#include <sun/text/resources/ext/FormatData_is_IS.h>

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

$MethodInfo _FormatData_is_IS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_is_IS, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_is_IS, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_is_IS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_is_IS",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_is_IS_MethodInfo_
};

$Object* allocate$FormatData_is_IS($Class* clazz) {
	return $of($alloc(FormatData_is_IS));
}

void FormatData_is_IS::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_is_IS::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"#,##0. ¤;-#,##0. ¤"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_is_IS::FormatData_is_IS() {
}

$Class* FormatData_is_IS::load$($String* name, bool initialize) {
	$loadClass(FormatData_is_IS, name, initialize, &_FormatData_is_IS_ClassInfo_, allocate$FormatData_is_IS);
	return class$;
}

$Class* FormatData_is_IS::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun