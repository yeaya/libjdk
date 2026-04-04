#include <sun/nio/cs/ext/IBM875$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM875.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$String* IBM875$Holder::b2cTable = nullptr;
$chars* IBM875$Holder::b2c = nullptr;
$chars* IBM875$Holder::c2b = nullptr;
$chars* IBM875$Holder::c2bIndex = nullptr;

void IBM875$Holder::init$() {
}

void IBM875$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM875$Holder::b2cTable, $cstr({0x0385, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0x03b1, 0x03b2, 0x03b3, 0x03b4, 0x03b5, 0x03b6, 0xb0, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0x03b7, 0x03b8, 0x03b9, 0x03ba, 0x03bb, 0x03bc, 0xb4, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0x03bd, 0x03be, 0x03bf, 0x03c0, 0x03c1, 0x03c3, 0xa3, 0x03ac, 0x03ad, 0x03ae, 0x03ca, 0x03af, 0x03cc, 0x03cd, 0x03cb, 0x03ce, 0x03c2, 0x03c4, 0x03c5, 0x03c6, 0x03c7, 0x03c8, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xad, 0x03c9, 0x0390, 0x03b0, 0x2018, 0x2015, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xb1, 0xbd, 0xfffd, 0x0387, 0x2019, 0xa6, '\\', 0xfffd, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xb2, 0xa7, 0xfffd, 0xfffd, 0xab, 0xac, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xb3, 0xa9, 0xfffd, 0xfffd, 0xbb, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0x0391, 0x0392, 0x0393, 0x0394, 0x0395, 0x0396, 0x0397, 0x0398, 0x0399, '[', '.', '<', '(', '+', '!', '&', 0x039a, 0x039b, 0x039c, 0x039d, 0x039e, 0x039f, 0x03a0, 0x03a1, 0x03a3, ']', '$', '*', ')', ';', '^', '-', '/', 0x03a4, 0x03a5, 0x03a6, 0x03a7, 0x03a8, 0x03a9, 0x03aa, 0x03ab, '|', ',', '%', '_', '>', '?', 0xa8, 0x0386, 0x0388, 0x0389, 0xa0, 0x038a, 0x038c, 0x038e, 0x038f, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM875$Holder::b2c, IBM875$Holder::b2cTable->toCharArray());
	$assignStatic(IBM875$Holder::c2b, $new($chars, 1024));
	$assignStatic(IBM875$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM875$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, IBM875$Holder::b2cTable->toCharArray());
		b2cMap->set(165, (char16_t)0xfffd);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, 21);
		c2bNR->set(1, 133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM875$Holder::c2b, IBM875$Holder::c2bIndex);
	}
}

IBM875$Holder::IBM875$Holder() {
}

$Class* IBM875$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM875$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM875$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM875$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM875$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM875$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM875$Holder", "sun.nio.cs.ext.IBM875", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM875$Holder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.IBM875"
	};
	$loadClass(IBM875$Holder, name, initialize, &classInfo$$, IBM875$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM875$Holder);
	});
	return class$;
}

$Class* IBM875$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun