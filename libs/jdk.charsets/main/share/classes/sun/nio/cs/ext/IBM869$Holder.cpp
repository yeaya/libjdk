#include <sun/nio/cs/ext/IBM869$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM869.h>
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

$String* IBM869$Holder::b2cTable = nullptr;
$chars* IBM869$Holder::b2c = nullptr;
$chars* IBM869$Holder::c2b = nullptr;
$chars* IBM869$Holder::c2bIndex = nullptr;

void IBM869$Holder::init$() {
}

void IBM869$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM869$Holder::b2cTable, $cstr({0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0x0386, 0xfffd, 0xb7, 0xac, 0xa6, 0x2018, 0x2019, 0x0388, 0x2015, 0x0389, 0x038a, 0x03aa, 0x038c, 0xfffd, 0xfffd, 0x038e, 0x03ab, 0xa9, 0x038f, 0xb2, 0xb3, 0x03ac, 0xa3, 0x03ad, 0x03ae, 0x03af, 0x03ca, 0x0390, 0x03cc, 0x03cd, 0x0391, 0x0392, 0x0393, 0x0394, 0x0395, 0x0396, 0x0397, 0xbd, 0x0398, 0x0399, 0xab, 0xbb, 0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x039a, 0x039b, 0x039c, 0x039d, 0x2563, 0x2551, 0x2557, 0x255d, 0x039e, 0x039f, 0x2510, 0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x03a0, 0x03a1, 0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x03a3, 0x03a4, 0x03a5, 0x03a6, 0x03a7, 0x03a8, 0x03a9, 0x03b1, 0x03b2, 0x03b3, 0x2518, 0x250c, 0x2588, 0x2584, 0x03b4, 0x03b5, 0x2580, 0x03b6, 0x03b7, 0x03b8, 0x03b9, 0x03ba, 0x03bb, 0x03bc, 0x03bd, 0x03be, 0x03bf, 0x03c0, 0x03c1, 0x03c3, 0x03c2, 0x03c4, 0x0384, 0xad, 0xb1, 0x03c5, 0x03c6, 0x03c7, 0xa7, 0x03c8, 0x0385, 0xb0, 0xa8, 0x03c9, 0x03cb, 0x03b0, 0x03ce, 0x25a0, 0xa0, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(IBM869$Holder::b2c, IBM869$Holder::b2cTable->toCharArray());
	$assignStatic(IBM869$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM869$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM869$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM869$Holder::c2b, IBM869$Holder::c2bIndex);
	}
}

IBM869$Holder::IBM869$Holder() {
}

$Class* IBM869$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM869$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM869$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM869$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM869$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM869$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM869$Holder", "sun.nio.cs.ext.IBM869", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM869$Holder",
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
		"sun.nio.cs.ext.IBM869"
	};
	$loadClass(IBM869$Holder, name, initialize, &classInfo$$, IBM869$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM869$Holder);
	});
	return class$;
}

$Class* IBM869$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun