#include <sun/text/resources/ext/FormatData_ca_ES.h>

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

$MethodInfo _FormatData_ca_ES_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ca_ES, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ca_ES, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ca_ES_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ca_ES",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ca_ES_MethodInfo_
};

$Object* allocate$FormatData_ca_ES($Class* clazz) {
	return $of($alloc(FormatData_ca_ES));
}

void FormatData_ca_ES::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ca_ES::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"¤ #,##0;-¤ #,##0"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_ca_ES::FormatData_ca_ES() {
}

$Class* FormatData_ca_ES::load$($String* name, bool initialize) {
	$loadClass(FormatData_ca_ES, name, initialize, &_FormatData_ca_ES_ClassInfo_, allocate$FormatData_ca_ES);
	return class$;
}

$Class* FormatData_ca_ES::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun