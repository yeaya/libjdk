#include <sun/nio/cs/ext/IBM870$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM870.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM870 = ::sun::nio::cs::ext::IBM870;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM870$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM870$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM870$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM870$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM870$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM870$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM870$Holder::*)()>(&IBM870$Holder::init$))},
	{}
};

$InnerClassInfo _IBM870$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM870$Holder", "sun.nio.cs.ext.IBM870", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM870$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM870$Holder",
	"java.lang.Object",
	nullptr,
	_IBM870$Holder_FieldInfo_,
	_IBM870$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM870$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM870"
};

$Object* allocate$IBM870$Holder($Class* clazz) {
	return $of($alloc(IBM870$Holder));
}

$String* IBM870$Holder::b2cTable = nullptr;
$chars* IBM870$Holder::b2c = nullptr;
$chars* IBM870$Holder::c2b = nullptr;
$chars* IBM870$Holder::c2bIndex = nullptr;

void IBM870$Holder::init$() {
}

void clinit$IBM870$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM870$Holder::b2cTable, $cstr({0x2D8, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0x15B, 0x148, 0x111, 0xFD, 0x159, 0x15F, 0xB0, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0x142, 0x144, 0x161, 0xB8, 0x2DB, 0xA4, 0x105, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0x15A, 0x147, 0x110, 0xDD, 0x158, 0x15E, 0x2D9, 0x104, 0x17C, 0x162, 0x17B, 0xA7, 0x17E, 0x17A, 0x17D, 0x179, 0x141, 0x143, 0x160, 0xA8, 0xB4, 0xD7, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xAD, 0xF4, 0xF6, 0x155, 0xF3, 0x151, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0x11A, 0x171, 0xFC, 0x165, 0xFA, 0x11B, '\\', 0xF7, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0x10F, 0xD4, 0xD6, 0x154, 0xD3, 0x150, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0x10E, 0x170, 0xDC, 0x164, 0xDA, 0x9F, '\0', 0x1, 0x2, 0x3, 0x9C, '\t', 0x86, 0x7F, 0x97, 0x8D, 0x8E, 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x9D, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8F, 0x1C, 0x1D, 0x1E, 0x1F, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1B, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x5, 0x6, 0x7, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x4, 0x98, 0x99, 0x9A, 0x9B, 0x14, 0x15, 0x9E, 0x1A, ' ', 0xA0, 0xE2, 0xE4, 0x163, 0xE1, 0x103, 0x10D, 0xE7, 0x107, '[', '.', '<', '(', '+', '!', '&', 0xE9, 0x119, 0xEB, 0x16F, 0xED, 0xEE, 0x13E, 0x13A, 0xDF, ']', '$', '*', ')', ';', '^', '-', '/', 0xC2, 0xC4, 0x2DD, 0xC1, 0x102, 0x10C, 0xC7, 0x106, '|', ',', '%', '_', '>', '?', 0x2C7, 0xC9, 0x118, 0xCB, 0x16E, 0xCD, 0xCE, 0x13D, 0x139, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM870$Holder::b2c, $nc(IBM870$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM870$Holder::c2b, $new($chars, 768));
	$assignStatic(IBM870$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM870$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, $nc(IBM870$Holder::b2cTable)->toCharArray());
		b2cMap->set(165, (char16_t)0xFFFD);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, (char16_t)21);
		c2bNR->set(1, (char16_t)133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM870$Holder::c2b, IBM870$Holder::c2bIndex);
	}
}

IBM870$Holder::IBM870$Holder() {
}

$Class* IBM870$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM870$Holder, name, initialize, &_IBM870$Holder_ClassInfo_, clinit$IBM870$Holder, allocate$IBM870$Holder);
	return class$;
}

$Class* IBM870$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun