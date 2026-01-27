#include <sun/text/resources/ext/FormatData_hu_HU.h>

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

$MethodInfo _FormatData_hu_HU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_hu_HU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_hu_HU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_hu_HU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_hu_HU",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_hu_HU_MethodInfo_
};

$Object* allocate$FormatData_hu_HU($Class* clazz) {
	return $of($alloc(FormatData_hu_HU));
}

void FormatData_hu_HU::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_hu_HU::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"#,##0.## ¤;-#,##0.## ¤"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_hu_HU::FormatData_hu_HU() {
}

$Class* FormatData_hu_HU::load$($String* name, bool initialize) {
	$loadClass(FormatData_hu_HU, name, initialize, &_FormatData_hu_HU_ClassInfo_, allocate$FormatData_hu_HU);
	return class$;
}

$Class* FormatData_hu_HU::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun