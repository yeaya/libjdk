#include <sun/nio/cs/ext/MacUkraine$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/MacUkraine.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $MacUkraine = ::sun::nio::cs::ext::MacUkraine;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _MacUkraine$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacUkraine$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacUkraine$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacUkraine$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacUkraine$Holder, c2bIndex)},
	{}
};

$MethodInfo _MacUkraine$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MacUkraine$Holder::*)()>(&MacUkraine$Holder::init$))},
	{}
};

$InnerClassInfo _MacUkraine$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacUkraine$Holder", "sun.nio.cs.ext.MacUkraine", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacUkraine$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.MacUkraine$Holder",
	"java.lang.Object",
	nullptr,
	_MacUkraine$Holder_FieldInfo_,
	_MacUkraine$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MacUkraine$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacUkraine"
};

$Object* allocate$MacUkraine$Holder($Class* clazz) {
	return $of($alloc(MacUkraine$Holder));
}

$String* MacUkraine$Holder::b2cTable = nullptr;
$chars* MacUkraine$Holder::b2c = nullptr;
$chars* MacUkraine$Holder::c2b = nullptr;
$chars* MacUkraine$Holder::c2bIndex = nullptr;

void MacUkraine$Holder::init$() {
}

void clinit$MacUkraine$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MacUkraine$Holder::b2cTable, $cstr({0x410, 0x411, 0x412, 0x413, 0x414, 0x415, 0x416, 0x417, 0x418, 0x419, 0x41A, 0x41B, 0x41C, 0x41D, 0x41E, 0x41F, 0x420, 0x421, 0x422, 0x423, 0x424, 0x425, 0x426, 0x427, 0x428, 0x429, 0x42A, 0x42B, 0x42C, 0x42D, 0x42E, 0x42F, 0x2020, 0xB0, 0x490, 0xA3, 0xA7, 0x2022, 0xB6, 0x406, 0xAE, 0xA9, 0x2122, 0x402, 0x452, 0x2260, 0x403, 0x453, 0x221E, 0xB1, 0x2264, 0x2265, 0x456, 0xB5, 0x491, 0x408, 0x404, 0x454, 0x407, 0x457, 0x409, 0x459, 0x40A, 0x45A, 0x458, 0x405, 0xAC, 0x221A, 0x192, 0x2248, 0x2206, 0xAB, 0xBB, 0x2026, 0xA0, 0x40B, 0x45B, 0x40C, 0x45C, 0x455, 0x2013, 0x2014, 0x201C, 0x201D, 0x2018, 0x2019, 0xF7, 0x201E, 0x40E, 0x45E, 0x40F, 0x45F, 0x2116, 0x401, 0x451, 0x44F, 0x430, 0x431, 0x432, 0x433, 0x434, 0x435, 0x436, 0x437, 0x438, 0x439, 0x43A, 0x43B, 0x43C, 0x43D, 0x43E, 0x43F, 0x440, 0x441, 0x442, 0x443, 0x444, 0x445, 0x446, 0x447, 0x448, 0x449, 0x44A, 0x44B, 0x44C, 0x44D, 0x44E, 0xA4, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(MacUkraine$Holder::b2c, $nc(MacUkraine$Holder::b2cTable)->toCharArray());
	$assignStatic(MacUkraine$Holder::c2b, $new($chars, 1536));
	$assignStatic(MacUkraine$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, MacUkraine$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, MacUkraine$Holder::c2b, MacUkraine$Holder::c2bIndex);
	}
}

MacUkraine$Holder::MacUkraine$Holder() {
}

$Class* MacUkraine$Holder::load$($String* name, bool initialize) {
	$loadClass(MacUkraine$Holder, name, initialize, &_MacUkraine$Holder_ClassInfo_, clinit$MacUkraine$Holder, allocate$MacUkraine$Holder);
	return class$;
}

$Class* MacUkraine$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun