#include <HijrahConfigCheck.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/time/Instant.h>
#include <java/time/LocalDate.h>
#include <java/time/LocalDateTime.h>
#include <java/time/LocalTime.h>
#include <java/time/ZoneOffset.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/ChronoLocalDateTime.h>
#include <java/time/chrono/Chronology.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CALTYPE
#undef MIN
#undef UTC

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Instant = ::java::time::Instant;
using $LocalDate = ::java::time::LocalDate;
using $LocalDateTime = ::java::time::LocalDateTime;
using $LocalTime = ::java::time::LocalTime;
using $ZoneOffset = ::java::time::ZoneOffset;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $ChronoLocalDateTime = ::java::time::chrono::ChronoLocalDateTime;
using $Chronology = ::java::time::chrono::Chronology;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

class HijrahConfigCheck$$Lambda$lambda$main$0 : public $Predicate {
	$class(HijrahConfigCheck$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* c) override {
		 return HijrahConfigCheck::lambda$main$0($cast($Chronology, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HijrahConfigCheck$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HijrahConfigCheck$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HijrahConfigCheck$$Lambda$lambda$main$0, init$, void)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(HijrahConfigCheck$$Lambda$lambda$main$0, test, bool, Object$*)},
	{}
};
$ClassInfo HijrahConfigCheck$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"HijrahConfigCheck$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* HijrahConfigCheck$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(HijrahConfigCheck$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HijrahConfigCheck$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _HijrahConfigCheck_FieldInfo_[] = {
	{"CALTYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HijrahConfigCheck, CALTYPE)},
	{}
};

$MethodInfo _HijrahConfigCheck_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HijrahConfigCheck, init$, void)},
	{"lambda$main$0", "(Ljava/time/chrono/Chronology;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HijrahConfigCheck, lambda$main$0, bool, $Chronology*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(HijrahConfigCheck, main, void, $StringArray*)},
	{}
};

$ClassInfo _HijrahConfigCheck_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HijrahConfigCheck",
	"java.lang.Object",
	nullptr,
	_HijrahConfigCheck_FieldInfo_,
	_HijrahConfigCheck_MethodInfo_
};

$Object* allocate$HijrahConfigCheck($Class* clazz) {
	return $of($alloc(HijrahConfigCheck));
}

$String* HijrahConfigCheck::CALTYPE = nullptr;

void HijrahConfigCheck::init$() {
}

void HijrahConfigCheck::main($StringArray* args) {
	$init(HijrahConfigCheck);
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc($($nc($($Chronology::getAvailableChronologies()))->stream()))->filter(static_cast<$Predicate*>($$new(HijrahConfigCheck$$Lambda$lambda$main$0)))))->count() != 1) {
		$throwNew($RuntimeException, $$str({HijrahConfigCheck::CALTYPE, " chronology was not found, or appeared more than once in Chronology.getAvailableChronologies()"_s}));
	}
	$var($Chronology, c1, $Chronology::of(HijrahConfigCheck::CALTYPE));
	$var($Chronology, c2, $Chronology::ofLocale($($Locale::forLanguageTag($$str({"und-u-ca-"_s, HijrahConfigCheck::CALTYPE})))));
	if (!$nc(c1)->equals(c2)) {
		$throwNew($RuntimeException, $$str({HijrahConfigCheck::CALTYPE, " chronologies differ. c1: "_s, c1, ", c2: "_s, c2}));
	}
	$init($LocalTime);
	$var($LocalDateTime, iso, $LocalDateTime::of($($LocalDate::of(2020, 1, 10)), $LocalTime::MIN));
	$var($ChronoLocalDateTime, hijrah, $nc($($nc(c1)->date(1000, 1, 10)))->atTime($LocalTime::MIN));
	$init($ZoneOffset);
	if (!$nc($($nc(iso)->toInstant($ZoneOffset::UTC)))->equals($($nc(hijrah)->toInstant($ZoneOffset::UTC)))) {
		$throwNew($RuntimeException, $$str({"test Hijrah date is incorrect. LocalDate: "_s, iso, ", test date: "_s, hijrah}));
	}
}

bool HijrahConfigCheck::lambda$main$0($Chronology* c) {
	$init(HijrahConfigCheck);
	return $nc($($nc(c)->getCalendarType()))->equals(HijrahConfigCheck::CALTYPE);
}

HijrahConfigCheck::HijrahConfigCheck() {
}

void clinit$HijrahConfigCheck($Class* class$) {
	$assignStatic(HijrahConfigCheck::CALTYPE, "islamic-test"_s);
}

$Class* HijrahConfigCheck::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(HijrahConfigCheck$$Lambda$lambda$main$0::classInfo$.name)) {
			return HijrahConfigCheck$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(HijrahConfigCheck, name, initialize, &_HijrahConfigCheck_ClassInfo_, clinit$HijrahConfigCheck, allocate$HijrahConfigCheck);
	return class$;
}

$Class* HijrahConfigCheck::class$ = nullptr;