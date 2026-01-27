#include <sun/util/resources/cldr/ext/TimeZoneNames_qu_BO.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_qu_BO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_qu_BO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_qu_BO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_qu_BO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_qu_BO",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_qu_BO_MethodInfo_
};

$Object* allocate$TimeZoneNames_qu_BO($Class* clazz) {
	return $of($alloc(TimeZoneNames_qu_BO));
}

void TimeZoneNames_qu_BO::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_qu_BO::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Peru, $new($StringArray, {
		u"Hora Estandar de Perú"_s,
		u"∅∅∅"_s,
		u"Hora de Verano de Perú"_s,
		u"∅∅∅"_s,
		u"Hora de Perú"_s,
		u"∅∅∅"_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		"Bolivia Time"_s,
		"BOT"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(EMPTY_ZONE)
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of(Peru)
		}),
		$$new($ObjectArray, {
			$of("America/La_Paz"_s),
			$of(Bolivia)
		})
	}));
	return data;
}

TimeZoneNames_qu_BO::TimeZoneNames_qu_BO() {
}

$Class* TimeZoneNames_qu_BO::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_qu_BO, name, initialize, &_TimeZoneNames_qu_BO_ClassInfo_, allocate$TimeZoneNames_qu_BO);
	return class$;
}

$Class* TimeZoneNames_qu_BO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun