#include <sun/nio/cs/ext/IBM1124$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1124.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM1124 = ::sun::nio::cs::ext::IBM1124;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM1124$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1124$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1124$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1124$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1124$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM1124$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM1124$Holder::*)()>(&IBM1124$Holder::init$))},
	{}
};

$InnerClassInfo _IBM1124$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1124$Holder", "sun.nio.cs.ext.IBM1124", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1124$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM1124$Holder",
	"java.lang.Object",
	nullptr,
	_IBM1124$Holder_FieldInfo_,
	_IBM1124$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1124$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1124"
};

$Object* allocate$IBM1124$Holder($Class* clazz) {
	return $of($alloc(IBM1124$Holder));
}

$String* IBM1124$Holder::b2cTable = nullptr;
$chars* IBM1124$Holder::b2c = nullptr;
$chars* IBM1124$Holder::c2b = nullptr;
$chars* IBM1124$Holder::c2bIndex = nullptr;

void IBM1124$Holder::init$() {
}

void clinit$IBM1124$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM1124$Holder::b2cTable, $cstr({0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0x401, 0x402, 0x490, 0x404, 0x405, 0x406, 0x407, 0x408, 0x409, 0x40A, 0x40B, 0x40C, 0xAD, 0x40E, 0x40F, 0x410, 0x411, 0x412, 0x413, 0x414, 0x415, 0x416, 0x417, 0x418, 0x419, 0x41A, 0x41B, 0x41C, 0x41D, 0x41E, 0x41F, 0x420, 0x421, 0x422, 0x423, 0x424, 0x425, 0x426, 0x427, 0x428, 0x429, 0x42A, 0x42B, 0x42C, 0x42D, 0x42E, 0x42F, 0x430, 0x431, 0x432, 0x433, 0x434, 0x435, 0x436, 0x437, 0x438, 0x439, 0x43A, 0x43B, 0x43C, 0x43D, 0x43E, 0x43F, 0x440, 0x441, 0x442, 0x443, 0x444, 0x445, 0x446, 0x447, 0x448, 0x449, 0x44A, 0x44B, 0x44C, 0x44D, 0x44E, 0x44F, 0x2116, 0x451, 0x452, 0x491, 0x454, 0x455, 0x456, 0x457, 0x458, 0x459, 0x45A, 0x45B, 0x45C, 0xA7, 0x45E, 0x45F, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM1124$Holder::b2c, $nc(IBM1124$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM1124$Holder::c2b, $new($chars, 768));
	$assignStatic(IBM1124$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1124$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1124$Holder::c2b, IBM1124$Holder::c2bIndex);
	}
}

IBM1124$Holder::IBM1124$Holder() {
}

$Class* IBM1124$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM1124$Holder, name, initialize, &_IBM1124$Holder_ClassInfo_, clinit$IBM1124$Holder, allocate$IBM1124$Holder);
	return class$;
}

$Class* IBM1124$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun