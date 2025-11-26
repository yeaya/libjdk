#include <LargeMessageFormat.h>

#include <java/lang/Number.h>
#include <java/lang/StringBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef GERMANY
#undef REPEATS

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;

$FieldInfo _LargeMessageFormat_FieldInfo_[] = {
	{"REPEATS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LargeMessageFormat, REPEATS)},
	{}
};

$MethodInfo _LargeMessageFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LargeMessageFormat::*)()>(&LargeMessageFormat::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LargeMessageFormat::main)), "java.text.ParseException"},
	{"testFormat", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&LargeMessageFormat::testFormat))},
	{"testParse", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&LargeMessageFormat::testParse)), "java.text.ParseException"},
	{}
};

$ClassInfo _LargeMessageFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LargeMessageFormat",
	"java.lang.Object",
	nullptr,
	_LargeMessageFormat_FieldInfo_,
	_LargeMessageFormat_MethodInfo_
};

$Object* allocate$LargeMessageFormat($Class* clazz) {
	return $of($alloc(LargeMessageFormat));
}

void LargeMessageFormat::init$() {
}

void LargeMessageFormat::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, reservedLocale, $Locale::getDefault());
	$var($TimeZone, reservedTimeZone, $TimeZone::getDefault());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$Locale::setDefault($Locale::GERMANY);
			$TimeZone::setDefault($($TimeZone::getTimeZone("Europe/Berlin"_s)));
			testFormat();
			testParse();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Locale::setDefault(reservedLocale);
			$TimeZone::setDefault(reservedTimeZone);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LargeMessageFormat::testFormat() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, sample, $new($ObjectArray, {
		$($of($Integer::valueOf(0))),
		$of("hello"_s),
		$of($$new($Date, 89, 10, 9)),
		$($of($Integer::valueOf(0x0008AA52))),
		$($of($Double::valueOf(1234.5)))
	}));
	int32_t samples = sample->length;
	$var($ObjectArray, arguments, $new($ObjectArray, LargeMessageFormat::REPEATS * (samples + 1)));
	for (int32_t i = 0; i < LargeMessageFormat::REPEATS; ++i) {
		$System::arraycopy(sample, 0, arguments, i * samples, samples);
		arguments->set(i * samples, $($Integer::valueOf(i)));
	}
	$var($StringBuffer, template$, $new($StringBuffer));
	for (int32_t i = 0; i < LargeMessageFormat::REPEATS; ++i) {
		template$->append($$str({"section {"_s, $$str((i * samples)), ", number} - "_s}));
		template$->append($$str({"string: {"_s, $$str((i * samples + 1)), "}; "_s}));
		template$->append($$str({"date: {"_s, $$str((i * samples + 2)), ", date}; "_s}));
		template$->append($$str({"integer: {"_s, $$str((i * samples + 3)), ", number}; "_s}));
		template$->append($$str({"currency: {"_s, $$str((i * samples + 4)), ", number, currency};\n"_s}));
	}
	$var($StringBuffer, expected, $new($StringBuffer));
	for (int32_t i = 0; i < LargeMessageFormat::REPEATS; ++i) {
		expected->append($$str({"section "_s, $$str(i), " - "_s}));
		expected->append("string: hello; "_s);
		expected->append("date: 09.11.1989; "_s);
		expected->append("integer: 567.890; "_s);
		expected->append(u"currency: 1.234,50 \u20ac;\n"_s);
	}
	$var($MessageFormat, format, $new($MessageFormat, $(template$->toString())));
	$var($String, result, format->format(arguments));
	if (!$nc(result)->equals($(expected->toString()))) {
		$nc($System::out)->println("Template:"_s);
		$nc($System::out)->println($of(template$));
		$nc($System::out)->println("Expected result: "_s);
		$nc($System::out)->println($of(expected));
		$nc($System::out)->println("Actual result: "_s);
		$nc($System::out)->println(result);
		$throwNew($RuntimeException);
	}
}

void LargeMessageFormat::testParse() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, parseTemplate, $new($StringBuffer));
	$var($StringBuffer, parseInput, $new($StringBuffer));
	for (int32_t i = 0; i < LargeMessageFormat::REPEATS; ++i) {
		parseTemplate->append($$str({"{"_s, $$str(i), ", number} "_s}));
		parseInput->append($$str({$$str(i), " "_s}));
	}
	$var($MessageFormat, parseFormat, $new($MessageFormat, $(parseTemplate->toString())));
	$var($ObjectArray, parseResult, parseFormat->parse($(parseInput->toString())));
	for (int32_t i = 0; i < LargeMessageFormat::REPEATS; ++i) {
		if ($nc(($cast($Number, $nc(parseResult)->get(i))))->intValue() != i) {
			$throwNew($RuntimeException, "got wrong parse result"_s);
		}
	}
}

LargeMessageFormat::LargeMessageFormat() {
}

$Class* LargeMessageFormat::load$($String* name, bool initialize) {
	$loadClass(LargeMessageFormat, name, initialize, &_LargeMessageFormat_ClassInfo_, allocate$LargeMessageFormat);
	return class$;
}

$Class* LargeMessageFormat::class$ = nullptr;