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
			u"や"_s,
			u"ユ"_s,
			"Hiragana \"YA\"(0x3084) <---> Katakana \"YU\"(0x30E6)"_s
		}),
		$$new($StringArray, {
			u"ユ"_s,
			u"よ"_s,
			"Katakana \"YU\"(0x30E6) <---> Hiragana \"YO\"(0x3088)"_s
		}),
		$$new($StringArray, {
			u"±"_s,
			u"≠"_s,
			"Plus-Minus Sign(0x00B1) <---> Not Equal To(0x2260)"_s
		}),
		$$new($StringArray, {
			u"】"_s,
			u"≠"_s,
			"Right Black Lenticular Bracket(0x3011) <---> Not Equal To(0x2260)"_s
		}),
		$$new($StringArray, {
			u"≠"_s,
			u"℃"_s,
			"Not Equal To(0x2260) <---> Degree Celsius(0x2103)"_s
		}),
		$$new($StringArray, {
			u"≠"_s,
			u"☆"_s,
			"Not Equal To(0x2260) <---> White Star(0x2606)"_s
		}),
		$$new($StringArray, {
			u"ヽ"_s,
			u"ゞ"_s,
			"Katakana Iteration Mark(0x30FD) <---> Hiragana Voiced Iteration Mark(0x309E)"_s
		}),
		$$new($StringArray, {
			u"すゝ"_s,
			u"すゞ"_s,
			"Hiragana \"SU\"(0x3059)Hiragana Iteration Mark(0x309D) <---> Hiragana \"SU\"(0x3059)Hiragana Voiced Iteration Mark(0x309E)"_s
		}),
		$$new($StringArray, {
			u"舞"_s,
			u"福"_s,
			"CJK Unified Ideograph(0x821E) <---> CJK Unified Ideograph(0x798F)"_s
		}),
		$$new($StringArray, {
			u"≠"_s,
			u"≟"_s,
			"Not Equal To(0x2260) <---> Questioned Equal To(0x225F)"_s
		}),
		$$new($StringArray, {
			u"≮"_s,
			u"≠"_s,
			"Not Less-than(0x226E) <---> Not Equal To(0x2260)"_s
		}),
		$$new($StringArray, {
			u"≮"_s,
			u"≭"_s,
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
			u"゙"_s,
			u"゚"_s,
			"Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Combining Katakana-Hiragana Semi-voiced Sound Mark(0x309A)"_s
		}),
		$$new($StringArray, {
			u"こうとう"_s,
			u"こうどう"_s,
			"Hiragana \"KOUTOU\"(0x3053 0x3046 0x3068 0x3046) <---> Hiragana \"KOUTO\"(0x3053 0x3046 0x3068)Combining Katakana-Hiragana Voiced Sound Mark(0X3099)\"U\"(0x3046)"_s
		}),
		$$new($StringArray, {
			u"こうとう"_s,
			u"こうどう"_s,
			"Hiragana \"KOUTOU\"(0x3053 0x3046 0x3068 0x3046) <---> Hiragana \"KOUDOU\"(0x3053 0x3046 0x3069 0x3046)"_s
		}),
		$$new($StringArray, {
			u"こうどう"_s,
			u"ごうとう"_s,
			"Hiragana \"KOUTOU\"(0x3053 0x3046 0x3069 0x3046) <---> Hiragana \"GOUTOU\"(0x3054 0x3046 0x3068 0x3046)"_s
		}),
		$$new($StringArray, {
			u"ごうとう"_s,
			u"ごうどう"_s,
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
			u"あ"_s,
			u"ぁ"_s,
			"Hiragana \"A\"(0x3042) <---> Hiragana \"a\"(0x3041)"_s
		}),
		$$new($StringArray, {
			u"ぁ"_s,
			u"ア"_s,
			"Hiragana \"a\"(0x3041) <---> Katakana \"A\"(0x30A2)"_s
		}),
		$$new($StringArray, {
			u"ア"_s,
			u"ァ"_s,
			"Katakana \"A\"(0x30A2) <---> Katakana \"a\"(0x30A1)"_s
		}),
		$$new($StringArray, {
			u"ゔ"_s,
			u"ヴ"_s,
			"Hiragana \"VU\"(0x3094) <---> Katakana \"VU\"(0x30F4)"_s
		}),
		$$new($StringArray, {
			u"ゔ"_s,
			u"ヴ"_s,
			"Hiragana \"VU\"(0x3094) <---> Katakana \"U\"(0x30A6)Combining Katakana-Hiragana Voiced Sound Mark(0x3099)"_s
		}),
		$$new($StringArray, {
			u"ゔ"_s,
			u"ヴ"_s,
			"Hiragana \"U\"(0x3046)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"VU\"(0x30F4)"_s
		}),
		$$new($StringArray, {
			u"ゔ"_s,
			u"ヴ"_s,
			"Hiragana \"U\"(0x3046)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"U\"(0x30A6)Combining Katakana-Hiragana Voiced Sound Mark(0x3099)"_s
		}),
		$$new($StringArray, {
			u"カア"_s,
			u"カー"_s,
			"Katakana \"KAA\"(0x30AB 0x30A2) <---> Katakana \"KA-\"(0x30AB 0x30FC)"_s
		}),
		$$new($StringArray, {
			u"ニァア"_s,
			u"ニァー"_s,
			"Katakana \"NyaA\"(0x30CB 0x30A1 0x30A2) <---> Katakana \"Nya-\"(0x30CB 0x30A1 0x30FC)"_s
		}),
		$$new($StringArray, {
			u"コオヒイ"_s,
			u"コーヒー"_s,
			"Katakana \"KOOHII\"(0x30B3 0x30AA 0x30D2 0x30A4) <---> Katakana \"KO-HI-\"(0x30B3 0x30FC 0x30D2 0x30FC)"_s
		}),
		$$new($StringArray, {
			u"りよう"_s,
			u"りょう"_s,
			"Hiragana \"RIYOU\"(0x308A 0x3088 0x3046) <---> Hiragana \"Ryou\"(0x308A 0x3087 0x3046)"_s
		}),
		$$new($StringArray, {
			u"めつき"_s,
			u"めっき"_s,
			"Hiragana \"METSUKI\"(0x3081 0x3064 0x304D) <---> Hiragana \"MEKKI\"(0x3081 0x3063 0x304D)"_s
		}),
		$$new($StringArray, {
			u"ふあん"_s,
			u"ファン"_s,
			"Hiragana \"FUAN\"(0x3075 0x3042 0x3093) <---> Katakana \"FUaN\"(0x30D5 0x30A1 0x30F3)"_s
		}),
		$$new($StringArray, {
			u"ふぁん"_s,
			u"フアン"_s,
			"Hiragana \"FUaN\"(0x3075 0x3041 0x3093) <---> Katakana \"FUAN\"(0x30D5 0x30A2 0x30F3)"_s
		}),
		$$new($StringArray, {
			u"フアン"_s,
			u"ファン"_s,
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
			u"ゞ"_s,
			u"ゞ"_s,
			"Hiragana Voiced Iteration Mark(0x309E) <---> Hiragana Iteration Mark(0x309D)Combining Katakana-Hiragana Voiced Sound Mark(0x3099)"_s
		}),
		$$new($StringArray, {
			u"ヾ"_s,
			u"ヾ"_s,
			"Katakana Voiced Iteration Mark(0x30FE) <---> Katakana iteration mark(0x30FD)Combining Katakana-Hiragana Voiced Sound Mark(0x3099)"_s
		}),
		$$new($StringArray, {
			u"ば"_s,
			u"ば"_s,
			"Hiragana \"HA\"(0x306F)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Hiragana \"BA\"(0x3070)"_s
		}),
		$$new($StringArray, {
			u"ぱ"_s,
			u"ぱ"_s,
			"Hiragana \"HA\"(0x306F)Combining Katakana-Hiragana Semi-voiced Sound Mark(0x309A) <---> Hiragana \"PA\"(0x3071)"_s
		}),
		$$new($StringArray, {
			u"ヷ"_s,
			u"ヷ"_s,
			"Katakana \"WA\"(0x306F)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"VA\"(0x30F7)"_s
		}),
		$$new($StringArray, {
			u"ヸ"_s,
			u"ヸ"_s,
			"Katakana \"WI\"(0x30F0)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"VI\"(0x30F8)"_s
		}),
		$$new($StringArray, {
			u"ヹ"_s,
			u"ヹ"_s,
			"Katakana \"WE\"(0x30F1)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"VE\"(0x30F9)"_s
		}),
		$$new($StringArray, {
			u"ヺ"_s,
			u"ヺ"_s,
			"Katakana \"WO\"(0x30F2)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"VO\"(0x30FA)"_s
		}),
		$$new($StringArray, {
			u"ゔ"_s,
			u"ゔ"_s,
			"Hiragana \"U\"(0x3046)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Hiragana \"VU\"(0x3094)"_s
		}),
		$$new($StringArray, {
			u"ヴ"_s,
			u"ヴ"_s,
			"Katakana \"U\"(0x30A6)Combining Katakana-Hiragana Voiced Sound Mark(0x3099) <---> Katakana \"VU\"(0x30F4)"_s
		}),
		$$new($StringArray, {
			u"≠"_s,
			u"≠"_s,
			"Not Equal To(0x2260) <---> Equal(0x003D)Combining Long Solidus Overlay(0x0338)"_s
		}),
		$$new($StringArray, {
			u"≢"_s,
			u"≢"_s,
			"Not Identical To(0x2262) <---> Identical To(0x2261)Combining Long Solidus Overlay(0x0338)"_s
		}),
		$$new($StringArray, {
			u"≮"_s,
			u"≮"_s,
			"Not Less-than(0x226E) <---> Less-than Sign(0x003C)Combining Long Solidus Overlay(0x0338)"_s
		}),
		$$new($StringArray, {
			u"福"_s,
			u"福"_s,
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
		u"≭"_s,
		u"≭"_s,
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
			u"≭"_s,
			u"≬"_s,
			"Not Equivalent To(0x226D) <---> Between(0x226C)"_s
		}),
		$$new($StringArray, {
			u"≭"_s,
			u"≟"_s,
			"Not Equivalent To(0x226D) <---> Questioned Equal To(0x225F)"_s
		})
	}));
	$assignStatic(JapaneseTest::compData0, $new($StringArray2, {
		$$new($StringArray, {
			u"みみ"_s,
			u"みゝ"_s,
			"Hiragana \"MIMI\"(0x307F 0x307F) <---> Hiragana \"MI\"(0x307F)Hiragana Iteration Mark(0x309D)"_s
		}),
		$$new($StringArray, {
			u"いすず"_s,
			u"いすゞ"_s,
			"Hiragana \"ISUZU\"(0x3044 0x3059 0x305A) <---> Hiragana \"ISU\"(0x3044 0x3059)Hiragana Voiced Iteration Mark(0x309E)"_s
		}),
		$$new($StringArray, {
			u"ミミ"_s,
			u"ミヽ"_s,
			"Katakana \"MIMI\"(0x30DF 0x30DF) <---> Katakana \"MI\"(0x30DF)Katakana Iteration Mark(0x30FD)"_s
		}),
		$$new($StringArray, {
			u"イスズ"_s,
			u"イスヾ"_s,
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