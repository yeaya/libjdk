#include <sun/text/resources/cldr/ext/FormatData_ar_EH.h>

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

$MethodInfo _FormatData_ar_EH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ar_EH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ar_EH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ar_EH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ar_EH",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ar_EH_MethodInfo_
};

$Object* allocate$FormatData_ar_EH($Class* clazz) {
	return $of($alloc(FormatData_ar_EH));
}

void FormatData_ar_EH::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar_EH::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("DefaultNumberingSystem"_s),
		$of("latn"_s)
	})}));
	return data;
}

FormatData_ar_EH::FormatData_ar_EH() {
}

$Class* FormatData_ar_EH::load$($String* name, bool initialize) {
	$loadClass(FormatData_ar_EH, name, initialize, &_FormatData_ar_EH_ClassInfo_, allocate$FormatData_ar_EH);
	return class$;
}

$Class* FormatData_ar_EH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun