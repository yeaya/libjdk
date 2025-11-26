#include <CharsetContainmentTest.h>

#include <java/nio/charset/Charset.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;

$FieldInfo _CharsetContainmentTest_FieldInfo_[] = {
	{"encodings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(CharsetContainmentTest, encodings)},
	{"contains", "[[Ljava/lang/String;", nullptr, $STATIC, $staticField(CharsetContainmentTest, contains)},
	{}
};

$MethodInfo _CharsetContainmentTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharsetContainmentTest::*)()>(&CharsetContainmentTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CharsetContainmentTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _CharsetContainmentTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CharsetContainmentTest",
	"java.lang.Object",
	nullptr,
	_CharsetContainmentTest_FieldInfo_,
	_CharsetContainmentTest_MethodInfo_
};

$Object* allocate$CharsetContainmentTest($Class* clazz) {
	return $of($alloc(CharsetContainmentTest));
}

$StringArray* CharsetContainmentTest::encodings = nullptr;
$StringArray2* CharsetContainmentTest::contains = nullptr;

void CharsetContainmentTest::init$() {
}

void CharsetContainmentTest::main($StringArray* args) {
	$init(CharsetContainmentTest);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(CharsetContainmentTest::encodings)->length; ++i) {
		$var($Charset, c, $Charset::forName($nc(CharsetContainmentTest::encodings)->get(i)));
		for (int32_t j = 0; j < $nc($nc(CharsetContainmentTest::contains)->get(i))->length; ++j) {
			if ($nc(c)->contains($($Charset::forName($nc($nc(CharsetContainmentTest::contains)->get(i))->get(j))))) {
				continue;
			} else {
				$throwNew($Exception, $$str({"Error: charset "_s, $nc(CharsetContainmentTest::encodings)->get(i), "doesn\'t contain "_s, $nc($nc(CharsetContainmentTest::contains)->get(i))->get(j)}));
			}
		}
	}
}

void clinit$CharsetContainmentTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(CharsetContainmentTest::encodings, $new($StringArray, {
		"US-ASCII"_s,
		"UTF-16"_s,
		"UTF-16BE"_s,
		"UTF-16LE"_s,
		"UTF-8"_s,
		"windows-1252"_s,
		"ISO-8859-1"_s,
		"ISO-8859-2"_s,
		"ISO-8859-3"_s,
		"ISO-8859-4"_s,
		"ISO-8859-5"_s,
		"ISO-8859-6"_s,
		"ISO-8859-7"_s,
		"ISO-8859-8"_s,
		"ISO-8859-9"_s,
		"ISO-8859-13"_s,
		"ISO-8859-15"_s,
		"ISO-8859-16"_s,
		"ISO-2022-JP"_s,
		"ISO-2022-KR"_s,
		"x-ISCII91"_s,
		"GBK"_s,
		"GB18030"_s,
		"Big5"_s,
		"x-EUC-TW"_s,
		"GB2312"_s,
		"EUC-KR"_s,
		"x-Johab"_s,
		"Big5-HKSCS"_s,
		"x-MS950-HKSCS"_s,
		"windows-1251"_s,
		"windows-1253"_s,
		"windows-1254"_s,
		"windows-1255"_s,
		"windows-1256"_s,
		"windows-1257"_s,
		"windows-1258"_s,
		"x-mswin-936"_s,
		"x-windows-949"_s,
		"x-windows-950"_s,
		"windows-31j"_s,
		"Shift_JIS"_s,
		"EUC-JP"_s,
		"KOI8-R"_s,
		"TIS-620"_s
	}));
	$assignStatic(CharsetContainmentTest::contains, $new($StringArray2, {
		$$new($StringArray, {"US-ASCII"_s}),
		CharsetContainmentTest::encodings,
		CharsetContainmentTest::encodings,
		CharsetContainmentTest::encodings,
		CharsetContainmentTest::encodings,
		$$new($StringArray, {
			"US-ASCII"_s,
			"windows-1252"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"ISO-8859-1"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"ISO-8859-2"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"ISO-8859-3"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"ISO-8859-4"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"ISO-8859-5"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"ISO-8859-6"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"ISO-8859-7"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"ISO-8859-8"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"ISO-8859-9"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"ISO-8859-13"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"ISO-8859-15"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"ISO-8859-16"_s
		}),
		$$new($StringArray, {"ISO-2022-JP"_s}),
		$$new($StringArray, {"ISO-2022-KR"_s}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"x-ISCII91"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"GBK"_s
		}),
		CharsetContainmentTest::encodings,
		$$new($StringArray, {
			"US-ASCII"_s,
			"Big5"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"x-EUC-TW"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"GB2312"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"EUC-KR"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"x-Johab"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"Big5-HKSCS"_s,
			"Big5"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"x-MS950-HKSCS"_s,
			"x-windows-950"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"windows-1251"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"windows-1253"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"windows-1254"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"windows-1255"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"windows-1256"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"windows-1257"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"windows-1258"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"x-mswin-936"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"x-windows-949"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"x-windows-950"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"windows-31j"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"Shift_JIS"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"EUC-JP"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"KOI8-R"_s
		}),
		$$new($StringArray, {
			"US-ASCII"_s,
			"TIS-620"_s
		})
	}));
}

CharsetContainmentTest::CharsetContainmentTest() {
}

$Class* CharsetContainmentTest::load$($String* name, bool initialize) {
	$loadClass(CharsetContainmentTest, name, initialize, &_CharsetContainmentTest_ClassInfo_, clinit$CharsetContainmentTest, allocate$CharsetContainmentTest);
	return class$;
}

$Class* CharsetContainmentTest::class$ = nullptr;