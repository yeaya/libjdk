#include <sun/nio/cs/ext/MacCroatian$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacCroatian.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $MacCroatian = ::sun::nio::cs::ext::MacCroatian;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _MacCroatian$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCroatian$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCroatian$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCroatian$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCroatian$Holder, c2bIndex)},
	{}
};

$MethodInfo _MacCroatian$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MacCroatian$Holder::*)()>(&MacCroatian$Holder::init$))},
	{}
};

$InnerClassInfo _MacCroatian$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacCroatian$Holder", "sun.nio.cs.ext.MacCroatian", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacCroatian$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.MacCroatian$Holder",
	"java.lang.Object",
	nullptr,
	_MacCroatian$Holder_FieldInfo_,
	_MacCroatian$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MacCroatian$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacCroatian"
};

$Object* allocate$MacCroatian$Holder($Class* clazz) {
	return $of($alloc(MacCroatian$Holder));
}

$String* MacCroatian$Holder::b2cTable = nullptr;
$chars* MacCroatian$Holder::b2c = nullptr;
$chars* MacCroatian$Holder::c2b = nullptr;
$chars* MacCroatian$Holder::c2bIndex = nullptr;

void MacCroatian$Holder::init$() {
}

void clinit$MacCroatian$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MacCroatian$Holder::b2cTable, $cstr({0xC4, 0xC5, 0xC7, 0xC9, 0xD1, 0xD6, 0xDC, 0xE1, 0xE0, 0xE2, 0xE4, 0xE3, 0xE5, 0xE7, 0xE9, 0xE8, 0xEA, 0xEB, 0xED, 0xEC, 0xEE, 0xEF, 0xF1, 0xF3, 0xF2, 0xF4, 0xF6, 0xF5, 0xFA, 0xF9, 0xFB, 0xFC, 0x2020, 0xB0, 0xA2, 0xA3, 0xA7, 0x2022, 0xB6, 0xDF, 0xAE, 0x160, 0x2122, 0xB4, 0xA8, 0x2260, 0x17D, 0xD8, 0x221E, 0xB1, 0x2264, 0x2265, 0x2206, 0xB5, 0x2202, 0x2211, 0x220F, 0x161, 0x222B, 0xAA, 0xBA, 0x2126, 0x17E, 0xF8, 0xBF, 0xA1, 0xAC, 0x221A, 0x192, 0x2248, 0x106, 0xAB, 0x10C, 0x2026, 0xA0, 0xC0, 0xC3, 0xD5, 0x152, 0x153, 0x110, 0x2014, 0x201C, 0x201D, 0x2018, 0x2019, 0xF7, 0x25CA, 0xF8FF, 0xA9, 0x2044, 0xA4, 0x2039, 0x203A, 0xC6, 0xBB, 0x2013, 0xB7, 0x201A, 0x201E, 0x2030, 0xC2, 0x107, 0xC1, 0x10D, 0xC8, 0xCD, 0xCE, 0xCF, 0xCC, 0xD3, 0xD4, 0x111, 0xD2, 0xDA, 0xDB, 0xD9, 0x131, 0x2C6, 0x2DC, 0xAF, 0x3C0, 0xCB, 0x2DA, 0xB8, 0xCA, 0xE6, 0x2C7, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MacCroatian$Holder::b2c, $nc(MacCroatian$Holder::b2cTable)->toCharArray());
	$assignStatic(MacCroatian$Holder::c2b, $new($chars, 2304));
	$assignStatic(MacCroatian$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MacCroatian$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MacCroatian$Holder::c2b, MacCroatian$Holder::c2bIndex);
	}
}

MacCroatian$Holder::MacCroatian$Holder() {
}

$Class* MacCroatian$Holder::load$($String* name, bool initialize) {
	$loadClass(MacCroatian$Holder, name, initialize, &_MacCroatian$Holder_ClassInfo_, clinit$MacCroatian$Holder, allocate$MacCroatian$Holder);
	return class$;
}

$Class* MacCroatian$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun