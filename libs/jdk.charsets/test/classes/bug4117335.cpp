#include <bug4117335.h>

#include <java/text/DateFormatSymbols.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef JAPAN

using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;
using $Locale = ::java::util::Locale;

$FieldInfo _bug4117335_FieldInfo_[] = {
	{"bc", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug4117335, bc)},
	{"ad", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug4117335, ad)},
	{"jstLong", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug4117335, jstLong)},
	{"jstShort", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug4117335, jstShort)},
	{"jdtLong", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug4117335, jdtLong)},
	{"jdtShort", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug4117335, jdtShort)},
	{}
};

$MethodInfo _bug4117335_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4117335::*)()>(&bug4117335::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4117335::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug4117335_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4117335",
	"java.lang.Object",
	nullptr,
	_bug4117335_FieldInfo_,
	_bug4117335_MethodInfo_
};

$Object* allocate$bug4117335($Class* clazz) {
	return $of($alloc(bug4117335));
}

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
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($DateFormatSymbols, symbols, $new($DateFormatSymbols, $Locale::JAPAN));
	$var($StringArray, eras, symbols->getEras());
	$nc($System::out)->println($$str({"BC = "_s, $nc(eras)->get(0)}));
	if (!$nc($nc(eras)->get(0))->equals(bug4117335::bc)) {
		$nc($System::out)->println($$str({"*** Should have been "_s, bug4117335::bc}));
		$throwNew($Exception, "Error in BC"_s);
	}
	$nc($System::out)->println($$str({"AD = "_s, $nc(eras)->get(1)}));
	if (!$nc($nc(eras)->get(1))->equals(bug4117335::ad)) {
		$nc($System::out)->println($$str({"*** Should have been "_s, bug4117335::ad}));
		$throwNew($Exception, "Error in AD"_s);
	}
	$var($StringArray2, zones, symbols->getZoneStrings());
	for (int32_t i = 0; i < $nc(zones)->length; ++i) {
		if (!"Asia/Tokyo"_s->equals($nc(zones->get(i))->get(0))) {
			continue;
		}
		$nc($System::out)->println($$str({"Long zone name = "_s, $nc(zones->get(i))->get(1)}));
		if (!$nc($nc(zones->get(i))->get(1))->equals(bug4117335::jstLong)) {
			$nc($System::out)->println($$str({"*** Should have been "_s, bug4117335::jstLong}));
			$throwNew($Exception, "Error in long TZ name"_s);
		}
		$nc($System::out)->println($$str({"Short zone name = "_s, $nc(zones->get(i))->get(2)}));
		if (!$nc($nc(zones->get(i))->get(2))->equals(bug4117335::jstShort)) {
			$nc($System::out)->println($$str({"*** Should have been "_s, bug4117335::jstShort}));
			$throwNew($Exception, "Error in short TZ name"_s);
		}
		$nc($System::out)->println($$str({"Long zone name = "_s, $nc(zones->get(i))->get(3)}));
		if (!$nc($nc(zones->get(i))->get(3))->equals(bug4117335::jdtLong)) {
			$nc($System::out)->println($$str({"*** Should have been "_s, bug4117335::jdtLong}));
			$throwNew($Exception, "Error in long TZ name"_s);
		}
		$nc($System::out)->println($$str({"SHORT zone name = "_s, $nc(zones->get(i))->get(4)}));
		if (!$nc($nc(zones->get(i))->get(4))->equals(bug4117335::jdtShort)) {
			$nc($System::out)->println($$str({"*** Should have been "_s, bug4117335::jdtShort}));
			$throwNew($Exception, "Error in short TZ name"_s);
		}
	}
}

bug4117335::bug4117335() {
}

void clinit$bug4117335($Class* class$) {
	$assignStatic(bug4117335::bc, u"\u7d00\u5143\u524d"_s);
	$assignStatic(bug4117335::ad, u"\u897f\u66a6"_s);
	$assignStatic(bug4117335::jstLong, u"\u65e5\u672c\u6a19\u6e96\u6642"_s);
	$assignStatic(bug4117335::jstShort, "JST"_s);
	$assignStatic(bug4117335::jdtLong, u"\u65e5\u672c\u590f\u6642\u9593"_s);
	$assignStatic(bug4117335::jdtShort, "JDT"_s);
}

$Class* bug4117335::load$($String* name, bool initialize) {
	$loadClass(bug4117335, name, initialize, &_bug4117335_ClassInfo_, clinit$bug4117335, allocate$bug4117335);
	return class$;
}

$Class* bug4117335::class$ = nullptr;