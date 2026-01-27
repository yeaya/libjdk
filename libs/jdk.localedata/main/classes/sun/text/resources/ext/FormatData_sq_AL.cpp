#include <sun/text/resources/ext/FormatData_sq_AL.h>

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

$MethodInfo _FormatData_sq_AL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sq_AL, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sq_AL, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sq_AL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sq_AL",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sq_AL_MethodInfo_
};

$Object* allocate$FormatData_sq_AL($Class* clazz) {
	return $of($alloc(FormatData_sq_AL));
}

void FormatData_sq_AL::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sq_AL::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"¤#,##0.###;-¤#,##0.###"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_sq_AL::FormatData_sq_AL() {
}

$Class* FormatData_sq_AL::load$($String* name, bool initialize) {
	$loadClass(FormatData_sq_AL, name, initialize, &_FormatData_sq_AL_ClassInfo_, allocate$FormatData_sq_AL);
	return class$;
}

$Class* FormatData_sq_AL::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun