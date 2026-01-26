#include <CurrencyFormat.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/CharSequence.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/text/NumberFormat.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Currency.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <java/util/Properties.h>
#include <java/util/StringTokenizer.h>
#include <java/util/TimeZone.h>
#include <jcpp.h>

#undef GERMANY
#undef ITALY
#undef JAPAN
#undef US

using $CurrencyArray = $Array<::java::util::Currency>;
using $LocaleArray = $Array<::java::util::Locale>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $NumberFormat = ::java::text::NumberFormat;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Currency = ::java::util::Currency;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $Properties = ::java::util::Properties;
using $StringTokenizer = ::java::util::StringTokenizer;
using $TimeZone = ::java::util::TimeZone;

$FieldInfo _CurrencyFormat_FieldInfo_[] = {
	{"isCompat", "Z", nullptr, $PRIVATE | $STATIC, $staticField(CurrencyFormat, isCompat)},
	{}
};

$MethodInfo _CurrencyFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyFormat, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CurrencyFormat, main, void, $StringArray*), "java.lang.Exception"},
	{"testFormatting", "()V", nullptr, $STATIC, $staticMethod(CurrencyFormat, testFormatting, void)},
	{"testSymbols", "()V", nullptr, $STATIC, $staticMethod(CurrencyFormat, testSymbols, void), "java.lang.Exception"},
	{}
};

$ClassInfo _CurrencyFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CurrencyFormat",
	"java.lang.Object",
	nullptr,
	_CurrencyFormat_FieldInfo_,
	_CurrencyFormat_MethodInfo_
};

$Object* allocate$CurrencyFormat($Class* clazz) {
	return $of($alloc(CurrencyFormat));
}

bool CurrencyFormat::isCompat = false;

void CurrencyFormat::init$() {
}

void CurrencyFormat::main($StringArray* args) {
	$init(CurrencyFormat);
	CurrencyFormat::isCompat = "COMPAT"_s->equals($nc(args)->get(0));
	testFormatting();
	testSymbols();
}

void CurrencyFormat::testFormatting() {
	$useLocalCurrentObjectStackCache();
	bool failed = false;
	$init($Locale);
	$var($LocaleArray, locales, $new($LocaleArray, {
		$Locale::US,
		$Locale::JAPAN,
		$Locale::GERMANY,
		$Locale::ITALY,
		$$new($Locale, "it"_s, "IT"_s, "EURO"_s),
		$($Locale::forLanguageTag("de-AT"_s)),
		$($Locale::forLanguageTag("fr-CH"_s))
	}));
	$var($CurrencyArray, currencies, $new($CurrencyArray, {
		($Currency*)nullptr,
		$($Currency::getInstance("USD"_s)),
		$($Currency::getInstance("JPY"_s)),
		$($Currency::getInstance("DEM"_s)),
		$($Currency::getInstance("EUR"_s))
	}));
	$var($StringArray2, expecteds, $new($StringArray2, {
		$$new($StringArray, {
			"$1,234.56"_s,
			"$1,234.56"_s,
			"JPY1,235"_s,
			"DEM1,234.56"_s,
			"EUR1,234.56"_s
		}),
		$$new($StringArray, {
			u"￥1,235"_s,
			"USD1,234.56"_s,
			u"￥1,235"_s,
			"DEM1,234.56"_s,
			"EUR1,234.56"_s
		}),
		$$new($StringArray, {
			u"1.234,56 €"_s,
			"1.234,56 USD"_s,
			"1.235 JPY"_s,
			"1.234,56 DM"_s,
			u"1.234,56 €"_s
		}),
		$$new($StringArray, {
			u"€ 1.234,56"_s,
			"USD 1.234,56"_s,
			"JPY 1.235"_s,
			"DEM 1.234,56"_s,
			u"€ 1.234,56"_s
		}),
		$$new($StringArray, {
			u"€ 1.234,56"_s,
			"USD 1.234,56"_s,
			"JPY 1.235"_s,
			"DEM 1.234,56"_s,
			u"€ 1.234,56"_s
		}),
		$$new($StringArray, {
			u"€ 1.234,56"_s,
			"USD 1.234,56"_s,
			"JPY 1.235"_s,
			"DEM 1.234,56"_s,
			u"€ 1.234,56"_s
		}),
		$$new($StringArray, {
			"SFr. 1\'234.56"_s,
			"USD 1\'234.56"_s,
			"JPY 1\'235"_s,
			"DEM 1\'234.56"_s,
			"EUR 1\'234.56"_s
		})
	}));
	$var($StringArray2, expecteds_cldr, $new($StringArray2, {
		$$new($StringArray, {
			"$1,234.56"_s,
			"$1,234.56"_s,
			u"¥1,235"_s,
			"DEM1,234.56"_s,
			u"€1,234.56"_s
		}),
		$$new($StringArray, {
			u"￥1,235"_s,
			"$1,234.56"_s,
			u"￥1,235"_s,
			"DEM1,234.56"_s,
			u"€1,234.56"_s
		}),
		$$new($StringArray, {
			u"1.234,56 €"_s,
			u"1.234,56 $"_s,
			u"1.235 ¥"_s,
			u"1.234,56 DM"_s,
			u"1.234,56 €"_s
		}),
		$$new($StringArray, {
			u"1.234,56 €"_s,
			u"1.234,56 USD"_s,
			u"1.235 JPY"_s,
			u"1.234,56 DEM"_s,
			u"1.234,56 €"_s
		}),
		$$new($StringArray, {
			u"1.234,56 €"_s,
			u"1.234,56 USD"_s,
			u"1.235 JPY"_s,
			u"1.234,56 DEM"_s,
			u"1.234,56 €"_s
		}),
		$$new($StringArray, {
			u"€ 1.234,56"_s,
			u"$ 1.234,56"_s,
			u"¥ 1.235"_s,
			u"DM 1.234,56"_s,
			u"€ 1.234,56"_s
		}),
		$$new($StringArray, {
			u"1 234.56 CHF"_s,
			u"1 234.56 $US"_s,
			u"1 235 JPY"_s,
			u"1 234.56 DEM"_s,
			u"1 234.56 €"_s
		})
	}));
	for (int32_t i = 0; i < locales->length; ++i) {
		$var($Locale, locale, locales->get(i));
		$var($NumberFormat, format, $NumberFormat::getCurrencyInstance(locale));
		for (int32_t j = 0; j < currencies->length; ++j) {
			$var($Currency, currency, currencies->get(j));
			$init(CurrencyFormat);
			$var($String, expected, CurrencyFormat::isCompat ? $nc(expecteds->get(i))->get(j) : $nc(expecteds_cldr->get(i))->get(j));
			if (currency != nullptr) {
				$nc(format)->setCurrency(currency);
				int32_t digits = currency->getDefaultFractionDigits();
				format->setMinimumFractionDigits(digits);
				format->setMaximumFractionDigits(digits);
			}
			$var($String, result, $nc(format)->format(1234.56));
			if (!$nc(result)->equals(expected)) {
				failed = true;
				$var($String, var$4, $$str({"FAIL: Locale "_s, locale}));
				$var($String, var$3, $$concat(var$4, (currency == nullptr ? ", default currency"_s : ($$str({", currency: "_s, currency})))));
				$var($String, var$2, $$concat(var$3, ", expected: "_s));
				$var($String, var$1, $$concat(var$2, expected));
				$var($String, var$0, $$concat(var$1, ", actual: "_s));
				$nc($System::out)->println($$concat(var$0, result));
			}
		}
	}
	if (failed) {
		$throwNew($RuntimeException);
	}
}

void CurrencyFormat::testSymbols() {
	$useLocalCurrentObjectStackCache();
	$init(CurrencyFormat);
	if (!CurrencyFormat::isCompat) {
		return;
	}
	$var($FileInputStream, stream, $new($FileInputStream, $$new($File, $($System::getProperty("test.src"_s, "."_s)), "CurrencySymbols.properties"_s)));
	$var($Properties, props, $new($Properties));
	props->load(static_cast<$InputStream*>(stream));
	$var($SimpleDateFormat, format, nullptr);
	$var($LocaleArray, locales, $NumberFormat::getAvailableLocales());
	for (int32_t i = 0; i < $nc(locales)->length; ++i) {
		$var($Locale, locale, locales->get(i));
		$var($DecimalFormatSymbols, symbols, $DecimalFormatSymbols::getInstance(locale));
		$var($String, result, $nc(symbols)->getCurrencySymbol());
		$var($String, expected, $cast($String, props->get($($nc(locale)->toString()))));
		if (expected == nullptr) {
			$nc($System::out)->println($$str({"Warning: No expected currency symbol defined for locale "_s, locale}));
		} else {
			if ($nc(expected)->contains(";"_s)) {
				$var($StringTokenizer, tokens, $new($StringTokenizer, expected, ";"_s));
				int32_t tokensCount = tokens->countTokens();
				if (tokensCount == 3) {
					$assign(expected, tokens->nextToken());
					if (format == nullptr) {
						$assign(format, $new($SimpleDateFormat, "yyyy-MM-dd-HH-mm-ss"_s, $Locale::US));
						format->setTimeZone($($TimeZone::getTimeZone("GMT"_s)));
						format->setLenient(false);
					}
					int64_t var$0 = $nc($($nc(format)->parse($(tokens->nextToken()))))->getTime();
					if (var$0 < $System::currentTimeMillis()) {
						$assign(expected, tokens->nextToken());
					}
				}
			}
			if (!$nc(expected)->equals(result)) {
				$throwNew($RuntimeException, $$str({"Wrong currency symbol for locale "_s, locale, ", expected: "_s, expected, ", got: "_s, result}));
			}
		}
	}
}

CurrencyFormat::CurrencyFormat() {
}

$Class* CurrencyFormat::load$($String* name, bool initialize) {
	$loadClass(CurrencyFormat, name, initialize, &_CurrencyFormat_ClassInfo_, allocate$CurrencyFormat);
	return class$;
}

$Class* CurrencyFormat::class$ = nullptr;