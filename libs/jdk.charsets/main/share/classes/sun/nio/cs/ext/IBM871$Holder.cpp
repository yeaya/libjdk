#include <sun/nio/cs/ext/IBM871$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM871.h>
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

$String* IBM871$Holder::b2cTable = nullptr;
$chars* IBM871$Holder::b2c = nullptr;
$chars* IBM871$Holder::c2b = nullptr;
$chars* IBM871$Holder::c2bIndex = nullptr;

void IBM871$Holder::init$() {
}

void IBM871$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM871$Holder::b2cTable, $cstr({0xd8, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xab, 0xbb, '`', 0xfd, '{', 0xb1, 0xb0, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0xaa, 0xba, '}', 0xb8, ']', 0xa4, 0xb5, 0xf6, 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xa1, 0xbf, '@', 0xdd, '[', 0xae, 0xa2, 0xa3, 0xa5, 0xb7, 0xa9, 0xa7, 0xb6, 0xbc, 0xbd, 0xbe, 0xac, '|', 0xaf, 0xa8, '\\', 0xd7, 0xfe, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xad, 0xf4, '~', 0xf2, 0xf3, 0xf5, 0xe6, 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xb9, 0xfb, 0xfc, 0xf9, 0xfa, 0xff, 0xb4, 0xf7, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xb2, 0xd4, '^', 0xd2, 0xd3, 0xd5, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xb3, 0xdb, 0xdc, 0xd9, 0xda, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0xa0, 0xe2, 0xe4, 0xe0, 0xe1, 0xe3, 0xe5, 0xe7, 0xf1, 0xde, '.', '<', '(', '+', '!', '&', 0xe9, 0xea, 0xeb, 0xe8, 0xed, 0xee, 0xef, 0xec, 0xdf, 0xc6, '$', '*', ')', ';', 0xd6, '-', '/', 0xc2, 0xc4, 0xc0, 0xc1, 0xc3, 0xc5, 0xc7, 0xd1, 0xa6, ',', '%', '_', '>', '?', 0xf8, 0xc9, 0xca, 0xcb, 0xc8, 0xcd, 0xce, 0xcf, 0xcc, 0xf0, ':', '#', 0xd0, '\'', '=', '\"'}));
	$assignStatic(IBM871$Holder::b2c, IBM871$Holder::b2cTable->toCharArray());
	$assignStatic(IBM871$Holder::c2b, $new($chars, 256));
	$assignStatic(IBM871$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM871$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, IBM871$Holder::b2cTable->toCharArray());
		b2cMap->set(165, (char16_t)0xfffd);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, 21);
		c2bNR->set(1, 133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM871$Holder::c2b, IBM871$Holder::c2bIndex);
	}
}

IBM871$Holder::IBM871$Holder() {
}

$Class* IBM871$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM871$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM871$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM871$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM871$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM871$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM871$Holder", "sun.nio.cs.ext.IBM871", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM871$Holder",
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
		"sun.nio.cs.ext.IBM871"
	};
	$loadClass(IBM871$Holder, name, initialize, &classInfo$$, IBM871$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM871$Holder);
	});
	return class$;
}

$Class* IBM871$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun