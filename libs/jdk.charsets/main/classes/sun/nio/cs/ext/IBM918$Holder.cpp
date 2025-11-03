#include <sun/nio/cs/ext/IBM918$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM918.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM918 = ::sun::nio::cs::ext::IBM918;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM918$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM918$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM918$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM918$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM918$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM918$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM918$Holder::*)()>(&IBM918$Holder::init$))},
	{}
};

$InnerClassInfo _IBM918$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM918$Holder", "sun.nio.cs.ext.IBM918", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM918$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM918$Holder",
	"java.lang.Object",
	nullptr,
	_IBM918$Holder_FieldInfo_,
	_IBM918$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM918$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM918"
};

$Object* allocate$IBM918$Holder($Class* clazz) {
	return $of($alloc(IBM918$Holder));
}

$String* IBM918$Holder::b2cTable = nullptr;
$chars* IBM918$Holder::b2c = nullptr;
$chars* IBM918$Holder::c2b = nullptr;
$chars* IBM918$Holder::c2bIndex = nullptr;

void IBM918$Holder::init$() {
}

void clinit$IBM918$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM918$Holder::b2cTable, $cstr({0xFEA7, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xFEA9, 0xFB88, 0xFEAB, 0xFEAD, 0xFB8C, 0xFEAF, 0xFB8A, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0xFEB1, 0xFEB3, 0xFEB5, 0xFEB7, 0xFEB9, 0xFEBB, 0xFEBD, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xFEBF, 0xFEC3, 0xFEC7, 0xFEC9, 0xFECA, 0xFECB, 0xFECC, 0xFECD, 0xFECE, 0xFECF, 0xFED0, 0xFED1, 0xFED3, 0xFED5, 0xFED7, 0xFB8E, 0xFEDB, '|', 0xFB92, 0xFB94, 0xFEDD, 0xFEDF, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xAD, 0xFEE0, 0xFEE1, 0xFEE3, 0xFB9E, 0xFEE5, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xFEE7, 0xFE85, 0xFEED, 0xFBA6, 0xFBA8, 0xFBA9, '\\', 0xFBAA, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xFE80, 0xFE89, 0xFE8A, 0xFE8B, 0xFBFC, 0xFBFD, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xFBFE, 0xFBB0, 0xFBAE, 0xFE7C, 0xFE7D, 0x9F, '\0', 0x1, 0x2, 0x3, 0x9C, '\t', 0x86, 0x7F, 0x97, 0x8D, 0x8E, 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x9D, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8F, 0x1C, 0x1D, 0x1E, 0x1F, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1B, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x5, 0x6, 0x7, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x4, 0x98, 0x99, 0x9A, 0x9B, 0x14, 0x15, 0x9E, 0x1A, ' ', 0xA0, 0x60C, 0x61B, 0x61F, 0xFE81, 0xFE8D, 0xFE8E, 0xF8FB, 0xFE8F, '[', '.', '<', '(', '+', '!', '&', 0xFE91, 0xFB56, 0xFB58, 0xFE93, 0xFE95, 0xFE97, 0xFB66, 0xFB68, 0xFE99, ']', '$', '*', ')', ';', '^', '-', '/', 0xFE9B, 0xFE9D, 0xFE9F, 0xFB7A, 0xFB7C, 0xFEA1, 0xFEA3, 0xFEA5, '`', ',', '%', '_', '>', '?', 0x6F0, 0x6F1, 0x6F2, 0x6F3, 0x6F4, 0x6F5, 0x6F6, 0x6F7, 0x6F8, 0x6F9, ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM918$Holder::b2c, $nc(IBM918$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM918$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM918$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM918$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, $nc(IBM918$Holder::b2cTable)->toCharArray());
		b2cMap->set(165, (char16_t)0xFFFD);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, (char16_t)21);
		c2bNR->set(1, (char16_t)133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM918$Holder::c2b, IBM918$Holder::c2bIndex);
	}
}

IBM918$Holder::IBM918$Holder() {
}

$Class* IBM918$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM918$Holder, name, initialize, &_IBM918$Holder_ClassInfo_, clinit$IBM918$Holder, allocate$IBM918$Holder);
	return class$;
}

$Class* IBM918$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun