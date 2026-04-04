#include <sun/nio/cs/ext/IBM838$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM838.h>
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

$String* IBM838$Holder::b2cTable = nullptr;
$chars* IBM838$Holder::b2c = nullptr;
$chars* IBM838$Holder::c2b = nullptr;
$chars* IBM838$Holder::c2bIndex = nullptr;

void IBM838$Holder::init$() {
}

void IBM838$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM838$Holder::b2cTable, $cstr({0x0e4f, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0x0e1d, 0x0e1e, 0x0e1f, 0x0e20, 0x0e21, 0x0e22, 0x0e5a, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0x0e23, 0x0e24, 0x0e25, 0x0e26, 0x0e27, 0x0e28, 0x0e5b, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0x0e29, 0x0e2a, 0x0e2b, 0x0e2c, 0x0e2d, 0x0e2e, 0x0e50, 0x0e51, 0x0e52, 0x0e53, 0x0e54, 0x0e55, 0x0e56, 0x0e57, 0x0e58, 0x0e59, 0x0e2f, 0x0e30, 0x0e31, 0x0e32, 0x0e33, 0x0e34, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0x0e49, 0x0e35, 0x0e36, 0x0e37, 0x0e38, 0x0e39, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0x0e3a, 0x0e40, 0x0e41, 0x0e42, 0x0e43, 0x0e44, '\\', 0x0e4a, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0x0e45, 0x0e46, 0x0e47, 0x0e48, 0x0e49, 0x0e4a, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0x0e4b, 0x0e4c, 0x0e4d, 0x0e4b, 0x0e4c, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0xa0, 0x0e01, 0x0e02, 0x0e03, 0x0e04, 0x0e05, 0x0e06, 0x0e07, '[', 0xa2, '.', '<', '(', '+', '|', '&', 0x0e48, 0x0e08, 0x0e09, 0x0e0a, 0x0e0b, 0x0e0c, 0x0e0d, 0x0e0e, ']', '!', '$', '*', ')', ';', 0xac, '-', '/', 0x0e0f, 0x0e10, 0x0e11, 0x0e12, 0x0e13, 0x0e14, 0x0e15, '^', 0xa6, ',', '%', '_', '>', '?', 0x0e3f, 0x0e4e, 0x0e16, 0x0e17, 0x0e18, 0x0e19, 0x0e1a, 0x0e1b, 0x0e1c, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM838$Holder::b2c, IBM838$Holder::b2cTable->toCharArray());
	$assignStatic(IBM838$Holder::c2b, $new($chars, 512));
	$assignStatic(IBM838$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM838$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, IBM838$Holder::b2cTable->toCharArray());
		b2cMap->set(165, (char16_t)0xfffd);
		b2cMap->set(209, (char16_t)0xfffd);
		b2cMap->set(74, (char16_t)0xfffd);
		b2cMap->set(97, (char16_t)0xfffd);
		b2cMap->set(125, (char16_t)0xfffd);
		b2cMap->set(126, (char16_t)0xfffd);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, 21);
		c2bNR->set(1, 133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM838$Holder::c2b, IBM838$Holder::c2bIndex);
	}
}

IBM838$Holder::IBM838$Holder() {
}

$Class* IBM838$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM838$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM838$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM838$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM838$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM838$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM838$Holder", "sun.nio.cs.ext.IBM838", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM838$Holder",
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
		"sun.nio.cs.ext.IBM838"
	};
	$loadClass(IBM838$Holder, name, initialize, &classInfo$$, IBM838$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM838$Holder);
	});
	return class$;
}

$Class* IBM838$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun