#include <KoreanTest.h>

#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef KOREA
#undef PRIMARY
#undef SECONDARY

using $StringArray2 = $Array<::java::lang::String, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;

$FieldInfo _KoreanTest_FieldInfo_[] = {
	{"compData1", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(KoreanTest, compData1)},
	{"compData2", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(KoreanTest, compData2)},
	{"col", "Ljava/text/Collator;", nullptr, 0, $field(KoreanTest, col)},
	{"result", "I", nullptr, 0, $field(KoreanTest, result)},
	{}
};

$MethodInfo _KoreanTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KoreanTest::*)()>(&KoreanTest::init$))},
	{"doCompare", "([[Ljava/lang/String;)V", nullptr, 0},
	{"doEquals", "([[Ljava/lang/String;)V", nullptr, 0},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&KoreanTest::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _KoreanTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"KoreanTest",
	"java.lang.Object",
	nullptr,
	_KoreanTest_FieldInfo_,
	_KoreanTest_MethodInfo_
};

$Object* allocate$KoreanTest($Class* clazz) {
	return $of($alloc(KoreanTest));
}

$StringArray2* KoreanTest::compData1 = nullptr;
$StringArray2* KoreanTest::compData2 = nullptr;

void KoreanTest::init$() {
	$init($Locale);
	$set(this, col, $Collator::getInstance($Locale::KOREA));
	this->result = 0;
}

void KoreanTest::main($StringArray* args) {
	$init(KoreanTest);
	$$new(KoreanTest)->run();
}

void KoreanTest::run() {
	doCompare(KoreanTest::compData1);
	doEquals(KoreanTest::compData2);
	$nc(this->col)->setStrength($Collator::SECONDARY);
	doCompare(KoreanTest::compData1);
	doEquals(KoreanTest::compData2);
	$nc(this->col)->setStrength($Collator::PRIMARY);
	doCompare(KoreanTest::compData1);
	doEquals(KoreanTest::compData2);
	if (this->result != 0) {
		$throwNew($RuntimeException, "Unexpected results on Korean collation."_s);
	}
}

void KoreanTest::doCompare($StringArray2* s) {
	$useLocalCurrentObjectStackCache();
	int32_t value = 0;
	for (int32_t i = 0; i < $nc(s)->length; ++i) {
		if ((value = $nc(this->col)->compare($nc(s->get(i))->get(0), $nc(s->get(i))->get(1))) > -1) {
			++this->result;
			$nc($System::err)->println($$str({"TERTIARY: The first string should be less than the second string:  "_s, $nc(s->get(i))->get(2), "  compare() returned "_s, $$str(value), "."_s}));
		}
	}
}

void KoreanTest::doEquals($StringArray2* s) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(s)->length; ++i) {
		if (!$nc(this->col)->equals($nc(s->get(i))->get(0), $nc(s->get(i))->get(1))) {
			++this->result;
			$nc($System::err)->println($$str({"TERTIARY: The first string should be equals to the second string:  "_s, $nc(s->get(i))->get(2), "  compare() returned "_s, $$str($nc(this->col)->compare($nc(s->get(i))->get(0), $$str({$nc(s->get(i))->get(1), "."_s})))}));
		}
	}
}

void clinit$KoreanTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(KoreanTest::compData1, $new($StringArray2, {
		$$new($StringArray, {
			u"\uace0\uc591\uc774"_s,
			u"\u732b"_s,
			"Hangul \"Cat\"(0xACE0 0xC591 0xC774) <---> Chinese Kanji \"Cat\"(0x732B)"_s
		}),
		$$new($StringArray, {
			u"\u30fb"_s,
			u"\u2025"_s,
			"Katakana middle dot(0x30FB) <---> Two dot leader(0x2025)"_s
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
		})
	}));
	$assignStatic(KoreanTest::compData2, $new($StringArray2, {$$new($StringArray, {
		u"\u798f"_s,
		u"\ufa1b"_s,
		"CJK Unified Ideograph \"FUKU\"(0x798F) <---> CJK Compatibility Ideograph \"FUKU\"(0xFA1B)"_s
	})}));
}

KoreanTest::KoreanTest() {
}

$Class* KoreanTest::load$($String* name, bool initialize) {
	$loadClass(KoreanTest, name, initialize, &_KoreanTest_ClassInfo_, clinit$KoreanTest, allocate$KoreanTest);
	return class$;
}

$Class* KoreanTest::class$ = nullptr;