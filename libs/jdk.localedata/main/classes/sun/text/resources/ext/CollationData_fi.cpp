#include <sun/text/resources/ext/CollationData_fi.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _CollationData_fi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_fi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_fi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_fi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_fi",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_fi_MethodInfo_
};

$Object* allocate$CollationData_fi($Class* clazz) {
	return $of($alloc(CollationData_fi));
}

void CollationData_fi::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_fi::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& V ; w , W & Z < å , Å< ä , Ä < ö , Ö< ő , Ő ; ø , Ø&  Y ; ű, Ű ; ü , Ü"_s)
	})});
}

CollationData_fi::CollationData_fi() {
}

$Class* CollationData_fi::load$($String* name, bool initialize) {
	$loadClass(CollationData_fi, name, initialize, &_CollationData_fi_ClassInfo_, allocate$CollationData_fi);
	return class$;
}

$Class* CollationData_fi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun