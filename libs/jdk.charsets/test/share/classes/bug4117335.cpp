#include <bug4117335.h>
#include <java/text/DateFormatSymbols.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef JAPAN

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $Locale = ::java::util::Locale;

$String* bug4117335::bc = nullptr;
$String* bug4117335::ad = nullptr;
$String* bug4117335::jstLong = nullptr;
$String* bug4117335::jstShort = nullptr;
$String* bug4117335::jdtLong = nullptr;
$String* bug4117335::jdtShort = nullptr;

void bug4117335::init$() {
}

void bug4117335::main($StringArray* args) {
	$init(bug4117335);
	$useLocalObjectStack();
	$init($Locale);
	$var($DateFormatSymbols, symbols, $new($DateFormatSymbols, $Locale::JAPAN));
	$var($StringArray, eras, symbols->getEras());
	$nc($System::out)->println($$str({"BC = "_s, $nc(eras)->get(0)}));
	if (!$nc(eras->get(0))->equals(bug4117335::bc)) {
		$System::out->println($$str({"*** Should have been "_s, bug4117335::bc}));
		$throwNew($Exception, "Error in BC"_s);
	}
	$System::out->println($$str({"AD = "_s, eras->get(1)}));
	if (!$nc(eras->get(1))->equals(bug4117335::ad)) {
		$System::out->println($$str({"*** Should have been "_s, bug4117335::ad}));
		$throwNew($Exception, "Error in AD"_s);
	}
	$var($StringArray2, zones, symbols->getZoneStrings());
	for (int32_t i = 0; i < $nc(zones)->length; ++i) {
		if (!"Asia/Tokyo"_s->equals($nc(zones->get(i))->get(0))) {
			continue;
		}
		$System::out->println($$str({"Long zone name = "_s, $nc(zones->get(i))->get(1)}));
		if (!$nc($nc(zones->get(i))->get(1))->equals(bug4117335::jstLong)) {
			$System::out->println($$str({"*** Should have been "_s, bug4117335::jstLong}));
			$throwNew($Exception, "Error in long TZ name"_s);
		}
		$System::out->println($$str({"Short zone name = "_s, $nc(zones->get(i))->get(2)}));
		if (!$nc($nc(zones->get(i))->get(2))->equals(bug4117335::jstShort)) {
			$System::out->println($$str({"*** Should have been "_s, bug4117335::jstShort}));
			$throwNew($Exception, "Error in short TZ name"_s);
		}
		$System::out->println($$str({"Long zone name = "_s, $nc(zones->get(i))->get(3)}));
		if (!$nc($nc(zones->get(i))->get(3))->equals(bug4117335::jdtLong)) {
			$System::out->println($$str({"*** Should have been "_s, bug4117335::jdtLong}));
			$throwNew($Exception, "Error in long TZ name"_s);
		}
		$System::out->println($$str({"SHORT zone name = "_s, $nc(zones->get(i))->get(4)}));
		if (!$nc($nc(zones->get(i))->get(4))->equals(bug4117335::jdtShort)) {
			$System::out->println($$str({"*** Should have been "_s, bug4117335::jdtShort}));
			$throwNew($Exception, "Error in short TZ name"_s);
		}
	}
}

bug4117335::bug4117335() {
}

void bug4117335::clinit$($Class* clazz) {
	$assignStatic(bug4117335::bc, u"紀元前"_s);
	$assignStatic(bug4117335::ad, u"西暦"_s);
	$assignStatic(bug4117335::jstLong, u"日本標準時"_s);
	$assignStatic(bug4117335::jstShort, "JST"_s);
	$assignStatic(bug4117335::jdtLong, u"日本夏時間"_s);
	$assignStatic(bug4117335::jdtShort, "JDT"_s);
}

$Class* bug4117335::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bc", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug4117335, bc)},
		{"ad", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug4117335, ad)},
		{"jstLong", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug4117335, jstLong)},
		{"jstShort", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug4117335, jstShort)},
		{"jdtLong", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug4117335, jdtLong)},
		{"jdtShort", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug4117335, jdtShort)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4117335, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4117335, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4117335",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4117335, name, initialize, &classInfo$$, bug4117335::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug4117335);
	});
	return class$;
}

$Class* bug4117335::class$ = nullptr;