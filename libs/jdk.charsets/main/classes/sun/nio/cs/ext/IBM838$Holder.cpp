#include <sun/nio/cs/ext/IBM838$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM838.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM838 = ::sun::nio::cs::ext::IBM838;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM838$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM838$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM838$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM838$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM838$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM838$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM838$Holder::*)()>(&IBM838$Holder::init$))},
	{}
};

$InnerClassInfo _IBM838$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM838$Holder", "sun.nio.cs.ext.IBM838", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM838$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM838$Holder",
	"java.lang.Object",
	nullptr,
	_IBM838$Holder_FieldInfo_,
	_IBM838$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM838$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM838"
};

$Object* allocate$IBM838$Holder($Class* clazz) {
	return $of($alloc(IBM838$Holder));
}

$String* IBM838$Holder::b2cTable = nullptr;
$chars* IBM838$Holder::b2c = nullptr;
$chars* IBM838$Holder::c2b = nullptr;
$chars* IBM838$Holder::c2bIndex = nullptr;

void IBM838$Holder::init$() {
}

void clinit$IBM838$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM838$Holder::b2cTable, $cstr({0xE4F, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xE1D, 0xE1E, 0xE1F, 0xE20, 0xE21, 0xE22, 0xE5A, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0xE23, 0xE24, 0xE25, 0xE26, 0xE27, 0xE28, 0xE5B, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xE29, 0xE2A, 0xE2B, 0xE2C, 0xE2D, 0xE2E, 0xE50, 0xE51, 0xE52, 0xE53, 0xE54, 0xE55, 0xE56, 0xE57, 0xE58, 0xE59, 0xE2F, 0xE30, 0xE31, 0xE32, 0xE33, 0xE34, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xE49, 0xE35, 0xE36, 0xE37, 0xE38, 0xE39, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xE3A, 0xE40, 0xE41, 0xE42, 0xE43, 0xE44, '\\', 0xE4A, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xE45, 0xE46, 0xE47, 0xE48, 0xE49, 0xE4A, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xE4B, 0xE4C, 0xE4D, 0xE4B, 0xE4C, 0x9F, '\0', 0x1, 0x2, 0x3, 0x9C, '\t', 0x86, 0x7F, 0x97, 0x8D, 0x8E, 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x9D, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8F, 0x1C, 0x1D, 0x1E, 0x1F, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1B, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x5, 0x6, 0x7, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x4, 0x98, 0x99, 0x9A, 0x9B, 0x14, 0x15, 0x9E, 0x1A, ' ', 0xA0, 0xE01, 0xE02, 0xE03, 0xE04, 0xE05, 0xE06, 0xE07, '[', 0xA2, '.', '<', '(', '+', '|', '&', 0xE48, 0xE08, 0xE09, 0xE0A, 0xE0B, 0xE0C, 0xE0D, 0xE0E, ']', '!', '$', '*', ')', ';', 0xAC, '-', '/', 0xE0F, 0xE10, 0xE11, 0xE12, 0xE13, 0xE14, 0xE15, '^', 0xA6, ',', '%', '_', '>', '?', 0xE3F, 0xE4E, 0xE16, 0xE17, 0xE18, 0xE19, 0xE1A, 0xE1B, 0xE1C, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM838$Holder::b2c, $nc(IBM838$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM838$Holder::c2b, $new($chars, 512));
	$assignStatic(IBM838$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM838$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, $nc(IBM838$Holder::b2cTable)->toCharArray());
		b2cMap->set(165, (char16_t)0xFFFD);
		b2cMap->set(209, (char16_t)0xFFFD);
		b2cMap->set(74, (char16_t)0xFFFD);
		b2cMap->set(97, (char16_t)0xFFFD);
		b2cMap->set(125, (char16_t)0xFFFD);
		b2cMap->set(126, (char16_t)0xFFFD);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, (char16_t)21);
		c2bNR->set(1, (char16_t)133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM838$Holder::c2b, IBM838$Holder::c2bIndex);
	}
}

IBM838$Holder::IBM838$Holder() {
}

$Class* IBM838$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM838$Holder, name, initialize, &_IBM838$Holder_ClassInfo_, clinit$IBM838$Holder, allocate$IBM838$Holder);
	return class$;
}

$Class* IBM838$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun