#include <sun/nio/cs/ext/IBM1146$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1146.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM1146 = ::sun::nio::cs::ext::IBM1146;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM1146$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1146$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1146$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1146$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1146$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM1146$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM1146$Holder::*)()>(&IBM1146$Holder::init$))},
	{}
};

$InnerClassInfo _IBM1146$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1146$Holder", "sun.nio.cs.ext.IBM1146", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1146$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM1146$Holder",
	"java.lang.Object",
	nullptr,
	_IBM1146$Holder_FieldInfo_,
	_IBM1146$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1146$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1146"
};

$Object* allocate$IBM1146$Holder($Class* clazz) {
	return $of($alloc(IBM1146$Holder));
}

$String* IBM1146$Holder::b2cTable = nullptr;
$chars* IBM1146$Holder::b2c = nullptr;
$chars* IBM1146$Holder::c2b = nullptr;
$chars* IBM1146$Holder::c2bIndex = nullptr;

void IBM1146$Holder::init$() {
}

void clinit$IBM1146$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM1146$Holder::b2cTable, $cstr({0xD8, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xAB, 0xBB, 0xF0, 0xFD, 0xFE, 0xB1, 0xB0, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0xAA, 0xBA, 0xE6, 0xB8, 0xC6, 0x20AC, 0xB5, 0xAF, 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xA1, 0xBF, 0xD0, 0xDD, 0xDE, 0xAE, 0xA2, '[', 0xA5, 0xB7, 0xA9, 0xA7, 0xB6, 0xBC, 0xBD, 0xBE, '^', ']', '~', 0xA8, 0xB4, 0xD7, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xAD, 0xF4, 0xF6, 0xF2, 0xF3, 0xF5, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xB9, 0xFB, 0xFC, 0xF9, 0xFA, 0xFF, '\\', 0xF7, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xB2, 0xD4, 0xD6, 0xD2, 0xD3, 0xD5, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xB3, 0xDB, 0xDC, 0xD9, 0xDA, 0x9F, '\0', 0x1, 0x2, 0x3, 0x9C, '\t', 0x86, 0x7F, 0x97, 0x8D, 0x8E, 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x9D, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8F, 0x1C, 0x1D, 0x1E, 0x1F, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1B, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x5, 0x6, 0x7, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x4, 0x98, 0x99, 0x9A, 0x9B, 0x14, 0x15, 0x9E, 0x1A, ' ', 0xA0, 0xE2, 0xE4, 0xE0, 0xE1, 0xE3, 0xE5, 0xE7, 0xF1, '$', '.', '<', '(', '+', '|', '&', 0xE9, 0xEA, 0xEB, 0xE8, 0xED, 0xEE, 0xEF, 0xEC, 0xDF, '!', 0xA3, '*', ')', ';', 0xAC, '-', '/', 0xC2, 0xC4, 0xC0, 0xC1, 0xC3, 0xC5, 0xC7, 0xD1, 0xA6, ',', '%', '_', '>', '?', 0xF8, 0xC9, 0xCA, 0xCB, 0xC8, 0xCD, 0xCE, 0xCF, 0xCC, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM1146$Holder::b2c, $nc(IBM1146$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM1146$Holder::c2b, $new($chars, 512));
	$assignStatic(IBM1146$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1146$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, $nc(IBM1146$Holder::b2cTable)->toCharArray());
		b2cMap->set(165, (char16_t)0xFFFD);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, (char16_t)21);
		c2bNR->set(1, (char16_t)133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1146$Holder::c2b, IBM1146$Holder::c2bIndex);
	}
}

IBM1146$Holder::IBM1146$Holder() {
}

$Class* IBM1146$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM1146$Holder, name, initialize, &_IBM1146$Holder_ClassInfo_, clinit$IBM1146$Holder, allocate$IBM1146$Holder);
	return class$;
}

$Class* IBM1146$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun