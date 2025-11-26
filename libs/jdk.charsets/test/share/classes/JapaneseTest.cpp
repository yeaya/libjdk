#include <JapaneseTest.h>

#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef JAPAN

using $LocaleArray = $Array<::java::util::Locale>;
using $intArray2 = $Array<int32_t, 2>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;

$FieldInfo _JapaneseTest_FieldInfo_[] = {
	{"results1", "[[I", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, results1)},
	{"compData1", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, compData1)},
	{"results2", "[[I", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, results2)},
	{"compData2", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, compData2)},
	{"results3", "[[I", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, results3)},
	{"compData3", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, compData3)},
	{"results4", "[[I", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, results4)},
	{"compData4", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, compData4)},
	{"results5", "[[I", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, results5)},
	{"compData5", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, compData5)},
	{"results6", "[[I", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, results6)},
	{"compData6", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, compData6)},
	{"compData0", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, compData0)},
	{"decomp_name", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, decomp_name)},
	{"strength_name", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JapaneseTest, strength_name)},
	{"col", "Ljava/text/Collator;", nullptr, 0, $field(JapaneseTest, col)},
	{"result", "I", nullptr, 0, $field(JapaneseTest, result)},
	{}
};

$MethodInfo _JapaneseTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JapaneseTest::*)()>(&JapaneseTest::init$))},
	{"doCompare", "([[Ljava/lang/String;III)V", nullptr, 0},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JapaneseTest::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JapaneseTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JapaneseTest",
	"java.lang.Object",
	nullptr,
	_JapaneseTest_FieldInfo_,
	_JapaneseTest_MethodInfo_
};

$Object* allocate$JapaneseTest($Class* clazz) {
	return $of($alloc(JapaneseTest));
}

$intArray2* JapaneseTest::results1 = nullptr;
$StringArray2* JapaneseTest::compData1 = nullptr;
$intArray2* JapaneseTest::results2 = nullptr;
$StringArray2* JapaneseTest::compData2 = nullptr;
$intArray2* JapaneseTest::results3 = nullptr;
$StringArray2* JapaneseTest::compData3 = nullptr;
$intArray2* JapaneseTest::results4 = nullptr;
$StringArray2* JapaneseTest::compData4 = nullptr;
$intArray2* JapaneseTest::results5 = nullptr;
$StringArray2* JapaneseTest::compData5 = nullptr;
$intArray2* JapaneseTest::results6 = nullptr;
$StringArray2* JapaneseTest::compData6 = nullptr;
$StringArray2* JapaneseTest::compData0 = nullptr;
$StringArray* JapaneseTest::decomp_name = nullptr;
$StringArray* JapaneseTest::strength_name = nullptr;

void JapaneseTest::init$() {
	$init($Locale);
	$set(this, col, $Collator::getInstance($Locale::JAPAN));
	this->result = 0;
}

void JapaneseTest::main($StringArray* args) {
	$init(JapaneseTest);
	$$new(JapaneseTest)->run();
}

void JapaneseTest::run() {
	$useLocalCurrentObjectStackCache();
	$var($LocaleArray, locales, $new($LocaleArray, {$($Locale::getDefault())}));
	for (int32_t l = 0; l < locales->length; ++l) {
		$Locale::setDefault(locales->get(l));
		for (int32_t decomp = 0; decomp < 3; ++decomp) {
			$nc(this->col)->setDecomposition(decomp);
			for (int32_t strength = 0; strength < 3; ++strength) {
				$nc(this->col)->setStrength(strength);
				doCompare(JapaneseTest::compData1, $nc($nc(JapaneseTest::results1)->get(strength))->get(decomp), strength, decomp);
				doCompare(JapaneseTest::compData2, $nc($nc(JapaneseTest::results2)->get(strength))->get(decomp), strength, decomp);
				doCompare(JapaneseTest::compData3, $nc($nc(JapaneseTest::results3)->get(strength))->get(decomp), strength, decomp);
				doCompare(JapaneseTest::compData4, $nc($nc(JapaneseTest::results4)->get(strength))->get(decomp), strength, decomp);
				doCompare(JapaneseTest::compData5, $nc($nc(JapaneseTest::results5)->get(strength))->get(decomp), strength, decomp);
				doCompare(JapaneseTest::compData6, $nc($nc(JapaneseTest::results6)->get(strength))->get(decomp), strength, decomp);
			}
		}
	}
	if (this->result != 0) {
		$throwNew($RuntimeException, "Unexpected results on Japanese collation."_s);
	}
}

void JapaneseTest::doCompare($StringArray2* s, int32_t expectedValue, int32_t strength, int32_t decomp) {
	$useLocalCurrentObjectStackCache();
	int32_t value = 0;
	for (int32_t i = 0; i < $nc(s)->length; ++i) {
		if ((value = $nc(this->col)->compare($nc(s->get(i))->get(0), $nc(s->get(i))->get(1))) != expectedValue) {
			++this->result;
			$nc($System::err)->println($$str({$nc(JapaneseTest::strength_name)->get(strength), ": compare() returned unexpected value.("_s, $$str(value), ") on "_s, $nc(JapaneseTest::decomp_name)->get(decomp), "     Expected("_s, $$str(expectedValue), ") for "_s, $nc(s->get(i))->get(2)}));
		}
	}
}

void clinit$JapaneseTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JapaneseTest::results1, $new($intArray2, {
		$$new($ints, {
			-1,
			-1,
			-1
		}),
		$$new($ints, {
			-1,
			-1,
			-1
		}),
		$$new($ints, {
			-1,
			-1,
			-1
		})
	}));
	$assignStatic(JapaneseTest::compData1, $new($StringArray2, {
		$$new($StringArray, {
			u"\u3084"_s,
			u"\u30e6"_s,
			"Hiragana \"YA\"(0x3084) <---> Katakana \"YU\"(0x30E6)"_s
		}),
		$$new($StringArray, {
			u"\u30e6"_s,
			u"\u3088"_s,
			"Katakana \"YU\"(0x30E6) <---> Hiragana \"YO\"(0x3088)"_s
		}),
		$$new($StringArray, {
			u"\u00b1"_s,
			u"\u2260"_s,
			"Plus-Minus Sign(0x00B1) <---> Not Equal To(0x2260)"_s
		}),
		$$new($StringArray, {
			u"\u3011"_s,
			u"\u2260"_s,
			"Right Black Lenticular Bracket(0x3011) <---> Not Equal To(0x2260)"_s
		}),
		$$new($StringArray, {
			u"\u2260"_s,
			u"\u2103"_s,
			"Not Equal To(0x2260) <---> Degree Celsius(0x2103)"_s
		}),
		$$new($StringArray, {
			u"\u2260"_s,
			u"\u2606"_s,
			"Not Equal To(0x2260) <---> White Star(0x2606)"_s
		}),
		$$new($StringArray, {
			u"\u30fd"_s,
			u"\u309e"_s,
			"Katakana Iteration Mark(0x30FD) <---> Hiragana Voiced Iteration Mark(0x309E)"_s
		}),
		$$new($StringArray, {
			u"\u3059\u309d"_s,
			u"\u3059\u309e"_s,
			"Hiragana \"SU\"(0x3059)Hiragana Iteration Mark(0x309D) <---> Hiragana \"SU\"(0x3059)Hiragana Voiced Iteration Mark(0x309E)"_s
		}),
		$$new($StringArray, {
			u"\u821e"_s,
			u"\u798f"_s,
			"CJK Unified Ideograph(0x821E) <---> CJK Unified Ideograph(0x798F)"_s
		}),
		$$new($StringArray, {
			u"\u2260"_s,
			u"\u225f"_s,
			"Not Equal To(0x2260) <---> Questioned Equal To(0x225F)"_s
		}),
		$$new($StringArray, {
			u"\u226e"_s,
			u"\u2260"_s,
			"Not Less-than(0x226E) <---> Not Equal To(0x2260)"_s
		}),
		$$new($StringArray, {
			u"\u226e"_s,
			u"\u226d"_s,
			"Not Less-than(0x226E) <---> Not Equivalent To(0x226D)"_s
		})
	}));
	$assignStatic(JapaneseTest::results2, $new($intArray2, {
		$$new($ints, {
			0,
			0,
			0
		}),
		$$new($ints, {
			-1,
			-1,
			-1
		}),
		$$new($ints, {
			-1,
			-1,
			-1
		})
	}));
	$assignStatic(JapaneseTest::compData2, $new($StringArray2, {
		$$new($StringArray, {
			u"\u3099"_s,
			u"\u309a"_s,
			"Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Combining Katakana-Hiragana Semi-voiced Sound Mark(0x309A)"_s
		}),
		$$new($StringArray, {
			u"\u3053\u3046\u3068\u3046"_s,
			u"\u3053\u3046\u3068\u3099\u3046"_s,
			"Hiragana \"KOUTOU\"(0x3053 0x3046 0x3068 0x3046) <---> Hiragana \"KOUTO\"(0x3053 0x3046 0x3068)Combining Katakana-Hiragana Voiced Sound Mark(0X3099)\"U\"(0x3046)"_s
		}),
		$$new($StringArray, {
			u"\u3053\u3046\u3068\u3046"_s,
			u"\u3053\u3046\u3069\u3046"_s,
			"Hiragana \"KOUTOU\"(0x3053 0x3046 0x3068 0x3046) <---> Hiragana \"KOUDOU\"(0x3053 0x3046 0x3069 0x3046)"_s
		}),
		$$new($StringArray, {
			u"\u3053\u3046\u3069\u3046"_s,
			u"\u3054\u3046\u3068\u3046"_s,
			"Hiragana \"KOUTOU\"(0x3053 0x3046 0x3069 0x3046) <---> Hiragana \"GOUTOU\"(0x3054 0x3046 0x3068 0x3046)"_s
		}),
		$$new($StringArray, {
			u"\u3054\u3046\u3068\u3046"_s,
			u"\u3054\u3046\u3069\u3046"_s,
			"Hiragana \"GOUTOU\"(0x3054 0x3046 0x3068 0x3046) <---> Hiragana \"GOUDOU\"(0x3054 0x3046 0x3069 0x3046)"_s
		})
	}));
	$assignStatic(JapaneseTest::results3, $new($intArray2, {
		$$new($ints, {
			0,
			0,
			0
		}),
		$$new($ints, {
			0,
			0,
			0
		}),
		$$new($ints, {
			-1,
			-1,
			-1
		})
	}));
	$assignStatic(JapaneseTest::compData3, $new($StringArray2, {
		$$new($StringArray, {
			u"\u3042"_s,
			u"\u3041"_s,
			"Hiragana \"A\"(0x3042) <---> Hiragana \"a\"(0x3041)"_s
		}),
		$$new($StringArray, {
			u"\u3041"_s,
			u"\u30a2"_s,
			"Hiragana \"a\"(0x3041) <---> Katakana \"A\"(0x30A2)"_s
		}),
		$$new($StringArray, {
			u"\u30a2"_s,
			u"\u30a1"_s,
			"Katakana \"A\"(0x30A2) <---> Katakana \"a\"(0x30A1)"_s
		}),
		$$new($StringArray, {
			u"\u3094"_s,
			u"\u30f4"_s,
			"Hiragana \"VU\"(0x3094) <---> Katakana \"VU\"(0x30F4)"_s
		}),
		$$new($StringArray, {
			u"\u3094"_s,
			u"\u30a6\u3099"_s,
			"Hiragana \"VU\"(0x3094) <---> Katakana \"U\"(0x30A6)Combining Katakana-Hiragana Voiced Sound Mark(0x3099)"_s
		}),
		$$new($StringArray, {
			u"\u3046\u3099"_s,
			u"\u30f4"_s,
			"Hiragana \"U\"(0x3046)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"VU\"(0x30F4)"_s
		}),
		$$new($StringArray, {
			u"\u3046\u3099"_s,
			u"\u30a6\u3099"_s,
			"Hiragana \"U\"(0x3046)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"U\"(0x30A6)Combining Katakana-Hiragana Voiced Sound Mark(0x3099)"_s
		}),
		$$new($StringArray, {
			u"\u30ab\u30a2"_s,
			u"\u30ab\u30fc"_s,
			"Katakana \"KAA\"(0x30AB 0x30A2) <---> Katakana \"KA-\"(0x30AB 0x30FC)"_s
		}),
		$$new($StringArray, {
			u"\u30cb\u30a1\u30a2"_s,
			u"\u30cb\u30a1\u30fc"_s,
			"Katakana \"NyaA\"(0x30CB 0x30A1 0x30A2) <---> Katakana \"Nya-\"(0x30CB 0x30A1 0x30FC)"_s
		}),
		$$new($StringArray, {
			u"\u30b3\u30aa\u30d2\u30a4"_s,
			u"\u30b3\u30fc\u30d2\u30fc"_s,
			"Katakana \"KOOHII\"(0x30B3 0x30AA 0x30D2 0x30A4) <---> Katakana \"KO-HI-\"(0x30B3 0x30FC 0x30D2 0x30FC)"_s
		}),
		$$new($StringArray, {
			u"\u308a\u3088\u3046"_s,
			u"\u308a\u3087\u3046"_s,
			"Hiragana \"RIYOU\"(0x308A 0x3088 0x3046) <---> Hiragana \"Ryou\"(0x308A 0x3087 0x3046)"_s
		}),
		$$new($StringArray, {
			u"\u3081\u3064\u304d"_s,
			u"\u3081\u3063\u304d"_s,
			"Hiragana \"METSUKI\"(0x3081 0x3064 0x304D) <---> Hiragana \"MEKKI\"(0x3081 0x3063 0x304D)"_s
		}),
		$$new($StringArray, {
			u"\u3075\u3042\u3093"_s,
			u"\u30d5\u30a1\u30f3"_s,
			"Hiragana \"FUAN\"(0x3075 0x3042 0x3093) <---> Katakana \"FUaN\"(0x30D5 0x30A1 0x30F3)"_s
		}),
		$$new($StringArray, {
			u"\u3075\u3041\u3093"_s,
			u"\u30d5\u30a2\u30f3"_s,
			"Hiragana \"FUaN\"(0x3075 0x3041 0x3093) <---> Katakana \"FUAN\"(0x30D5 0x30A2 0x30F3)"_s
		}),
		$$new($StringArray, {
			u"\u30d5\u30a2\u30f3"_s,
			u"\u30d5\u30a1\u30f3"_s,
			"Katakana \"FUAN\"(0x30D5 0x30A2 0x30F3) <---> Katakana \"FUaN\"(0x30D5 0x30A1 0x30F3)"_s
		})
	}));
	$assignStatic(JapaneseTest::results4, $new($intArray2, {
		$$new($ints, {
			0,
			0,
			0
		}),
		$$new($ints, {
			0,
			0,
			0
		}),
		$$new($ints, {
			0,
			0,
			0
		})
	}));
	$assignStatic(JapaneseTest::compData4, $new($StringArray2, {
		$$new($StringArray, {
			u"\u309e"_s,
			u"\u309d\u3099"_s,
			"Hiragana Voiced Iteration Mark(0x309E) <---> Hiragana Iteration Mark(0x309D)Combining Katakana-Hiragana Voiced Sound Mark(0x3099)"_s
		}),
		$$new($StringArray, {
			u"\u30fe"_s,
			u"\u30fd\u3099"_s,
			"Katakana Voiced Iteration Mark(0x30FE) <---> Katakana iteration mark(0x30FD)Combining Katakana-Hiragana Voiced Sound Mark(0x3099)"_s
		}),
		$$new($StringArray, {
			u"\u306f\u3099"_s,
			u"\u3070"_s,
			"Hiragana \"HA\"(0x306F)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Hiragana \"BA\"(0x3070)"_s
		}),
		$$new($StringArray, {
			u"\u306f\u309a"_s,
			u"\u3071"_s,
			"Hiragana \"HA\"(0x306F)Combining Katakana-Hiragana Semi-voiced Sound Mark(0x309A) <---> Hiragana \"PA\"(0x3071)"_s
		}),
		$$new($StringArray, {
			u"\u30ef\u3099"_s,
			u"\u30f7"_s,
			"Katakana \"WA\"(0x306F)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"VA\"(0x30F7)"_s
		}),
		$$new($StringArray, {
			u"\u30f0\u3099"_s,
			u"\u30f8"_s,
			"Katakana \"WI\"(0x30F0)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"VI\"(0x30F8)"_s
		}),
		$$new($StringArray, {
			u"\u30f1\u3099"_s,
			u"\u30f9"_s,
			"Katakana \"WE\"(0x30F1)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"VE\"(0x30F9)"_s
		}),
		$$new($StringArray, {
			u"\u30f2\u3099"_s,
			u"\u30fa"_s,
			"Katakana \"WO\"(0x30F2)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"VO\"(0x30FA)"_s
		}),
		$$new($StringArray, {
			u"\u3046\u3099"_s,
			u"\u3094"_s,
			"Hiragana \"U\"(0x3046)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Hiragana \"VU\"(0x3094)"_s
		}),
		$$new($StringArray, {
			u"\u30a6\u3099"_s,
			u"\u30f4"_s,
			"Katakana \"U\"(0x30A6)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"VU\"(0x30F4)"_s
		}),
		$$new($StringArray, {
			u"\u2260"_s,
			u"=\u0338"_s,
			"Not Equal To(0x2260) <---> Equal(0x003D)Combining Long Solidus Overlay(0x0338)"_s
		}),
		$$new($StringArray, {
			u"\u2262"_s,
			u"\u2261\u0338"_s,
			"Not Identical To(0x2262) <---> Identical To(0x2261)Combining Long Solidus Overlay(0x0338)"_s
		}),
		$$new($StringArray, {
			u"\u226e"_s,
			u"<\u0338"_s,
			"Not Less-than(0x226E) <---> Less-than Sign(0x003C)Combining Long Solidus Overlay(0x0338)"_s
		}),
		$$new($StringArray, {
			u"\u798f"_s,
			u"\ufa1b"_s,
			"CJK Unified Ideograph \"FUKU\"(0x798F) <---> CJK Compatibility Ideograph \"FUKU\"(0xFA1B)"_s
		})
	}));
	$assignStatic(JapaneseTest::results5, $new($intArray2, {
		$$new($ints, {
			1,
			0,
			0
		}),
		$$new($ints, {
			1,
			0,
			0
		}),
		$$new($ints, {
			1,
			0,
			0
		})
	}));
	$assignStatic(JapaneseTest::compData5, $new($StringArray2, {$$new($StringArray, {
		u"\u226d"_s,
		u"\u224d\u0338"_s,
		"Not Equivalent To(0x226D) <---> Equivalent To(0x224D)Combining Long Solidus Overlay(0x0338)"_s
	})}));
	$assignStatic(JapaneseTest::results6, $new($intArray2, {
		$$new($ints, {
			1,
			-1,
			-1
		}),
		$$new($ints, {
			1,
			-1,
			-1
		}),
		$$new($ints, {
			1,
			-1,
			-1
		})
	}));
	$assignStatic(JapaneseTest::compData6, $new($StringArray2, {
		$$new($StringArray, {
			u"\u226d"_s,
			u"\u226c"_s,
			"Not Equivalent To(0x226D) <---> Between(0x226C)"_s
		}),
		$$new($StringArray, {
			u"\u226d"_s,
			u"\u225f"_s,
			"Not Equivalent To(0x226D) <---> Questioned Equal To(0x225F)"_s
		})
	}));
	$assignStatic(JapaneseTest::compData0, $new($StringArray2, {
		$$new($StringArray, {
			u"\u307f\u307f"_s,
			u"\u307f\u309d"_s,
			"Hiragana \"MIMI\"(0x307F 0x307F) <---> Hiragana \"MI\"(0x307F)Hiragana Iteration Mark(0x309D)"_s
		}),
		$$new($StringArray, {
			u"\u3044\u3059\u305a"_s,
			u"\u3044\u3059\u309e"_s,
			"Hiragana \"ISUZU\"(0x3044 0x3059 0x305A) <---> Hiragana \"ISU\"(0x3044 0x3059)Hiragana Voiced Iteration Mark(0x309E)"_s
		}),
		$$new($StringArray, {
			u"\u30df\u30df"_s,
			u"\u30df\u30fd"_s,
			"Katakana \"MIMI\"(0x30DF 0x30DF) <---> Katakana \"MI\"(0x30DF)Katakana Iteration Mark(0x30FD)"_s
		}),
		$$new($StringArray, {
			u"\u30a4\u30b9\u30ba"_s,
			u"\u30a4\u30b9\u30fe"_s,
			"Katakana \"ISUZU\"(0x30A4 0x30B9 0x30BA) <---> Katakana \"ISU\"(0x30A4 0x30B9)Katakana Voiced Iteration Mark(0x30FE)"_s
		})
	}));
	$assignStatic(JapaneseTest::decomp_name, $new($StringArray, {
		"NO_DECOMP"_s,
		"CANONICAL_DECOMP"_s,
		"FULL_DECOMP"_s
	}));
	$assignStatic(JapaneseTest::strength_name, $new($StringArray, {
		"PRIMARY"_s,
		"SECONDARY"_s,
		"TERTIARY"_s
	}));
}

JapaneseTest::JapaneseTest() {
}

$Class* JapaneseTest::load$($String* name, bool initialize) {
	$loadClass(JapaneseTest, name, initialize, &_JapaneseTest_ClassInfo_, clinit$JapaneseTest, allocate$JapaneseTest);
	return class$;
}

$Class* JapaneseTest::class$ = nullptr;