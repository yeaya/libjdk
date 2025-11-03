#include <sun/nio/cs/ext/IBM424$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM424.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM424 = ::sun::nio::cs::ext::IBM424;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM424$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM424$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM424$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM424$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM424$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM424$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM424$Holder::*)()>(&IBM424$Holder::init$))},
	{}
};

$InnerClassInfo _IBM424$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM424$Holder", "sun.nio.cs.ext.IBM424", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM424$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM424$Holder",
	"java.lang.Object",
	nullptr,
	_IBM424$Holder_FieldInfo_,
	_IBM424$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM424$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM424"
};

$Object* allocate$IBM424$Holder($Class* clazz) {
	return $of($alloc(IBM424$Holder));
}

$String* IBM424$Holder::b2cTable = nullptr;
$chars* IBM424$Holder::b2c = nullptr;
$chars* IBM424$Holder::c2b = nullptr;
$chars* IBM424$Holder::c2bIndex = nullptr;

void IBM424$Holder::init$() {
}

void clinit$IBM424$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM424$Holder::b2cTable, $cstr({0xFFFD, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xAB, 0xBB, 0xFFFD, 0xFFFD, 0xFFFD, 0xB1, 0xB0, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0xFFFD, 0xFFFD, 0xFFFD, 0xB8, 0xFFFD, 0xA4, 0xB5, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xAE, '^', 0xA3, 0xA5, 0x2022, 0xA9, 0xA7, 0xB6, 0xBC, 0xBD, 0xBE, '[', ']', 0x203E, 0xA8, 0xB4, 0xD7, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xAD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xB9, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, '\\', 0xF7, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xB2, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xB3, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFD, 0x9F, '\0', 0x1, 0x2, 0x3, 0x9C, '\t', 0x86, 0x7F, 0x97, 0x8D, 0x8E, 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x9D, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8F, 0x1C, 0x1D, 0x1E, 0x1F, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1B, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x5, 0x6, 0x7, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x4, 0x98, 0x99, 0x9A, 0x9B, 0x14, 0x15, 0x9E, 0x1A, ' ', 0x5D0, 0x5D1, 0x5D2, 0x5D3, 0x5D4, 0x5D5, 0x5D6, 0x5D7, 0x5D8, 0xA2, '.', '<', '(', '+', '|', '&', 0x5D9, 0x5DA, 0x5DB, 0x5DC, 0x5DD, 0x5DE, 0x5DF, 0x5E0, 0x5E1, '!', '$', '*', ')', ';', 0xAC, '-', '/', 0x5E2, 0x5E3, 0x5E4, 0x5E5, 0x5E6, 0x5E7, 0x5E8, 0x5E9, 0xA6, ',', '%', '_', '>', '?', 0xFFFD, 0x5EA, 0xFFFD, 0xFFFD, 0xA0, 0xFFFD, 0xFFFD, 0xFFFD, 0x2017, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM424$Holder::b2c, $nc(IBM424$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM424$Holder::c2b, $new($chars, 1024));
	$assignStatic(IBM424$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM424$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, $nc(IBM424$Holder::b2cTable)->toCharArray());
		b2cMap->set(165, (char16_t)0xFFFD);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, (char16_t)21);
		c2bNR->set(1, (char16_t)133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM424$Holder::c2b, IBM424$Holder::c2bIndex);
	}
}

IBM424$Holder::IBM424$Holder() {
}

$Class* IBM424$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM424$Holder, name, initialize, &_IBM424$Holder_ClassInfo_, clinit$IBM424$Holder, allocate$IBM424$Holder);
	return class$;
}

$Class* IBM424$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun