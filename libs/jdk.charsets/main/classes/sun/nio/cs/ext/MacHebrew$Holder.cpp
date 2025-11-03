#include <sun/nio/cs/ext/MacHebrew$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacHebrew.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $MacHebrew = ::sun::nio::cs::ext::MacHebrew;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _MacHebrew$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacHebrew$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacHebrew$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacHebrew$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacHebrew$Holder, c2bIndex)},
	{}
};

$MethodInfo _MacHebrew$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MacHebrew$Holder::*)()>(&MacHebrew$Holder::init$))},
	{}
};

$InnerClassInfo _MacHebrew$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacHebrew$Holder", "sun.nio.cs.ext.MacHebrew", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacHebrew$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.MacHebrew$Holder",
	"java.lang.Object",
	nullptr,
	_MacHebrew$Holder_FieldInfo_,
	_MacHebrew$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MacHebrew$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacHebrew"
};

$Object* allocate$MacHebrew$Holder($Class* clazz) {
	return $of($alloc(MacHebrew$Holder));
}

$String* MacHebrew$Holder::b2cTable = nullptr;
$chars* MacHebrew$Holder::b2c = nullptr;
$chars* MacHebrew$Holder::c2b = nullptr;
$chars* MacHebrew$Holder::c2bIndex = nullptr;

void MacHebrew$Holder::init$() {
}

void clinit$MacHebrew$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MacHebrew$Holder::b2cTable, $cstr({0xC4, 0xFB1F, 0xC7, 0xC9, 0xD1, 0xD6, 0xDC, 0xE1, 0xE0, 0xE2, 0xE4, 0xE3, 0xE5, 0xE7, 0xE9, 0xE8, 0xEA, 0xEB, 0xED, 0xEC, 0xEE, 0xEF, 0xF1, 0xF3, 0xF2, 0xF4, 0xF6, 0xF5, 0xFA, 0xF9, 0xFB, 0xFC, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x20AA, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x201E, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x5BC, 0xFB4B, 0xFB35, 0x2026, 0xA0, 0x5B8, 0x5B7, 0x5B5, 0x5B6, 0x5B4, 0x2013, 0x2014, 0x201C, 0x201D, 0x2018, 0x2019, 0xFB2A, 0xFB2B, 0x5BF, 0x5B0, 0x5B2, 0x5B1, 0x5BB, 0x5B9, 0xFFFD, 0x5B3, 0x5D0, 0x5D1, 0x5D2, 0x5D3, 0x5D4, 0x5D5, 0x5D6, 0x5D7, 0x5D8, 0x5D9, 0x5DA, 0x5DB, 0x5DC, 0x5DD, 0x5DE, 0x5DF, 0x5E0, 0x5E1, 0x5E2, 0x5E3, 0x5E4, 0x5E5, 0x5E6, 0x5E7, 0x5E8, 0x5E9, 0x5EA, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MacHebrew$Holder::b2c, $nc(MacHebrew$Holder::b2cTable)->toCharArray());
	$assignStatic(MacHebrew$Holder::c2b, $new($chars, 1280));
	$assignStatic(MacHebrew$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MacHebrew$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MacHebrew$Holder::c2b, MacHebrew$Holder::c2bIndex);
	}
}

MacHebrew$Holder::MacHebrew$Holder() {
}

$Class* MacHebrew$Holder::load$($String* name, bool initialize) {
	$loadClass(MacHebrew$Holder, name, initialize, &_MacHebrew$Holder_ClassInfo_, clinit$MacHebrew$Holder, allocate$MacHebrew$Holder);
	return class$;
}

$Class* MacHebrew$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun