#include <sun/nio/cs/ext/MacGreek$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacGreek.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $MacGreek = ::sun::nio::cs::ext::MacGreek;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _MacGreek$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacGreek$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacGreek$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacGreek$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacGreek$Holder, c2bIndex)},
	{}
};

$MethodInfo _MacGreek$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MacGreek$Holder::*)()>(&MacGreek$Holder::init$))},
	{}
};

$InnerClassInfo _MacGreek$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacGreek$Holder", "sun.nio.cs.ext.MacGreek", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacGreek$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.MacGreek$Holder",
	"java.lang.Object",
	nullptr,
	_MacGreek$Holder_FieldInfo_,
	_MacGreek$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MacGreek$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacGreek"
};

$Object* allocate$MacGreek$Holder($Class* clazz) {
	return $of($alloc(MacGreek$Holder));
}

$String* MacGreek$Holder::b2cTable = nullptr;
$chars* MacGreek$Holder::b2c = nullptr;
$chars* MacGreek$Holder::c2b = nullptr;
$chars* MacGreek$Holder::c2bIndex = nullptr;

void MacGreek$Holder::init$() {
}

void clinit$MacGreek$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MacGreek$Holder::b2cTable, $cstr({0xC4, 0xB9, 0xB2, 0xC9, 0xB3, 0xD6, 0xDC, 0x385, 0xE0, 0xE2, 0xE4, 0x384, 0xA8, 0xE7, 0xE9, 0xE8, 0xEA, 0xEB, 0xA3, 0x2122, 0xEE, 0xEF, 0x2022, 0xBD, 0x2030, 0xF4, 0xF6, 0xA6, 0xAD, 0xF9, 0xFB, 0xFC, 0x2020, 0x393, 0x394, 0x398, 0x39B, 0x39E, 0x3A0, 0xDF, 0xAE, 0xA9, 0x3A3, 0x3AA, 0xA7, 0x2260, 0xB0, 0x387, 0x391, 0xB1, 0x2264, 0x2265, 0xA5, 0x392, 0x395, 0x396, 0x397, 0x399, 0x39A, 0x39C, 0x3A6, 0x3AB, 0x3A8, 0x3A9, 0x3AC, 0x39D, 0xAC, 0x39F, 0x3A1, 0x2248, 0x3A4, 0xAB, 0xBB, 0x2026, 0xA0, 0x3A5, 0x3A7, 0x386, 0x388, 0x153, 0x2013, 0x2015, 0x201C, 0x201D, 0x2018, 0x2019, 0xF7, 0x389, 0x38A, 0x38C, 0x38E, 0x3AD, 0x3AE, 0x3AF, 0x3CC, 0x38F, 0x3CD, 0x3B1, 0x3B2, 0x3C8, 0x3B4, 0x3B5, 0x3C6, 0x3B3, 0x3B7, 0x3B9, 0x3BE, 0x3BA, 0x3BB, 0x3BC, 0x3BD, 0x3BF, 0x3C0, 0x3CE, 0x3C1, 0x3C3, 0x3C4, 0x3B8, 0x3C9, 0x3C2, 0x3C7, 0x3C5, 0x3B6, 0x3CA, 0x3CB, 0x390, 0x3B0, 0xFFFD, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MacGreek$Holder::b2c, $nc(MacGreek$Holder::b2cTable)->toCharArray());
	$assignStatic(MacGreek$Holder::c2b, $new($chars, 1792));
	$assignStatic(MacGreek$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MacGreek$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MacGreek$Holder::c2b, MacGreek$Holder::c2bIndex);
	}
}

MacGreek$Holder::MacGreek$Holder() {
}

$Class* MacGreek$Holder::load$($String* name, bool initialize) {
	$loadClass(MacGreek$Holder, name, initialize, &_MacGreek$Holder_ClassInfo_, clinit$MacGreek$Holder, allocate$MacGreek$Holder);
	return class$;
}

$Class* MacGreek$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun