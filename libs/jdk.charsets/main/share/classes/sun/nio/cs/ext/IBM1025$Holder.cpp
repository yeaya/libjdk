#include <sun/nio/cs/ext/IBM1025$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1025.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM1025 = ::sun::nio::cs::ext::IBM1025;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM1025$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1025$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1025$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1025$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1025$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM1025$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM1025$Holder::*)()>(&IBM1025$Holder::init$))},
	{}
};

$InnerClassInfo _IBM1025$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1025$Holder", "sun.nio.cs.ext.IBM1025", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1025$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM1025$Holder",
	"java.lang.Object",
	nullptr,
	_IBM1025$Holder_FieldInfo_,
	_IBM1025$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1025$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1025"
};

$Object* allocate$IBM1025$Holder($Class* clazz) {
	return $of($alloc(IBM1025$Holder));
}

$String* IBM1025$Holder::b2cTable = nullptr;
$chars* IBM1025$Holder::b2c = nullptr;
$chars* IBM1025$Holder::c2b = nullptr;
$chars* IBM1025$Holder::c2bIndex = nullptr;

void IBM1025$Holder::init$() {
}

void clinit$IBM1025$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM1025$Holder::b2cTable, $cstr({0x446, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0x434, 0x435, 0x444, 0x433, 0x445, 0x438, 0x439, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0x43A, 0x43B, 0x43C, 0x43D, 0x43E, 0x43F, 0x44F, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0x440, 0x441, 0x442, 0x443, 0x436, 0x432, 0x44C, 0x44B, 0x437, 0x448, 0x44D, 0x449, 0x447, 0x44A, 0x42E, 0x410, 0x411, 0x426, 0x414, 0x415, 0x424, 0x413, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0x425, 0x418, 0x419, 0x41A, 0x41B, 0x41C, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0x41D, 0x41E, 0x41F, 0x42F, 0x420, 0x421, '\\', 0xA7, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0x422, 0x423, 0x416, 0x412, 0x42C, 0x42B, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0x417, 0x428, 0x42D, 0x429, 0x427, 0x9F, '\0', 0x1, 0x2, 0x3, 0x9C, '\t', 0x86, 0x7F, 0x97, 0x8D, 0x8E, 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x9D, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8F, 0x1C, 0x1D, 0x1E, 0x1F, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1B, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x5, 0x6, 0x7, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x4, 0x98, 0x99, 0x9A, 0x9B, 0x14, 0x15, 0x9E, 0x1A, ' ', 0xA0, 0x452, 0x453, 0x451, 0x454, 0x455, 0x456, 0x457, 0x458, '[', '.', '<', '(', '+', '!', '&', 0x459, 0x45A, 0x45B, 0x45C, 0x45E, 0x45F, 0x42A, 0x2116, 0x402, ']', '$', '*', ')', ';', '^', '-', '/', 0x403, 0x401, 0x404, 0x405, 0x406, 0x407, 0x408, 0x409, '|', ',', '%', '_', '>', '?', 0x40A, 0x40B, 0x40C, 0xAD, 0x40E, 0x40F, 0x44E, 0x430, 0x431, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM1025$Holder::b2c, $nc(IBM1025$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM1025$Holder::c2b, $new($chars, 768));
	$assignStatic(IBM1025$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1025$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, $nc(IBM1025$Holder::b2cTable)->toCharArray());
		b2cMap->set(165, (char16_t)0xFFFD);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, (char16_t)21);
		c2bNR->set(1, (char16_t)133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1025$Holder::c2b, IBM1025$Holder::c2bIndex);
	}
}

IBM1025$Holder::IBM1025$Holder() {
}

$Class* IBM1025$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM1025$Holder, name, initialize, &_IBM1025$Holder_ClassInfo_, clinit$IBM1025$Holder, allocate$IBM1025$Holder);
	return class$;
}

$Class* IBM1025$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun