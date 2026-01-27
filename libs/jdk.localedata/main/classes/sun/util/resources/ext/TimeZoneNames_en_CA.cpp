#include <sun/util/resources/ext/TimeZoneNames_en_CA.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _TimeZoneNames_en_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_en_CA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_en_CA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_en_CA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_en_CA",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_en_CA_MethodInfo_
};

$Object* allocate$TimeZoneNames_en_CA($Class* clazz) {
	return $of($alloc(TimeZoneNames_en_CA));
}

void TimeZoneNames_en_CA::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_en_CA::getContents() {
	return $new($ObjectArray2, 0);
}

TimeZoneNames_en_CA::TimeZoneNames_en_CA() {
}

$Class* TimeZoneNames_en_CA::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_en_CA, name, initialize, &_TimeZoneNames_en_CA_ClassInfo_, allocate$TimeZoneNames_en_CA);
	return class$;
}

$Class* TimeZoneNames_en_CA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun