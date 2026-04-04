#include <sun/nio/cs/ext/IBM278$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM278.h>
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

$String* IBM278$Holder::b2cTable = nullptr;
$chars* IBM278$Holder::b2c = nullptr;
$chars* IBM278$Holder::c2b = nullptr;
$chars* IBM278$Holder::c2bIndex = nullptr;

void IBM278$Holder::init$() {
}

void IBM278$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM278$Holder::b2cTable, $cstr({0xd8, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xab, 0xbb, 0xf0, 0xfd, 0xfe, 0xb1, 0xb0, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0xaa, 0xba, 0xe6, 0xb8, 0xc6, ']', 0xb5, 0xfc, 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xa1, 0xbf, 0xd0, 0xdd, 0xde, 0xae, 0xa2, 0xa3, 0xa5, 0xb7, 0xa9, '[', 0xb6, 0xbc, 0xbd, 0xbe, 0xac, '|', 0xaf, 0xa8, 0xb4, 0xd7, 0xe4, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xad, 0xf4, 0xa6, 0xf2, 0xf3, 0xf5, 0xe5, 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xb9, 0xfb, '~', 0xf9, 0xfa, 0xff, 0xc9, 0xf7, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xb2, 0xd4, '@', 0xd2, 0xd3, 0xd5, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xb3, 0xdb, 0xdc, 0xd9, 0xda, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0xa0, 0xe2, '{', 0xe0, 0xe1, 0xe3, '}', 0xe7, 0xf1, 0xa7, '.', '<', '(', '+', '!', '&', '`', 0xea, 0xeb, 0xe8, 0xed, 0xee, 0xef, 0xec, 0xdf, 0xa4, 0xc5, '*', ')', ';', '^', '-', '/', 0xc2, '#', 0xc0, 0xc1, 0xc3, '$', 0xc7, 0xd1, 0xf6, ',', '%', '_', '>', '?', 0xf8, '\\', 0xca, 0xcb, 0xc8, 0xcd, 0xce, 0xcf, 0xcc, 0xe9, ':', 0xc4, 0xd6, '\'', '=', '\"'}));
	$assignStatic(IBM278$Holder::b2c, IBM278$Holder::b2cTable->toCharArray());
	$assignStatic(IBM278$Holder::c2b, $new($chars, 256));
	$assignStatic(IBM278$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM278$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, IBM278$Holder::b2cTable->toCharArray());
		b2cMap->set(165, (char16_t)0xfffd);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, 21);
		c2bNR->set(1, 133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM278$Holder::c2b, IBM278$Holder::c2bIndex);
	}
}

IBM278$Holder::IBM278$Holder() {
}

$Class* IBM278$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM278$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM278$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM278$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM278$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM278$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM278$Holder", "sun.nio.cs.ext.IBM278", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM278$Holder",
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
		"sun.nio.cs.ext.IBM278"
	};
	$loadClass(IBM278$Holder, name, initialize, &classInfo$$, IBM278$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM278$Holder);
	});
	return class$;
}

$Class* IBM278$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun