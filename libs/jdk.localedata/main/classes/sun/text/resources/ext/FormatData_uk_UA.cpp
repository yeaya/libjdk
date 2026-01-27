#include <sun/text/resources/ext/FormatData_uk_UA.h>

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

$MethodInfo _FormatData_uk_UA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_uk_UA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_uk_UA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_uk_UA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_uk_UA",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_uk_UA_MethodInfo_
};

$Object* allocate$FormatData_uk_UA($Class* clazz) {
	return $of($alloc(FormatData_uk_UA));
}

void FormatData_uk_UA::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_uk_UA::getContents() {
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

FormatData_uk_UA::FormatData_uk_UA() {
}

$Class* FormatData_uk_UA::load$($String* name, bool initialize) {
	$loadClass(FormatData_uk_UA, name, initialize, &_FormatData_uk_UA_ClassInfo_, allocate$FormatData_uk_UA);
	return class$;
}

$Class* FormatData_uk_UA::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun