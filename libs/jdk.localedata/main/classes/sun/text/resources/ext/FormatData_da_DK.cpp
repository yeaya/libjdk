#include <sun/text/resources/ext/FormatData_da_DK.h>

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

$MethodInfo _FormatData_da_DK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_da_DK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_da_DK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_da_DK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_da_DK",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_da_DK_MethodInfo_
};

$Object* allocate$FormatData_da_DK($Class* clazz) {
	return $of($alloc(FormatData_da_DK));
}

void FormatData_da_DK::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_da_DK::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"¤ #,##0.00;¤ -#,##0.00"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_da_DK::FormatData_da_DK() {
}

$Class* FormatData_da_DK::load$($String* name, bool initialize) {
	$loadClass(FormatData_da_DK, name, initialize, &_FormatData_da_DK_ClassInfo_, allocate$FormatData_da_DK);
	return class$;
}

$Class* FormatData_da_DK::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun