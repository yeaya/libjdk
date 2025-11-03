#include <sun/nio/cs/ext/MacCentralEurope$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacCentralEurope.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $MacCentralEurope = ::sun::nio::cs::ext::MacCentralEurope;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _MacCentralEurope$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCentralEurope$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCentralEurope$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCentralEurope$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacCentralEurope$Holder, c2bIndex)},
	{}
};

$MethodInfo _MacCentralEurope$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MacCentralEurope$Holder::*)()>(&MacCentralEurope$Holder::init$))},
	{}
};

$InnerClassInfo _MacCentralEurope$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacCentralEurope$Holder", "sun.nio.cs.ext.MacCentralEurope", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacCentralEurope$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.MacCentralEurope$Holder",
	"java.lang.Object",
	nullptr,
	_MacCentralEurope$Holder_FieldInfo_,
	_MacCentralEurope$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MacCentralEurope$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacCentralEurope"
};

$Object* allocate$MacCentralEurope$Holder($Class* clazz) {
	return $of($alloc(MacCentralEurope$Holder));
}

$String* MacCentralEurope$Holder::b2cTable = nullptr;
$chars* MacCentralEurope$Holder::b2c = nullptr;
$chars* MacCentralEurope$Holder::c2b = nullptr;
$chars* MacCentralEurope$Holder::c2bIndex = nullptr;

void MacCentralEurope$Holder::init$() {
}

void clinit$MacCentralEurope$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MacCentralEurope$Holder::b2cTable, $cstr({0xC4, 0x100, 0x101, 0xC9, 0x104, 0xD6, 0xDC, 0xE1, 0x105, 0x10C, 0xE4, 0x10D, 0x106, 0x107, 0xE9, 0x179, 0x17A, 0x10E, 0xED, 0x10F, 0x112, 0x113, 0x116, 0xF3, 0x117, 0xF4, 0xF6, 0xF5, 0xFA, 0x11A, 0x11B, 0xFC, 0x2020, 0xB0, 0x118, 0xA3, 0xA7, 0x2022, 0xB6, 0xDF, 0xAE, 0xA9, 0x2122, 0x119, 0xA8, 0x2260, 0x123, 0x12E, 0x12F, 0x12A, 0x2264, 0x2265, 0x12B, 0x136, 0x2202, 0x2211, 0x142, 0x13B, 0x13C, 0x13D, 0x13E, 0x139, 0x13A, 0x145, 0x146, 0x143, 0xAC, 0x221A, 0x144, 0x147, 0x2206, 0xAB, 0xBB, 0x2026, 0xA0, 0x148, 0x150, 0xD5, 0x151, 0x14C, 0x2013, 0x2014, 0x201C, 0x201D, 0x2018, 0x2019, 0xF7, 0x25CA, 0x14D, 0x154, 0x155, 0x158, 0x2039, 0x203A, 0x159, 0x156, 0x157, 0x160, 0x201A, 0x201E, 0x161, 0x15A, 0x15B, 0xC1, 0x164, 0x165, 0xCD, 0x17D, 0x17E, 0x16A, 0xD3, 0xD4, 0x16B, 0x16E, 0xDA, 0x16F, 0x170, 0x171, 0x172, 0x173, 0xDD, 0xFD, 0x137, 0x17B, 0x141, 0x17C, 0x122, 0x2C7, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MacCentralEurope$Holder::b2c, $nc(MacCentralEurope$Holder::b2cTable)->toCharArray());
	$assignStatic(MacCentralEurope$Holder::c2b, $new($chars, 1792));
	$assignStatic(MacCentralEurope$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MacCentralEurope$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MacCentralEurope$Holder::c2b, MacCentralEurope$Holder::c2bIndex);
	}
}

MacCentralEurope$Holder::MacCentralEurope$Holder() {
}

$Class* MacCentralEurope$Holder::load$($String* name, bool initialize) {
	$loadClass(MacCentralEurope$Holder, name, initialize, &_MacCentralEurope$Holder_ClassInfo_, clinit$MacCentralEurope$Holder, allocate$MacCentralEurope$Holder);
	return class$;
}

$Class* MacCentralEurope$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun